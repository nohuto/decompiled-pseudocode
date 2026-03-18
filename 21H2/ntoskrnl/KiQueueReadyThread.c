/*
 * XREFs of KiQueueReadyThread @ 0x1402B9970
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x140207F60 (KeSetSchedulingGroupRankBias.c)
 *     KeCpuSetReportParkedProcessors @ 0x14020E1DC (KeCpuSetReportParkedProcessors.c)
 *     KiSetLegacyAffinityThread @ 0x14020E6EC (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x14020E9E8 (KeSetUserAffinityThread.c)
 *     KiReadyOutSwappedThreads @ 0x1402112F8 (KiReadyOutSwappedThreads.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14022B5D8 (KiAbThreadUnboostCpuPriority.c)
 *     KeBoostPriorityThread @ 0x140255110 (KeBoostPriorityThread.c)
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 *     KiCheckForThreadDispatch @ 0x140294824 (KiCheckForThreadDispatch.c)
 *     KeYieldExecution @ 0x14029B310 (KeYieldExecution.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     KiSchedulerApc @ 0x1402EFA40 (KiSchedulerApc.c)
 *     PsImpersonateContainerOfThread @ 0x14030F330 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x140344800 (KiProcessDeferredReadyList.c)
 *     KiAbForceProcessLockEntry @ 0x14039C4BC (KiAbForceProcessLockEntry.c)
 *     KeSetCpuSetsProcess @ 0x1403D2D98 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403D2F9C (KeUpdateThreadCpuSets.c)
 *     KxDispatchInterrupt @ 0x140428BA0 (KxDispatchInterrupt.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14056B410 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14056B9FC (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140572774 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140574FA4 (KiSetHeteroPolicyThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140576AA4 (KeSetThreadSchedulerAssist.c)
 * Callees:
 *     KiTryToAcquireThreadLock @ 0x14020E67C (KiTryToAcquireThreadLock.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140210178 (KiRecomputeGroupSchedulingRank.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToScbQueue @ 0x140210988 (KiAddThreadToScbQueue.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140210CE4 (KiRemoveSchedulingGroupQueue.c)
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiComputeGroupSchedulingRank @ 0x14022A040 (KiComputeGroupSchedulingRank.c)
 *     KiRequestSoftwareInterrupt @ 0x14022BA6C (KiRequestSoftwareInterrupt.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14023BD18 (KiCheckForMaxOverQuotaScb.c)
 *     KiCheckMaxOverQuotaTransition @ 0x140242E70 (KiCheckMaxOverQuotaTransition.c)
 *     KiCheckThreadAffinity @ 0x140290B74 (KiCheckThreadAffinity.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140290FCC (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateThreadPriority @ 0x140291010 (KiUpdateThreadPriority.c)
 *     KiShouldPreemptionBeDeferred @ 0x140291E98 (KiShouldPreemptionBeDeferred.c)
 *     KiCheckPrcbAffinityEx @ 0x140291EB8 (KiCheckPrcbAffinityEx.c)
 *     KiComputeThreadAffinity @ 0x140292884 (KiComputeThreadAffinity.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402B9FC0 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1402BA000 (KiComputeNewPriority.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiEnterDeferredReadyState @ 0x1402F69A0 (KiEnterDeferredReadyState.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x140577654 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceIdealProcessor @ 0x14062DAE4 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiQueueReadyThread(struct _KPRCB *a1, ULONG_PTR a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  char v4; // r12
  int v7; // r13d
  __int64 v8; // rdi
  __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 Group; // rax
  __int64 v14; // rdi
  _BYTE *SchedulerAssist; // rax
  __int64 v16; // r15
  unsigned __int64 SharedReadyQueueMask; // rcx
  _WORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  struct _KPRCB *v21; // rbp
  _KSHARED_READY_QUEUE *SharedReadyQueue; // r14
  _LIST_ENTRY *v23; // rdi
  _DWORD *v24; // rcx
  struct _LIST_ENTRY *v25; // rax
  struct _LIST_ENTRY *v26; // rcx
  __int64 result; // rax
  struct _KPRCB *v28; // rcx
  _DWORD *v29; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v31; // rdx
  struct _LIST_ENTRY *v32; // rcx
  _DWORD *v33; // rcx
  _DWORD *v34; // rcx
  BOOL v35; // ebp
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  _QWORD *v38; // rbx
  __int64 v39; // rdi
  int v40; // r14d
  __int16 v41; // dx
  __int64 v42; // rcx
  struct _LIST_ENTRY *v43; // rcx
  _LIST_ENTRY *v44; // rax
  struct _LIST_ENTRY *Flink; // rdx
  unsigned int ReadySummary; // eax
  unsigned int v47; // r14d
  unsigned int v48; // ebp
  unsigned __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned int v51; // edi
  struct _LIST_ENTRY *Blink; // rdx
  bool v53; // di
  _QWORD *v54; // rax
  _QWORD *v55; // rdx
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  bool v60; // [rsp+78h] [rbp+10h] BYREF
  int v61; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v62; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a2 + 72);
  v4 = 0;
  v7 = *(unsigned __int8 *)(a2 + 565);
  if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 || v3 >= *(_QWORD *)(a2 + 32) )
  {
    if ( KiTryToAcquireThreadLock(a2, 0LL) )
    {
      v47 = *(_DWORD *)(a2 + 588);
      if ( v3 >= *(_QWORD *)(a2 + 32) )
      {
        LOBYTE(a3) = 1;
        v48 = (char)KiComputeNewPriority(a2, 1LL, a3);
        if ( !(unsigned __int8)KiUpdateVPBackingThreadPriority(a2) )
          KiUpdateThreadPriority(0LL, a2, (PVOID *)v48, 0);
        v49 = v3 + (unsigned int)*(unsigned __int8 *)(a2 + 651) * KiCyclesPerClockQuantum;
        if ( (*(_DWORD *)(a2 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
        *(_QWORD *)(a2 + 32) = v49;
        KiTryScheduleNextForegroundBoost();
        v7 = 0;
      }
      if ( !KiCheckThreadAffinity(a2)
        && (unsigned int)KiComputeThreadAffinity(v50)
        && !KiCheckPrcbAffinityEx(*(_WORD **)(a2 + 576), (__int64)a1) )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
      }
      v51 = *(_DWORD *)(a2 + 588);
      KiReleaseThreadLockSafe(a2);
      if ( (xmmword_140D06910 & 0x8000000) != 0 )
        EtwTraceIdealProcessor(a2, 1350LL, v47, v51);
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
    }
  }
  v8 = *(_QWORD *)(a2 + 104);
  v9 = v8;
  if ( v8 )
  {
    v39 = a1->ScbOffset + v8;
    if ( v39 )
    {
      v40 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v39 + 112) & 4) != 0 )
        {
          if ( KiCheckMaxOverQuotaTransition(v39, v9) )
          {
            if ( (*(_BYTE *)(v39 + 112) & 1) != 0 )
              KiRemoveSchedulingGroupQueue((__int64)a1, v39, 1);
          }
          else if ( *(_QWORD *)v39 >= *(_QWORD *)(v39 + 24) && (*(_BYTE *)(v39 + 112) & 2) == 0 )
          {
            KiRecomputeGroupSchedulingRank(v9, v39, (__int64)a1);
          }
        }
        else
        {
          KiComputeGroupSchedulingRank(v9, (__int64)a1, v39);
        }
        v40 += *(_DWORD *)(v39 + 116);
        v39 = *(_QWORD *)(v39 + 408);
        if ( !v39 )
          break;
        v9 = v39 - a1->ScbOffset;
      }
      if ( (*(_DWORD *)(a2 + 120) & 0x200) == 0
        && *(char *)(a2 + 195) < 16
        && KiShouldPreemptionBeDeferred(a2)
        && v40
        && (v41 & 0xC00) == 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
      }
    }
  }
  v10 = 0LL;
  if ( *(char *)(a2 + 195) >= KiRebalanceMinPriority || (a1->IdleState & 2) != 0 )
  {
    v11 = *(_QWORD *)(a2 + 104);
    if ( !v11 || (v42 = a1->ScbOffset + v11) == 0 || !KiCheckForMaxOverQuotaScb(v42) )
    {
      v12 = *(_WORD **)(a2 + 576);
      Group = a1->Group;
      if ( (unsigned __int16)Group >= *v12 )
        a3 = 0LL;
      else
        a3 = *(_QWORD *)&v12[4 * Group + 4];
      v10 = a3 & a1->SchedulerSubNode->IdleNonParkedCpuSet;
    }
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x1000) == 0 && !v10 )
  {
    *(_BYTE *)(a2 + 565) = 0;
    *(_DWORD *)(a2 + 436) = MEMORY[0xFFFFF78000000320];
    v14 = *(_QWORD *)(a2 + 104);
    if ( v14 )
      v14 += a1->ScbOffset;
    SchedulerAssist = a1->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[16] = 0;
    *(_BYTE *)(a2 + 388) = 1;
    v60 = 0;
    if ( v14
      && (*(_DWORD *)(a2 + 120) & 0xC00) == 0
      && (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v14, a3, 1, &v60) )
    {
      result = KiAddThreadToScbQueue((__int64)a1, v14, a2, v7);
LABEL_29:
      _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
      CurrentPrcb = KeGetCurrentPrcb();
      v31 = CurrentPrcb->SchedulerAssist;
      if ( v31 && CurrentPrcb->NestingLevel <= 1u )
      {
        result = (unsigned int)(v31[6] - 1);
        v31[6] = result;
        if ( !(_DWORD)result )
          return KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      return result;
    }
    v16 = *(char *)(a2 + 195);
    if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    {
      _InterlockedOr(*(volatile signed __int32 **)(a2 + 968), 0x40000u);
      if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
      {
        v53 = 0;
        if ( (unsigned int)KiReadGuestSchedulerAssistPriority(a2, 0LL) != *(_DWORD *)(a2 + 1024) )
        {
          KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
          v54 = (_QWORD *)(a2 + 1008);
          if ( *(_QWORD *)(a2 + 1008) == 1LL )
          {
            v55 = (_QWORD *)qword_140C2BA28;
            v53 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
            if ( *(__int64 **)qword_140C2BA28 != &KiUpdateVpThreadPriorityListHead )
              goto LABEL_117;
            *v54 = &KiUpdateVpThreadPriorityListHead;
            *(_QWORD *)(a2 + 1016) = v55;
            *v55 = v54;
            qword_140C2BA28 = a2 + 1008;
          }
          KxReleaseSpinLock(&KiUpdateVpThreadPriorityLock);
          if ( v53 )
            KeInsertQueueDpc(&KiUpdateVpThreadPriorityDpc, 0LL, 0LL);
        }
      }
    }
    SharedReadyQueueMask = a1->SharedReadyQueueMask;
    if ( (*(_DWORD *)(a2 + 120) & 0x2000) == 0
      || !SharedReadyQueueMask
      || ((v18 = *(_WORD **)(a2 + 576), v19 = a1->Group, (unsigned __int16)v19 >= *v18)
        ? (v20 = 0LL)
        : (v20 = *(_QWORD *)&v18[4 * v19 + 4]),
          (SharedReadyQueueMask & v20) != SharedReadyQueueMask || v60) )
    {
      v43 = (struct _LIST_ENTRY *)(a2 + 216);
      v44 = &a1->DispatcherReadyListHead[v16];
      if ( v7 )
      {
        Flink = v44->Flink;
        if ( v44->Flink->Blink != v44 )
          goto LABEL_117;
        v43->Flink = Flink;
        *(_QWORD *)(a2 + 224) = v44;
        Flink->Blink = v43;
        v44->Flink = v43;
        _bittestandset(&a1->AffinitizedSelectionMask, v16);
      }
      else
      {
        Blink = v44->Blink;
        if ( Blink->Flink != v44 )
          goto LABEL_117;
        v43->Flink = v44;
        *(_QWORD *)(a2 + 224) = Blink;
        Blink->Flink = v43;
        v44->Blink = v43;
      }
      ReadySummary = a1->ReadySummary;
      ++a1->ReadyThreadCount;
      a1->ReadySummary = ReadySummary | (1 << v16);
      result = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 1648) = result;
      a1->ReadyQueueExpectedRunTime += result;
      goto LABEL_29;
    }
    v21 = KeGetCurrentPrcb();
    SharedReadyQueue = a1->SharedReadyQueue;
    v23 = &SharedReadyQueue->ReadyListHead[v16];
    v61 = 0;
    v24 = v21->SchedulerAssist;
    if ( v24 )
    {
      if ( v21->NestingLevel <= 1u )
      {
        v56 = v24[6];
        v24[6] = v56 + 1;
        if ( v56 == -1 )
LABEL_107:
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)SharedReadyQueue, 0LL) )
    {
      v33 = v21->SchedulerAssist;
      if ( v33 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v57 = v33[6] - 1;
          v33[6] = v57;
          if ( !v57 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      do
        KeYieldProcessorEx(&v61);
      while ( SharedReadyQueue->Lock );
      v34 = v21->SchedulerAssist;
      if ( v34 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v58 = v34[6];
          v34[6] = v58 + 1;
          if ( v58 == -1 )
            goto LABEL_107;
        }
      }
    }
    v25 = (struct _LIST_ENTRY *)(a2 + 216);
    if ( v7 )
    {
      v32 = v23->Flink;
      if ( v23->Flink->Blink == v23 )
      {
        v25->Flink = v32;
        *(_QWORD *)(a2 + 224) = v23;
        v32->Blink = v25;
        v23->Flink = v25;
        _bittestandreset(&a1->AffinitizedSelectionMask, v16);
        goto LABEL_28;
      }
    }
    else
    {
      v26 = v23->Blink;
      if ( v26->Flink == v23 )
      {
        v25->Flink = v23;
        *(_QWORD *)(a2 + 224) = v26;
        v26->Flink = v25;
        v23->Blink = v25;
LABEL_28:
        SharedReadyQueue->ReadySummary |= 1 << v16;
        *(_DWORD *)(a2 + 536) |= 0x80000000;
        ++SharedReadyQueue->ReadyThreadCount;
        result = *(unsigned int *)(a2 + 84);
        *(_DWORD *)(a2 + 1648) = result;
        SharedReadyQueue->ReadyQueueExpectedRunTime += result;
        _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        if ( v29 )
        {
          if ( v28->NestingLevel <= 1u )
          {
            result = (unsigned int)(v29[6] - 1);
            v29[6] = result;
            if ( !(_DWORD)result )
              result = KiRemoveSystemWorkPriorityKick(v28);
          }
        }
        goto LABEL_29;
      }
    }
LABEL_117:
    __fastfail(3u);
  }
  v35 = a1->NextThread != 0LL;
  KiEnterDeferredReadyState(a2);
  _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
  v36 = KeGetCurrentPrcb();
  v37 = v36->SchedulerAssist;
  if ( v37 )
  {
    if ( v36->NestingLevel <= 1u )
    {
      v59 = v37[6] - 1;
      v37[6] = v59;
      if ( !v59 )
        KiRemoveSystemWorkPriorityKick(v36);
    }
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xCu);
  *(_BYTE *)(a2 + 565) = v7;
  v38 = (_QWORD *)(a2 + 216);
  v62 = 0LL;
  *v38 = 0LL;
  do
  {
    KiDeferredReadySingleThread(a1, v38 - 27, &v62);
    v38 = v62;
    ++v4;
    if ( v62 )
      v62 = (_QWORD *)*v62;
    if ( (v4 & 0xF) == 0 )
      KiFlushSoftwareInterruptBatch(&a1->DeferredDispatchInterrupts);
  }
  while ( v38 );
  result = KiFlushSoftwareInterruptBatch(&a1->DeferredDispatchInterrupts);
  if ( !v35 )
  {
    result = (__int64)a1->IdleThread;
    if ( a1->CurrentThread != (_KTHREAD *)result )
    {
      if ( a1->NextThread )
        return KiRequestSoftwareInterrupt(a1, 2);
    }
  }
  return result;
}
