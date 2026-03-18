/*
 * XREFs of KeYieldExecution @ 0x1403366C0
 * Callers:
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     NtYieldExecution @ 0x1403366A0 (NtYieldExecution.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiSelectReadyThreadEx @ 0x140269EC0 (KiSelectReadyThreadEx.c)
 *     KiUpdateThreadPriority @ 0x14026D280 (KiUpdateThreadPriority.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiEndThreadCycleAccumulation @ 0x140330660 (KiEndThreadCycleAccumulation.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140332400 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1403328C0 (KiComputeNewPriority.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140332B00 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiIsThreadRankNonZero @ 0x140334690 (KiIsThreadRankNonZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 *     KiSetSchedulerAssistPriority @ 0x14051AE54 (KiSetSchedulerAssistPriority.c)
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
  __int64 v22; // r9
  char v23; // cl
  __int64 v24; // r8
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  _DWORD *v27; // rcx
  _DWORD *v28; // rcx
  bool IsThreadRankNonZero; // al
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  _DWORD *v32; // rcx
  int v33; // eax
  _DWORD *v34; // rcx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rdx
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // rax
  _DWORD *v43; // r9
  int v44; // edx
  bool v45; // zf
  int v46; // [rsp+50h] [rbp+8h] BYREF
  int v47; // [rsp+58h] [rbp+10h] BYREF

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
    v46 = 0;
    v12 = v10->SchedulerAssist;
    if ( v12 )
    {
      if ( v10->NestingLevel <= 1u )
      {
        v31 = v12[6];
        v12[6] = v31 + 1;
        if ( v31 == -1 )
LABEL_44:
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v32 = v10->SchedulerAssist;
      if ( v32 )
      {
        if ( v10->NestingLevel <= 1u )
        {
          v33 = v32[6] - 1;
          v32[6] = v33;
          if ( !v33 )
            KiRemoveSystemWorkPriorityKick(v10);
        }
      }
      do
        KeYieldProcessorEx(&v46, v7, v8, v9);
      while ( CurrentThread->ThreadLock );
      v34 = v10->SchedulerAssist;
      if ( v34 )
      {
        if ( v10->NestingLevel <= 1u )
        {
          v35 = v34[6];
          v34[6] = v35 + 1;
          if ( v35 == -1 )
            goto LABEL_44;
        }
      }
    }
    v13 = KeGetCurrentPrcb();
    v47 = 0;
    v14 = v13->SchedulerAssist;
    if ( v14 )
    {
      if ( v13->NestingLevel <= 1u )
      {
        v36 = v14[6];
        v14[6] = v36 + 1;
        if ( v36 == -1 )
LABEL_56:
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v6->PrcbLock, 0LL) )
    {
      v27 = v13->SchedulerAssist;
      if ( v27 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v37 = v27[6] - 1;
          v27[6] = v37;
          if ( !v37 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
      do
        KeYieldProcessorEx(&v47, v7, v8, v9);
      while ( v6->PrcbLock );
      v28 = v13->SchedulerAssist;
      if ( v28 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v38 = v28[6];
          v28[6] = v38 + 1;
          if ( v38 == -1 )
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
        || (IsThreadRankNonZero = KiIsThreadRankNonZero(NextThread, v6), v23 = 1, !IsThreadRankNonZero) )
      {
        v23 = *(_BYTE *)(NextThread + 195);
      }
      *v6->PriorityState = v23;
      if ( v6->SchedulerAssist )
      {
        v40 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( (_KTHREAD *)NextThread != v6->IdleThread )
          v40 = (unsigned int)v23;
        KiSetSchedulerAssistPriority(v6->SchedulerAssist, v40, 0LL);
      }
      v6->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 2;
      CurrentThread->WaitReason = 33;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread((__int64)v6, (ULONG_PTR)CurrentThread, v21, v22);
      LOBYTE(v24) = 1;
      KiSwapContext(CurrentThread, NextThread, v24);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&v6->PrcbLock, 0LL);
      v25 = KeGetCurrentPrcb();
      v26 = v25->SchedulerAssist;
      if ( v26 )
      {
        if ( v25->NestingLevel <= 1u )
        {
          v39 = v26[6] - 1;
          v26[6] = v39;
          if ( !v39 )
            KiRemoveSystemWorkPriorityKick(v25);
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
      v41 = KeGetCurrentIrql();
      if ( v41 <= 0xFu && CurrentIrql <= 0xFu && v41 >= 2u )
      {
        v42 = KeGetCurrentPrcb();
        v43 = v42->SchedulerAssist;
        v44 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v45 = (v44 & v43[5]) == 0;
        v43[5] &= v44;
        if ( v45 )
          KiRemoveSystemWorkPriorityKick(v42);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v11;
}
