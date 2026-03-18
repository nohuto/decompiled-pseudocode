/*
 * XREFs of KiQueueReadyThread @ 0x1402EDF50
 * Callers:
 *     KeRemoveQueueEx @ 0x14020F400 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x1402123A0 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x140213FB0 (KiProcessDeferredReadyList.c)
 *     KiReadyOutSwappedThreads @ 0x140281200 (KiReadyOutSwappedThreads.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     KiCheckForThreadDispatch @ 0x1402E4AA4 (KiCheckForThreadDispatch.c)
 *     KiQuantumEnd @ 0x1402EC1A0 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x1402ED310 (KeSetBasePriorityThread.c)
 *     KeYieldExecution @ 0x1402F1580 (KeYieldExecution.c)
 *     KiSchedulerApc @ 0x1402FA4E0 (KiSchedulerApc.c)
 *     KeBoostPriorityThread @ 0x14030AEC4 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x14030B910 (KeSetLegacyAffinityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x14032B4B4 (KeCpuSetReportParkedProcessors.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140340DC4 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSchedulingGroupRankBias @ 0x140348C48 (KeSetSchedulingGroupRankBias.c)
 *     KiAbForceProcessLockEntry @ 0x14038D0C4 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140396A9C (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C2E54 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C2F7C (KeUpdateThreadCpuSets.c)
 *     KxDispatchInterrupt @ 0x1403FDF50 (KxDispatchInterrupt.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140517488 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140517730 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140519118 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x14051AEB4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x140214230 (KiUpdateThreadPriority.c)
 *     KeInsertQueueDpc @ 0x140214C00 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x14021E350 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KiRequestSoftwareInterrupt @ 0x140273DA8 (KiRequestSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEnterDeferredReadyState @ 0x140281520 (KiEnterDeferredReadyState.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1402ED278 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402ED2C0 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1402ED780 (KiComputeNewPriority.c)
 *     KiCheckThreadAffinity @ 0x1402ED834 (KiCheckThreadAffinity.c)
 *     KiComputeGroupSchedulingRank @ 0x1402EDA80 (KiComputeGroupSchedulingRank.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402EE534 (KiCheckForMaxOverQuotaScb.c)
 *     KiShouldPreemptionBeDeferred @ 0x1402EE774 (KiShouldPreemptionBeDeferred.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402EF600 (KiGetThreadEffectiveRankNonZero.c)
 *     KiPrcbInGroupAffinity @ 0x1402EF758 (KiPrcbInGroupAffinity.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1402EF784 (KiCheckMaxOverQuotaTransition.c)
 *     KiTryToAcquireThreadLock @ 0x1402EF7AC (KiTryToAcquireThreadLock.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1402EFA54 (KiRecomputeGroupSchedulingRank.c)
 *     KiAddThreadToScbQueue @ 0x1402F0824 (KiAddThreadToScbQueue.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1402F14D0 (KiRemoveSchedulingGroupQueue.c)
 *     KiComputeThreadAffinity @ 0x14030BE20 (KiComputeThreadAffinity.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051A798 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceIdealProcessor @ 0x1405A2374 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiQueueReadyThread(struct _KPRCB *a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned int v7; // r12d
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r10
  _BYTE *SchedulerAssist; // rax
  __int64 v14; // r15
  unsigned __int64 SharedReadyQueueMask; // rcx
  struct _KPRCB *v16; // rbp
  _KSHARED_READY_QUEUE *SharedReadyQueue; // r14
  _LIST_ENTRY *v18; // rsi
  _DWORD *v19; // rcx
  struct _LIST_ENTRY *v20; // rax
  struct _LIST_ENTRY *v21; // rcx
  __int64 result; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v26; // rdx
  struct _LIST_ENTRY *v27; // rcx
  __int64 v28; // rsi
  int v29; // r14d
  __int16 v30; // dx
  __int64 v31; // rcx
  _KTHREAD *NextThread; // rsi
  __int64 v33; // r8
  __int64 v34; // r9
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  __int64 v37; // r10
  struct _LIST_ENTRY *v38; // rcx
  _LIST_ENTRY *v39; // rax
  struct _LIST_ENTRY *Flink; // rdx
  unsigned int ReadySummary; // eax
  unsigned int v42; // r14d
  unsigned int v43; // ebp
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // esi
  _DWORD *v47; // rcx
  _DWORD *v48; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  bool v50; // si
  int GuestSchedulerAssistPriority; // eax
  _QWORD *v52; // rax
  _QWORD *v53; // rdx
  int v54; // eax
  int v55; // eax
  int v56; // eax
  int v57; // eax
  _QWORD *v58; // [rsp+30h] [rbp-48h] BYREF
  char v59; // [rsp+88h] [rbp+10h] BYREF
  int v60; // [rsp+90h] [rbp+18h] BYREF
  __int64 v61; // [rsp+98h] [rbp+20h]

  v4 = *(_QWORD *)(a2 + 72);
  v7 = *(unsigned __int8 *)(a2 + 565);
  if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 || v4 >= *(_QWORD *)(a2 + 32) )
  {
    if ( (unsigned __int8)KiTryToAcquireThreadLock(a2, 0LL) )
    {
      v42 = *(_DWORD *)(a2 + 588);
      if ( v4 >= *(_QWORD *)(a2 + 32) )
      {
        v43 = (char)KiComputeNewPriority(a2, 1);
        if ( !KiUpdateVPBackingThreadPriority(a2, 0LL, 0) )
          KiUpdateThreadPriority(0LL, a2, (_SINGLE_LIST_ENTRY *)v43, 0);
        v44 = v4 + (unsigned int)*(unsigned __int8 *)(a2 + 651) * KiCyclesPerClockQuantum;
        if ( (*(_DWORD *)(a2 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
        *(_QWORD *)(a2 + 32) = v44;
        KiTryScheduleNextForegroundBoost(a2);
        v7 = 0;
      }
      if ( !KiCheckThreadAffinity(a2)
        && (unsigned int)KiComputeThreadAffinity(v45)
        && !(unsigned int)KiPrcbInGroupAffinity(a1, a2 + 576) )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
      }
      v46 = *(_DWORD *)(a2 + 588);
      KiReleaseThreadLockSafe(a2);
      if ( (xmmword_140CFC490 & 0x8000000) != 0 )
        EtwTraceIdealProcessor(a2, 1350LL, v42, v46);
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
    }
  }
  v8 = *(_QWORD *)(a2 + 104);
  v61 = v8;
  v9 = v8;
  if ( v8 )
  {
    v28 = a1->ScbOffset + v8;
    if ( v28 )
    {
      v29 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v28 + 112) & 4) != 0 )
        {
          if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v28, v9) )
          {
            if ( (*(_BYTE *)(v28 + 112) & 1) != 0 )
            {
              LOBYTE(a3) = 1;
              KiRemoveSchedulingGroupQueue(a1, v28, a3);
            }
          }
          else if ( *(_QWORD *)v28 >= *(_QWORD *)(v28 + 24) && (*(_BYTE *)(v28 + 112) & 2) == 0 )
          {
            KiRecomputeGroupSchedulingRank(v9, v28, a1);
          }
        }
        else
        {
          KiComputeGroupSchedulingRank(v9, (__int64)a1, (__int64 *)v28);
        }
        v29 += *(_DWORD *)(v28 + 116);
        v28 = *(_QWORD *)(v28 + 408);
        if ( !v28 )
          break;
        v9 = v28 - a1->ScbOffset;
        v61 = v9;
      }
      if ( (*(_DWORD *)(a2 + 120) & 0x200) == 0
        && *(char *)(a2 + 195) < 16
        && (unsigned __int8)KiShouldPreemptionBeDeferred(a2)
        && v29
        && (v30 & 0xC00) == 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
      }
    }
  }
  v10 = 0LL;
  if ( *(char *)(a2 + 195) >= KiRebalanceMinPriority || (a1->IdleState & 2) != 0 )
  {
    v11 = *(_QWORD *)(a2 + 104);
    if ( !v11 || (v31 = a1->ScbOffset + v11) == 0 || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v31) )
      v10 = *(_QWORD *)(a2 + 576) & a1->ParentNode->IdleNonParkedCpuSet;
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x1000) == 0 && !v10 )
  {
    *(_BYTE *)(a2 + 565) = 0;
    *(_DWORD *)(a2 + 436) = MEMORY[0xFFFFF78000000320];
    v12 = *(_QWORD *)(a2 + 104);
    if ( v12 )
      v12 += a1->ScbOffset;
    SchedulerAssist = a1->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[16] = 0;
    *(_BYTE *)(a2 + 388) = 1;
    v59 = 0;
    if ( v12
      && (*(_DWORD *)(a2 + 120) & 0xC00) == 0
      && (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v12, a3, 0, (__int64)&v59) )
    {
      result = KiAddThreadToScbQueue(a1, v37, a2, v7);
LABEL_25:
      _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
      CurrentPrcb = KeGetCurrentPrcb();
      v26 = CurrentPrcb->SchedulerAssist;
      if ( v26 && CurrentPrcb->NestingLevel <= 1u )
      {
        result = (unsigned int)(v26[6] - 1);
        v26[6] = result;
        if ( !(_DWORD)result )
          return KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      return result;
    }
    v14 = *(char *)(a2 + 195);
    if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    {
      _InterlockedOr(*(volatile signed __int32 **)(a2 + 968), 0x40000u);
      if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
      {
        v50 = 0;
        GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(a2);
        if ( GuestSchedulerAssistPriority >= 16 )
          GuestSchedulerAssistPriority = 15;
        if ( GuestSchedulerAssistPriority != *(_DWORD *)(a2 + 1024) )
        {
          KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
          v52 = (_QWORD *)(a2 + 1008);
          if ( *(_QWORD *)(a2 + 1008) == 1LL )
          {
            v53 = (_QWORD *)qword_140C31CF8;
            v50 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
            if ( *(__int64 **)qword_140C31CF8 != &KiUpdateVpThreadPriorityListHead )
              goto LABEL_107;
            *v52 = &KiUpdateVpThreadPriorityListHead;
            *(_QWORD *)(a2 + 1016) = v53;
            *v53 = v52;
            qword_140C31CF8 = a2 + 1008;
          }
          KxReleaseSpinLock(&KiUpdateVpThreadPriorityLock);
          if ( v50 )
            KeInsertQueueDpc(&KiUpdateVpThreadPriorityDpc, 0LL, 0LL);
        }
      }
    }
    SharedReadyQueueMask = a1->SharedReadyQueueMask;
    if ( (*(_DWORD *)(a2 + 120) & 0x2000) == 0
      || !SharedReadyQueueMask
      || (SharedReadyQueueMask & *(_QWORD *)(a2 + 576)) != SharedReadyQueueMask
      || v59 )
    {
      v38 = (struct _LIST_ENTRY *)(a2 + 216);
      v39 = &a1->DispatcherReadyListHead[v14];
      if ( v7 )
      {
        Flink = v39->Flink;
        if ( v39->Flink->Blink != v39 )
          goto LABEL_107;
        v38->Flink = Flink;
        *(_QWORD *)(a2 + 224) = v39;
        Flink->Blink = v38;
        v39->Flink = v38;
        _bittestandset(&a1->AffinitizedSelectionMask, v14);
      }
      else
      {
        Blink = v39->Blink;
        if ( Blink->Flink != v39 )
          goto LABEL_107;
        v38->Flink = v39;
        *(_QWORD *)(a2 + 224) = Blink;
        Blink->Flink = v38;
        v39->Blink = v38;
      }
      ReadySummary = a1->ReadySummary;
      ++a1->ReadyThreadCount;
      a1->ReadySummary = ReadySummary | (1 << v14);
      result = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 1568) = result;
      a1->ReadyQueueExpectedRunTime += result;
      goto LABEL_25;
    }
    v16 = KeGetCurrentPrcb();
    SharedReadyQueue = a1->SharedReadyQueue;
    v18 = &SharedReadyQueue->ReadyListHead[v14];
    v60 = 0;
    v19 = v16->SchedulerAssist;
    if ( v19 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v54 = v19[6];
        v19[6] = v54 + 1;
        if ( v54 == -1 )
LABEL_97:
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)SharedReadyQueue, 0LL) )
    {
      v47 = v16->SchedulerAssist;
      if ( v47 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v55 = v47[6] - 1;
          v47[6] = v55;
          if ( !v55 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      do
        KeYieldProcessorEx(&v60, v10, a3, a4);
      while ( SharedReadyQueue->Lock );
      v48 = v16->SchedulerAssist;
      if ( v48 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v56 = v48[6];
          v48[6] = v56 + 1;
          if ( v56 == -1 )
            goto LABEL_97;
        }
      }
    }
    v20 = (struct _LIST_ENTRY *)(a2 + 216);
    if ( v7 )
    {
      v21 = v18->Flink;
      if ( v18->Flink->Blink == v18 )
      {
        v20->Flink = v21;
        *(_QWORD *)(a2 + 224) = v18;
        v21->Blink = v20;
        v18->Flink = v20;
        _bittestandreset(&a1->AffinitizedSelectionMask, v14);
LABEL_24:
        SharedReadyQueue->ReadySummary |= 1 << v14;
        *(_DWORD *)(a2 + 536) |= 0x80000000;
        ++SharedReadyQueue->ReadyThreadCount;
        result = *(unsigned int *)(a2 + 84);
        *(_DWORD *)(a2 + 1568) = result;
        SharedReadyQueue->ReadyQueueExpectedRunTime += result;
        _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        if ( v24 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            result = (unsigned int)(v24[6] - 1);
            v24[6] = result;
            if ( !(_DWORD)result )
              result = KiRemoveSystemWorkPriorityKick(v23);
          }
        }
        goto LABEL_25;
      }
    }
    else
    {
      v27 = v18->Blink;
      if ( v27->Flink == v18 )
      {
        v20->Flink = v18;
        *(_QWORD *)(a2 + 224) = v27;
        v27->Flink = v20;
        v18->Blink = v20;
        goto LABEL_24;
      }
    }
LABEL_107:
    __fastfail(3u);
  }
  NextThread = a1->NextThread;
  KiEnterDeferredReadyState(a2);
  _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
  v35 = KeGetCurrentPrcb();
  v36 = v35->SchedulerAssist;
  if ( v36 )
  {
    if ( v35->NestingLevel <= 1u )
    {
      v57 = v36[6] - 1;
      v36[6] = v57;
      if ( !v57 )
        KiRemoveSystemWorkPriorityKick(v35);
    }
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xCu);
  *(_BYTE *)(a2 + 565) = v7;
  v58 = (_QWORD *)(a2 + 216);
  *(_QWORD *)(a2 + 216) = 0LL;
  result = (__int64)KiReadyDeferredReadyList((__int64)a1, &v58, v33, v34);
  if ( !NextThread )
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
