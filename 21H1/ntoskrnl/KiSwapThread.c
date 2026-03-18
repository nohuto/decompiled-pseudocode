/*
 * XREFs of KiSwapThread @ 0x140265350
 * Callers:
 *     KiCommitThreadWait @ 0x140264C30 (KiCommitThreadWait.c)
 *     KiInSwapSingleProcess @ 0x1402EF380 (KiInSwapSingleProcess.c)
 *     KeTerminateThread @ 0x140355A18 (KeTerminateThread.c)
 * Callees:
 *     KiProcessThreadWaitList @ 0x1402443B0 (KiProcessThreadWaitList.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiEnterDeferredReadyState @ 0x140244D40 (KiEnterDeferredReadyState.c)
 *     KiSetVpThreadSpinLockCount @ 0x140261600 (KiSetVpThreadSpinLockCount.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140265FF0 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x140266580 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x1402668D0 (KiAbProcessContextSwitch.c)
 *     KiCancelTimer @ 0x140266F50 (KiCancelTimer.c)
 *     KiDeliverApc @ 0x140267B30 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x14026D190 (KiReadyDeferredReadyList.c)
 *     KiStartThreadCycleAccumulation @ 0x14026D690 (KiStartThreadCycleAccumulation.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140332400 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeGroupSchedulingRank @ 0x140332BC0 (KiComputeGroupSchedulingRank.c)
 *     KiIsThreadRankNonZero @ 0x140334690 (KiIsThreadRankNonZero.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1403348C4 (KiCheckMaxOverQuotaTransition.c)
 *     KiRecomputeGroupSchedulingRank @ 0x140334B94 (KiRecomputeGroupSchedulingRank.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x140336510 (KiSelectThreadFromSchedulingGroup.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140336610 (KiRemoveSchedulingGroupQueue.c)
 *     KiInsertDeferredPreemptionApc @ 0x14035707C (KiInsertDeferredPreemptionApc.c)
 *     EtwTraceContextSwap @ 0x1403AA7B0 (EtwTraceContextSwap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FCB50 (KiSwapContext.c)
 *     KiEndCounterAccumulation @ 0x140516450 (KiEndCounterAccumulation.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x14051A430 (KiSendHeteroRescheduleIntRequest.c)
 *     KiSetSchedulerAssistPriority @ 0x14051AE54 (KiSetSchedulerAssistPriority.c)
 *     KiUpdateVpBackingRequiresPriorityKickState @ 0x14051AFF0 (KiUpdateVpBackingRequiresPriorityKickState.c)
 */

__int64 __fastcall KiSwapThread(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // edx
  __int64 v15; // rdi
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // rcx
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
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  int v33; // r10d
  int v34; // edx
  __int64 v35; // rax
  BOOL v36; // ebp
  int v37; // edx
  unsigned __int64 v38; // rdx
  __int64 v39; // rdi
  char v40; // cl
  int v41; // edi
  struct _KPRCB *v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // r15
  unsigned __int64 v45; // r13
  char v46; // r10
  __int64 v47; // r14
  __int64 v48; // r12
  __int64 v49; // r14
  struct _KPRCB *v50; // rdi
  _DWORD *v51; // rcx
  char v52; // cl
  unsigned __int64 v53; // rbp
  char v54; // bl
  __int64 v55; // rdx
  char v56; // r14
  __int64 v57; // rbx
  unsigned __int64 v59; // rbp
  int v60; // edx
  unsigned __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  unsigned __int64 v64; // rbp
  int v65; // edx
  unsigned __int64 v66; // rcx
  int v67; // ecx
  __int64 v68; // rax
  char v69; // cl
  __int64 v70; // rax
  unsigned __int64 v71; // rdx
  __int64 v72; // rcx
  _QWORD *i; // rcx
  char v74; // cl
  __int64 v75; // rdi
  int v76; // r14d
  __int64 v77; // r8
  _DWORD *v78; // rcx
  _DWORD *v79; // rcx
  char v80; // al
  __int64 v81; // rbp
  _DWORD *v82; // rcx
  _DWORD *v83; // rcx
  char v84; // al
  struct _KPRCB *v85; // rcx
  _DWORD *v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  struct _KPRCB *v90; // rdi
  _DWORD *v91; // rcx
  char v92; // al
  __int64 v93; // rax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  unsigned __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rax
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rcx
  int v104; // eax
  int v105; // eax
  _DWORD *v106; // rcx
  int v107; // eax
  _DWORD *v108; // rcx
  int v109; // eax
  char IsThreadRankNonZero; // al
  __int64 v111; // rdx
  int v112; // eax
  __int64 v113; // rdx
  int v114; // eax
  int v115; // eax
  int v116; // eax
  struct _KPRCB *v117; // rcx
  _DWORD *v118; // rdx
  int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  struct _KPRCB *v123; // rbp
  _DWORD *v124; // rcx
  int v125; // eax
  _DWORD *v126; // rcx
  int v127; // eax
  _DWORD *v128; // rcx
  int v129; // eax
  __int64 v130; // rdx
  __int64 v131; // rdx
  struct _KPRCB *v132; // r14
  __int64 v133; // rdx
  __int64 v134; // rdx
  __int64 v135; // r8
  __int64 v136; // r9
  ULONG_PTR v137; // rcx
  struct _KPRCB *v138; // rcx
  _DWORD *v139; // rdx
  bool v140; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v142; // rax
  _DWORD *v143; // r9
  int v144; // edx
  int v145; // [rsp+20h] [rbp-88h]
  int v146; // [rsp+20h] [rbp-88h]
  int v147; // [rsp+24h] [rbp-84h]
  __int64 v148; // [rsp+28h] [rbp-80h]
  int v149; // [rsp+30h] [rbp-78h] BYREF
  int v150; // [rsp+34h] [rbp-74h]
  int v151; // [rsp+38h] [rbp-70h] BYREF
  int v152; // [rsp+3Ch] [rbp-6Ch]
  int v153; // [rsp+40h] [rbp-68h] BYREF
  int v154; // [rsp+44h] [rbp-64h] BYREF
  int v155; // [rsp+48h] [rbp-60h] BYREF
  __int64 v156; // [rsp+50h] [rbp-58h]
  __int64 v157; // [rsp+58h] [rbp-50h] BYREF
  char v158; // [rsp+B0h] [rbp+8h]
  __int64 v159; // [rsp+B0h] [rbp+8h]
  unsigned int v161; // [rsp+C8h] [rbp+20h]

  if ( *(_QWORD *)(a2 + 11528) )
    KiProcessThreadWaitList(a2, 1LL, 0LL, 2LL);
  KiAbProcessContextSwitch(a1, 0LL);
  _disable();
  *(_BYTE *)(a2 + 32) = 1;
  v6 = __rdtsc();
  v7 = v6 - *(_QWORD *)(a2 + 32448);
  v8 = v7 + *(unsigned int *)(a1 + 80);
  *(_QWORD *)(a1 + 72) += v7;
  v9 = 0xFFFFFFFFLL;
  if ( v8 > 0xFFFFFFFF )
    LODWORD(v8) = -1;
  *(_QWORD *)(a2 + 32448) = v6;
  v10 = *(unsigned __int8 *)(a1 + 2);
  *(_DWORD *)(a1 + 80) = v8;
  if ( (v10 & 0x3E) != 0 )
  {
    if ( (v10 & 0x10) != 0 )
    {
      v9 = *(_QWORD *)(a2 + 32448) - *(_QWORD *)(a2 + 32456);
      *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(a1 + 124) + 32464) += v9;
      LOBYTE(v10) = v10 & 0xEF;
      *(_QWORD *)(a2 + 32456) = 0LL;
    }
    if ( (v10 & 0x20) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 1528);
      if ( v5 )
      {
        v11 = *(_QWORD *)(a2 + 33128);
        v12 = *(_QWORD *)(a2 + 33136);
        if ( v11 && v12 )
        {
          if ( *(_BYTE *)(v12 + 100) )
          {
            v13 = *(_DWORD *)(v12 + 116);
          }
          else
          {
            v13 = *(_DWORD *)(v12 + 72);
            if ( v13 >= *(_DWORD *)(v11 + 368) )
              v13 = *(_DWORD *)(v11 + 368);
          }
        }
        else
        {
          v13 = 100;
        }
        if ( v13 < 0x4B )
          v14 = v13 / 0x19;
        else
          v14 = 3;
        v15 = *(unsigned __int8 *)(a2 + 33208);
        v16 = v14;
        v17 = v15 + 2LL * v14;
        v18 = *(_QWORD *)(v5 + 8 * v17);
        v9 = v5 + 8 * v17;
        v19 = KiTimelineBitmapTime;
        *(_QWORD *)v9 = v7 + v18;
        v20 = *(_DWORD *)(v5 + 192);
        if ( v19 > v20 )
        {
          LODWORD(v159) = v19;
          v9 = v19 - v20;
          if ( (unsigned int)v9 >= 0x20 )
            HIDWORD(v159) = 1;
          else
            HIDWORD(v159) = (*(_DWORD *)(v5 + 196) << (v19 - v20)) | 1;
          *(_QWORD *)(v5 + 192) = v159;
        }
        else
        {
          v21 = v20 - v19;
          if ( v21 < 0x20 )
            *(_DWORD *)(v5 + 196) |= 1 << v21;
        }
        if ( !KiEfficiencyClassSystem && (unsigned __int8)*(_DWORD *)(a1 + 512) == 2 )
        {
          v9 = 2 * v16;
          *(_QWORD *)(v5 + 16 * v16 + 8) += v7;
        }
        if ( *(_QWORD *)(a1 + 1472) )
        {
          *(_QWORD *)(v5 + 8 * (v15 + 16 + 2 * v16)) += v7;
          v9 = *(_QWORD *)(*(_QWORD *)(a1 + 1472) + 1528LL) + 8 * (v15 + 8 + 2 * v16);
          _InterlockedExchangeAdd64((volatile signed __int64 *)v9, v7);
        }
      }
      LOBYTE(v10) = v10 & 0xDF;
    }
    if ( (v10 & 0x40) != 0 )
    {
      v93 = *(_QWORD *)(a1 + 968);
      if ( v93 )
        *(_BYTE *)(v93 + 64) = 0;
      LOBYTE(v10) = v10 & 0xBF;
    }
    if ( (v10 & 0x3E) != 0 )
    {
      v72 = *(_QWORD *)(a1 + 104);
      if ( v72 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a2 + 216) + v72); i; i = (_QWORD *)i[51] )
          *i += v7;
      }
      if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 136LL);
        if ( (*(_QWORD *)(a1 + 576) & v9) != v9 )
          *(_QWORD *)(a2 + 32488) += v7;
      }
      if ( *(_BYTE *)(a1 + 125) )
      {
        if ( (unsigned __int8)*(_DWORD *)(a1 + 512) == 2 )
          *(_QWORD *)(a2 + 32504) += v7;
        else
          *(_QWORD *)(a2 + 32496) += v7;
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
  v149 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v94 = SchedulerAssist[6];
      SchedulerAssist[6] = v94 + 1;
      if ( v94 == -1 )
LABEL_193:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
  {
    v82 = CurrentPrcb->SchedulerAssist;
    if ( v82 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v95 = v82[6] - 1;
        v82[6] = v95;
        if ( !v95 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v149, v9, v10, v5);
    while ( *(_QWORD *)(a2 + 48) );
    v83 = CurrentPrcb->SchedulerAssist;
    if ( v83 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v96 = v83[6];
        v83[6] = v96 + 1;
        if ( v96 == -1 )
          goto LABEL_193;
      }
    }
  }
  v25 = *(_QWORD *)(a1 + 104);
  v156 = v25;
  v26 = v25;
  if ( v25 )
  {
    v75 = *(unsigned int *)(a2 + 216) + v25;
    if ( v75 )
    {
      v76 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v75 + 112) & 4) != 0 )
        {
          if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v75, v26) )
          {
            if ( (*(_BYTE *)(v75 + 112) & 1) != 0 )
            {
              LOBYTE(v77) = 1;
              KiRemoveSchedulingGroupQueue(a2, v75, v77);
            }
          }
          else if ( *(_QWORD *)v75 >= *(_QWORD *)(v75 + 24) && (*(_BYTE *)(v75 + 112) & 2) == 0 )
          {
            KiRecomputeGroupSchedulingRank(v26, v75, a2);
          }
        }
        else
        {
          KiComputeGroupSchedulingRank(v26, a2, v75);
        }
        v76 += *(_DWORD *)(v75 + 116);
        v75 = *(_QWORD *)(v75 + 408);
        if ( !v75 )
          break;
        v26 = v75 - *(unsigned int *)(a2 + 216);
        v156 = v26;
      }
    }
  }
  ready = *(_QWORD *)(a2 + 16);
  if ( ready )
  {
LABEL_127:
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 8) = ready;
    if ( *(_BYTE *)(ready + 388) == 1 )
      goto LABEL_134;
    goto LABEL_128;
  }
  while ( 1 )
  {
    ready = KiSelectReadyThread(1LL, a2);
    if ( ready )
      goto LABEL_129;
    v150 = 0;
    if ( !KiPerfIsoEnabled
      || (v97 = **(_QWORD **)(a2 + 192) - ((**(_QWORD **)(a2 + 192) >> 1) & 0x5555555555555555LL),
          (unsigned int)((0x101010101010101LL
                        * (((v97 & 0x3333333333333333LL)
                          + ((v97 >> 2) & 0x3333333333333333LL)
                          + (((v97 & 0x3333333333333333LL) + ((v97 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled)
      && ((v98 = *(_QWORD *)(a2 + 200), v99 = *(_QWORD *)(a2 + 33880), v98 == v99)
       || (v100 = v99 & ~v98, (*(_QWORD *)(*(_QWORD *)(a2 + 192) + 24LL) & v100) != 0)
       || (_BitScanForward64(&v101, v100),
           v102 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 208) + (int)v101],
           v150 = v102,
           (*(_DWORD *)(KiProcessorBlock[v102] + 236) & 0x400) != 0)) )
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
          v81 = v29 - 88;
          ready = KiSelectThreadFromSchedulingGroup(a2, v29 - 88, 0LL);
          if ( ready )
            break;
          v103 = *(_QWORD *)(v81 + 400);
          if ( (v103 & 1) != 0 )
          {
            if ( v103 == 1 )
              goto LABEL_38;
            v29 = v103 ^ ((v81 + 392) | 1);
          }
          else
          {
            v29 = *(_QWORD *)(v81 + 400);
          }
        }
        if ( ready )
          goto LABEL_129;
      }
    }
LABEL_38:
    ready = KiSelectReadyThread(0LL, a2);
    if ( !ready )
    {
      v32 = *(_QWORD *)(a2 + 192);
      v33 = 1;
      v34 = *(unsigned __int8 *)(a2 + 35);
      v35 = *(_QWORD *)(a2 + 33976);
      v36 = *(_BYTE *)(a2 + 35) == 7;
      if ( v35 )
        *(_BYTE *)(v35 + 16) = 1;
      *(_BYTE *)(a2 + 12587) = 0;
      if ( (v34 & 1) != 0 )
      {
        v37 = v34 - 1;
        *(_BYTE *)(a2 + 35) = v37;
        if ( !v37 )
          _interlockedbittestandset64((volatile signed __int32 *)v32, *(unsigned __int8 *)(a2 + 209));
        _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), *(unsigned __int8 *)(a2 + 209));
        v38 = *(_QWORD *)(a2 + 33880);
        if ( (v38 & *(_QWORD *)(v32 + 24)) == v38 )
        {
          _InterlockedOr64((volatile signed __int64 *)(v32 + 8), v38);
        }
        else
        {
          v71 = *(_QWORD *)(a2 + 33880) & ~*(_QWORD *)(v32 + 24);
          if ( ((v71 - 1) & v71) == 0 )
            _InterlockedOr64((volatile signed __int64 *)(v32 + 16), v71);
        }
        _interlockedbittestandreset64((volatile signed __int32 *)(v32 + 16), *(unsigned __int8 *)(a2 + 209));
      }
      v39 = *(_QWORD *)(a2 + 24);
      if ( (*(_BYTE *)(v39 + 2) & 4) != 0 )
      {
        IsThreadRankNonZero = KiIsThreadRankNonZero(*(_QWORD *)(a2 + 24), a2);
        v40 = 1;
        if ( !IsThreadRankNonZero )
          v40 = *(_BYTE *)(v39 + 195);
        v33 = 1;
      }
      else
      {
        v40 = *(_BYTE *)(v39 + 195);
      }
      **(_BYTE **)(a2 + 56) = v40;
      if ( *(_QWORD *)(a2 + 33976) )
      {
        v111 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v39 != *(_QWORD *)(a2 + 24) )
          v111 = (unsigned int)v40;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v111, 0LL);
      }
      v41 = 0;
      if ( (*(_BYTE *)(a2 + 35) & 2) != 0 )
        v41 = v33;
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
      v42 = KeGetCurrentPrcb();
      v43 = (unsigned __int64)v42->SchedulerAssist;
      if ( v43 )
      {
        if ( v42->NestingLevel <= 1u )
        {
          v112 = *(_DWORD *)(v43 + 24) - 1;
          *(_DWORD *)(v43 + 24) = v112;
          if ( !v112 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
      if ( !v41 || v36 )
      {
        v44 = *(_QWORD *)(a2 + 192);
        v147 = 0;
        LODWORD(v45) = *(_DWORD *)(v44 + 128);
        v152 = *(unsigned __int16 *)(v44 + 146);
LABEL_55:
        v46 = *(_BYTE *)(a2 + 209);
        v43 = *(unsigned __int8 *)(a2 + 208);
        v47 = *(_QWORD *)(v44 + 136);
        v31 = *(_QWORD *)(v44 + 152);
        v48 = v47;
        v158 = v46;
        v161 = *(unsigned __int8 *)(a2 + 208);
        v148 = v31;
        if ( v44 == *(_QWORD *)(a2 + 192) )
        {
          v31 ^= *(_QWORD *)(a2 + 33856);
          v47 ^= *(_QWORD *)(a2 + 200);
          v148 = v31;
          if ( (KiCacheAwareScheduling & 2) != 0 )
            v48 &= *(_QWORD *)(a2 + 33896);
        }
        v49 = ~*(_QWORD *)(v44 + 24) & v47;
        while ( 1 )
        {
          if ( !v49 && !v31 )
          {
            v45 = (unsigned int)v45 & (unsigned __int64)~(1LL << *(_WORD *)(v44 + 146));
            if ( (_DWORD)v45 )
            {
              v30 = (unsigned __int16)KeNumberNodes;
              while ( 1 )
              {
                v67 = v147 + 1;
                v147 = v67;
                if ( v67 == (unsigned __int16)KeNumberNodes )
                  break;
                v43 = *(unsigned int *)(qword_140C4DDD8
                                      + 4LL * ((unsigned int)(unsigned __int16)KeNumberNodes * v152 + v67));
                if ( (_DWORD)v43 == -1 )
                  break;
                v68 = (unsigned int)v45;
                if ( _bittest64(&v68, v43) )
                {
                  v44 = KeNodeBlock[v43];
                  goto LABEL_55;
                }
              }
            }
            goto LABEL_62;
          }
          if ( (v31 & v48) != 0 )
            break;
LABEL_88:
          if ( (v49 & v48) != 0 )
          {
            v64 = __ROR8__(v49 & v48, v46);
            v65 = (_DWORD)v43 << 6;
            v146 = v65;
            do
            {
              _BitScanForward64(&v66, v64);
              v64 ^= 1LL << v66;
              ready = KiSearchForNewThreadOnProcessor(
                        a2,
                        KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v65 + (((_BYTE)v66 + v46) & 0x3F)]],
                        0LL);
              if ( ready )
                goto LABEL_72;
              v65 = v146;
              v46 = v158;
            }
            while ( v64 );
          }
          v31 = v148;
          v46 = v158;
          v49 &= ~v48;
          v48 = *(_QWORD *)(v44 + 136);
          v43 = v161;
        }
        v59 = __ROR8__(v31 & v48, v46);
        v60 = (_DWORD)v43 << 6;
        v145 = v60;
        while ( 1 )
        {
          _BitScanForward64(&v61, v59);
          v62 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v60 + ((v46 + (_BYTE)v61) & 0x3F)]];
          v63 = *(_QWORD *)(v62 + 33856);
          v148 = ~v63 & v31;
          v59 &= __ROR8__(~v63, v46);
          ready = KiSearchForNewThreadOnProcessor(a2, 0LL, *(_QWORD *)(v62 + 33864));
          if ( ready )
            goto LABEL_72;
          v31 = v148;
          v60 = v145;
          v46 = v158;
          if ( !v59 )
          {
            LODWORD(v43) = v161;
            goto LABEL_88;
          }
        }
      }
LABEL_62:
      v50 = KeGetCurrentPrcb();
      v153 = 0;
      v51 = v50->SchedulerAssist;
      if ( v51 )
      {
        if ( v50->NestingLevel <= 1u )
        {
          v114 = v51[6];
          v51[6] = v114 + 1;
          if ( v114 == -1 )
LABEL_245:
            KiRemoveSystemWorkPriorityKick(v50);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
      {
        v78 = v50->SchedulerAssist;
        if ( v78 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v115 = v78[6] - 1;
            v78[6] = v115;
            if ( !v115 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
        do
          KeYieldProcessorEx(&v153, v43, v30, v31);
        while ( *(_QWORD *)(a2 + 48) );
        v79 = v50->SchedulerAssist;
        if ( v79 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v116 = v79[6];
            v79[6] = v116 + 1;
            if ( v116 == -1 )
              goto LABEL_245;
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
        v117 = KeGetCurrentPrcb();
        v118 = v117->SchedulerAssist;
        if ( v118 )
        {
          if ( v117->NestingLevel <= 1u )
          {
            v119 = v118[6] - 1;
            v118[6] = v119;
            if ( !v119 )
              KiRemoveSystemWorkPriorityKick(v117);
          }
        }
        KiSendHeteroRescheduleIntRequest(a2);
        v123 = KeGetCurrentPrcb();
        v154 = 0;
        v124 = v123->SchedulerAssist;
        if ( v124 )
        {
          if ( v123->NestingLevel <= 1u )
          {
            v125 = v124[6];
            v124[6] = v125 + 1;
            if ( v125 == -1 )
LABEL_260:
              KiRemoveSystemWorkPriorityKick(v123);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
        {
          v126 = v123->SchedulerAssist;
          if ( v126 )
          {
            if ( v123->NestingLevel <= 1u )
            {
              v127 = v126[6] - 1;
              v126[6] = v127;
              if ( !v127 )
                KiRemoveSystemWorkPriorityKick(v123);
            }
          }
          do
            KeYieldProcessorEx(&v154, v120, v121, v122);
          while ( *(_QWORD *)(a2 + 48) );
          v128 = v123->SchedulerAssist;
          if ( v128 )
          {
            if ( v123->NestingLevel <= 1u )
            {
              v129 = v128[6];
              v128[6] = v129 + 1;
              if ( v129 == -1 )
                goto LABEL_260;
            }
          }
        }
        if ( !*(_QWORD *)(a2 + 16) )
          goto LABEL_66;
        ready = *(_QWORD *)(a2 + 16);
      }
      *(_QWORD *)(a2 + 16) = 0LL;
LABEL_66:
      if ( (*(_BYTE *)(ready + 2) & 4) == 0 || (v84 = KiIsThreadRankNonZero(ready, a2), v52 = 1, !v84) )
        v52 = *(_BYTE *)(ready + 195);
      **(_BYTE **)(a2 + 56) = v52;
      if ( *(_QWORD *)(a2 + 33976) )
      {
        v130 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( ready != *(_QWORD *)(a2 + 24) )
          v130 = (unsigned int)v52;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v130, 0LL);
      }
      *(_QWORD *)(a2 + 8) = ready;
      if ( *(_BYTE *)(ready + 388) == 1 )
        *(_DWORD *)(ready + 132) = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(ready + 388) = 2;
      goto LABEL_72;
    }
LABEL_129:
    if ( *(_QWORD *)(ready + 568) == KiCpuSetSequence || (*(_DWORD *)(ready + 116) & 8) != 0 )
      break;
    KiEnterDeferredReadyState(ready);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    v85 = KeGetCurrentPrcb();
    v86 = v85->SchedulerAssist;
    if ( v86 )
    {
      if ( v85->NestingLevel <= 1u )
      {
        v104 = v86[6] - 1;
        v86[6] = v104;
        if ( !v104 )
          KiRemoveSystemWorkPriorityKick(v85);
      }
    }
    *(_QWORD *)(ready + 216) = 0LL;
    v157 = ready + 216;
    KiReadyDeferredReadyList(a2, &v157);
    v90 = KeGetCurrentPrcb();
    v151 = 0;
    v91 = v90->SchedulerAssist;
    if ( v91 )
    {
      if ( v90->NestingLevel <= 1u )
      {
        v105 = v91[6];
        v91[6] = v105 + 1;
        if ( v105 == -1 )
LABEL_219:
          KiRemoveSystemWorkPriorityKick(v90);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
    {
      v106 = v90->SchedulerAssist;
      if ( v106 )
      {
        if ( v90->NestingLevel <= 1u )
        {
          v107 = v106[6] - 1;
          v106[6] = v107;
          if ( !v107 )
            KiRemoveSystemWorkPriorityKick(v90);
        }
      }
      do
        KeYieldProcessorEx(&v151, v87, v88, v89);
      while ( *(_QWORD *)(a2 + 48) );
      v108 = v90->SchedulerAssist;
      if ( v108 )
      {
        if ( v90->NestingLevel <= 1u )
        {
          v109 = v108[6];
          v108[6] = v109 + 1;
          if ( v109 == -1 )
            goto LABEL_219;
        }
      }
    }
    ready = *(_QWORD *)(a2 + 16);
    if ( ready )
      goto LABEL_127;
  }
  if ( (*(_BYTE *)(ready + 2) & 4) == 0 || (v80 = KiIsThreadRankNonZero(ready, a2), v74 = 1, !v80) )
    v74 = *(_BYTE *)(ready + 195);
  **(_BYTE **)(a2 + 56) = v74;
  if ( *(_QWORD *)(a2 + 33976) )
  {
    v113 = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( ready != *(_QWORD *)(a2 + 24) )
      v113 = (unsigned int)v74;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v113, 0LL);
  }
  *(_QWORD *)(a2 + 8) = ready;
  if ( *(_BYTE *)(ready + 388) == 1 )
LABEL_134:
    *(_DWORD *)(ready + 132) = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
LABEL_128:
  *(_BYTE *)(ready + 388) = 2;
LABEL_72:
  if ( ready != *(_QWORD *)(a2 + 24) && ready != a1 && *(_BYTE *)(ready + 113) )
  {
    if ( (*(_BYTE *)(ready + 2) & 4) == 0 || (v92 = KiIsThreadRankNonZero(ready, a2), v69 = 1, !v92) )
      v69 = *(_BYTE *)(ready + 195);
    **(_BYTE **)(a2 + 56) = v69;
    v70 = *(_QWORD *)(a2 + 33976);
    if ( v70 )
    {
      v131 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( ready != *(_QWORD *)(a2 + 24) )
        v131 = (unsigned int)v69;
      KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v131, 0LL);
      v70 = *(_QWORD *)(a2 + 33976);
    }
    *(_QWORD *)(a2 + 16) = ready;
    if ( v70 )
      *(_BYTE *)(v70 + 16) = ready == *(_QWORD *)(a2 + 24);
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
  KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
  v53 = *(unsigned __int8 *)(a1 + 390);
  if ( a1 == ready )
  {
    v56 = *(_BYTE *)(ready + 193) && !*(_WORD *)(ready + 486) && !(_BYTE)v53;
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
    v54 = 0;
    if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 && *(_BYTE *)(a1 + 388) == 5 && *(_BYTE *)(a1 + 793) )
    {
      v132 = KeGetCurrentPrcb();
      v155 = 0;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount((__int64)v132, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        KiSetVpThreadSpinLockCount((__int64)v132, 0);
        do
          KeYieldProcessorEx(&v155, v134, v135, v136);
        while ( *(_QWORD *)(a1 + 64) );
      }
      if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 && *(_BYTE *)(a1 + 388) == 5 )
      {
        LOBYTE(v133) = 1;
        KiUpdateVpBackingRequiresPriorityKickState(a1, v133);
        KiUpdateVPBackingThreadPriority(v137);
        v54 = 1;
      }
      KiReleaseThreadLockSafe(a1);
    }
    v56 = KiSwapContext(a1, ready, (unsigned __int8)v53);
    if ( v54 )
      KiUpdateVpBackingRequiresPriorityKickState(a1, 0LL);
  }
  v57 = *(_QWORD *)(a1 + 200);
  if ( _bittestandreset((signed __int32 *)(a1 + 116), 9u) )
  {
    LOBYTE(v55) = 1;
    if ( !(unsigned __int8)KiCancelTimer(a1 + 256, v55) )
    {
      *(_BYTE *)(a1 + 481) = 4;
      *(_QWORD *)(a1 + 264) = a1 + 464;
      *(_QWORD *)(a1 + 272) = a1 + 464;
    }
  }
  if ( a3 )
    *a3 = *(_QWORD *)(a1 + 976);
  if ( v56 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v138 = KeGetCurrentPrcb();
        v139 = v138->SchedulerAssist;
        v140 = (v139[5] & 0xFFFF0003) == 0;
        v139[5] &= 0xFFFF0003;
        if ( v140 )
          KiRemoveSystemWorkPriorityKick(v138);
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
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v53 <= 0xFu && CurrentIrql >= 2u )
      {
        v142 = KeGetCurrentPrcb();
        v143 = v142->SchedulerAssist;
        v144 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v53 + 1));
        v140 = (v144 & v143[5]) == 0;
        v143[5] &= v144;
        if ( v140 )
          KiRemoveSystemWorkPriorityKick(v142);
      }
    }
  }
  __writecr8(v53);
  return v57;
}
