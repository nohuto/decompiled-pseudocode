/*
 * XREFs of KiSwapThread @ 0x14021C4C0
 * Callers:
 *     KiCommitThreadWait @ 0x14021BDA0 (KiCommitThreadWait.c)
 *     KeTerminateThread @ 0x1402D602C (KeTerminateThread.c)
 *     KiInSwapSingleProcess @ 0x1402FF0E0 (KiInSwapSingleProcess.c)
 * Callees:
 *     KiSearchForNewThreadOnProcessor @ 0x14021D160 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x14021D6F0 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x14021DA40 (KiAbProcessContextSwitch.c)
 *     KiCancelTimer @ 0x14021E0C0 (KiCancelTimer.c)
 *     KiSetVpThreadSpinLockCount @ 0x140221660 (KiSetVpThreadSpinLockCount.c)
 *     KiEnterDeferredReadyState @ 0x14028D730 (KiEnterDeferredReadyState.c)
 *     KiReadyDeferredReadyList @ 0x1402BE7C0 (KiReadyDeferredReadyList.c)
 *     KiStartThreadCycleAccumulation @ 0x1402BECC0 (KiStartThreadCycleAccumulation.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1402D8DD8 (KiCheckMaxOverQuotaTransition.c)
 *     KiComputeGroupSchedulingRank @ 0x1402D92D0 (KiComputeGroupSchedulingRank.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402DBE70 (KiUpdateVPBackingThreadPriority.c)
 *     KiDeliverApc @ 0x1402DDAB0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiIsThreadRankNonZero @ 0x1402DF180 (KiIsThreadRankNonZero.c)
 *     KiInsertDeferredPreemptionApc @ 0x1402EC410 (KiInsertDeferredPreemptionApc.c)
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1403055C0 (KiProcessThreadWaitList.c)
 *     KiRecomputeGroupSchedulingRank @ 0x14035E808 (KiRecomputeGroupSchedulingRank.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x14035EB30 (KiSelectThreadFromSchedulingGroup.c)
 *     KiRemoveSchedulingGroupQueue @ 0x14035EC30 (KiRemoveSchedulingGroupQueue.c)
 *     EtwTraceContextSwap @ 0x1403A95A0 (EtwTraceContextSwap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140403E60 (KiSwapContext.c)
 *     KiEndCounterAccumulation @ 0x14051A470 (KiEndCounterAccumulation.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x14051E450 (KiSendHeteroRescheduleIntRequest.c)
 *     KiSetSchedulerAssistPriority @ 0x14051EE74 (KiSetSchedulerAssistPriority.c)
 *     KiUpdateVpBackingRequiresPriorityKickState @ 0x14051F010 (KiUpdateVpBackingRequiresPriorityKickState.c)
 */

__int64 __fastcall KiSwapThread(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  char v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // rdi
  __int64 v15; // r11
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  int v22; // ecx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v25; // rdi
  __int64 v26; // rbp
  __int64 ready; // rdi
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // r10d
  int v32; // edx
  __int64 v33; // rax
  BOOL v34; // ebp
  int v35; // edx
  unsigned __int64 v36; // rdx
  __int64 v37; // rdi
  char v38; // cl
  int v39; // edi
  struct _KPRCB *v40; // rcx
  _DWORD *v41; // rdx
  __int64 v42; // r15
  unsigned __int64 v43; // r13
  char v44; // r10
  int v45; // edx
  __int64 v46; // r14
  __int64 v47; // r9
  __int64 v48; // r12
  __int64 v49; // r14
  struct _KPRCB *v50; // rdi
  _DWORD *v51; // rcx
  char v52; // cl
  __int64 v53; // rdx
  unsigned __int64 v54; // rbp
  char v55; // bl
  __int64 v56; // rdx
  char v57; // r14
  __int64 v58; // rbx
  unsigned __int64 v60; // rbp
  int v61; // edx
  unsigned __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  unsigned __int64 v65; // rbp
  int v66; // edx
  unsigned __int64 v67; // rcx
  int v68; // ecx
  unsigned __int64 v69; // rdx
  __int64 v70; // rax
  char v71; // cl
  __int64 v72; // rax
  unsigned __int64 v73; // rdx
  __int64 v74; // rcx
  _QWORD *i; // rcx
  char v76; // cl
  __int64 v77; // rdi
  int v78; // r14d
  __int64 v79; // r8
  _DWORD *v80; // rcx
  _DWORD *v81; // rcx
  char v82; // al
  __int64 v83; // rbp
  _DWORD *v84; // rcx
  _DWORD *v85; // rcx
  char v86; // al
  struct _KPRCB *v87; // rcx
  _DWORD *v88; // rdx
  struct _KPRCB *v89; // rdi
  _DWORD *v90; // rcx
  char v91; // al
  __int64 v92; // rax
  int v93; // eax
  int v94; // eax
  int v95; // eax
  unsigned __int64 v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // rax
  unsigned __int64 v99; // rcx
  unsigned __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rcx
  int v103; // eax
  int v104; // eax
  _DWORD *v105; // rcx
  int v106; // eax
  _DWORD *v107; // rcx
  int v108; // eax
  char IsThreadRankNonZero; // al
  __int64 v110; // rdx
  int v111; // eax
  __int64 v112; // rdx
  int v113; // eax
  int v114; // eax
  int v115; // eax
  struct _KPRCB *v116; // rcx
  _DWORD *v117; // rdx
  int v118; // eax
  struct _KPRCB *v119; // rbp
  _DWORD *v120; // rcx
  int v121; // eax
  _DWORD *v122; // rcx
  int v123; // eax
  _DWORD *v124; // rcx
  int v125; // eax
  __int64 v126; // rdx
  __int64 v127; // rdx
  struct _KPRCB *v128; // r14
  __int64 v129; // rdx
  ULONG_PTR v130; // rcx
  struct _KPRCB *v131; // rcx
  _DWORD *v132; // rdx
  bool v133; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v135; // rax
  _DWORD *v136; // r9
  int v137; // edx
  int v138; // [rsp+20h] [rbp-88h]
  int v139; // [rsp+20h] [rbp-88h]
  int v140; // [rsp+24h] [rbp-84h]
  __int64 v141; // [rsp+28h] [rbp-80h]
  int v142; // [rsp+30h] [rbp-78h] BYREF
  int v143; // [rsp+34h] [rbp-74h]
  int v144; // [rsp+38h] [rbp-70h] BYREF
  int v145; // [rsp+3Ch] [rbp-6Ch]
  int v146; // [rsp+40h] [rbp-68h] BYREF
  int v147; // [rsp+44h] [rbp-64h] BYREF
  int v148; // [rsp+48h] [rbp-60h] BYREF
  __int64 v149; // [rsp+50h] [rbp-58h]
  __int64 v150; // [rsp+58h] [rbp-50h] BYREF
  char v151; // [rsp+B0h] [rbp+8h]
  __int64 v152; // [rsp+B0h] [rbp+8h]
  int v154; // [rsp+C8h] [rbp+20h]

  if ( *(_QWORD *)(a2 + 11528) )
    KiProcessThreadWaitList(a2, 1LL, 0LL, 2LL);
  KiAbProcessContextSwitch(a1, 0LL);
  _disable();
  *(_BYTE *)(a2 + 32) = 1;
  v5 = __rdtsc();
  v6 = v5 - *(_QWORD *)(a2 + 32448);
  v7 = v6 + *(unsigned int *)(a1 + 80);
  *(_QWORD *)(a1 + 72) += v6;
  if ( v7 > 0xFFFFFFFF )
    LODWORD(v7) = -1;
  *(_QWORD *)(a2 + 32448) = v5;
  v8 = *(_BYTE *)(a1 + 2);
  *(_DWORD *)(a1 + 80) = v7;
  if ( (v8 & 0x3E) != 0 )
  {
    if ( (v8 & 0x10) != 0 )
    {
      *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(a1 + 124) + 32464) += *(_QWORD *)(a2 + 32448)
                                                                      - *(_QWORD *)(a2 + 32456);
      v8 &= ~0x10u;
      *(_QWORD *)(a2 + 32456) = 0LL;
    }
    if ( (v8 & 0x20) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 1528);
      if ( v9 )
      {
        v10 = *(_QWORD *)(a2 + 33128);
        v11 = *(_QWORD *)(a2 + 33136);
        if ( v10 && v11 )
        {
          if ( *(_BYTE *)(v11 + 100) )
          {
            v12 = *(_DWORD *)(v11 + 116);
          }
          else
          {
            v12 = *(_DWORD *)(v11 + 72);
            if ( v12 >= *(_DWORD *)(v10 + 368) )
              v12 = *(_DWORD *)(v10 + 368);
          }
        }
        else
        {
          v12 = 100;
        }
        if ( v12 < 0x4B )
          v13 = v12 / 0x19;
        else
          v13 = 3;
        v14 = *(unsigned __int8 *)(a2 + 33208);
        v15 = v13;
        v16 = v14 + 2LL * v13;
        v17 = *(_QWORD *)(v9 + 8 * v16);
        v18 = (_QWORD *)(v9 + 8 * v16);
        v19 = KiTimelineBitmapTime;
        *v18 = v6 + v17;
        v20 = *(_DWORD *)(v9 + 192);
        if ( v19 > v20 )
        {
          LODWORD(v152) = v19;
          if ( v19 - v20 >= 0x20 )
            HIDWORD(v152) = 1;
          else
            HIDWORD(v152) = (*(_DWORD *)(v9 + 196) << (v19 - v20)) | 1;
          *(_QWORD *)(v9 + 192) = v152;
        }
        else
        {
          v21 = v20 - v19;
          if ( v21 < 0x20 )
            *(_DWORD *)(v9 + 196) |= 1 << v21;
        }
        if ( !KiEfficiencyClassSystem && (unsigned __int8)*(_DWORD *)(a1 + 512) == 2 )
          *(_QWORD *)(v9 + 16 * v15 + 8) += v6;
        if ( *(_QWORD *)(a1 + 1472) )
        {
          *(_QWORD *)(v9 + 8 * (v14 + 16 + 2 * v15)) += v6;
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 1472) + 1528LL) + 8 * (v14 + 8 + 2 * v15)),
            v6);
        }
      }
      v8 &= ~0x20u;
    }
    if ( (v8 & 0x40) != 0 )
    {
      v92 = *(_QWORD *)(a1 + 968);
      if ( v92 )
        *(_BYTE *)(v92 + 64) = 0;
      v8 &= ~0x40u;
    }
    if ( (v8 & 0x3E) != 0 )
    {
      v74 = *(_QWORD *)(a1 + 104);
      if ( v74 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a2 + 216) + v74); i; i = (_QWORD *)i[51] )
          *i += v6;
      }
      if ( (*(_BYTE *)(a1 + 2) & 8) != 0
        && (*(_QWORD *)(a1 + 576) & *(_QWORD *)(*(_QWORD *)(a2 + 192) + 136LL)) != *(_QWORD *)(*(_QWORD *)(a2 + 192)
                                                                                             + 136LL) )
      {
        *(_QWORD *)(a2 + 32488) += v6;
      }
      if ( *(_BYTE *)(a1 + 125) )
      {
        if ( (unsigned __int8)*(_DWORD *)(a1 + 512) == 2 )
          *(_QWORD *)(a2 + 32504) += v6;
        else
          *(_QWORD *)(a2 + 32496) += v6;
      }
      if ( *(_QWORD *)(a1 + 360) )
        KiEndCounterAccumulation(a1);
    }
  }
  _enable();
  v22 = (*(_DWORD *)(a1 + 80) >> 1) + (*(_DWORD *)(a1 + 84) >> 1);
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = v22;
  CurrentPrcb = KeGetCurrentPrcb();
  v142 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v93 = SchedulerAssist[6];
      SchedulerAssist[6] = v93 + 1;
      if ( v93 == -1 )
LABEL_192:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
  {
    v84 = CurrentPrcb->SchedulerAssist;
    if ( v84 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v94 = v84[6] - 1;
        v84[6] = v94;
        if ( !v94 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v142);
    while ( *(_QWORD *)(a2 + 48) );
    v85 = CurrentPrcb->SchedulerAssist;
    if ( v85 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v95 = v85[6];
        v85[6] = v95 + 1;
        if ( v95 == -1 )
          goto LABEL_192;
      }
    }
  }
  v25 = *(_QWORD *)(a1 + 104);
  v149 = v25;
  v26 = v25;
  if ( v25 )
  {
    v77 = *(unsigned int *)(a2 + 216) + v25;
    if ( v77 )
    {
      v78 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v77 + 112) & 4) != 0 )
        {
          if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v77, v26) )
          {
            if ( (*(_BYTE *)(v77 + 112) & 1) != 0 )
            {
              LOBYTE(v79) = 1;
              KiRemoveSchedulingGroupQueue(a2, v77, v79);
            }
          }
          else if ( *(_QWORD *)v77 >= *(_QWORD *)(v77 + 24) && (*(_BYTE *)(v77 + 112) & 2) == 0 )
          {
            KiRecomputeGroupSchedulingRank(v26, v77, a2);
          }
        }
        else
        {
          KiComputeGroupSchedulingRank(v26, a2, v77);
        }
        v78 += *(_DWORD *)(v77 + 116);
        v77 = *(_QWORD *)(v77 + 408);
        if ( !v77 )
          break;
        v26 = v77 - *(unsigned int *)(a2 + 216);
        v149 = v26;
      }
    }
  }
  ready = *(_QWORD *)(a2 + 16);
  if ( ready )
  {
LABEL_126:
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = ready;
    if ( *(_BYTE *)(ready + 388) == 1 )
      goto LABEL_133;
    goto LABEL_127;
  }
  while ( 1 )
  {
    ready = KiSelectReadyThread(1LL, a2);
    if ( ready )
      goto LABEL_128;
    v143 = 0;
    if ( !KiPerfIsoEnabled
      || (v96 = **(_QWORD **)(a2 + 192) - ((**(_QWORD **)(a2 + 192) >> 1) & 0x5555555555555555LL),
          (unsigned int)((0x101010101010101LL
                        * (((v96 & 0x3333333333333333LL)
                          + ((v96 >> 2) & 0x3333333333333333LL)
                          + (((v96 & 0x3333333333333333LL) + ((v96 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled)
      && ((v97 = *(_QWORD *)(a2 + 200), v98 = *(_QWORD *)(a2 + 33880), v97 == v98)
       || (v99 = v98 & ~v97, (*(_QWORD *)(*(_QWORD *)(a2 + 192) + 24LL) & v99) != 0)
       || (_BitScanForward64(&v100, v99),
           v101 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 208) + (int)v100],
           v143 = v101,
           (*(_DWORD *)(KiProcessorBlock[v101] + 236) & 0x400) != 0)) )
    {
      ready = 0LL;
      v28 = *(_QWORD *)(a2 + 31864);
      if ( (v28 & 1) == 0 )
      {
        v29 = *(_QWORD *)(a2 + 31864);
        goto LABEL_36;
      }
      if ( v28 != 1 )
      {
        v29 = v28 ^ ((a2 + 31856) | 1);
LABEL_36:
        while ( v29 )
        {
          v83 = v29 - 88;
          ready = KiSelectThreadFromSchedulingGroup(a2, v29 - 88, 0LL);
          if ( ready )
            break;
          v102 = *(_QWORD *)(v83 + 400);
          if ( (v102 & 1) != 0 )
          {
            if ( v102 == 1 )
              goto LABEL_38;
            v29 = v102 ^ ((v83 + 392) | 1);
          }
          else
          {
            v29 = *(_QWORD *)(v83 + 400);
          }
        }
        if ( ready )
          goto LABEL_128;
      }
    }
LABEL_38:
    ready = KiSelectReadyThread(0LL, a2);
    if ( !ready )
    {
      v30 = *(_QWORD *)(a2 + 192);
      v31 = 1;
      v32 = *(unsigned __int8 *)(a2 + 35);
      v33 = *(_QWORD *)(a2 + 33976);
      v34 = *(_BYTE *)(a2 + 35) == 7;
      if ( v33 )
        *(_BYTE *)(v33 + 16) = 1;
      *(_BYTE *)(a2 + 12587) = 0;
      if ( (v32 & 1) != 0 )
      {
        v35 = v32 - 1;
        *(_BYTE *)(a2 + 35) = v35;
        if ( !v35 )
          _interlockedbittestandset64((volatile signed __int32 *)v30, *(unsigned __int8 *)(a2 + 209));
        _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), *(unsigned __int8 *)(a2 + 209));
        v36 = *(_QWORD *)(a2 + 33880);
        if ( (*(_QWORD *)(v30 + 24) & v36) == v36 )
        {
          _InterlockedOr64((volatile signed __int64 *)(v30 + 8), v36);
        }
        else
        {
          v73 = *(_QWORD *)(a2 + 33880) & ~*(_QWORD *)(v30 + 24);
          if ( ((v73 - 1) & v73) == 0 )
            _InterlockedOr64((volatile signed __int64 *)(v30 + 16), v73);
        }
        _interlockedbittestandreset64((volatile signed __int32 *)(v30 + 16), *(unsigned __int8 *)(a2 + 209));
      }
      v37 = *(_QWORD *)(a2 + 24);
      if ( (*(_BYTE *)(v37 + 2) & 4) != 0 )
      {
        IsThreadRankNonZero = KiIsThreadRankNonZero(*(_QWORD *)(a2 + 24), a2);
        v38 = 1;
        if ( !IsThreadRankNonZero )
          v38 = *(_BYTE *)(v37 + 195);
        v31 = 1;
      }
      else
      {
        v38 = *(_BYTE *)(v37 + 195);
      }
      **(_BYTE **)(a2 + 56) = v38;
      if ( *(_QWORD *)(a2 + 33976) )
      {
        v110 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v37 != *(_QWORD *)(a2 + 24) )
          v110 = (unsigned int)v38;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v110, 0LL);
      }
      v39 = 0;
      if ( (*(_BYTE *)(a2 + 35) & 2) != 0 )
        v39 = v31;
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
      v40 = KeGetCurrentPrcb();
      v41 = v40->SchedulerAssist;
      if ( v41 )
      {
        if ( v40->NestingLevel <= 1u )
        {
          v111 = v41[6] - 1;
          v41[6] = v111;
          if ( !v111 )
            KiRemoveSystemWorkPriorityKick(v40);
        }
      }
      if ( !v39 || v34 )
      {
        v42 = *(_QWORD *)(a2 + 192);
        v140 = 0;
        LODWORD(v43) = *(_DWORD *)(v42 + 128);
        v145 = *(unsigned __int16 *)(v42 + 146);
LABEL_55:
        v44 = *(_BYTE *)(a2 + 209);
        v45 = *(unsigned __int8 *)(a2 + 208);
        v46 = *(_QWORD *)(v42 + 136);
        v47 = *(_QWORD *)(v42 + 152);
        v48 = v46;
        v151 = v44;
        v154 = v45;
        v141 = v47;
        if ( v42 == *(_QWORD *)(a2 + 192) )
        {
          v47 ^= *(_QWORD *)(a2 + 33856);
          v46 ^= *(_QWORD *)(a2 + 200);
          v141 = v47;
          if ( (KiCacheAwareScheduling & 2) != 0 )
            v48 &= *(_QWORD *)(a2 + 33896);
        }
        v49 = ~*(_QWORD *)(v42 + 24) & v46;
        while ( 1 )
        {
          if ( !v49 && !v47 )
          {
            v43 = (unsigned int)v43 & (unsigned __int64)~(1LL << *(_WORD *)(v42 + 146));
            if ( (_DWORD)v43 )
            {
              while ( 1 )
              {
                v68 = v140 + 1;
                v140 = v68;
                if ( v68 == (unsigned __int16)KeNumberNodes )
                  break;
                v69 = *(unsigned int *)(qword_140C4DD18
                                      + 4LL * ((unsigned int)(unsigned __int16)KeNumberNodes * v145 + v68));
                if ( (_DWORD)v69 == -1 )
                  break;
                v70 = (unsigned int)v43;
                if ( _bittest64(&v70, v69) )
                {
                  v42 = KeNodeBlock[v69];
                  goto LABEL_55;
                }
              }
            }
            goto LABEL_62;
          }
          if ( (v47 & v48) != 0 )
            break;
LABEL_88:
          if ( (v49 & v48) != 0 )
          {
            v65 = __ROR8__(v49 & v48, v44);
            v66 = v45 << 6;
            v139 = v66;
            do
            {
              _BitScanForward64(&v67, v65);
              v65 ^= 1LL << v67;
              ready = KiSearchForNewThreadOnProcessor(
                        a2,
                        KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v66 + (((_BYTE)v67 + v44) & 0x3F)]],
                        0LL);
              if ( ready )
                goto LABEL_72;
              v66 = v139;
              v44 = v151;
            }
            while ( v65 );
          }
          v47 = v141;
          v44 = v151;
          v49 &= ~v48;
          v48 = *(_QWORD *)(v42 + 136);
          v45 = v154;
        }
        v60 = __ROR8__(v47 & v48, v44);
        v61 = v45 << 6;
        v138 = v61;
        while ( 1 )
        {
          _BitScanForward64(&v62, v60);
          v63 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v61 + ((v44 + (_BYTE)v62) & 0x3F)]];
          v64 = *(_QWORD *)(v63 + 33856);
          v141 = ~v64 & v47;
          v60 &= __ROR8__(~v64, v44);
          ready = KiSearchForNewThreadOnProcessor(a2, 0LL, *(_QWORD *)(v63 + 33864));
          if ( ready )
            goto LABEL_72;
          v47 = v141;
          v61 = v138;
          v44 = v151;
          if ( !v60 )
          {
            v45 = v154;
            goto LABEL_88;
          }
        }
      }
LABEL_62:
      v50 = KeGetCurrentPrcb();
      v146 = 0;
      v51 = v50->SchedulerAssist;
      if ( v51 )
      {
        if ( v50->NestingLevel <= 1u )
        {
          v113 = v51[6];
          v51[6] = v113 + 1;
          if ( v113 == -1 )
LABEL_244:
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
      {
        v80 = v50->SchedulerAssist;
        if ( v80 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v114 = v80[6] - 1;
            v80[6] = v114;
            if ( !v114 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
        do
          KeYieldProcessorEx(&v146);
        while ( *(_QWORD *)(a2 + 48) );
        v81 = v50->SchedulerAssist;
        if ( v81 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v115 = v81[6];
            v81[6] = v115 + 1;
            if ( v115 == -1 )
              goto LABEL_244;
          }
        }
      }
      ready = *(_QWORD *)(a2 + 16);
      if ( !ready )
      {
        ready = *(_QWORD *)(a2 + 24);
        if ( !KeHeteroSystem || KeHeteroSystemVirtual )
          goto LABEL_66;
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
        v116 = KeGetCurrentPrcb();
        v117 = v116->SchedulerAssist;
        if ( v117 )
        {
          if ( v116->NestingLevel <= 1u )
          {
            v118 = v117[6] - 1;
            v117[6] = v118;
            if ( !v118 )
              KiRemoveSystemWorkPriorityKick(v116);
          }
        }
        KiSendHeteroRescheduleIntRequest(a2);
        v119 = KeGetCurrentPrcb();
        v147 = 0;
        v120 = v119->SchedulerAssist;
        if ( v120 )
        {
          if ( v119->NestingLevel <= 1u )
          {
            v121 = v120[6];
            v120[6] = v121 + 1;
            if ( v121 == -1 )
LABEL_259:
              KiRemoveSystemWorkPriorityKick(v119);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
        {
          v122 = v119->SchedulerAssist;
          if ( v122 )
          {
            if ( v119->NestingLevel <= 1u )
            {
              v123 = v122[6] - 1;
              v122[6] = v123;
              if ( !v123 )
                KiRemoveSystemWorkPriorityKick(v119);
            }
          }
          do
            KeYieldProcessorEx(&v147);
          while ( *(_QWORD *)(a2 + 48) );
          v124 = v119->SchedulerAssist;
          if ( v124 )
          {
            if ( v119->NestingLevel <= 1u )
            {
              v125 = v124[6];
              v124[6] = v125 + 1;
              if ( v125 == -1 )
                goto LABEL_259;
            }
          }
        }
        if ( !*(_QWORD *)(a2 + 16) )
          goto LABEL_66;
        ready = *(_QWORD *)(a2 + 16);
      }
      *(_QWORD *)(a2 + 16) = 0LL;
LABEL_66:
      if ( (*(_BYTE *)(ready + 2) & 4) == 0 || (v86 = KiIsThreadRankNonZero(ready, a2), v52 = 1, !v86) )
        v52 = *(_BYTE *)(ready + 195);
      **(_BYTE **)(a2 + 56) = v52;
      if ( *(_QWORD *)(a2 + 33976) )
      {
        v126 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( ready != *(_QWORD *)(a2 + 24) )
          v126 = (unsigned int)v52;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v126, 0LL);
      }
      *(_QWORD *)(a2 + 8) = ready;
      if ( *(_BYTE *)(ready + 388) == 1 )
        *(_DWORD *)(ready + 132) = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(ready + 388) = 2;
      goto LABEL_72;
    }
LABEL_128:
    if ( *(_QWORD *)(ready + 568) == KiCpuSetSequence || (*(_DWORD *)(ready + 116) & 8) != 0 )
      break;
    KiEnterDeferredReadyState(ready);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    v87 = KeGetCurrentPrcb();
    v88 = v87->SchedulerAssist;
    if ( v88 )
    {
      if ( v87->NestingLevel <= 1u )
      {
        v103 = v88[6] - 1;
        v88[6] = v103;
        if ( !v103 )
          KiRemoveSystemWorkPriorityKick(v87);
      }
    }
    *(_QWORD *)(ready + 216) = 0LL;
    v150 = ready + 216;
    KiReadyDeferredReadyList(a2, &v150);
    v89 = KeGetCurrentPrcb();
    v144 = 0;
    v90 = v89->SchedulerAssist;
    if ( v90 )
    {
      if ( v89->NestingLevel <= 1u )
      {
        v104 = v90[6];
        v90[6] = v104 + 1;
        if ( v104 == -1 )
LABEL_218:
          KiRemoveSystemWorkPriorityKick(v89);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
    {
      v105 = v89->SchedulerAssist;
      if ( v105 )
      {
        if ( v89->NestingLevel <= 1u )
        {
          v106 = v105[6] - 1;
          v105[6] = v106;
          if ( !v106 )
            KiRemoveSystemWorkPriorityKick(v89);
        }
      }
      do
        KeYieldProcessorEx(&v144);
      while ( *(_QWORD *)(a2 + 48) );
      v107 = v89->SchedulerAssist;
      if ( v107 )
      {
        if ( v89->NestingLevel <= 1u )
        {
          v108 = v107[6];
          v107[6] = v108 + 1;
          if ( v108 == -1 )
            goto LABEL_218;
        }
      }
    }
    ready = *(_QWORD *)(a2 + 16);
    if ( ready )
      goto LABEL_126;
  }
  if ( (*(_BYTE *)(ready + 2) & 4) == 0 || (v82 = KiIsThreadRankNonZero(ready, a2), v76 = 1, !v82) )
    v76 = *(_BYTE *)(ready + 195);
  **(_BYTE **)(a2 + 56) = v76;
  if ( *(_QWORD *)(a2 + 33976) )
  {
    v112 = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( ready != *(_QWORD *)(a2 + 24) )
      v112 = (unsigned int)v76;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v112, 0LL);
  }
  *(_QWORD *)(a2 + 8) = ready;
  if ( *(_BYTE *)(ready + 388) == 1 )
LABEL_133:
    *(_DWORD *)(ready + 132) = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
LABEL_127:
  *(_BYTE *)(ready + 388) = 2;
LABEL_72:
  if ( ready != *(_QWORD *)(a2 + 24) && ready != a1 && *(_BYTE *)(ready + 113) )
  {
    if ( (*(_BYTE *)(ready + 2) & 4) == 0 || (v91 = KiIsThreadRankNonZero(ready, a2), v71 = 1, !v91) )
      v71 = *(_BYTE *)(ready + 195);
    **(_BYTE **)(a2 + 56) = v71;
    v72 = *(_QWORD *)(a2 + 33976);
    if ( v72 )
    {
      v127 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( ready != *(_QWORD *)(a2 + 24) )
        v127 = (unsigned int)v71;
      KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v127, 0LL);
      v72 = *(_QWORD *)(a2 + 33976);
    }
    *(_QWORD *)(a2 + 16) = ready;
    if ( v72 )
      *(_BYTE *)(v72 + 16) = ready == *(_QWORD *)(a2 + 24);
    if ( *(_BYTE *)(ready + 388) == 1 )
      *(_DWORD *)(ready + 132) = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(ready + 388) = 3;
    ready = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 8) = ready;
    if ( *(_BYTE *)(ready + 388) == 1 )
      *(_DWORD *)(ready + 132) = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(ready + 388) = 2;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
  KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  v54 = *(unsigned __int8 *)(a1 + 390);
  if ( a1 == ready )
  {
    v57 = *(_BYTE *)(ready + 193) && !*(_WORD *)(ready + 486) && !(_BYTE)v54;
    _disable();
    KiStartThreadCycleAccumulation(a2, ready, 0LL);
    _enable();
    if ( (*(_DWORD *)(ready + 120) & 0x800) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(ready + 120), 0xBu);
      KiInsertDeferredPreemptionApc(a2, ready, 0LL);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
      EtwTraceContextSwap(a1, a1);
  }
  else
  {
    v55 = 0;
    if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 && *(_BYTE *)(a1 + 388) == 5 && *(_BYTE *)(a1 + 793) )
    {
      v128 = KeGetCurrentPrcb();
      v148 = 0;
      while ( 1 )
      {
        LOBYTE(v53) = 1;
        KiSetVpThreadSpinLockCount(v128, v53);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v128, 0LL);
        do
          KeYieldProcessorEx(&v148);
        while ( *(_QWORD *)(a1 + 64) );
      }
      if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 && *(_BYTE *)(a1 + 388) == 5 )
      {
        LOBYTE(v129) = 1;
        KiUpdateVpBackingRequiresPriorityKickState(a1, v129);
        KiUpdateVPBackingThreadPriority(v130);
        v55 = 1;
      }
      KiReleaseThreadLockSafe(a1);
    }
    v57 = KiSwapContext(a1, ready, (unsigned __int8)v54);
    if ( v55 )
      KiUpdateVpBackingRequiresPriorityKickState(a1, 0LL);
  }
  v58 = *(_QWORD *)(a1 + 200);
  if ( _bittestandreset((signed __int32 *)(a1 + 116), 9u) )
  {
    LOBYTE(v56) = 1;
    if ( !(unsigned __int8)KiCancelTimer(a1 + 256, v56) )
    {
      *(_BYTE *)(a1 + 481) = 4;
      *(_QWORD *)(a1 + 264) = a1 + 464;
      *(_QWORD *)(a1 + 272) = a1 + 464;
    }
  }
  if ( a3 )
    *a3 = *(_QWORD *)(a1 + 976);
  if ( v57 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v131 = KeGetCurrentPrcb();
        v132 = v131->SchedulerAssist;
        v133 = (v132[5] & 0xFFFF0003) == 0;
        v132[5] &= 0xFFFF0003;
        if ( v133 )
          KiRemoveSystemWorkPriorityKick(v131);
      }
    }
    __writecr8(1uLL);
    KiDeliverApc(0LL, 0LL, 0LL);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v54 <= 0xFu && CurrentIrql >= 2u )
      {
        v135 = KeGetCurrentPrcb();
        v136 = v135->SchedulerAssist;
        v137 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v54 + 1));
        v133 = (v137 & v136[5]) == 0;
        v136[5] &= v137;
        if ( v133 )
          KiRemoveSystemWorkPriorityKick(v135);
      }
    }
  }
  __writecr8(v54);
  return v58;
}
