/*
 * XREFs of KiQueueReadyThread @ 0x14027A920
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x140205628 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402119C0 (KiAbThreadUnboostCpuPriority.c)
 *     KeYieldExecution @ 0x14021B710 (KeYieldExecution.c)
 *     KeCpuSetReportParkedProcessors @ 0x140228EDC (KeCpuSetReportParkedProcessors.c)
 *     KiCheckForThreadDispatch @ 0x140266354 (KiCheckForThreadDispatch.c)
 *     KiSchedulerApc @ 0x140267BA0 (KiSchedulerApc.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x140279260 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x14027A3D0 (KeSetBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x140293860 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x14029DE40 (KeSetLegacyAffinityThread.c)
 *     KeRemoveQueueEx @ 0x1402A9110 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x1402C0590 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x1402D5420 (KiProcessDeferredReadyList.c)
 *     KiReadyOutSwappedThreads @ 0x1402ECCB0 (KiReadyOutSwappedThreads.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KiAbForceProcessLockEntry @ 0x14038FBD4 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x14039951C (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C6154 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C627C (KeUpdateThreadCpuSets.c)
 *     KxDispatchInterrupt @ 0x1404067C0 (KxDispatchInterrupt.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051CB78 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CE20 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E808 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x1405205A4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiRequestSoftwareInterrupt @ 0x140211DC4 (KiRequestSoftwareInterrupt.c)
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiTryToAcquireThreadLock @ 0x1402293B0 (KiTryToAcquireThreadLock.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1402344D0 (KiCheckMaxOverQuotaTransition.c)
 *     KiTryScheduleNextForegroundBoost @ 0x14027A338 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14027A380 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x14027A840 (KiComputeNewPriority.c)
 *     KiCheckThreadAffinity @ 0x14027A8F4 (KiCheckThreadAffinity.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14027AF28 (KiCheckForMaxOverQuotaScb.c)
 *     KiComputeGroupSchedulingRank @ 0x14027B1B0 (KiComputeGroupSchedulingRank.c)
 *     KiShouldPreemptionBeDeferred @ 0x14027B894 (KiShouldPreemptionBeDeferred.c)
 *     KiRemoveSchedulingGroupQueue @ 0x14029CB8C (KiRemoveSchedulingGroupQueue.c)
 *     KiPrcbInGroupAffinity @ 0x14029CDC4 (KiPrcbInGroupAffinity.c)
 *     KiComputeThreadAffinity @ 0x14029CDF0 (KiComputeThreadAffinity.c)
 *     KiAddThreadToScbQueue @ 0x14029D044 (KiAddThreadToScbQueue.c)
 *     KiRecomputeGroupSchedulingRank @ 0x14029DC40 (KiRecomputeGroupSchedulingRank.c)
 *     KeInsertQueueDpc @ 0x1402C4640 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiReadyDeferredReadyList @ 0x1402D55B0 (KiReadyDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x1402D56A0 (KiUpdateThreadPriority.c)
 *     KiEnterDeferredReadyState @ 0x1402ECFD0 (KiEnterDeferredReadyState.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402F1D50 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051FE88 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceIdealProcessor @ 0x1405A7A74 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiQueueReadyThread(struct _KPRCB *a1, ULONG_PTR a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r10
  _BYTE *SchedulerAssist; // rax
  __int64 v13; // r15
  unsigned __int64 SharedReadyQueueMask; // rcx
  struct _KPRCB *v15; // rbp
  _KSHARED_READY_QUEUE *SharedReadyQueue; // r14
  _LIST_ENTRY *v17; // rsi
  _DWORD *v18; // rcx
  struct _LIST_ENTRY *v19; // rax
  struct _LIST_ENTRY *v20; // rcx
  __int64 result; // rax
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v25; // rdx
  struct _LIST_ENTRY *v26; // rcx
  __int64 v27; // rsi
  int v28; // r14d
  __int16 v29; // dx
  __int64 v30; // rcx
  _KTHREAD *NextThread; // rsi
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  __int64 v34; // r10
  struct _LIST_ENTRY *v35; // rcx
  _LIST_ENTRY *v36; // rax
  struct _LIST_ENTRY *Flink; // rdx
  unsigned int ReadySummary; // eax
  unsigned int v39; // r14d
  unsigned int v40; // ebp
  unsigned __int64 v41; // rdx
  unsigned int v42; // esi
  _DWORD *v43; // rcx
  _DWORD *v44; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  bool v46; // si
  int GuestSchedulerAssistPriority; // eax
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  ULONG_PTR v54[9]; // [rsp+30h] [rbp-48h] BYREF
  char v55; // [rsp+88h] [rbp+10h] BYREF
  int v56; // [rsp+90h] [rbp+18h] BYREF
  __int64 v57; // [rsp+98h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 72);
  v6 = *(unsigned __int8 *)(a2 + 565);
  if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 || v3 >= *(_QWORD *)(a2 + 32) )
  {
    if ( KiTryToAcquireThreadLock(a2, 0LL) )
    {
      v39 = *(_DWORD *)(a2 + 588);
      if ( v3 >= *(_QWORD *)(a2 + 32) )
      {
        v40 = (char)KiComputeNewPriority(a2, 1);
        if ( !KiUpdateVPBackingThreadPriority(a2, 0LL, 0) )
          KiUpdateThreadPriority(0LL, a2, v40, 0LL);
        v41 = v3 + (unsigned int)*(unsigned __int8 *)(a2 + 651) * KiCyclesPerClockQuantum;
        if ( (*(_DWORD *)(a2 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
        *(_QWORD *)(a2 + 32) = v41;
        KiTryScheduleNextForegroundBoost(a2);
        v6 = 0;
      }
      if ( !KiCheckThreadAffinity(a2)
        && (unsigned int)KiComputeThreadAffinity()
        && !(unsigned int)KiPrcbInGroupAffinity(a1, a2 + 576) )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
      }
      v42 = *(_DWORD *)(a2 + 588);
      KiReleaseThreadLockSafe(a2);
      if ( (xmmword_140CFC490 & 0x8000000) != 0 )
        EtwTraceIdealProcessor(a2, 1350LL, v39, v42);
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
    }
  }
  v7 = *(_QWORD *)(a2 + 104);
  v57 = v7;
  v8 = v7;
  if ( v7 )
  {
    v27 = a1->ScbOffset + v7;
    if ( v27 )
    {
      v28 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v27 + 112) & 4) != 0 )
        {
          if ( KiCheckMaxOverQuotaTransition(v27, v8) )
          {
            if ( (*(_BYTE *)(v27 + 112) & 1) != 0 )
            {
              LOBYTE(a3) = 1;
              KiRemoveSchedulingGroupQueue(a1, v27, a3);
            }
          }
          else if ( *(_QWORD *)v27 >= *(_QWORD *)(v27 + 24) && (*(_BYTE *)(v27 + 112) & 2) == 0 )
          {
            KiRecomputeGroupSchedulingRank(v8, v27, a1);
          }
        }
        else
        {
          KiComputeGroupSchedulingRank(v8, a1, v27);
        }
        v28 += *(_DWORD *)(v27 + 116);
        v27 = *(_QWORD *)(v27 + 408);
        if ( !v27 )
          break;
        v8 = v27 - a1->ScbOffset;
        v57 = v8;
      }
      if ( (*(_DWORD *)(a2 + 120) & 0x200) == 0
        && *(char *)(a2 + 195) < 16
        && (unsigned __int8)KiShouldPreemptionBeDeferred(a2)
        && v28
        && (v29 & 0xC00) == 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
      }
    }
  }
  v9 = 0LL;
  if ( *(char *)(a2 + 195) >= KiRebalanceMinPriority || (a1->IdleState & 2) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 104);
    if ( !v10 || (v30 = a1->ScbOffset + v10) == 0 || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v30) )
      v9 = *(_QWORD *)(a2 + 576) & a1->ParentNode->IdleNonParkedCpuSet;
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x1000) == 0 && !v9 )
  {
    *(_BYTE *)(a2 + 565) = 0;
    *(_DWORD *)(a2 + 436) = MEMORY[0xFFFFF78000000320];
    v11 = *(_QWORD *)(a2 + 104);
    if ( v11 )
      v11 += a1->ScbOffset;
    SchedulerAssist = a1->SchedulerAssist;
    if ( SchedulerAssist )
      SchedulerAssist[16] = 0;
    *(_BYTE *)(a2 + 388) = 1;
    v55 = 0;
    if ( v11
      && (*(_DWORD *)(a2 + 120) & 0xC00) == 0
      && (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v11, a3, 0, (__int64)&v55) )
    {
      result = KiAddThreadToScbQueue(a1, v34, a2, v6);
LABEL_25:
      _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
      CurrentPrcb = KeGetCurrentPrcb();
      v25 = CurrentPrcb->SchedulerAssist;
      if ( v25 && CurrentPrcb->NestingLevel <= 1u )
      {
        result = (unsigned int)(v25[6] - 1);
        v25[6] = result;
        if ( !(_DWORD)result )
          return KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      return result;
    }
    v13 = *(char *)(a2 + 195);
    if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    {
      _InterlockedOr(*(volatile signed __int32 **)(a2 + 968), 0x40000u);
      if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
      {
        v46 = 0;
        GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(a2);
        if ( GuestSchedulerAssistPriority >= 16 )
          GuestSchedulerAssistPriority = 15;
        if ( GuestSchedulerAssistPriority != *(_DWORD *)(a2 + 1024) )
        {
          KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
          v48 = (_QWORD *)(a2 + 1008);
          if ( *(_QWORD *)(a2 + 1008) == 1LL )
          {
            v49 = (_QWORD *)qword_140C31DC8;
            v46 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
            if ( *(__int64 **)qword_140C31DC8 != &KiUpdateVpThreadPriorityListHead )
              goto LABEL_107;
            *v48 = &KiUpdateVpThreadPriorityListHead;
            *(_QWORD *)(a2 + 1016) = v49;
            *v49 = v48;
            qword_140C31DC8 = a2 + 1008;
          }
          KxReleaseSpinLock(&KiUpdateVpThreadPriorityLock);
          if ( v46 )
            KeInsertQueueDpc(&KiUpdateVpThreadPriorityDpc, 0LL, 0LL);
        }
      }
    }
    SharedReadyQueueMask = a1->SharedReadyQueueMask;
    if ( (*(_DWORD *)(a2 + 120) & 0x2000) == 0
      || !SharedReadyQueueMask
      || (SharedReadyQueueMask & *(_QWORD *)(a2 + 576)) != SharedReadyQueueMask
      || v55 )
    {
      v35 = (struct _LIST_ENTRY *)(a2 + 216);
      v36 = &a1->DispatcherReadyListHead[v13];
      if ( v6 )
      {
        Flink = v36->Flink;
        if ( v36->Flink->Blink != v36 )
          goto LABEL_107;
        v35->Flink = Flink;
        *(_QWORD *)(a2 + 224) = v36;
        Flink->Blink = v35;
        v36->Flink = v35;
        _bittestandset(&a1->AffinitizedSelectionMask, v13);
      }
      else
      {
        Blink = v36->Blink;
        if ( Blink->Flink != v36 )
          goto LABEL_107;
        v35->Flink = v36;
        *(_QWORD *)(a2 + 224) = Blink;
        Blink->Flink = v35;
        v36->Blink = v35;
      }
      ReadySummary = a1->ReadySummary;
      ++a1->ReadyThreadCount;
      a1->ReadySummary = ReadySummary | (1 << v13);
      result = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 1568) = result;
      a1->ReadyQueueExpectedRunTime += result;
      goto LABEL_25;
    }
    v15 = KeGetCurrentPrcb();
    SharedReadyQueue = a1->SharedReadyQueue;
    v17 = &SharedReadyQueue->ReadyListHead[v13];
    v56 = 0;
    v18 = v15->SchedulerAssist;
    if ( v18 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v50 = v18[6];
        v18[6] = v50 + 1;
        if ( v50 == -1 )
LABEL_97:
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)SharedReadyQueue, 0LL) )
    {
      v43 = v15->SchedulerAssist;
      if ( v43 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v51 = v43[6] - 1;
          v43[6] = v51;
          if ( !v51 )
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      do
        KeYieldProcessorEx(&v56);
      while ( SharedReadyQueue->Lock );
      v44 = v15->SchedulerAssist;
      if ( v44 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v52 = v44[6];
          v44[6] = v52 + 1;
          if ( v52 == -1 )
            goto LABEL_97;
        }
      }
    }
    v19 = (struct _LIST_ENTRY *)(a2 + 216);
    if ( v6 )
    {
      v20 = v17->Flink;
      if ( v17->Flink->Blink == v17 )
      {
        v19->Flink = v20;
        *(_QWORD *)(a2 + 224) = v17;
        v20->Blink = v19;
        v17->Flink = v19;
        _bittestandreset(&a1->AffinitizedSelectionMask, v13);
LABEL_24:
        SharedReadyQueue->ReadySummary |= 1 << v13;
        *(_DWORD *)(a2 + 536) |= 0x80000000;
        ++SharedReadyQueue->ReadyThreadCount;
        result = *(unsigned int *)(a2 + 84);
        *(_DWORD *)(a2 + 1568) = result;
        SharedReadyQueue->ReadyQueueExpectedRunTime += result;
        _InterlockedAnd64((volatile signed __int64 *)SharedReadyQueue, 0LL);
        v22 = KeGetCurrentPrcb();
        v23 = v22->SchedulerAssist;
        if ( v23 )
        {
          if ( v22->NestingLevel <= 1u )
          {
            result = (unsigned int)(v23[6] - 1);
            v23[6] = result;
            if ( !(_DWORD)result )
              result = KiRemoveSystemWorkPriorityKick(v22);
          }
        }
        goto LABEL_25;
      }
    }
    else
    {
      v26 = v17->Blink;
      if ( v26->Flink == v17 )
      {
        v19->Flink = v17;
        *(_QWORD *)(a2 + 224) = v26;
        v26->Flink = v19;
        v17->Blink = v19;
        goto LABEL_24;
      }
    }
LABEL_107:
    __fastfail(3u);
  }
  NextThread = a1->NextThread;
  KiEnterDeferredReadyState(a2);
  _InterlockedAnd64((volatile signed __int64 *)&a1->PrcbLock, 0LL);
  v32 = KeGetCurrentPrcb();
  v33 = v32->SchedulerAssist;
  if ( v33 )
  {
    if ( v32->NestingLevel <= 1u )
    {
      v53 = v33[6] - 1;
      v33[6] = v53;
      if ( !v53 )
        KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xCu);
  *(_BYTE *)(a2 + 565) = v6;
  v54[0] = a2 + 216;
  *(_QWORD *)(a2 + 216) = 0LL;
  result = KiReadyDeferredReadyList(a1, v54);
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
