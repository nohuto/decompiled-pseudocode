/*
 * XREFs of KeRevertToUserMultipleGroupAffinityThread @ 0x14056B410
 * Callers:
 *     PsRevertToUserMultipleGroupAffinityThread @ 0x1405E0B20 (PsRevertToUserMultipleGroupAffinityThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiSetSystemAffinityThread @ 0x14035C1C0 (KiSetSystemAffinityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwTraceIdealProcessor @ 0x14062DAE4 (EtwTraceIdealProcessor.c)
 */

char __fastcall KeRevertToUserMultipleGroupAffinityThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  struct _KTHREAD *CurrentThread; // rbx
  int MiscFlags; // eax
  unsigned __int8 CurrentIrql; // r13
  __int64 v8; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v10; // rcx
  int v11; // eax
  _DWORD *v12; // rcx
  int v13; // eax
  _DWORD *v14; // rcx
  int v15; // eax
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  unsigned int UserIdealProcessor; // r12d
  unsigned __int16 v18; // dx
  unsigned __int16 *v19; // rsi
  char v20; // al
  char v21; // al
  _WORD *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  struct _SINGLE_LIST_ENTRY *v25; // r8
  char v26; // al
  unsigned __int16 *v27; // rsi
  unsigned int IdealProcessor; // r15d
  unsigned int v29; // esi
  _QWORD *v30; // rbx
  char v31; // si
  ULONG_PTR v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  struct _KPRCB *v36; // rbx
  _DWORD *v37; // rcx
  int v38; // eax
  _DWORD *v39; // rcx
  int v40; // eax
  __int64 NextThread; // rbx
  __int64 v42; // r8
  unsigned int v43; // r8d
  bool v44; // zf
  struct _KPRCB *v45; // rcx
  _DWORD *v46; // rdx
  struct _KPRCB *v47; // r9
  _DWORD *v48; // r8
  int v49; // eax
  int v51[6]; // [rsp+38h] [rbp-18h] BYREF
  int v52; // [rsp+98h] [rbp+48h] BYREF
  int v53; // [rsp+A0h] [rbp+50h] BYREF
  _QWORD *v54; // [rsp+A8h] [rbp+58h] BYREF

  CurrentThread = KeGetCurrentThread();
  v54 = 0LL;
  MiscFlags = CurrentThread->MiscFlags;
  if ( (MiscFlags & 8) == 0 )
    return MiscFlags;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v8 = 1LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (unsigned int)(-1LL << (CurrentIrql + 1)) & 4 | SchedulerAssist[5];
    v8 = 1LL;
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v52 = 0;
  v10 = CurrentPrcb->SchedulerAssist;
  if ( v10 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v11 = v10[6];
      v10[6] = v11 + 1;
      if ( v11 == -1 )
LABEL_9:
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    v12 = CurrentPrcb->SchedulerAssist;
    if ( v12 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v12[6] - 1;
        v12[6] = v13;
        if ( !v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v52, v8, a3, (__int64)SchedulerAssist);
    while ( CurrentThread->ThreadLock );
    v14 = CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = v14[6];
        v14[6] = v15 + 1;
        if ( v15 == -1 )
          goto LABEL_9;
      }
    }
  }
  Next = CurrentThread->SystemAffinityTokenListHead.Next;
  UserIdealProcessor = 2048;
  v18 = KeActiveProcessors[0];
  if ( Next )
    CurrentThread->SystemAffinityTokenListHead = (_SINGLE_LIST_ENTRY)Next->Next;
  v19 = *(unsigned __int16 **)(a1 + 24);
  if ( *v19 > v18
    || v19[1] < v18
    || (v20 = *(_BYTE *)(a1 + 19), (v20 & 1) == 0)
    || Next != (struct _SINGLE_LIST_ENTRY *)a1 )
  {
    KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 1uLL, 0LL, 0LL);
  }
  if ( *(_BYTE *)(a1 + 18) == 1 )
    *(_BYTE *)(a1 + 18) = v20 & 2;
  memset(v19 + 4, 0, 8LL * *v19);
  *v19 = 1;
  v21 = *(_BYTE *)(a1 + 18);
  if ( !v21 )
  {
    v25 = CurrentThread->SystemAffinityTokenListHead.Next;
    if ( v25 )
    {
      v26 = BYTE2(v25[2].Next);
      if ( v26 && v26 != 2 )
        KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 2uLL, 0LL, 0LL);
      KiCopyAffinityEx(*(_QWORD *)(a1 + 24), *(_WORD *)(*(_QWORD *)(a1 + 24) + 2LL), (unsigned __int16 *)v25[3].Next);
    }
    goto LABEL_41;
  }
  if ( v21 == 2 )
  {
    if ( (*(_BYTE *)(a1 + 19) & 2) == 0 )
      KeBugCheckEx(0x1E8u, (ULONG_PTR)CurrentThread, 3uLL, 0LL, 0LL);
    v22 = *(_WORD **)(a1 + 24);
    v23 = *(unsigned __int16 *)(a1 + 16);
    v24 = *(_QWORD *)(a1 + 8);
    if ( *v22 > (unsigned __int16)v23 )
      goto LABEL_35;
    if ( v22[1] > (unsigned __int16)v23 )
    {
      *v22 = v23 + 1;
LABEL_35:
      *(_QWORD *)&v22[4 * v23 + 4] |= v24;
    }
  }
LABEL_41:
  v27 = *(unsigned __int16 **)(a1 + 24);
  IdealProcessor = CurrentThread->IdealProcessor;
  if ( (unsigned int)KeIsEmptyAffinityEx(v27) )
  {
    KiCopyAffinityEx((__int64)v27, v27[1], &CurrentThread->UserAffinity->Count);
    CurrentThread->MiscFlags &= ~8u;
    v27 = *(unsigned __int16 **)(a1 + 24);
    UserIdealProcessor = CurrentThread->UserIdealProcessor;
  }
  KiSetSystemAffinityThread((__int64)CurrentPrcb, v27, 0LL, UserIdealProcessor, (__int64)&v54);
  v29 = CurrentThread->IdealProcessor;
  KiReleaseThreadLockSafe((__int64)CurrentThread);
  if ( (xmmword_140D06910 & 0x8000000) != 0 )
    EtwTraceIdealProcessor(CurrentThread, 1350LL, IdealProcessor, v29);
  v30 = v54;
  v31 = 0;
  if ( v54 )
  {
    v54 = (_QWORD *)*v54;
    do
    {
      KiDeferredReadySingleThread((__int64)CurrentPrcb, (ULONG_PTR)(v30 - 27), (__int64)&v54);
      v30 = v54;
      ++v31;
      if ( v54 )
        v54 = (_QWORD *)*v54;
      if ( (v31 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
    }
    while ( v30 );
  }
  LOBYTE(MiscFlags) = KiFlushSoftwareInterruptBatch(&CurrentPrcb->DeferredDispatchInterrupts.Level);
  if ( CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      LOBYTE(MiscFlags) = CurrentPrcb->DpcRoutineActive;
      if ( !(_BYTE)MiscFlags )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          v51[0] = 5;
          *(_OWORD *)&v51[1] = 0LL;
          LOBYTE(MiscFlags) = HalpInterruptSendIpi(v51, 0x2Fu);
        }
      }
    }
  }
  else
  {
    v32 = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch((__int64)CurrentPrcb->CurrentThread, 0);
      v36 = KeGetCurrentPrcb();
      v53 = 0;
      while ( 1 )
      {
        v37 = v36->SchedulerAssist;
        if ( v37 )
        {
          if ( v36->NestingLevel <= 1u )
          {
            v38 = v37[6];
            v37[6] = v38 + 1;
            if ( v38 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v36);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v39 = v36->SchedulerAssist;
        if ( v39 )
        {
          if ( v36->NestingLevel <= 1u )
          {
            v40 = v39[6] - 1;
            v39[6] = v40;
            if ( !v40 )
              KiRemoveSystemWorkPriorityKick((__int64)v36);
          }
        }
        do
          KeYieldProcessorEx(&v53, v33, v34, v35);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = (__int64)CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      LOBYTE(v35) = 1;
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, v32, 0LL, v35);
      _enable();
      CurrentPrcb->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
      {
        v42 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
        *(_DWORD *)(NextThread + 132) = v42 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(v32 + 643) = 32;
      *(_BYTE *)(v32 + 390) = CurrentIrql;
      KiQueueReadyThread(CurrentPrcb, v32, v42);
      LOBYTE(v43) = CurrentIrql;
      v44 = (unsigned __int8)KiSwapContext(v32, NextThread, v43) == 0;
    }
    else
    {
      v44 = (*(_DWORD *)(v32 + 116) & 0x40) == 0;
    }
    if ( !v44 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v45 = KeGetCurrentPrcb();
          v46 = v45->SchedulerAssist;
          v44 = (v46[5] & 0xFFFF0003) == 0;
          v46[5] &= 0xFFFF0003;
          if ( v44 )
            KiRemoveSystemWorkPriorityKick((__int64)v45);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(v32 + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v47 = KeGetCurrentPrcb();
        v48 = v47->SchedulerAssist;
        v49 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v44 = (v49 & v48[5]) == 0;
        v48[5] &= v49;
        if ( v44 )
          KiRemoveSystemWorkPriorityKick((__int64)v47);
      }
    }
    LOBYTE(MiscFlags) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return MiscFlags;
}
