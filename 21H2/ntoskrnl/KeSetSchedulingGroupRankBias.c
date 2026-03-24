/*
 * XREFs of KeSetSchedulingGroupRankBias @ 0x140288488
 * Callers:
 *     NtSetInformationJobObject @ 0x140614200 (NtSetInformationJobObject.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14022E080 (KiEndThreadCycleAccumulation.c)
 *     KiReadyDeferredReadyList @ 0x140230D60 (KiReadyDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A750 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KiCheckForEffectivePriorityChange @ 0x140288750 (KiCheckForEffectivePriorityChange.c)
 *     KiRequestSoftwareInterrupt @ 0x140293E54 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1402EB83C (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x1402EBF2C (KiResortScbQueue.c)
 *     KiAbProcessContextSwitch @ 0x140347C50 (KiAbProcessContextSwitch.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x14037E04C (KiMoveScbThreadsToNewReadylist.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406470 (KiSwapContext.c)
 */

unsigned __int8 __fastcall KeSetSchedulingGroupRankBias(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  int v4; // r13d
  __int64 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v8; // r14d
  __int64 v9; // rbp
  __int64 v10; // rbx
  struct _KPRCB *v11; // rdi
  _DWORD *v12; // rcx
  char v13; // cl
  char v14; // cl
  struct _KPRCB *v15; // rcx
  unsigned __int8 result; // al
  __int64 v17; // rdx
  ULONG_PTR CurrentThread; // rdi
  bool v19; // zf
  unsigned int v20; // eax
  char v21; // cl
  _DWORD *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  struct _KPRCB *v26; // rbx
  _DWORD *v27; // rcx
  _KTHREAD *NextThread; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // r8
  int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rax
  _QWORD **v36; // r9
  __int64 v37; // rax
  int v38; // eax
  int v39; // eax
  _DWORD *v40; // rcx
  int v41; // eax
  struct _KPRCB *v42; // rcx
  _DWORD *v43; // rdx
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  int v47; // [rsp+70h] [rbp+8h] BYREF
  int v48; // [rsp+78h] [rbp+10h] BYREF
  _QWORD *v49; // [rsp+80h] [rbp+18h] BYREF
  __int64 v50; // [rsp+88h] [rbp+20h]

  v4 = (unsigned __int8)a2;
  v49 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v50 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = 0;
  if ( KeMaximumProcessors )
  {
    while ( 1 )
    {
      v9 = KiProcessorBlock[v8];
      v10 = 424LL * v8 + a1 + 128;
      if ( v9 )
      {
        v11 = KeGetCurrentPrcb();
        v48 = 0;
        while ( 1 )
        {
          v12 = v11->SchedulerAssist;
          if ( v12 )
          {
            if ( v11->NestingLevel <= 1u )
            {
              v32 = v12[6];
              v12[6] = v32 + 1;
              if ( v32 == -1 )
                KiRemoveSystemWorkPriorityKick(v11);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 48), 0LL) )
            break;
          v22 = v11->SchedulerAssist;
          if ( v22 )
          {
            if ( v11->NestingLevel <= 1u )
            {
              v33 = v22[6] - 1;
              v22[6] = v33;
              if ( !v33 )
                KiRemoveSystemWorkPriorityKick(v11);
            }
          }
          do
            KeYieldProcessorEx(&v48, a2, a3, (__int64)SchedulerAssist);
          while ( *(_QWORD *)(v9 + 48) );
        }
      }
      v13 = *(_BYTE *)(v10 + 112);
      a3 = *(unsigned int *)(v10 + 116);
      if ( (_BYTE)v4 )
        break;
      v20 = *(unsigned __int8 *)(v10 + 112);
      v21 = v13 & 0xF7;
      *(_BYTE *)(v10 + 112) = v21;
      a3 = (unsigned int)a3 - ((v20 >> 3) & 1);
      *(_DWORD *)(v10 + 116) = a3;
      if ( (_DWORD)a3 )
      {
        if ( (v21 & 1) == 0 )
          goto LABEL_9;
        a3 = 0LL;
        goto LABEL_47;
      }
      if ( v9 )
      {
        if ( (v21 & 1) == 0 )
          goto LABEL_28;
        v34 = 424LL * v8 + a1 + 128;
        do
        {
          v35 = *(_QWORD *)(v34 + 408);
          if ( !v35 )
            break;
          v34 = *(_QWORD *)(v34 + 408);
        }
        while ( !*(_DWORD *)(v35 + 116) );
        if ( *(_DWORD *)(v34 + 116) )
        {
          v36 = 0LL;
        }
        else
        {
          v36 = &v49;
          v34 = 0LL;
        }
        KiMoveScbThreadsToNewReadylist(v10, v34, 0LL, v36);
        v37 = *(_QWORD *)(v10 + 392);
        if ( (*(_BYTE *)(v10 + 400) & 1) != 0 )
        {
          if ( v37 )
          {
            v37 ^= v10 + 392;
            goto LABEL_57;
          }
LABEL_58:
          LOBYTE(a3) = 1;
          KiRemoveSchedulingGroupQueue(v9, v10, a3);
        }
        else
        {
LABEL_57:
          if ( !v37 )
            goto LABEL_58;
        }
LABEL_28:
        *(_BYTE *)(v10 + 112) &= ~4u;
LABEL_9:
        if ( v9 )
        {
          KiCheckForEffectivePriorityChange(v9, v10);
          _InterlockedAnd64((volatile signed __int64 *)(v9 + 48), 0LL);
          v15 = KeGetCurrentPrcb();
          a2 = (__int64)v15->SchedulerAssist;
          if ( a2 )
          {
            if ( v15->NestingLevel <= 1u )
            {
              v38 = *(_DWORD *)(a2 + 24) - 1;
              *(_DWORD *)(a2 + 24) = v38;
              if ( !v38 )
                KiRemoveSystemWorkPriorityKick(v15);
            }
          }
        }
      }
      if ( ++v8 >= KeMaximumProcessors )
      {
        LOBYTE(CurrentIrql) = v50;
        goto LABEL_13;
      }
    }
    v14 = v13 | 0xC;
    *(_DWORD *)(v10 + 116) = a3 + 1;
    *(_BYTE *)(v10 + 112) = v14;
    if ( (v14 & 1) == 0 )
      goto LABEL_9;
    LOBYTE(a3) = 1;
LABEL_47:
    KiResortScbQueue(v9, v10, a3);
    goto LABEL_9;
  }
LABEL_13:
  *(_DWORD *)(a1 + 4) ^= (*(_DWORD *)(a1 + 4) ^ (4 * v4)) & 4;
  result = (unsigned __int8)KiReadyDeferredReadyList((__int64)CurrentPrcb, &v49);
  if ( (unsigned __int8)CurrentIrql >= 2u )
  {
    if ( CurrentPrcb->NextThread )
    {
      result = CurrentPrcb->DpcRoutineActive;
      if ( !result )
      {
        LOBYTE(v17) = 2;
        return KiRequestSoftwareInterrupt(CurrentPrcb, v17);
      }
    }
  }
  else
  {
    CurrentThread = (ULONG_PTR)CurrentPrcb->CurrentThread;
    if ( CurrentPrcb->NextThread )
    {
      KiAbProcessContextSwitch(CurrentPrcb->CurrentThread, 0LL);
      v26 = KeGetCurrentPrcb();
      v47 = 0;
      while ( 1 )
      {
        v27 = v26->SchedulerAssist;
        if ( v27 )
        {
          if ( v26->NestingLevel <= 1u )
          {
            v39 = v27[6];
            v27[6] = v39 + 1;
            if ( v39 == -1 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
          break;
        v40 = v26->SchedulerAssist;
        if ( v40 )
        {
          if ( v26->NestingLevel <= 1u )
          {
            v41 = v40[6] - 1;
            v40[6] = v41;
            if ( !v41 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
        do
          KeYieldProcessorEx(&v47, v23, v24, v25);
        while ( CurrentPrcb->PrcbLock );
      }
      NextThread = CurrentPrcb->NextThread;
      CurrentPrcb->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL);
      _enable();
      CurrentPrcb->CurrentThread = NextThread;
      if ( NextThread->WaitBlockFill6[68] == 1 )
      {
        v29 = NextThread->ReadyTime - NextThread->WaitBlock[2].SpareLong;
        NextThread->ReadyTime = v29 + MEMORY[0xFFFFF78000000320];
      }
      NextThread->WaitBlockFill6[68] = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread((__int64)CurrentPrcb, CurrentThread, v29, v30);
      LOBYTE(v31) = CurrentIrql;
      v19 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v31) == 0;
    }
    else
    {
      v19 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v19 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v19 = (v43[5] & 0xFFFF0003) == 0;
          v43[5] &= 0xFFFF0003;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      v44 = KeGetCurrentPrcb();
      v45 = v44->SchedulerAssist;
      v46 = ~(unsigned __int16)(-1LL << ((unsigned __int8)CurrentIrql + 1));
      v19 = (v46 & v45[5]) == 0;
      v45[5] &= v46;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(v44);
    }
    result = CurrentIrql;
    __writecr8((unsigned __int8)CurrentIrql);
  }
  return result;
}
