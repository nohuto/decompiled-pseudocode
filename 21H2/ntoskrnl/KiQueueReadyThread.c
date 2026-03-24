/*
 * XREFs of KiQueueReadyThread @ 0x1402593B0
 * Callers:
 *     KeRemoveQueueEx @ 0x1402047D0 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x14021BC90 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x140230BD0 (KiProcessDeferredReadyList.c)
 *     KiReadyOutSwappedThreads @ 0x140248460 (KiReadyOutSwappedThreads.c)
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x140257CF0 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140258E60 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402783B4 (KiCheckForThreadDispatch.c)
 *     KiSchedulerApc @ 0x140279C00 (KiSchedulerApc.c)
 *     KeSetSchedulingGroupRankBias @ 0x140288488 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140293A50 (KiAbThreadUnboostCpuPriority.c)
 *     KeYieldExecution @ 0x14029E1B0 (KeYieldExecution.c)
 *     KeCpuSetReportParkedProcessors @ 0x1402AAD9C (KeCpuSetReportParkedProcessors.c)
 *     KeBoostPriorityThread @ 0x1402E2510 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x1402ECAF0 (KeSetLegacyAffinityThread.c)
 *     KiExitDispatcher @ 0x140343AC0 (KiExitDispatcher.c)
 *     KiAbForceProcessLockEntry @ 0x14038FA84 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x1403993CC (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C5FB4 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C60DC (KeUpdateThreadCpuSets.c)
 *     KxDispatchInterrupt @ 0x1404065E0 (KxDispatchInterrupt.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051C938 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CBE0 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E5C8 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x140520364 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14021FD40 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x1402295B0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     KiReadyDeferredReadyList @ 0x140230D60 (KiReadyDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x140230E50 (KiUpdateThreadPriority.c)
 *     KiEnterDeferredReadyState @ 0x140248780 (KiEnterDeferredReadyState.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x14024D500 (KiGetThreadEffectiveRankNonZero.c)
 *     KiTryScheduleNextForegroundBoost @ 0x140258DC8 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140258E10 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1402592D0 (KiComputeNewPriority.c)
 *     KiCheckThreadAffinity @ 0x140259384 (KiCheckThreadAffinity.c)
 *     KiCheckForMaxOverQuotaScb @ 0x1402599B8 (KiCheckForMaxOverQuotaScb.c)
 *     KiComputeGroupSchedulingRank @ 0x140259C40 (KiComputeGroupSchedulingRank.c)
 *     KiShouldPreemptionBeDeferred @ 0x14025A324 (KiShouldPreemptionBeDeferred.c)
 *     KiRequestSoftwareInterrupt @ 0x140293E54 (KiRequestSoftwareInterrupt.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiTryToAcquireThreadLock @ 0x1402AB270 (KiTryToAcquireThreadLock.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1402B62F0 (KiCheckMaxOverQuotaTransition.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1402EB83C (KiRemoveSchedulingGroupQueue.c)
 *     KiPrcbInGroupAffinity @ 0x1402EBA74 (KiPrcbInGroupAffinity.c)
 *     KiComputeThreadAffinity @ 0x1402EBAA0 (KiComputeThreadAffinity.c)
 *     KiAddThreadToScbQueue @ 0x1402EBCF4 (KiAddThreadToScbQueue.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1402EC8F0 (KiRecomputeGroupSchedulingRank.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051FC48 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceIdealProcessor @ 0x1405A7844 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiQueueReadyThread(__int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  unsigned int v7; // r12d
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rcx
  struct _KPRCB *v16; // rbp
  __int64 v17; // r14
  _QWORD *v18; // rsi
  _DWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 result; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rsi
  int v29; // r14d
  __int16 v30; // dx
  __int64 v31; // rcx
  __int64 v32; // rsi
  struct _KPRCB *v33; // rcx
  _DWORD *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // r10
  _QWORD *v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rdx
  int v40; // eax
  unsigned int v41; // r14d
  unsigned int v42; // ebp
  unsigned __int64 v43; // rdx
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
  _QWORD *v56; // [rsp+30h] [rbp-48h] BYREF
  bool v57; // [rsp+88h] [rbp+10h] BYREF
  int v58; // [rsp+90h] [rbp+18h] BYREF
  __int64 v59; // [rsp+98h] [rbp+20h]

  v4 = *(_QWORD *)(a2 + 72);
  v7 = *(unsigned __int8 *)(a2 + 565);
  if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 || v4 >= *(_QWORD *)(a2 + 32) )
  {
    if ( (unsigned __int8)KiTryToAcquireThreadLock(a2, 0LL) )
    {
      v41 = *(_DWORD *)(a2 + 588);
      if ( v4 >= *(_QWORD *)(a2 + 32) )
      {
        v42 = (char)KiComputeNewPriority(a2, 1);
        if ( !KiUpdateVPBackingThreadPriority(a2, 0LL, 0) )
          KiUpdateThreadPriority(0LL, a2, (_SINGLE_LIST_ENTRY *)v42, 0);
        v43 = v4 + (unsigned int)*(unsigned __int8 *)(a2 + 651) * KiCyclesPerClockQuantum;
        if ( (*(_DWORD *)(a2 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
        *(_QWORD *)(a2 + 32) = v43;
        KiTryScheduleNextForegroundBoost(a2);
        v7 = 0;
      }
      if ( !KiCheckThreadAffinity(a2)
        && (unsigned int)KiComputeThreadAffinity()
        && !(unsigned int)KiPrcbInGroupAffinity(a1, a2 + 576) )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
      }
      v44 = *(_DWORD *)(a2 + 588);
      KiReleaseThreadLockSafe(a2);
      if ( (xmmword_140CFC490 & 0x8000000) != 0 )
        EtwTraceIdealProcessor(a2, 1350LL, v41, v44);
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
    }
  }
  v8 = *(_QWORD *)(a2 + 104);
  v59 = v8;
  v9 = v8;
  if ( v8 )
  {
    v28 = *(unsigned int *)(a1 + 216) + v8;
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
          KiComputeGroupSchedulingRank(v9, a1, v28);
        }
        v29 += *(_DWORD *)(v28 + 116);
        v28 = *(_QWORD *)(v28 + 408);
        if ( !v28 )
          break;
        v9 = v28 - *(unsigned int *)(a1 + 216);
        v59 = v9;
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
  if ( *(char *)(a2 + 195) >= KiRebalanceMinPriority || (*(_BYTE *)(a1 + 35) & 2) != 0 )
  {
    v11 = *(_QWORD *)(a2 + 104);
    if ( !v11 || (v31 = *(unsigned int *)(a1 + 216) + v11) == 0 || !(unsigned __int8)KiCheckForMaxOverQuotaScb(v31) )
      v10 = *(_QWORD *)(a2 + 576) & **(_QWORD **)(a1 + 192);
  }
  if ( (*(_DWORD *)(a2 + 120) & 0x1000) == 0 && !v10 )
  {
    *(_BYTE *)(a2 + 565) = 0;
    *(_DWORD *)(a2 + 436) = MEMORY[0xFFFFF78000000320];
    v12 = *(_QWORD *)(a2 + 104);
    if ( v12 )
      v12 += *(unsigned int *)(a1 + 216);
    v13 = *(_QWORD *)(a1 + 33976);
    if ( v13 )
      *(_BYTE *)(v13 + 16) = 0;
    *(_BYTE *)(a2 + 388) = 1;
    v57 = 0;
    if ( v12
      && (*(_DWORD *)(a2 + 120) & 0xC00) == 0
      && (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v12, a3, 0, &v57) )
    {
      result = KiAddThreadToScbQueue(a1, v36, a2, v7);
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
    v14 = *(char *)(a2 + 195);
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
            v51 = (_QWORD *)qword_140C32008;
            v48 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
            if ( *(__int64 **)qword_140C32008 != &KiUpdateVpThreadPriorityListHead )
              goto LABEL_107;
            *v50 = &KiUpdateVpThreadPriorityListHead;
            *(_QWORD *)(a2 + 1016) = v51;
            *v51 = v50;
            qword_140C32008 = a2 + 1008;
          }
          KxReleaseSpinLock(&KiUpdateVpThreadPriorityLock);
          if ( v48 )
            KeInsertQueueDpc(&KiUpdateVpThreadPriorityDpc, 0LL, 0LL);
        }
      }
    }
    v15 = *(_QWORD *)(a1 + 33856);
    if ( (*(_DWORD *)(a2 + 120) & 0x2000) == 0 || !v15 || (v15 & *(_QWORD *)(a2 + 576)) != v15 || v57 )
    {
      v37 = (_QWORD *)(a2 + 216);
      v38 = (_QWORD *)(a1 + 16 * (v14 + 1992));
      if ( v7 )
      {
        v39 = *v38;
        if ( *(_QWORD **)(*v38 + 8LL) != v38 )
          goto LABEL_107;
        *v37 = v39;
        *(_QWORD *)(a2 + 224) = v38;
        *(_QWORD *)(v39 + 8) = v37;
        *v38 = v37;
        _bittestandset((signed __int32 *)(a1 + 31772), v14);
      }
      else
      {
        v47 = (_QWORD *)v38[1];
        if ( (_QWORD *)*v47 != v38 )
          goto LABEL_107;
        *v37 = v38;
        *(_QWORD *)(a2 + 224) = v47;
        *v47 = v37;
        v38[1] = v37;
      }
      v40 = *(_DWORD *)(a1 + 31768);
      ++*(_DWORD *)(a1 + 32436);
      *(_DWORD *)(a1 + 31768) = v40 | (1 << v14);
      result = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 1568) = result;
      *(_QWORD *)(a1 + 32440) += result;
      goto LABEL_25;
    }
    v16 = KeGetCurrentPrcb();
    v17 = *(_QWORD *)(a1 + 33864);
    v18 = (_QWORD *)(v17 + 16 * (v14 + 1));
    v58 = 0;
    v19 = v16->SchedulerAssist;
    if ( v19 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v52 = v19[6];
        v19[6] = v52 + 1;
        if ( v52 == -1 )
LABEL_97:
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
    {
      v45 = v16->SchedulerAssist;
      if ( v45 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v53 = v45[6] - 1;
          v45[6] = v53;
          if ( !v53 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      do
        KeYieldProcessorEx(&v58, v10, a3, a4);
      while ( *(_QWORD *)v17 );
      v46 = v16->SchedulerAssist;
      if ( v46 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v54 = v46[6];
          v46[6] = v54 + 1;
          if ( v54 == -1 )
            goto LABEL_97;
        }
      }
    }
    v20 = (_QWORD *)(a2 + 216);
    if ( v7 )
    {
      v21 = *v18;
      if ( *(_QWORD **)(*v18 + 8LL) == v18 )
      {
        *v20 = v21;
        *(_QWORD *)(a2 + 224) = v18;
        *(_QWORD *)(v21 + 8) = v20;
        *v18 = v20;
        _bittestandreset((signed __int32 *)(a1 + 31772), v14);
LABEL_24:
        *(_DWORD *)(v17 + 8) |= 1 << v14;
        *(_DWORD *)(a2 + 536) |= 0x80000000;
        ++*(_DWORD *)(v17 + 608);
        result = *(unsigned int *)(a2 + 84);
        *(_DWORD *)(a2 + 1568) = result;
        *(_QWORD *)(v17 + 616) += result;
        _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
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
      v27 = (_QWORD *)v18[1];
      if ( (_QWORD *)*v27 == v18 )
      {
        *v20 = v18;
        *(_QWORD *)(a2 + 224) = v27;
        *v27 = v20;
        v18[1] = v20;
        goto LABEL_24;
      }
    }
LABEL_107:
    __fastfail(3u);
  }
  v32 = *(_QWORD *)(a1 + 16);
  KiEnterDeferredReadyState(a2);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  v33 = KeGetCurrentPrcb();
  v34 = v33->SchedulerAssist;
  if ( v34 )
  {
    if ( v33->NestingLevel <= 1u )
    {
      v55 = v34[6] - 1;
      v34[6] = v55;
      if ( !v55 )
        KiRemoveSystemWorkPriorityKick(v33);
    }
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xCu);
  *(_BYTE *)(a2 + 565) = v7;
  v56 = (_QWORD *)(a2 + 216);
  *(_QWORD *)(a2 + 216) = 0LL;
  result = (__int64)KiReadyDeferredReadyList(a1, &v56);
  if ( !v32 )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 8) != result )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        LOBYTE(v35) = 2;
        return KiRequestSoftwareInterrupt(a1, v35);
      }
    }
  }
  return result;
}
