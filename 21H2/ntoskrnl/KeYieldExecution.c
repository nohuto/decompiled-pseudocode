/*
 * XREFs of KeYieldExecution @ 0x14029B310
 * Callers:
 *     NtYieldExecution @ 0x14029B2F0 (NtYieldExecution.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiAbQueueAutoBoostDpc @ 0x140229D30 (KiAbQueueAutoBoostDpc.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiSelectReadyThreadEx @ 0x1402B7AE0 (KiSelectReadyThreadEx.c)
 *     KiEndThreadAccountingPeriodEx @ 0x1402B9680 (KiEndThreadAccountingPeriodEx.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402B9FC0 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1402BA000 (KiComputeNewPriority.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140345AA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KeYieldExecution(int a1)
{
  char v1; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *v5; // rdi
  __int64 v6; // r8
  struct _KPRCB *v7; // rsi
  unsigned int v8; // ebp
  _DWORD *v9; // rcx
  struct _KPRCB *v10; // rsi
  _DWORD *v11; // rcx
  __int64 NextThread; // rsi
  struct _KTHREAD *v13; // rdx
  __int64 CycleTime; // rdx
  unsigned __int64 v15; // rcx
  unsigned int v16; // r14d
  _SINGLE_LIST_ENTRY *p_PropagateBoostsEntry; // r8
  struct _KDPC *v18; // rcx
  bool v19; // zf
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  unsigned __int64 v22; // r9
  __int64 v23; // r8
  __int64 CurrentRunTime; // rax
  unsigned __int64 v25; // rax
  unsigned __int8 *PriorityState; // r14
  char v27; // cl
  unsigned __int8 v28; // al
  void *v29; // rcx
  _KPRIORITY_STATE *v30; // r8
  __int64 v31; // r8
  _DWORD *SchedulerAssist; // r9
  PVOID *p_DpcData; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  _DWORD *v37; // rcx
  _DWORD *v38; // rcx
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  int v41; // eax
  _DWORD *v42; // rcx
  int v43; // eax
  _DWORD *v44; // rcx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  __int64 v51; // rdx
  unsigned int v52; // edx
  char v53; // al
  char v54; // al
  char v55; // cl
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // rax
  _DWORD *v58; // r9
  int v59; // edx
  int v60; // [rsp+60h] [rbp+8h] BYREF
  int v61; // [rsp+68h] [rbp+10h] BYREF

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
  v5 = KeGetCurrentPrcb();
  if ( v5->ReadySummary || v5->SharedReadyQueue->ReadySummary )
  {
    KiAbProcessContextSwitch(CurrentThread, 0LL);
    v7 = KeGetCurrentPrcb();
    v8 = 0;
    v60 = 0;
    v9 = v7->SchedulerAssist;
    if ( v9 )
    {
      if ( v7->NestingLevel <= 1u )
      {
        v41 = v9[6];
        v9[6] = v41 + 1;
        if ( v41 == -1 )
LABEL_60:
          KiRemoveSystemWorkPriorityKick(v7);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      v42 = v7->SchedulerAssist;
      if ( v42 )
      {
        if ( v7->NestingLevel <= 1u )
        {
          v43 = v42[6] - 1;
          v42[6] = v43;
          if ( !v43 )
            KiRemoveSystemWorkPriorityKick(v7);
        }
      }
      do
        KeYieldProcessorEx(&v60);
      while ( CurrentThread->ThreadLock );
      v44 = v7->SchedulerAssist;
      if ( v44 )
      {
        if ( v7->NestingLevel <= 1u )
        {
          v45 = v44[6];
          v44[6] = v45 + 1;
          if ( v45 == -1 )
            goto LABEL_60;
        }
      }
    }
    v10 = KeGetCurrentPrcb();
    v61 = 0;
    v11 = v10->SchedulerAssist;
    if ( v11 )
    {
      if ( v10->NestingLevel <= 1u )
      {
        v46 = v11[6];
        v11[6] = v46 + 1;
        if ( v46 == -1 )
LABEL_72:
          KiRemoveSystemWorkPriorityKick(v10);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)&v5->PrcbLock, 0LL) )
    {
      v37 = v10->SchedulerAssist;
      if ( v37 )
      {
        if ( v10->NestingLevel <= 1u )
        {
          v47 = v37[6] - 1;
          v37[6] = v47;
          if ( !v47 )
            KiRemoveSystemWorkPriorityKick(v10);
        }
      }
      do
        KeYieldProcessorEx(&v61);
      while ( v5->PrcbLock );
      v38 = v10->SchedulerAssist;
      if ( v38 )
      {
        if ( v10->NestingLevel <= 1u )
        {
          v48 = v38[6];
          v38[6] = v48 + 1;
          if ( v48 == -1 )
            goto LABEL_72;
        }
      }
    }
    NextThread = (__int64)v5->NextThread;
    if ( NextThread )
      goto LABEL_105;
    v13 = 0LL;
    if ( (v1 & 1) != 0 && CurrentThread->Priority < 16 )
      v13 = CurrentThread;
    NextThread = KiSelectReadyThreadEx(v5, v13);
    if ( NextThread )
    {
LABEL_105:
      if ( v5->NestingLevel )
      {
        CycleTime = CurrentThread->CycleTime;
      }
      else
      {
        _disable();
        CycleTime = KiUpdateTotalCyclesCurrentThread(v5, CurrentThread, 0LL);
        _enable();
      }
      v15 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)CurrentThread->SchedulerApc.SpareByte1;
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
        _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
      LOBYTE(v6) = 1;
      CurrentThread->QuantumTarget = v15;
      v16 = (char)KiComputeNewPriority(CurrentThread, 1LL, v6);
      if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority((ULONG_PTR)CurrentThread) )
      {
        v18 = (struct _KDPC *)KeGetCurrentPrcb();
        if ( (char)v16 > CurrentThread->Priority )
        {
          if ( CurrentThread->AbWaitEntryCount )
          {
            p_PropagateBoostsEntry = &CurrentThread->PropagateBoostsEntry;
            if ( CurrentThread->PropagateBoostsEntry.Next == (struct _SINGLE_LIST_ENTRY *)1 )
            {
              p_DpcData = &v18[557].DpcData;
              if ( v18 != (struct _KDPC *)-35704LL )
              {
                p_PropagateBoostsEntry->Next = (struct _SINGLE_LIST_ENTRY *)*p_DpcData;
                *p_DpcData = p_PropagateBoostsEntry;
                _InterlockedIncrement16(&CurrentThread->KeReferenceCount);
                KiAbQueueAutoBoostDpc(v18);
              }
            }
          }
        }
        v19 = (*((_DWORD *)&CurrentThread->0 + 1) & 0x400000) == 0;
        CurrentThread->Priority = v16;
        if ( !v19 )
        {
          LOBYTE(p_PropagateBoostsEntry) = 1;
          KiSetSchedulerAssistPriority(CurrentThread->SchedulerAssist, v16, p_PropagateBoostsEntry);
        }
      }
      CurrentThread->ThreadLock = 0LL;
      v20 = KeGetCurrentPrcb();
      v21 = v20->SchedulerAssist;
      if ( v21 )
      {
        if ( v20->NestingLevel <= 1u )
        {
          v50 = v21[6] - 1;
          v21[6] = v50;
          if ( !v50 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      v5->NextThread = 0LL;
      _disable();
      v5->NestingLevel = 1;
      v22 = __rdtsc();
      v23 = v22 - v5->StartCycles;
      CurrentRunTime = CurrentThread->CurrentRunTime;
      CurrentThread->CycleTime += v23;
      v25 = ((v23 * (unsigned __int64)v5->CpuCycleScalingFactor) >> 16) + CurrentRunTime;
      if ( v25 > 0xFFFFFFFF )
        LODWORD(v25) = -1;
      v5->StartCycles = v22;
      v19 = (CurrentThread->Header.Size & 0xBE) == 0;
      CurrentThread->CurrentRunTime = v25;
      if ( !v19 )
      {
        LOBYTE(v22) = 1;
        KiEndThreadAccountingPeriodEx(v5, CurrentThread, v23, v22);
      }
      _enable();
      PriorityState = (unsigned __int8 *)v5->PriorityState;
      if ( (*(_BYTE *)(NextThread + 2) & 4) != 0
        && *(char *)(NextThread + 195) < 16
        && *(_QWORD *)(NextThread + 104)
        && (v35 = *(_QWORD *)(NextThread + 104)) != 0
        && (v36 = v5->ScbOffset + v35) != 0
        && (unsigned int)KiGetThreadEffectiveRankNonZero(NextThread, v36, v23, 0, 0LL) )
      {
        v27 = 1;
      }
      else
      {
        v27 = *(_BYTE *)(NextThread + 195);
      }
      v28 = v27 & 0x7F | (*(_BYTE *)(NextThread + 119) << 7);
      *PriorityState = v28;
      v29 = v5->SchedulerAssist;
      if ( v29 )
      {
        if ( (_KTHREAD *)NextThread == v5->IdleThread )
          v51 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v51 = v28 & 0x7F;
        KiSetSchedulerAssistPriority(v29, v51, 0LL);
      }
      v30 = v5->PriorityState;
      if ( KeHeteroSystem )
      {
        v52 = *(_DWORD *)(NextThread + 80);
        v53 = (v30[64].AllFields ^ *(_BYTE *)(NextThread + 512)) & 7 ^ v30[64].AllFields;
        v54 = (v53 ^ (8 * *(_BYTE *)(NextThread + 516))) & 0x38 ^ v53;
        if ( v52 <= *(_DWORD *)(NextThread + 84) )
          v52 = *(_DWORD *)(NextThread + 84);
        v55 = 64;
        if ( v52 < KiDynamicHeteroCpuPolicyExpectedCycles )
          v55 = 0;
        v30[64].AllFields = v55 | v54 & 0xBF;
      }
      v5->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
        *(_DWORD *)(NextThread + 132) = *(_DWORD *)(NextThread + 132)
                                      - *(_DWORD *)(NextThread + 436)
                                      + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(NextThread + 388) = 2;
      CurrentThread->WaitReason = 33;
      CurrentThread->WaitIrql = CurrentIrql;
      KiQueueReadyThread(v5, CurrentThread);
      LOBYTE(v31) = 1;
      KiSwapContext(CurrentThread, NextThread, v31);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)&v5->PrcbLock, 0LL);
      v39 = KeGetCurrentPrcb();
      v40 = v39->SchedulerAssist;
      if ( v40 )
      {
        if ( v39->NestingLevel <= 1u )
        {
          v49 = v40[6] - 1;
          v40[6] = v49;
          if ( !v49 )
            KiRemoveSystemWorkPriorityKick(v39);
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
      v56 = KeGetCurrentIrql();
      if ( v56 <= 0xFu && CurrentIrql <= 0xFu && v56 >= 2u )
      {
        v57 = KeGetCurrentPrcb();
        v58 = v57->SchedulerAssist;
        v59 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v59 & v58[5]) == 0;
        v58[5] &= v59;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v57);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v8;
}
