/*
 * XREFs of KeYieldExecution @ 0x14021B710
 * Callers:
 *     NtYieldExecution @ 0x14021B6F0 (NtYieldExecution.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14027A380 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x14027A840 (KiComputeNewPriority.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402D28D0 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402D4110 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSelectReadyThreadEx @ 0x1402D4710 (KiSelectReadyThreadEx.c)
 *     KiUpdateThreadPriority @ 0x1402D56A0 (KiUpdateThreadPriority.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402F1CA0 (KiIsThreadRankNonZero.c)
 *     KiAbProcessContextSwitch @ 0x1403529A0 (KiAbProcessContextSwitch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406650 (KiSwapContext.c)
 *     KiSetSchedulerAssistPriority @ 0x140520B94 (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KeYieldExecution(int a1)
{
  char v1; // di
  struct _KPRCB *CurrentPrcb; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *v6; // rsi
  struct _KPRCB *v7; // r14
  unsigned int v8; // ebx
  _DWORD *v9; // rcx
  struct _KPRCB *v10; // r14
  _DWORD *v11; // rcx
  __int64 NextThread; // r14
  struct _KTHREAD *v13; // rdx
  __int64 CycleTime; // rdx
  unsigned __int64 v15; // rcx
  unsigned int v16; // edi
  char v17; // cl
  __int64 v18; // r8
  struct _KPRCB *v19; // rcx
  _DWORD *v20; // rdx
  _DWORD *v21; // rcx
  _DWORD *v22; // rcx
  char IsThreadRankNonZero; // al
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  _DWORD *v28; // rcx
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  __int64 v34; // rdx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // rax
  _DWORD *v37; // r9
  int v38; // edx
  bool v39; // zf
  int v40; // [rsp+50h] [rbp+8h] BYREF
  int v41; // [rsp+58h] [rbp+10h] BYREF

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
    KiAbProcessContextSwitch(CurrentThread, 0LL);
    v7 = KeGetCurrentPrcb();
    v8 = 0;
    v40 = 0;
    v9 = v7->SchedulerAssist;
    if ( v9 )
    {
      if ( v7->NestingLevel <= 1u )
      {
        v25 = v9[6];
        v9[6] = v25 + 1;
        if ( v25 == -1 )
LABEL_44:
          KiRemoveSystemWorkPriorityKick(v7);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v26 = v7->SchedulerAssist;
      if ( v26 )
      {
        if ( v7->NestingLevel <= 1u )
        {
          v27 = v26[6] - 1;
          v26[6] = v27;
          if ( !v27 )
            KiRemoveSystemWorkPriorityKick(v7);
        }
      }
      do
        KeYieldProcessorEx(&v40);
      while ( CurrentThread->ThreadLock );
      v28 = v7->SchedulerAssist;
      if ( v28 )
      {
        if ( v7->NestingLevel <= 1u )
        {
          v29 = v28[6];
          v28[6] = v29 + 1;
          if ( v29 == -1 )
            goto LABEL_44;
        }
      }
    }
    v10 = KeGetCurrentPrcb();
    v41 = 0;
    v11 = v10->SchedulerAssist;
    if ( v11 )
    {
      if ( v10->NestingLevel <= 1u )
      {
        v30 = v11[6];
        v11[6] = v30 + 1;
        if ( v30 == -1 )
LABEL_56:
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v6->PrcbLock, 0LL) )
    {
      v21 = v10->SchedulerAssist;
      if ( v21 )
      {
        if ( v10->NestingLevel <= 1u )
        {
          v31 = v21[6] - 1;
          v21[6] = v31;
          if ( !v31 )
            KiRemoveSystemWorkPriorityKick(v10);
        }
      }
      do
        KeYieldProcessorEx(&v41);
      while ( v6->PrcbLock );
      v22 = v10->SchedulerAssist;
      if ( v22 )
      {
        if ( v10->NestingLevel <= 1u )
        {
          v32 = v22[6];
          v22[6] = v32 + 1;
          if ( v32 == -1 )
            goto LABEL_56;
        }
      }
    }
    NextThread = (__int64)v6->NextThread;
    if ( NextThread )
      goto LABEL_80;
    v13 = 0LL;
    if ( (v1 & 1) != 0 && CurrentThread->Priority < 16 )
      v13 = CurrentThread;
    NextThread = KiSelectReadyThreadEx(v6, v13);
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
        CycleTime = KiUpdateTotalCyclesCurrentThread(v6, CurrentThread, 0LL);
        _enable();
      }
      v15 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
      CurrentThread->QuantumTarget = v15;
      LOBYTE(CycleTime) = 1;
      v16 = (char)KiComputeNewPriority(CurrentThread, CycleTime);
      if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority((ULONG_PTR)CurrentThread) )
        KiUpdateThreadPriority(0LL, CurrentThread, v16, 0LL);
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      v6->NextThread = 0LL;
      _disable();
      KiEndThreadCycleAccumulation(v6, CurrentThread, 0LL);
      _enable();
      if ( (*(_BYTE *)(NextThread + 2) & 4) == 0
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, v6), v17 = 1, !IsThreadRankNonZero) )
      {
        v17 = *(_BYTE *)(NextThread + 195);
      }
      *v6->PriorityState = v17;
      if ( v6->SchedulerAssist )
      {
        v34 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( (_KTHREAD *)NextThread != v6->IdleThread )
          v34 = (unsigned int)v17;
        KiSetSchedulerAssistPriority(v6->SchedulerAssist, v34, 0LL);
      }
      v6->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 2;
      CurrentThread->WaitReason = 33;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(v6, CurrentThread);
      LOBYTE(v18) = 1;
      KiSwapContext(CurrentThread, NextThread, v18);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&v6->PrcbLock, 0LL);
      v19 = KeGetCurrentPrcb();
      v20 = v19->SchedulerAssist;
      if ( v20 )
      {
        if ( v19->NestingLevel <= 1u )
        {
          v33 = v20[6] - 1;
          v20[6] = v33;
          if ( !v33 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
      KiReleaseThreadLockSafe((__int64)CurrentThread);
      v8 = 1073741860;
    }
  }
  else
  {
    v8 = 1073741860;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && CurrentIrql <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v39 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v39 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v8;
}
