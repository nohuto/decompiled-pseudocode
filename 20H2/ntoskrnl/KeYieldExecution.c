/*
 * XREFs of KeYieldExecution @ 0x140302FA0
 * Callers:
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     NtYieldExecution @ 0x140302F80 (NtYieldExecution.c)
 * Callees:
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiSelectReadyThreadEx @ 0x1402BA4B0 (KiSelectReadyThreadEx.c)
 *     KiUpdateThreadPriority @ 0x1402BE8B0 (KiUpdateThreadPriority.c)
 *     KiEndThreadCycleAccumulation @ 0x1402DAAA0 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402DBE70 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1402DC330 (KiComputeNewPriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402DC410 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402DF180 (KiIsThreadRankNonZero.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 *     KiSetSchedulerAssistPriority @ 0x14051EE74 (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KeYieldExecution(int a1)
{
  char v1; // di
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _KPRCB *v10; // r14
  unsigned int v11; // ebx
  _DWORD *v12; // rcx
  struct _KPRCB *v13; // r14
  _DWORD *v14; // rcx
  __int64 NextThread; // r14
  char v16; // r8
  _KTHREAD *v17; // rdx
  unsigned __int64 CycleTime; // rdx
  unsigned __int64 v19; // rcx
  unsigned int v20; // edi
  __int64 v21; // r8
  char v22; // cl
  __int64 v23; // r8
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  _DWORD *v26; // rcx
  _DWORD *v27; // rcx
  bool IsThreadRankNonZero; // al
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  _DWORD *v31; // rcx
  int v32; // eax
  _DWORD *v33; // rcx
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rdx
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // rax
  _DWORD *v42; // r9
  int v43; // edx
  bool v44; // zf
  int v45; // [rsp+50h] [rbp+8h] BYREF
  int v46; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->ReadySummary && !CurrentPrcb->SharedReadyQueue->ReadySummary )
    return 1073741860LL;
  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v6 = KeGetCurrentPrcb();
  if ( v6->ReadySummary || v6->SharedReadyQueue->ReadySummary )
  {
    KiAbProcessContextSwitch((__int64)CurrentThread, 0);
    v10 = KeGetCurrentPrcb();
    v11 = 0;
    v45 = 0;
    v12 = v10->SchedulerAssist;
    if ( v12 )
    {
      if ( v10->NestingLevel <= 1u )
      {
        v30 = v12[6];
        v12[6] = v30 + 1;
        if ( v30 == -1 )
LABEL_44:
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v31 = v10->SchedulerAssist;
      if ( v31 )
      {
        if ( v10->NestingLevel <= 1u )
        {
          v32 = v31[6] - 1;
          v31[6] = v32;
          if ( !v32 )
            KiRemoveSystemWorkPriorityKick(v10);
        }
      }
      do
        KeYieldProcessorEx(&v45, v7, v8, v9);
      while ( CurrentThread->ThreadLock );
      v33 = v10->SchedulerAssist;
      if ( v33 )
      {
        if ( v10->NestingLevel <= 1u )
        {
          v34 = v33[6];
          v33[6] = v34 + 1;
          if ( v34 == -1 )
            goto LABEL_44;
        }
      }
    }
    v13 = KeGetCurrentPrcb();
    v46 = 0;
    v14 = v13->SchedulerAssist;
    if ( v14 )
    {
      if ( v13->NestingLevel <= 1u )
      {
        v35 = v14[6];
        v14[6] = v35 + 1;
        if ( v35 == -1 )
LABEL_56:
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v6->PrcbLock, 0LL) )
    {
      v26 = v13->SchedulerAssist;
      if ( v26 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v36 = v26[6] - 1;
          v26[6] = v36;
          if ( !v36 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
      do
        KeYieldProcessorEx(&v46, v7, v8, v9);
      while ( v6->PrcbLock );
      v27 = v13->SchedulerAssist;
      if ( v27 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v37 = v27[6];
          v27[6] = v37 + 1;
          if ( v37 == -1 )
            goto LABEL_56;
        }
      }
    }
    NextThread = (__int64)v6->NextThread;
    if ( NextThread )
      goto LABEL_80;
    v16 = 1;
    v17 = 0LL;
    if ( (v1 & 1) != 0 && CurrentThread->Priority < 16 )
    {
      v17 = CurrentThread;
      v16 = 3;
    }
    NextThread = KiSelectReadyThreadEx(v6, v17, v16);
    if ( NextThread )
    {
LABEL_80:
      if ( v6->NestingLevel )
      {
        CycleTime = CurrentThread->CycleTime;
      }
      else
      {
        _disable();
        CycleTime = KiUpdateTotalCyclesCurrentThread((__int64)v6, (__int64)CurrentThread, 0LL);
        _enable();
      }
      v19 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
      CurrentThread->QuantumTarget = v19;
      v20 = (char)KiComputeNewPriority((__int64)CurrentThread, 1);
      if ( !KiUpdateVPBackingThreadPriority((ULONG_PTR)CurrentThread, 0LL, 0) )
        KiUpdateThreadPriority(0LL, (__int64)CurrentThread, (_SINGLE_LIST_ENTRY *)v20, 0);
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      v6->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation((__int64)v6, (__int64)CurrentThread, 0LL);
      _enable();
      if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, v6), v22 = 1, !IsThreadRankNonZero) )
      {
        v22 = *(_BYTE *)(NextThread + 195);
      }
      *v6->PriorityState = v22;
      if ( v6->SchedulerAssist )
      {
        v39 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( (_KTHREAD *)NextThread != v6->IdleThread )
          v39 = (unsigned int)v22;
        KiSetSchedulerAssistPriority(v6->SchedulerAssist, v39, 0LL);
      }
      v6->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 2;
      CurrentThread->WaitReason = 33;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread((__int64)v6, (ULONG_PTR)CurrentThread, v21);
      LOBYTE(v23) = 1;
      KiSwapContext(CurrentThread, NextThread, v23);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&v6->PrcbLock, 0LL);
      v24 = KeGetCurrentPrcb();
      v25 = v24->SchedulerAssist;
      if ( v25 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v38 = v25[6] - 1;
          v25[6] = v38;
          if ( !v38 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      v11 = 1073741860;
    }
  }
  else
  {
    v11 = 1073741860;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v40 = KeGetCurrentIrql();
      if ( v40 <= 0xFu && CurrentIrql <= 0xFu && v40 >= 2u )
      {
        v41 = KeGetCurrentPrcb();
        v42 = v41->SchedulerAssist;
        v43 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v44 = (v43 & v42[5]) == 0;
        v42[5] &= v43;
        if ( v44 )
          KiRemoveSystemWorkPriorityKick(v41);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v11;
}
