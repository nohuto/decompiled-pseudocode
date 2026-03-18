/*
 * XREFs of KiSwapThread @ 0x14020C300
 * Callers:
 *     KiCommitThreadWait @ 0x14020BBE0 (KiCommitThreadWait.c)
 *     KeTerminateThread @ 0x1402F9A38 (KeTerminateThread.c)
 *     KiInSwapSingleProcess @ 0x140328540 (KiInSwapSingleProcess.c)
 * Callees:
 *     KiSetVpThreadSpinLockCount @ 0x1402086E0 (KiSetVpThreadSpinLockCount.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14020CFA0 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x14020D530 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x14020D880 (KiAbProcessContextSwitch.c)
 *     KiCancelTimer @ 0x14020DF00 (KiCancelTimer.c)
 *     KiDeliverApc @ 0x14020EAE0 (KiDeliverApc.c)
 *     KiReadyDeferredReadyList @ 0x140214140 (KiReadyDeferredReadyList.c)
 *     KiStartThreadCycleAccumulation @ 0x140214640 (KiStartThreadCycleAccumulation.c)
 *     KiProcessThreadWaitList @ 0x140280AB0 (KiProcessThreadWaitList.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiEnterDeferredReadyState @ 0x140281520 (KiEnterDeferredReadyState.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402ED2C0 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeGroupSchedulingRank @ 0x1402EDA80 (KiComputeGroupSchedulingRank.c)
 *     KiIsThreadRankNonZero @ 0x1402EF550 (KiIsThreadRankNonZero.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1402EF784 (KiCheckMaxOverQuotaTransition.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1402EFA54 (KiRecomputeGroupSchedulingRank.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x1402F13D0 (KiSelectThreadFromSchedulingGroup.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1402F14D0 (KiRemoveSchedulingGroupQueue.c)
 *     KiInsertDeferredPreemptionApc @ 0x1402FB09C (KiInsertDeferredPreemptionApc.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     EtwTraceContextSwap @ 0x1403A6AE0 (EtwTraceContextSwap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x1403FDDE0 (KiSwapContext.c)
 *     KiEndCounterAccumulation @ 0x140516AA0 (KiEndCounterAccumulation.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x14051AA80 (KiSendHeteroRescheduleIntRequest.c)
 *     KiSetSchedulerAssistPriority @ 0x14051B4A4 (KiSetSchedulerAssistPriority.c)
 *     KiUpdateVpBackingRequiresPriorityKickState @ 0x14051B640 (KiUpdateVpBackingRequiresPriorityKickState.c)
 */

__int64 __fastcall KiSwapThread(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  char v9; // r8
  __int64 v10; // r9
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
  unsigned __int64 v41; // rdx
  __int64 v42; // r15
  unsigned __int64 v43; // r13
  char v44; // r10
  __int64 v45; // r14
  __int64 v46; // r9
  __int64 v47; // r12
  __int64 v48; // r14
  struct _KPRCB *v49; // rdi
  _DWORD *v50; // rcx
  char v51; // cl
  unsigned __int64 v52; // rbp
  char v53; // bl
  __int64 v54; // rdx
  char v55; // r14
  __int64 v56; // rbx
  unsigned __int64 v58; // rbp
  int v59; // edx
  unsigned __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdx
  unsigned __int64 v63; // rbp
  int v64; // edx
  unsigned __int64 v65; // rcx
  int v66; // ecx
  __int64 v67; // rax
  char v68; // cl
  __int64 v69; // rax
  unsigned __int64 v70; // rdx
  __int64 v71; // rcx
  _QWORD *i; // rcx
  char v73; // cl
  __int64 v74; // rdi
  int v75; // r14d
  __int64 v76; // r8
  _DWORD *v77; // rcx
  _DWORD *v78; // rcx
  char v79; // al
  __int64 v80; // rbp
  _DWORD *v81; // rcx
  _DWORD *v82; // rcx
  char v83; // al
  struct _KPRCB *v84; // rcx
  _DWORD *v85; // rdx
  __int64 v86; // rdx
  struct _KPRCB *v87; // rdi
  _DWORD *v88; // rcx
  char v89; // al
  __int64 v90; // rax
  int v91; // eax
  int v92; // eax
  int v93; // eax
  unsigned __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // rax
  unsigned __int64 v97; // rcx
  unsigned __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rcx
  int v101; // eax
  int v102; // eax
  _DWORD *v103; // rcx
  int v104; // eax
  _DWORD *v105; // rcx
  int v106; // eax
  char IsThreadRankNonZero; // al
  __int64 v108; // rdx
  int v109; // eax
  __int64 v110; // rdx
  int v111; // eax
  int v112; // eax
  int v113; // eax
  struct _KPRCB *v114; // rcx
  _DWORD *v115; // rdx
  int v116; // eax
  __int64 v117; // rdx
  struct _KPRCB *v118; // rbp
  _DWORD *v119; // rcx
  int v120; // eax
  _DWORD *v121; // rcx
  int v122; // eax
  _DWORD *v123; // rcx
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // rdx
  struct _KPRCB *v127; // r14
  __int64 v128; // rdx
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
  unsigned int v154; // [rsp+C8h] [rbp+20h]

  if ( *(_QWORD *)(a2 + 11528) )
    KiProcessThreadWaitList(a2, 1LL, 0LL);
  KiAbProcessContextSwitch(a1, 0LL);
  _disable();
  *(_BYTE *)(a2 + 32) = 1;
  v5 = __rdtsc();
  v6 = v5 - *(_QWORD *)(a2 + 32448);
  v7 = v6 + *(unsigned int *)(a1 + 80);
  *(_QWORD *)(a1 + 72) += v6;
  v8 = 0xFFFFFFFFLL;
  if ( v7 > 0xFFFFFFFF )
    LODWORD(v7) = -1;
  *(_QWORD *)(a2 + 32448) = v5;
  v9 = *(_BYTE *)(a1 + 2);
  *(_DWORD *)(a1 + 80) = v7;
  if ( (v9 & 0x3E) != 0 )
  {
    if ( (v9 & 0x10) != 0 )
    {
      v8 = *(_QWORD *)(a2 + 32448) - *(_QWORD *)(a2 + 32456);
      *(_QWORD *)(a2 + 8LL * *(unsigned __int8 *)(a1 + 124) + 32464) += v8;
      v9 &= ~0x10u;
      *(_QWORD *)(a2 + 32456) = 0LL;
    }
    if ( (v9 & 0x20) != 0 )
    {
      v10 = *(_QWORD *)(a1 + 1528);
      if ( v10 )
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
        v18 = *(_QWORD *)(v10 + 8 * v17);
        v8 = v10 + 8 * v17;
        v19 = KiTimelineBitmapTime;
        *(_QWORD *)v8 = v6 + v18;
        v20 = *(_DWORD *)(v10 + 192);
        if ( v19 > v20 )
        {
          LODWORD(v152) = v19;
          v8 = v19 - v20;
          if ( (unsigned int)v8 >= 0x20 )
            HIDWORD(v152) = 1;
          else
            HIDWORD(v152) = (*(_DWORD *)(v10 + 196) << (v19 - v20)) | 1;
          *(_QWORD *)(v10 + 192) = v152;
        }
        else
        {
          v21 = v20 - v19;
          if ( v21 < 0x20 )
            *(_DWORD *)(v10 + 196) |= 1 << v21;
        }
        if ( !KiEfficiencyClassSystem && (unsigned __int8)*(_DWORD *)(a1 + 512) == 2 )
        {
          v8 = 2 * v16;
          *(_QWORD *)(v10 + 16 * v16 + 8) += v6;
        }
        if ( *(_QWORD *)(a1 + 1472) )
        {
          *(_QWORD *)(v10 + 8 * (v15 + 16 + 2 * v16)) += v6;
          v8 = *(_QWORD *)(*(_QWORD *)(a1 + 1472) + 1528LL) + 8 * (v15 + 8 + 2 * v16);
          _InterlockedExchangeAdd64((volatile signed __int64 *)v8, v6);
        }
      }
      v9 &= ~0x20u;
    }
    if ( (v9 & 0x40) != 0 )
    {
      v90 = *(_QWORD *)(a1 + 968);
      if ( v90 )
        *(_BYTE *)(v90 + 64) = 0;
      v9 &= ~0x40u;
    }
    if ( (v9 & 0x3E) != 0 )
    {
      v71 = *(_QWORD *)(a1 + 104);
      if ( v71 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a2 + 216) + v71); i; i = (_QWORD *)i[51] )
          *i += v6;
      }
      if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)(a2 + 192) + 136LL);
        if ( (*(_QWORD *)(a1 + 576) & v8) != v8 )
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
      v91 = SchedulerAssist[6];
      SchedulerAssist[6] = v91 + 1;
      if ( v91 == -1 )
LABEL_192:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
  {
    v81 = CurrentPrcb->SchedulerAssist;
    if ( v81 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v92 = v81[6] - 1;
        v81[6] = v92;
        if ( !v92 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v142, v8);
    while ( *(_QWORD *)(a2 + 48) );
    v82 = CurrentPrcb->SchedulerAssist;
    if ( v82 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v93 = v82[6];
        v82[6] = v93 + 1;
        if ( v93 == -1 )
          goto LABEL_192;
      }
    }
  }
  v25 = *(_QWORD *)(a1 + 104);
  v149 = v25;
  v26 = v25;
  if ( v25 )
  {
    v74 = *(unsigned int *)(a2 + 216) + v25;
    if ( v74 )
    {
      v75 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v74 + 112) & 4) != 0 )
        {
          if ( (unsigned __int8)KiCheckMaxOverQuotaTransition(v74, v26) )
          {
            if ( (*(_BYTE *)(v74 + 112) & 1) != 0 )
            {
              LOBYTE(v76) = 1;
              KiRemoveSchedulingGroupQueue(a2, v74, v76);
            }
          }
          else if ( *(_QWORD *)v74 >= *(_QWORD *)(v74 + 24) && (*(_BYTE *)(v74 + 112) & 2) == 0 )
          {
            KiRecomputeGroupSchedulingRank(v26, v74, a2);
          }
        }
        else
        {
          KiComputeGroupSchedulingRank(v26, a2, v74);
        }
        v75 += *(_DWORD *)(v74 + 116);
        v74 = *(_QWORD *)(v74 + 408);
        if ( !v74 )
          break;
        v26 = v74 - *(unsigned int *)(a2 + 216);
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
      || (v94 = **(_QWORD **)(a2 + 192) - ((**(_QWORD **)(a2 + 192) >> 1) & 0x5555555555555555LL),
          (unsigned int)((0x101010101010101LL
                        * (((v94 & 0x3333333333333333LL)
                          + ((v94 >> 2) & 0x3333333333333333LL)
                          + (((v94 & 0x3333333333333333LL) + ((v94 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled)
      && ((v95 = *(_QWORD *)(a2 + 200), v96 = *(_QWORD *)(a2 + 33880), v95 == v96)
       || (v97 = v96 & ~v95, (*(_QWORD *)(*(_QWORD *)(a2 + 192) + 24LL) & v97) != 0)
       || (_BitScanForward64(&v98, v97),
           v99 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 208) + (int)v98],
           v143 = v99,
           (*(_DWORD *)(KiProcessorBlock[v99] + 236) & 0x400) != 0)) )
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
          v80 = v29 - 88;
          ready = KiSelectThreadFromSchedulingGroup(a2, v29 - 88, 0LL);
          if ( ready )
            break;
          v100 = *(_QWORD *)(v80 + 400);
          if ( (v100 & 1) != 0 )
          {
            if ( v100 == 1 )
              goto LABEL_38;
            v29 = v100 ^ ((v80 + 392) | 1);
          }
          else
          {
            v29 = *(_QWORD *)(v80 + 400);
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
        if ( (v36 & *(_QWORD *)(v30 + 24)) == v36 )
        {
          _InterlockedOr64((volatile signed __int64 *)(v30 + 8), v36);
        }
        else
        {
          v70 = *(_QWORD *)(a2 + 33880) & ~*(_QWORD *)(v30 + 24);
          if ( ((v70 - 1) & v70) == 0 )
            _InterlockedOr64((volatile signed __int64 *)(v30 + 16), v70);
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
        v108 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v37 != *(_QWORD *)(a2 + 24) )
          v108 = (unsigned int)v38;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v108, 0LL);
      }
      v39 = 0;
      if ( (*(_BYTE *)(a2 + 35) & 2) != 0 )
        v39 = v31;
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
      v40 = KeGetCurrentPrcb();
      v41 = (unsigned __int64)v40->SchedulerAssist;
      if ( v41 )
      {
        if ( v40->NestingLevel <= 1u )
        {
          v109 = *(_DWORD *)(v41 + 24) - 1;
          *(_DWORD *)(v41 + 24) = v109;
          if ( !v109 )
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
        v41 = *(unsigned __int8 *)(a2 + 208);
        v45 = *(_QWORD *)(v42 + 136);
        v46 = *(_QWORD *)(v42 + 152);
        v47 = v45;
        v151 = v44;
        v154 = *(unsigned __int8 *)(a2 + 208);
        v141 = v46;
        if ( v42 == *(_QWORD *)(a2 + 192) )
        {
          v46 ^= *(_QWORD *)(a2 + 33856);
          v45 ^= *(_QWORD *)(a2 + 200);
          v141 = v46;
          if ( (KiCacheAwareScheduling & 2) != 0 )
            v47 &= *(_QWORD *)(a2 + 33896);
        }
        v48 = ~*(_QWORD *)(v42 + 24) & v45;
        while ( 1 )
        {
          if ( !v48 && !v46 )
          {
            v43 = (unsigned int)v43 & (unsigned __int64)~(1LL << *(_WORD *)(v42 + 146));
            if ( (_DWORD)v43 )
            {
              while ( 1 )
              {
                v66 = v140 + 1;
                v140 = v66;
                if ( v66 == (unsigned __int16)KeNumberNodes )
                  break;
                v41 = *(unsigned int *)(qword_140C4DC98
                                      + 4LL * ((unsigned int)(unsigned __int16)KeNumberNodes * v145 + v66));
                if ( (_DWORD)v41 == -1 )
                  break;
                v67 = (unsigned int)v43;
                if ( _bittest64(&v67, v41) )
                {
                  v42 = KeNodeBlock[v41];
                  goto LABEL_55;
                }
              }
            }
            goto LABEL_62;
          }
          if ( (v46 & v47) != 0 )
            break;
LABEL_88:
          if ( (v48 & v47) != 0 )
          {
            v63 = __ROR8__(v48 & v47, v44);
            v64 = (_DWORD)v41 << 6;
            v139 = v64;
            do
            {
              _BitScanForward64(&v65, v63);
              v63 ^= 1LL << v65;
              ready = KiSearchForNewThreadOnProcessor(
                        a2,
                        KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v64 + (((_BYTE)v65 + v44) & 0x3F)]],
                        0LL);
              if ( ready )
                goto LABEL_72;
              v64 = v139;
              v44 = v151;
            }
            while ( v63 );
          }
          v46 = v141;
          v44 = v151;
          v48 &= ~v47;
          v47 = *(_QWORD *)(v42 + 136);
          v41 = v154;
        }
        v58 = __ROR8__(v46 & v47, v44);
        v59 = (_DWORD)v41 << 6;
        v138 = v59;
        while ( 1 )
        {
          _BitScanForward64(&v60, v58);
          v61 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v59 + ((v44 + (_BYTE)v60) & 0x3F)]];
          v62 = *(_QWORD *)(v61 + 33856);
          v141 = ~v62 & v46;
          v58 &= __ROR8__(~v62, v44);
          ready = KiSearchForNewThreadOnProcessor(a2, 0LL, *(_QWORD *)(v61 + 33864));
          if ( ready )
            goto LABEL_72;
          v46 = v141;
          v59 = v138;
          v44 = v151;
          if ( !v58 )
          {
            LODWORD(v41) = v154;
            goto LABEL_88;
          }
        }
      }
LABEL_62:
      v49 = KeGetCurrentPrcb();
      v146 = 0;
      v50 = v49->SchedulerAssist;
      if ( v50 )
      {
        if ( v49->NestingLevel <= 1u )
        {
          v111 = v50[6];
          v50[6] = v111 + 1;
          if ( v111 == -1 )
LABEL_244:
            KiRemoveSystemWorkPriorityKick(v49);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
      {
        v77 = v49->SchedulerAssist;
        if ( v77 )
        {
          if ( v49->NestingLevel <= 1u )
          {
            v112 = v77[6] - 1;
            v77[6] = v112;
            if ( !v112 )
              KiRemoveSystemWorkPriorityKick(v49);
          }
        }
        do
          KeYieldProcessorEx(&v146, v41);
        while ( *(_QWORD *)(a2 + 48) );
        v78 = v49->SchedulerAssist;
        if ( v78 )
        {
          if ( v49->NestingLevel <= 1u )
          {
            v113 = v78[6];
            v78[6] = v113 + 1;
            if ( v113 == -1 )
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
        v114 = KeGetCurrentPrcb();
        v115 = v114->SchedulerAssist;
        if ( v115 )
        {
          if ( v114->NestingLevel <= 1u )
          {
            v116 = v115[6] - 1;
            v115[6] = v116;
            if ( !v116 )
              KiRemoveSystemWorkPriorityKick(v114);
          }
        }
        KiSendHeteroRescheduleIntRequest(a2);
        v118 = KeGetCurrentPrcb();
        v147 = 0;
        v119 = v118->SchedulerAssist;
        if ( v119 )
        {
          if ( v118->NestingLevel <= 1u )
          {
            v120 = v119[6];
            v119[6] = v120 + 1;
            if ( v120 == -1 )
LABEL_259:
              KiRemoveSystemWorkPriorityKick(v118);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
        {
          v121 = v118->SchedulerAssist;
          if ( v121 )
          {
            if ( v118->NestingLevel <= 1u )
            {
              v122 = v121[6] - 1;
              v121[6] = v122;
              if ( !v122 )
                KiRemoveSystemWorkPriorityKick(v118);
            }
          }
          do
            KeYieldProcessorEx(&v147, v117);
          while ( *(_QWORD *)(a2 + 48) );
          v123 = v118->SchedulerAssist;
          if ( v123 )
          {
            if ( v118->NestingLevel <= 1u )
            {
              v124 = v123[6];
              v123[6] = v124 + 1;
              if ( v124 == -1 )
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
      if ( (*(_BYTE *)(ready + 2) & 4) == 0 || (v83 = KiIsThreadRankNonZero(ready, a2), v51 = 1, !v83) )
        v51 = *(_BYTE *)(ready + 195);
      **(_BYTE **)(a2 + 56) = v51;
      if ( *(_QWORD *)(a2 + 33976) )
      {
        v125 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( ready != *(_QWORD *)(a2 + 24) )
          v125 = (unsigned int)v51;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v125, 0LL);
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
    v84 = KeGetCurrentPrcb();
    v85 = v84->SchedulerAssist;
    if ( v85 )
    {
      if ( v84->NestingLevel <= 1u )
      {
        v101 = v85[6] - 1;
        v85[6] = v101;
        if ( !v101 )
          KiRemoveSystemWorkPriorityKick(v84);
      }
    }
    *(_QWORD *)(ready + 216) = 0LL;
    v150 = ready + 216;
    KiReadyDeferredReadyList(a2, &v150);
    v87 = KeGetCurrentPrcb();
    v144 = 0;
    v88 = v87->SchedulerAssist;
    if ( v88 )
    {
      if ( v87->NestingLevel <= 1u )
      {
        v102 = v88[6];
        v88[6] = v102 + 1;
        if ( v102 == -1 )
LABEL_218:
          KiRemoveSystemWorkPriorityKick(v87);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
    {
      v103 = v87->SchedulerAssist;
      if ( v103 )
      {
        if ( v87->NestingLevel <= 1u )
        {
          v104 = v103[6] - 1;
          v103[6] = v104;
          if ( !v104 )
            KiRemoveSystemWorkPriorityKick(v87);
        }
      }
      do
        KeYieldProcessorEx(&v144, v86);
      while ( *(_QWORD *)(a2 + 48) );
      v105 = v87->SchedulerAssist;
      if ( v105 )
      {
        if ( v87->NestingLevel <= 1u )
        {
          v106 = v105[6];
          v105[6] = v106 + 1;
          if ( v106 == -1 )
            goto LABEL_218;
        }
      }
    }
    ready = *(_QWORD *)(a2 + 16);
    if ( ready )
      goto LABEL_126;
  }
  if ( (*(_BYTE *)(ready + 2) & 4) == 0 || (v79 = KiIsThreadRankNonZero(ready, a2), v73 = 1, !v79) )
    v73 = *(_BYTE *)(ready + 195);
  **(_BYTE **)(a2 + 56) = v73;
  if ( *(_QWORD *)(a2 + 33976) )
  {
    v110 = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( ready != *(_QWORD *)(a2 + 24) )
      v110 = (unsigned int)v73;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v110, 0LL);
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
    if ( (*(_BYTE *)(ready + 2) & 4) == 0 || (v89 = KiIsThreadRankNonZero(ready, a2), v68 = 1, !v89) )
      v68 = *(_BYTE *)(ready + 195);
    **(_BYTE **)(a2 + 56) = v68;
    v69 = *(_QWORD *)(a2 + 33976);
    if ( v69 )
    {
      v126 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( ready != *(_QWORD *)(a2 + 24) )
        v126 = (unsigned int)v68;
      KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v126, 0LL);
      v69 = *(_QWORD *)(a2 + 33976);
    }
    *(_QWORD *)(a2 + 16) = ready;
    if ( v69 )
      *(_BYTE *)(v69 + 16) = ready == *(_QWORD *)(a2 + 24);
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
  v52 = *(unsigned __int8 *)(a1 + 390);
  if ( a1 == ready )
  {
    v55 = *(_BYTE *)(ready + 193) && !*(_WORD *)(ready + 486) && !(_BYTE)v52;
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
    v53 = 0;
    if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 && *(_BYTE *)(a1 + 388) == 5 && *(_BYTE *)(a1 + 793) )
    {
      v127 = KeGetCurrentPrcb();
      v148 = 0;
      while ( 1 )
      {
        KiSetVpThreadSpinLockCount((__int64)v127, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        KiSetVpThreadSpinLockCount((__int64)v127, 0);
        do
          KeYieldProcessorEx(&v148, v129);
        while ( *(_QWORD *)(a1 + 64) );
      }
      if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 && *(_BYTE *)(a1 + 388) == 5 )
      {
        LOBYTE(v128) = 1;
        KiUpdateVpBackingRequiresPriorityKickState(a1, v128);
        KiUpdateVPBackingThreadPriority(v130);
        v53 = 1;
      }
      KiReleaseThreadLockSafe(a1);
    }
    v55 = KiSwapContext(a1, ready, (unsigned __int8)v52);
    if ( v53 )
      KiUpdateVpBackingRequiresPriorityKickState(a1, 0LL);
  }
  v56 = *(_QWORD *)(a1 + 200);
  if ( _bittestandreset((signed __int32 *)(a1 + 116), 9u) )
  {
    LOBYTE(v54) = 1;
    if ( !(unsigned __int8)KiCancelTimer(a1 + 256, v54) )
    {
      *(_BYTE *)(a1 + 481) = 4;
      *(_QWORD *)(a1 + 264) = a1 + 464;
      *(_QWORD *)(a1 + 272) = a1 + 464;
    }
  }
  if ( a3 )
    *a3 = *(_QWORD *)(a1 + 976);
  if ( v55 )
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
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v52 <= 0xFu && CurrentIrql >= 2u )
      {
        v135 = KeGetCurrentPrcb();
        v136 = v135->SchedulerAssist;
        v137 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v52 + 1));
        v133 = (v137 & v136[5]) == 0;
        v136[5] &= v137;
        if ( v133 )
          KiRemoveSystemWorkPriorityKick(v135);
      }
    }
  }
  __writecr8(v52);
  return v56;
}
