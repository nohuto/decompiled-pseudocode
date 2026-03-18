/*
 * XREFs of ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402CE730
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x140213990 (KeSetActualBasePriorityThread.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeResetEvent @ 0x140297C10 (KeResetEvent.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x1402CD8BC (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x1402CEB30 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140360A5C (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxWorkerThread(PVOID StartContext)
{
  PRKEVENT v1; // rbx
  KIRQL v3; // al
  __int64 v4; // r8
  _DWORD *v5; // r9
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int64 v7; // rdi
  LARGE_INTEGER *Timeout; // rax
  struct _MDL *p_Blink; // rsi
  unsigned __int64 v10; // rdi
  LIST_ENTRY *p_WaitListHead; // rcx
  LIST_ENTRY *Blink; // rdx
  LIST_ENTRY *v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rdx
  KIRQL v16; // al
  unsigned __int64 Blink_high; // rdx
  PRKEVENT v18; // rcx
  struct _LIST_ENTRY *v19; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // eax
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  int v36; // eax
  PRKEVENT v37; // [rsp+30h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v38; // [rsp+38h] [rbp-18h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-10h]
  __int64 v40; // [rsp+80h] [rbp+30h] BYREF

  v1 = *(PRKEVENT *)StartContext;
  v40 = -50000000LL;
  CurrentThread = KeGetCurrentThread();
  v3 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
  ++HIDWORD(v1[3].Header.WaitListHead.Blink);
  Flink = v1[3].Header.WaitListHead.Flink;
  v7 = v3;
  if ( (PRKEVENT)Flink->Flink != &v1[3] )
    goto LABEL_60;
  v38 = v1[3].Header.WaitListHead.Flink;
  v37 = v1 + 3;
  Flink->Flink = (struct _LIST_ENTRY *)&v37;
  v1[3].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)&v37;
  KeSetActualBasePriorityThread((__int64)CurrentThread, LODWORD(v1[5].Header.WaitListHead.Flink), v4, v5);
  ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v24 = (v23 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v23;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  KeSetEvent(*((PRKEVENT *)StartContext + 2), 0, 0);
  while ( 1 )
  {
    while ( 1 )
    {
      Timeout = (LARGE_INTEGER *)&v40;
      if ( HIDWORD(v1[3].Header.WaitListHead.Blink) <= 1 )
        Timeout = 0LL;
      if ( KeWaitForSingleObject(&v1[1], WrKernel, 0, 0, Timeout) == 258 )
        break;
      p_Blink = 0LL;
      LOBYTE(v10) = ExAcquireSpinLockExclusive(&v1->Header.Lock);
      while ( 1 )
      {
        if ( HIDWORD(v1[3].Header.WaitListHead.Blink) > LODWORD(v1[3].Header.WaitListHead.Blink) )
        {
          if ( !p_Blink )
            goto LABEL_24;
          v13 = 0LL;
        }
        else
        {
          p_WaitListHead = &v1->Header.WaitListHead;
          Blink = v1->Header.WaitListHead.Blink;
          if ( Blink == &v1->Header.WaitListHead )
          {
            v13 = 0LL;
            KeResetEvent(v1 + 1);
          }
          else
          {
            v13 = p_WaitListHead->Flink;
            p_WaitListHead->Flink = p_WaitListHead->Flink->Flink;
            if ( v13 == Blink )
            {
              v1->Header.WaitListHead.Blink = &v1->Header.WaitListHead;
              p_WaitListHead->Flink = 0LL;
            }
            else
            {
              --Blink->Flink;
            }
          }
        }
        if ( !v1[1].Header.SignalState && v1->Header.WaitListHead.Blink->Flink >= (struct _LIST_ENTRY *)3 )
          KeSetEvent(v1 + 1, 0, 0);
        ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v29 = KeGetCurrentIrql();
            if ( v29 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v29 >= 2u )
            {
              v30 = KeGetCurrentPrcb();
              v31 = v30->SchedulerAssist;
              v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
              v24 = (v32 & v31[5]) == 0;
              v14 = (unsigned int)v32 & v31[5];
              v31[5] = v14;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick(v30);
            }
          }
        }
        __writecr8((unsigned __int8)v10);
        v15 = *((_QWORD *)StartContext + 1);
        if ( !v13 )
          break;
        p_Blink = (struct _MDL *)&v13[-5].Blink;
        SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessEntry(
          (__int64)v1,
          v15,
          *((void **)StartContext + 3),
          *((void **)StartContext + 4),
          p_Blink);
        v16 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
        Blink_high = HIDWORD(v1[3].Header.WaitListHead.Blink);
        LOBYTE(v10) = v16;
        if ( LODWORD(v1[3].Header.WaitListHead.Blink) > (unsigned int)Blink_high
          && (unsigned __int64)v1->Header.WaitListHead.Blink->Flink >> 1 > Blink_high )
        {
          KeSetEvent(v1 + 2, 0, 0);
        }
      }
      LOBYTE(v14) = -1;
      SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxProcessReadyQueue(v1, v15, v14, 1LL);
    }
    v10 = ExAcquireSpinLockExclusive(&v1->Header.Lock);
    if ( HIDWORD(v1[3].Header.WaitListHead.Blink) > 1 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v24 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
    }
    __writecr8(v10);
  }
LABEL_24:
  if ( !v1[1].Header.SignalState
    && (v1->Header.WaitListHead.Blink != &v1->Header.WaitListHead || !LODWORD(v1[3].Header.WaitListHead.Blink)) )
  {
    KeSetEvent(v1 + 1, 0, 0);
  }
  v18 = v37;
  v19 = v38;
  if ( (PRKEVENT *)v37->Header.WaitListHead.Flink != &v37 || (PRKEVENT *)v38->Flink != &v37 )
LABEL_60:
    __fastfail(3u);
  v38->Flink = (struct _LIST_ENTRY *)v37;
  v18->Header.WaitListHead.Flink = v19;
  --HIDWORD(v1[3].Header.WaitListHead.Blink);
  ExReleaseSpinLockExclusiveFromDpcLevel(&v1->Header.Lock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v33 = KeGetCurrentIrql();
      if ( v33 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v33 >= 2u )
      {
        v34 = KeGetCurrentPrcb();
        v35 = v34->SchedulerAssist;
        v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v24 = (v36 & v35[5]) == 0;
        v35[5] &= v36;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v34);
      }
    }
  }
  __writecr8((unsigned __int8)v10);
  SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextDeleteThreadParams(StartContext);
}
