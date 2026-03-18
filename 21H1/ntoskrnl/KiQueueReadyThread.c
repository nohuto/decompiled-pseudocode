/*
 * XREFs of KiQueueReadyThread @ 0x140333090
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x14020245C (KeCpuSetReportParkedProcessors.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KiReadyOutSwappedThreads @ 0x140244A20 (KiReadyOutSwappedThreads.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KeRemoveQueueEx @ 0x140268450 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x14026B3F0 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x14026D000 (KiProcessDeferredReadyList.c)
 *     KeBoostPriorityThread @ 0x1402C94E4 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x1402C9F30 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402DC40C (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140303FF4 (KiAbThreadUnboostCpuPriority.c)
 *     KiCheckForThreadDispatch @ 0x140329BD4 (KiCheckForThreadDispatch.c)
 *     KiQuantumEnd @ 0x1403312E0 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140332450 (KeSetBasePriorityThread.c)
 *     KeYieldExecution @ 0x1403366C0 (KeYieldExecution.c)
 *     KiSchedulerApc @ 0x1403564C0 (KiSchedulerApc.c)
 *     KiAbForceProcessLockEntry @ 0x14038C554 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140395ECC (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C1F94 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C20BC (KeUpdateThreadCpuSets.c)
 *     KxDispatchInterrupt @ 0x1403FCCC0 (KxDispatchInterrupt.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140516E38 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1405170E0 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140518AC8 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x14051A864 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiEnterDeferredReadyState @ 0x140244D40 (KiEnterDeferredReadyState.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     KiUpdateThreadPriority @ 0x14026D280 (KiUpdateThreadPriority.c)
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
 *     KxAcquireSpinLock @ 0x1402773A0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiTryScheduleNextForegroundBoost @ 0x1403323B8 (KiTryScheduleNextForegroundBoost.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140332400 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeNewPriority @ 0x1403328C0 (KiComputeNewPriority.c)
 *     KiCheckThreadAffinity @ 0x140332974 (KiCheckThreadAffinity.c)
 *     KiComputeGroupSchedulingRank @ 0x140332BC0 (KiComputeGroupSchedulingRank.c)
 *     KiCheckForMaxOverQuotaScb @ 0x140333674 (KiCheckForMaxOverQuotaScb.c)
 *     KiShouldPreemptionBeDeferred @ 0x1403338B4 (KiShouldPreemptionBeDeferred.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x140334740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiPrcbInGroupAffinity @ 0x140334898 (KiPrcbInGroupAffinity.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1403348C4 (KiCheckMaxOverQuotaTransition.c)
 *     KiTryToAcquireThreadLock @ 0x1403348EC (KiTryToAcquireThreadLock.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140334B94 (KiRecomputeGroupSchedulingRank.c)
 *     KiAddThreadToScbQueue @ 0x140335964 (KiAddThreadToScbQueue.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140336610 (KiRemoveSchedulingGroupQueue.c)
 *     KiComputeThreadAffinity @ 0x140337644 (KiComputeThreadAffinity.c)
 *     KiRequestSoftwareInterrupt @ 0x140359A48 (KiRequestSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051A148 (KiReadGuestSchedulerAssistPriority.c)
 *     EtwTraceIdealProcessor @ 0x1405A1C84 (EtwTraceIdealProcessor.c)
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
  __int64 v33; // r8
  __int64 v34; // r9
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // r10
  _QWORD *v39; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rdx
  int v42; // eax
  unsigned int v43; // r14d
  unsigned int v44; // ebp
  unsigned __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned int v47; // esi
  _DWORD *v48; // rcx
  _DWORD *v49; // rcx
  _QWORD *v50; // rdx
  bool v51; // si
  int GuestSchedulerAssistPriority; // eax
  _QWORD *v53; // rax
  _QWORD *v54; // rdx
  int v55; // eax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  ULONG_PTR v59[9]; // [rsp+30h] [rbp-48h] BYREF
  char v60; // [rsp+88h] [rbp+10h] BYREF
  int v61; // [rsp+90h] [rbp+18h] BYREF
  __int64 v62; // [rsp+98h] [rbp+20h]

  v4 = *(_QWORD *)(a2 + 72);
  v7 = *(unsigned __int8 *)(a2 + 565);
  if ( *(_QWORD *)(a2 + 568) != KiCpuSetSequence && (*(_DWORD *)(a2 + 116) & 8) == 0 || v4 >= *(_QWORD *)(a2 + 32) )
  {
    if ( (unsigned __int8)KiTryToAcquireThreadLock(a2, 0LL) )
    {
      v43 = *(_DWORD *)(a2 + 588);
      if ( v4 >= *(_QWORD *)(a2 + 32) )
      {
        v44 = (char)KiComputeNewPriority(a2, 1);
        if ( !KiUpdateVPBackingThreadPriority(a2, 0LL, 0) )
          KiUpdateThreadPriority(0LL, a2, (_SINGLE_LIST_ENTRY *)v44, 0);
        v45 = v4 + (unsigned int)*(unsigned __int8 *)(a2 + 651) * KiCyclesPerClockQuantum;
        if ( (*(_DWORD *)(a2 + 120) & 0x20) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 5u);
        *(_QWORD *)(a2 + 32) = v45;
        KiTryScheduleNextForegroundBoost(a2);
        v7 = 0;
      }
      if ( !KiCheckThreadAffinity(a2)
        && (unsigned int)KiComputeThreadAffinity(v46)
        && !(unsigned int)KiPrcbInGroupAffinity(a1, a2 + 576) )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
      }
      v47 = *(_DWORD *)(a2 + 588);
      KiReleaseThreadLockSafe(a2);
      if ( (xmmword_140CFC490 & 0x8000000) != 0 )
        EtwTraceIdealProcessor(a2, 1350LL, v43, v47);
    }
    else
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
    }
  }
  v8 = *(_QWORD *)(a2 + 104);
  v62 = v8;
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
        v62 = v9;
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
    v60 = 0;
    if ( v12
      && (*(_DWORD *)(a2 + 120) & 0xC00) == 0
      && (unsigned int)KiGetThreadEffectiveRankNonZero(a2, v12, a3, 0, (__int64)&v60) )
    {
      result = KiAddThreadToScbQueue(a1, v38, a2, v7);
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
        v51 = 0;
        GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(a2);
        if ( GuestSchedulerAssistPriority >= 16 )
          GuestSchedulerAssistPriority = 15;
        if ( GuestSchedulerAssistPriority != *(_DWORD *)(a2 + 1024) )
        {
          KxAcquireSpinLock(&KiUpdateVpThreadPriorityLock);
          v53 = (_QWORD *)(a2 + 1008);
          if ( *(_QWORD *)(a2 + 1008) == 1LL )
          {
            v54 = (_QWORD *)qword_140C31F18;
            v51 = KiUpdateVpThreadPriorityListHead == (_QWORD)&KiUpdateVpThreadPriorityListHead;
            if ( *(__int64 **)qword_140C31F18 != &KiUpdateVpThreadPriorityListHead )
              goto LABEL_107;
            *v53 = &KiUpdateVpThreadPriorityListHead;
            *(_QWORD *)(a2 + 1016) = v54;
            *v54 = v53;
            qword_140C31F18 = a2 + 1008;
          }
          KxReleaseSpinLock(&KiUpdateVpThreadPriorityLock);
          if ( v51 )
            KeInsertQueueDpc(&KiUpdateVpThreadPriorityDpc, 0LL, 0LL);
        }
      }
    }
    v15 = *(_QWORD *)(a1 + 33856);
    if ( (*(_DWORD *)(a2 + 120) & 0x2000) == 0 || !v15 || (v15 & *(_QWORD *)(a2 + 576)) != v15 || v60 )
    {
      v39 = (_QWORD *)(a2 + 216);
      v40 = (_QWORD *)(a1 + 16 * (v14 + 1992));
      if ( v7 )
      {
        v41 = *v40;
        if ( *(_QWORD **)(*v40 + 8LL) != v40 )
          goto LABEL_107;
        *v39 = v41;
        *(_QWORD *)(a2 + 224) = v40;
        *(_QWORD *)(v41 + 8) = v39;
        *v40 = v39;
        _bittestandset((signed __int32 *)(a1 + 31772), v14);
      }
      else
      {
        v50 = (_QWORD *)v40[1];
        if ( (_QWORD *)*v50 != v40 )
          goto LABEL_107;
        *v39 = v40;
        *(_QWORD *)(a2 + 224) = v50;
        *v50 = v39;
        v40[1] = v39;
      }
      v42 = *(_DWORD *)(a1 + 31768);
      ++*(_DWORD *)(a1 + 32436);
      *(_DWORD *)(a1 + 31768) = v42 | (1 << v14);
      result = *(unsigned int *)(a2 + 84);
      *(_DWORD *)(a2 + 1568) = result;
      *(_QWORD *)(a1 + 32440) += result;
      goto LABEL_25;
    }
    v16 = KeGetCurrentPrcb();
    v17 = *(_QWORD *)(a1 + 33864);
    v18 = (_QWORD *)(v17 + 16 * (v14 + 1));
    v61 = 0;
    v19 = v16->SchedulerAssist;
    if ( v19 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v55 = v19[6];
        v19[6] = v55 + 1;
        if ( v55 == -1 )
LABEL_97:
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
    {
      v48 = v16->SchedulerAssist;
      if ( v48 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v56 = v48[6] - 1;
          v48[6] = v56;
          if ( !v56 )
            KiRemoveSystemWorkPriorityKick(v16);
        }
      }
      do
        KeYieldProcessorEx(&v61, v10, a3, a4);
      while ( *(_QWORD *)v17 );
      v49 = v16->SchedulerAssist;
      if ( v49 )
      {
        if ( v16->NestingLevel <= 1u )
        {
          v57 = v49[6];
          v49[6] = v57 + 1;
          if ( v57 == -1 )
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
  v35 = KeGetCurrentPrcb();
  v36 = v35->SchedulerAssist;
  if ( v36 )
  {
    if ( v35->NestingLevel <= 1u )
    {
      v58 = v36[6] - 1;
      v36[6] = v58;
      if ( !v58 )
        KiRemoveSystemWorkPriorityKick(v35);
    }
  }
  _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xCu);
  *(_BYTE *)(a2 + 565) = v7;
  v59[0] = a2 + 216;
  *(_QWORD *)(a2 + 216) = 0LL;
  result = (__int64)KiReadyDeferredReadyList(a1, v59, v33, v34);
  if ( !v32 )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 8) != result )
    {
      if ( *(_QWORD *)(a1 + 16) )
      {
        LOBYTE(v37) = 2;
        return KiRequestSoftwareInterrupt(a1, v37);
      }
    }
  }
  return result;
}
