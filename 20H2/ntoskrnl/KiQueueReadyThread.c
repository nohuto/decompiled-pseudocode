/*
 * XREFs of KiQueueReadyThread @ 0x1402DC4D0
 * Callers:
 *     KeRemoveQueueEx @ 0x140207B10 (KeRemoveQueueEx.c)
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     PsImpersonateContainerOfThread @ 0x14027E130 (PsImpersonateContainerOfThread.c)
 *     KiReadyOutSwappedThreads @ 0x14028D410 (KiReadyOutSwappedThreads.c)
 *     KiProcessDeferredReadyList @ 0x1402BE630 (KiProcessDeferredReadyList.c)
 *     KiSchedulerApc @ 0x1402D7C50 (KiSchedulerApc.c)
 *     KiCheckForThreadDispatch @ 0x1402D82C4 (KiCheckForThreadDispatch.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x1402DAD50 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x1402DBEC0 (KeSetBasePriorityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x1402F7040 (KeCpuSetReportParkedProcessors.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402F7278 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetLegacyAffinityThread @ 0x1402F77F0 (KeSetLegacyAffinityThread.c)
 *     KeYieldExecution @ 0x140302FA0 (KeYieldExecution.c)
 *     KeBoostPriorityThread @ 0x140336FA0 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x14035E3E8 (KeSetSchedulingGroupRankBias.c)
 *     KiAbForceProcessLockEntry @ 0x14038F584 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140398F5C (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C55C4 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C56EC (KeUpdateThreadCpuSets.c)
 *     KxDispatchInterrupt @ 0x140403FD0 (KxDispatchInterrupt.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051AE58 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051B100 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051CAE8 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x14051E884 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14021E680 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x14027F670 (KeInsertQueueDpc.c)
 *     KiEnterDeferredReadyState @ 0x14028D730 (KiEnterDeferredReadyState.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x1402BE8B0 (KiUpdateThreadPriority.c)
 *     KiTryToAcquireThreadLock @ 0x1402D8D68 (KiTryToAcquireThreadLock.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1402D8DD8 (KiCheckMaxOverQuotaTransition.c)
 *     KiPrcbInGroupAffinity @ 0x1402D8E00 (KiPrcbInGroupAffinity.c)
 *     KiShouldPreemptionBeDeferred @ 0x1402D92A4 (KiShouldPreemptionBeDeferred.c)
 *     KiComputeGroupSchedulingRank @ 0x1402D92D0 (KiComputeGroupSchedulingRank.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402D9A24 (KiCheckForMaxOverQuotaScb.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1402DBE28 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402DBE70 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1402DC330 (KiComputeNewPriority.c)
 *     KiCheckThreadAffinity @ 0x1402DC3E4 (KiCheckThreadAffinity.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1402DF230 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F7EF4 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiComputeThreadAffinity @ 0x14033D398 (KiComputeThreadAffinity.c)
 *     KiRecomputeGroupSchedulingRank @ 0x14035E808 (KiRecomputeGroupSchedulingRank.c)
 *     KiRemoveSchedulingGroupQueue @ 0x14035EC30 (KiRemoveSchedulingGroupQueue.c)
 *     KiAddThreadToScbQueue @ 0x14035ECB8 (KiAddThreadToScbQueue.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051E168 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceIdealProcessor @ 0x1405A5E14 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiQueueReadyThread(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  struct _KPRCB *v15; // rbp
  __int64 v16; // r14
  _QWORD *v17; // rsi
  _DWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 result; // rax
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // rsi
  int v28; // r14d
  __int16 v29; // dx
  __int64 v30; // rcx
  __int64 v31; // rsi
  struct _KPRCB *v32; // rcx
  _DWORD *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r10
  _QWORD *v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rdx
  int v39; // eax
  unsigned int v40; // r14d
  unsigned int v41; // ebp
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // esi
  _DWORD *v45; // rcx
  _DWORD *v46; // rcx
  _QWORD *v47; // rdx
  bool v48; // si
  int GuestSchedulerAssistPriority; // eax
  _QWORD *v50; // rax
  _QWORD *v51; // rdx
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  _SINGLE_LIST_ENTRY v56; // [rsp+30h] [rbp-48h] BYREF
  char v57; // [rsp+88h] [rbp+10h] BYREF
  int v58; // [rsp+90h] [rbp+18h] BYREF
  __int64 v59; // [rsp+98h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 72);
  v6 = *(unsigned __int8 *)(a2 + 565);
  if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 || v3 >= *(_QWORD *)(a2 + 32) )
  {
    if ( KiTryToAcquireThreadLock(a2, 0LL) )
    {
      v40 = *(_DWORD *)(a2 + 588);
      if ( v3 >= *(_QWORD *)(a2 + 32) )
      {
        v41 = (char)KiComputeNewPriority(a2, 1);
        if ( !KiUpdateVPBackingThreadPriority(a2, 0LL, 0) )
          KiUpdateThreadPriority(0LL, a2, (_SINGLE_LIST_ENTRY *)v41, 0);
        v42 = v3 + (unsigned int)*(unsigned __int8 *)(a2 + 651) * KiCyclesPerClockQuantum;
        if ( (*(_DWORD *)(a2 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
        *(_QWORD *)(a2 + 32) = v42;
        KiTryScheduleNextForegroundBoost(a2);
        v6 = 0;
      }
      if ( !KiCheckThreadAffinity(a2)
        && (unsigned int)KiComputeThreadAffinity(v43)
        && !KiPrcbInGroupAffinity(a1, a2 + 576) )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
      }
      v44 = *(_DWORD *)(a2 + 588);
      KiReleaseThreadLockSafe(a2);
      if ( (xmmword_140CFC490 & 0x8000000) != 0 )
        EtwTraceIdealProcessor(a2, 1350LL, v40, v44);
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
    }
  }
  v7 = *(_QWORD *)(a2 + 104);
  v59 = v7;
  v8 = v7;
  if ( v7 )
  {
    v27 = *(unsigned int *)(a1 + 216) + v7;
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
          KiComputeGroupSchedulingRank(v8, a1, (__int64 *)v27);
        }
        v28 += *(_DWORD *)(v27 + 116);
        v27 = *(_QWORD *)(v27 + 408);
        if ( !v27 )
          break;
        v8 = v27 - *(unsigned int *)(a1 + 216);
        v59 = v8;
      }
      if ( (*(_DWORD *)(a2 + 120) & 0x200) == 0
        && *(char *)(a2 + 195) < 16
        && KiShouldPreemptionBeDeferred(a2)
        && v28
        && (v29 & 0xC00) == 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xBu);
      }
    }
  }
  v9 = 0LL;
  if ( *(char *)(a2 + 195) >= KiRebalanceMinPriority || (*(_BYTE *)(a1 + 35) & 2) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 104);
    if ( !v10 || (v30 = *(unsigned int *)(a1 + 216) + v10) == 0 || !KiCheckForMaxOverQuotaScb(v30) )
      v9 = *(_QWORD *)(a2 + 576) & **(_QWORD **)(a1 + 192);
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x1000) == 0 && !v9 )
  {
    *(_BYTE *)(a2 + 565) = 0;
    *(_DWORD *)(a2 + 436) = MEMORY[0xFFFFF78000000320];
    v11 = *(_QWORD *)(a2 + 104);
    if ( v11 )
      v11 += *(unsigned int *)(a1 + 216);
    v12 = *(_QWORD *)(a1 + 33976);
    if ( v12 )
      *(_BYTE *)(v12 + 16) = 0;
    *(_BYTE *)(a2 + 388) = 1;
    v57 = 0;
    if ( v11
      && (*(_DWORD *)(a2 + 120) & 0xC00) == 0
      && (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v11, a3, 0, (__int64)&v57) )
    {
      result = KiAddThreadToScbQueue(a1, v35, a2, v6);
LABEL_25:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist && CurrentPrcb->NestingLevel <= 1u )
      {
        result = (unsigned int)(SchedulerAssist[6] - 1);
        SchedulerAssist[6] = result;
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
        v48 = 0;
        GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(a2);
        if ( GuestSchedulerAssistPriority >= 16 )
          GuestSchedulerAssistPriority = 15;
        if ( GuestSchedulerAssistPriority != *(_DWORD *)(a2 + 1024) )
        {
          KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
          v50 = (_QWORD *)(a2 + 1008);
          if ( *(_QWORD *)(a2 + 1008) == 1LL )
          {
            v51 = (_QWORD *)qword_140C31DB8;
            v48 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
            if ( *(__int64 **)qword_140C31DB8 != &KiUpdateVpThreadPriorityListHead )
              goto LABEL_107;
            *v50 = &KiUpdateVpThreadPriorityListHead;
            *(_QWORD *)(a2 + 1016) = v51;
            *v51 = v50;
            qword_140C31DB8 = a2 + 1008;
          }
          KxReleaseSpinLock(&KiUpdateVpThreadPriorityLock);
          if ( v48 )
            KeInsertQueueDpc(&KiUpdateVpThreadPriorityDpc, 0LL, 0LL);
        }
      }
    }
    v14 = *(_QWORD *)(a1 + 33856);
    if ( (*(_DWORD *)(a2 + 120) & 0x2000) == 0 || !v14 || (v14 & *(_QWORD *)(a2 + 576)) != v14 || v57 )
    {
      v36 = (_QWORD *)(a2 + 216);
      v37 = (_QWORD *)(a1 + 16 * (v13 + 1992));
      if ( v6 )
      {
        v38 = *v37;
        if ( *(_QWORD **)(*v37 + 8LL) != v37 )
          goto LABEL_107;
        *v36 = v38;
        *(_QWORD *)(a2 + 224) = v37;
        *(_QWORD *)(v38 + 8) = v36;
        *v37 = v36;
        _bittestandset((signed __int32 *)(a1 + 31772), v13);
      }
      else
      {
        v47 = (_QWORD *)v37[1];
        if ( (_QWORD *)*v47 != v37 )
          goto LABEL_107;
        *v36 = v37;
        *(_QWORD *)(a2 + 224) = v47;
        *v47 = v36;
        v37[1] = v36;
      }
      v39 = *(_DWORD *)(a1 + 31768);
      ++*(_DWORD *)(a1 + 32436);
      *(_DWORD *)(a1 + 31768) = v39 | (1 << v13);
      result = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 1568) = result;
      *(_QWORD *)(a1 + 32440) += result;
      goto LABEL_25;
    }
    v15 = KeGetCurrentPrcb();
    v16 = *(_QWORD *)(a1 + 33864);
    v17 = (_QWORD *)(v16 + 16 * (v13 + 1));
    v58 = 0;
    v18 = v15->SchedulerAssist;
    if ( v18 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v52 = v18[6];
        v18[6] = v52 + 1;
        if ( v52 == -1 )
LABEL_97:
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
    {
      v45 = v15->SchedulerAssist;
      if ( v45 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v53 = v45[6] - 1;
          v45[6] = v53;
          if ( !v53 )
            KiRemoveSystemWorkPriorityKick(v15);
        }
      }
      do
        KeYieldProcessorEx(&v58);
      while ( *(_QWORD *)v16 );
      v46 = v15->SchedulerAssist;
      if ( v46 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v54 = v46[6];
          v46[6] = v54 + 1;
          if ( v54 == -1 )
            goto LABEL_97;
        }
      }
    }
    v19 = (_QWORD *)(a2 + 216);
    if ( v6 )
    {
      v20 = *v17;
      if ( *(_QWORD **)(*v17 + 8LL) == v17 )
      {
        *v19 = v20;
        *(_QWORD *)(a2 + 224) = v17;
        *(_QWORD *)(v20 + 8) = v19;
        *v17 = v19;
        _bittestandreset((signed __int32 *)(a1 + 31772), v13);
LABEL_24:
        *(_DWORD *)(v16 + 8) |= 1 << v13;
        *(_DWORD *)(a2 + 536) |= 0x80000000;
        ++*(_DWORD *)(v16 + 608);
        result = *(unsigned int *)(a2 + 84);
        *(_DWORD *)(a2 + 1568) = result;
        *(_QWORD *)(v16 + 616) += result;
        _InterlockedAnd64((volatile signed __int64 *)v16, 0LL);
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
      v26 = (_QWORD *)v17[1];
      if ( (_QWORD *)*v26 == v17 )
      {
        *v19 = v17;
        *(_QWORD *)(a2 + 224) = v26;
        *v26 = v19;
        v17[1] = v19;
        goto LABEL_24;
      }
    }
LABEL_107:
    __fastfail(3u);
  }
  v31 = *(_QWORD *)(a1 + 16);
  KiEnterDeferredReadyState(a2);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v32 = KeGetCurrentPrcb();
  v33 = v32->SchedulerAssist;
  if ( v33 )
  {
    if ( v32->NestingLevel <= 1u )
    {
      v55 = v33[6] - 1;
      v33[6] = v55;
      if ( !v55 )
        KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xCu);
  *(_BYTE *)(a2 + 565) = v6;
  v56.Next = (struct _SINGLE_LIST_ENTRY *)(a2 + 216);
  *(_QWORD *)(a2 + 216) = 0LL;
  result = (__int64)KiReadyDeferredReadyList(a1, &v56);
  if ( !v31 )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 8) != result )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        LOBYTE(v34) = 2;
        return KiRequestSoftwareInterrupt(a1, v34);
      }
    }
  }
  return result;
}
