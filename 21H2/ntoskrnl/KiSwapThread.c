/*
 * XREFs of KiSwapThread @ 0x1403466D0
 * Callers:
 *     KeTerminateThread @ 0x1402784F0 (KeTerminateThread.c)
 *     KiInSwapSingleProcess @ 0x14029BAA0 (KiInSwapSingleProcess.c)
 *     KiCommitThreadWait @ 0x140345FB0 (KiCommitThreadWait.c)
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140230D60 (KiReadyDeferredReadyList.c)
 *     KiStartThreadCycleAccumulation @ 0x140231260 (KiStartThreadCycleAccumulation.c)
 *     KiEnterDeferredReadyState @ 0x140248780 (KiEnterDeferredReadyState.c)
 *     KiDeliverApc @ 0x14024A750 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiProcessThreadWaitList @ 0x14024B2D0 (KiProcessThreadWaitList.c)
 *     KiIsThreadRankNonZero @ 0x14024D450 (KiIsThreadRankNonZero.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140258E10 (KiUpdateVPBackingThreadPriority.c)
 *     KiComputeGroupSchedulingRank @ 0x140259C40 (KiComputeGroupSchedulingRank.c)
 *     KiInsertDeferredPreemptionApc @ 0x14027A5E4 (KiInsertDeferredPreemptionApc.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
 *     KiCheckMaxOverQuotaTransition @ 0x1402B62F0 (KiCheckMaxOverQuotaTransition.c)
 *     KiSelectThreadFromSchedulingGroup @ 0x1402EB73C (KiSelectThreadFromSchedulingGroup.c)
 *     KiRemoveSchedulingGroupQueue @ 0x1402EB83C (KiRemoveSchedulingGroupQueue.c)
 *     KiRecomputeGroupSchedulingRank @ 0x1402EC8F0 (KiRecomputeGroupSchedulingRank.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140347370 (KiSearchForNewThreadOnProcessor.c)
 *     KiSelectReadyThread @ 0x140347900 (KiSelectReadyThread.c)
 *     KiAbProcessContextSwitch @ 0x140347C50 (KiAbProcessContextSwitch.c)
 *     KiCancelTimer @ 0x1403482D0 (KiCancelTimer.c)
 *     KiSetVpThreadSpinLockCount @ 0x14034B590 (KiSetVpThreadSpinLockCount.c)
 *     EtwTraceContextSwap @ 0x1403AED40 (EtwTraceContextSwap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140406470 (KiSwapContext.c)
 *     KiEndCounterAccumulation @ 0x14051BF50 (KiEndCounterAccumulation.c)
 *     KiSendHeteroRescheduleIntRequest @ 0x14051FF30 (KiSendHeteroRescheduleIntRequest.c)
 *     KiSetSchedulerAssistPriority @ 0x140520954 (KiSetSchedulerAssistPriority.c)
 *     KiUpdateVpBackingRequiresPriorityKickState @ 0x140520AF0 (KiUpdateVpBackingRequiresPriorityKickState.c)
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
  volatile signed __int64 *v25; // rdi
  volatile signed __int64 *v26; // rbp
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
  __int64 v69; // rax
  char v70; // cl
  __int64 v71; // rax
  unsigned __int64 v72; // rdx
  __int64 v73; // rcx
  _QWORD *i; // rcx
  char v75; // cl
  __int64 v76; // rdi
  int v77; // r14d
  __int64 v78; // r8
  __int64 v79; // r9
  _DWORD *v80; // rcx
  _DWORD *v81; // rcx
  __int64 v82; // r9
  bool v83; // al
  __int64 v84; // rbp
  _DWORD *v85; // rcx
  _DWORD *v86; // rcx
  bool v87; // al
  struct _KPRCB *v88; // rcx
  _DWORD *v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  struct _KPRCB *v93; // rdi
  _DWORD *v94; // rcx
  bool v95; // al
  __int64 v96; // rax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  unsigned __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rax
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rcx
  int v107; // eax
  int v108; // eax
  _DWORD *v109; // rcx
  int v110; // eax
  _DWORD *v111; // rcx
  int v112; // eax
  bool IsThreadRankNonZero; // al
  __int64 v114; // rdx
  int v115; // eax
  __int64 v116; // rdx
  int v117; // eax
  int v118; // eax
  int v119; // eax
  struct _KPRCB *v120; // rcx
  _DWORD *v121; // rdx
  int v122; // eax
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  struct _KPRCB *v126; // rbp
  _DWORD *v127; // rcx
  int v128; // eax
  _DWORD *v129; // rcx
  int v130; // eax
  _DWORD *v131; // rcx
  int v132; // eax
  __int64 v133; // rdx
  __int64 v134; // rdx
  struct _KPRCB *v135; // r14
  __int64 v136; // rdx
  __int64 v137; // r8
  __int64 v138; // r9
  ULONG_PTR v139; // rcx
  struct _KPRCB *v140; // rcx
  _DWORD *v141; // rdx
  bool v142; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v144; // rax
  _DWORD *v145; // r9
  int v146; // edx
  int v147; // [rsp+20h] [rbp-88h]
  int v148; // [rsp+20h] [rbp-88h]
  int v149; // [rsp+24h] [rbp-84h]
  __int64 v150; // [rsp+28h] [rbp-80h]
  int v151; // [rsp+30h] [rbp-78h] BYREF
  int v152; // [rsp+34h] [rbp-74h]
  int v153; // [rsp+38h] [rbp-70h] BYREF
  int v154; // [rsp+3Ch] [rbp-6Ch]
  int v155; // [rsp+40h] [rbp-68h] BYREF
  int v156; // [rsp+44h] [rbp-64h] BYREF
  int v157; // [rsp+48h] [rbp-60h] BYREF
  volatile signed __int64 *v158; // [rsp+50h] [rbp-58h]
  _QWORD *v159; // [rsp+58h] [rbp-50h] BYREF
  char v160; // [rsp+B0h] [rbp+8h]
  __int64 v161; // [rsp+B0h] [rbp+8h]
  unsigned int v163; // [rsp+C8h] [rbp+20h]

  if ( *(_QWORD *)(a2 + 11528) )
    KiProcessThreadWaitList(a2, 1u, 0, 2u);
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
          LODWORD(v161) = v19;
          v9 = v19 - v20;
          if ( (unsigned int)v9 >= 0x20 )
            HIDWORD(v161) = 1;
          else
            HIDWORD(v161) = (*(_DWORD *)(v5 + 196) << (v19 - v20)) | 1;
          *(_QWORD *)(v5 + 192) = v161;
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
      v96 = *(_QWORD *)(a1 + 968);
      if ( v96 )
        *(_BYTE *)(v96 + 64) = 0;
      LOBYTE(v10) = v10 & 0xBF;
    }
    if ( (v10 & 0x3E) != 0 )
    {
      v73 = *(_QWORD *)(a1 + 104);
      if ( v73 )
      {
        for ( i = (_QWORD *)(*(unsigned int *)(a2 + 216) + v73); i; i = (_QWORD *)i[51] )
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
  v151 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v97 = SchedulerAssist[6];
      SchedulerAssist[6] = v97 + 1;
      if ( v97 == -1 )
LABEL_193:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
  {
    v85 = CurrentPrcb->SchedulerAssist;
    if ( v85 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v98 = v85[6] - 1;
        v85[6] = v98;
        if ( !v98 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v151, v9, v10, v5);
    while ( *(_QWORD *)(a2 + 48) );
    v86 = CurrentPrcb->SchedulerAssist;
    if ( v86 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v99 = v86[6];
        v86[6] = v99 + 1;
        if ( v99 == -1 )
          goto LABEL_193;
      }
    }
  }
  v25 = *(volatile signed __int64 **)(a1 + 104);
  v158 = v25;
  v26 = v25;
  if ( v25 )
  {
    v76 = (__int64)v25 + *(unsigned int *)(a2 + 216);
    if ( v76 )
    {
      v77 = 0;
      while ( 1 )
      {
        if ( (*(_BYTE *)(v76 + 112) & 4) != 0 )
        {
          if ( KiCheckMaxOverQuotaTransition(v76, v26) )
          {
            if ( (*(_BYTE *)(v76 + 112) & 1) != 0 )
            {
              LOBYTE(v78) = 1;
              KiRemoveSchedulingGroupQueue(a2, v76, v78, v79);
            }
          }
          else if ( *(_QWORD *)v76 >= *(_QWORD *)(v76 + 24) && (*(_BYTE *)(v76 + 112) & 2) == 0 )
          {
            KiRecomputeGroupSchedulingRank((__int64)v26, v76, a2);
          }
        }
        else
        {
          KiComputeGroupSchedulingRank((__int64)v26, a2, (__int64 *)v76);
        }
        v77 += *(_DWORD *)(v76 + 116);
        v76 = *(_QWORD *)(v76 + 408);
        if ( !v76 )
          break;
        v26 = (volatile signed __int64 *)(v76 - *(unsigned int *)(a2 + 216));
        v158 = v26;
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
    v152 = 0;
    if ( !KiPerfIsoEnabled
      || (v100 = **(_QWORD **)(a2 + 192) - ((**(_QWORD **)(a2 + 192) >> 1) & 0x5555555555555555LL),
          (unsigned int)((0x101010101010101LL
                        * (((v100 & 0x3333333333333333LL)
                          + ((v100 >> 2) & 0x3333333333333333LL)
                          + (((v100 & 0x3333333333333333LL) + ((v100 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled)
      && ((v101 = *(_QWORD *)(a2 + 200), v102 = *(_QWORD *)(a2 + 33880), v101 == v102)
       || (v103 = v102 & ~v101, (*(_QWORD *)(*(_QWORD *)(a2 + 192) + 24LL) & v103) != 0)
       || (_BitScanForward64(&v104, v103),
           v105 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a2 + 208) + (int)v104],
           v152 = v105,
           (*(_DWORD *)(KiProcessorBlock[v105] + 236) & 0x400) != 0)) )
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
          v84 = v29 - 88;
          ready = KiSelectThreadFromSchedulingGroup(a2, v29 - 88, 0);
          if ( ready )
            break;
          v106 = *(_QWORD *)(v84 + 400);
          if ( (v106 & 1) != 0 )
          {
            if ( v106 == 1 )
              goto LABEL_38;
            v29 = v106 ^ ((v84 + 392) | 1);
          }
          else
          {
            v29 = *(_QWORD *)(v84 + 400);
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
        if ( (*(_QWORD *)(v32 + 24) & v38) == v38 )
        {
          _InterlockedOr64((volatile signed __int64 *)(v32 + 8), v38);
        }
        else
        {
          v72 = *(_QWORD *)(a2 + 33880) & ~*(_QWORD *)(v32 + 24);
          if ( ((v72 - 1) & v72) == 0 )
            _InterlockedOr64((volatile signed __int64 *)(v32 + 16), v72);
        }
        _interlockedbittestandreset64((volatile signed __int32 *)(v32 + 16), *(unsigned __int8 *)(a2 + 209));
      }
      v39 = *(_QWORD *)(a2 + 24);
      if ( (*(_BYTE *)(v39 + 2) & 4) != 0 )
      {
        IsThreadRankNonZero = KiIsThreadRankNonZero(*(_QWORD *)(a2 + 24), (struct _KPRCB *)a2);
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
        v114 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( v39 != *(_QWORD *)(a2 + 24) )
          v114 = (unsigned int)v40;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v114, 0LL);
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
          v115 = *(_DWORD *)(v43 + 24) - 1;
          *(_DWORD *)(v43 + 24) = v115;
          if ( !v115 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
      if ( !v41 || v36 )
      {
        v44 = *(_QWORD *)(a2 + 192);
        v149 = 0;
        LODWORD(v45) = *(_DWORD *)(v44 + 128);
        v154 = *(unsigned __int16 *)(v44 + 146);
LABEL_55:
        v46 = *(_BYTE *)(a2 + 209);
        v43 = *(unsigned __int8 *)(a2 + 208);
        v47 = *(_QWORD *)(v44 + 136);
        v31 = *(_QWORD *)(v44 + 152);
        v48 = v47;
        v160 = v46;
        v163 = *(unsigned __int8 *)(a2 + 208);
        v150 = v31;
        if ( v44 == *(_QWORD *)(a2 + 192) )
        {
          v31 ^= *(_QWORD *)(a2 + 33856);
          v47 ^= *(_QWORD *)(a2 + 200);
          v150 = v31;
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
                v68 = v149 + 1;
                v149 = v68;
                if ( v68 == (unsigned __int16)KeNumberNodes )
                  break;
                v43 = *(unsigned int *)(qword_140C4DE98
                                      + 4LL * ((unsigned int)(unsigned __int16)KeNumberNodes * v154 + v68));
                if ( (_DWORD)v43 == -1 )
                  break;
                v69 = (unsigned int)v45;
                if ( _bittest64(&v69, v43) )
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
            v65 = __ROR8__(v49 & v48, v46);
            v66 = (_DWORD)v43 << 6;
            v148 = v66;
            do
            {
              _BitScanForward64(&v67, v65);
              v65 ^= 1LL << v67;
              ready = KiSearchForNewThreadOnProcessor(
                        a2,
                        KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v66 + (((_BYTE)v67 + v46) & 0x3F)]],
                        0LL);
              if ( ready )
                goto LABEL_72;
              v66 = v148;
              v46 = v160;
            }
            while ( v65 );
          }
          v31 = v150;
          v46 = v160;
          v49 &= ~v48;
          v48 = *(_QWORD *)(v44 + 136);
          v43 = v163;
        }
        v60 = __ROR8__(v31 & v48, v46);
        v61 = (_DWORD)v43 << 6;
        v147 = v61;
        while ( 1 )
        {
          _BitScanForward64(&v62, v60);
          v63 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v61 + ((v46 + (_BYTE)v62) & 0x3F)]];
          v64 = *(_QWORD *)(v63 + 33856);
          v150 = ~v64 & v31;
          v60 &= __ROR8__(~v64, v46);
          ready = KiSearchForNewThreadOnProcessor(a2, 0LL, *(_QWORD *)(v63 + 33864));
          if ( ready )
            goto LABEL_72;
          v31 = v150;
          v61 = v147;
          v46 = v160;
          if ( !v60 )
          {
            LODWORD(v43) = v163;
            goto LABEL_88;
          }
        }
      }
LABEL_62:
      v50 = KeGetCurrentPrcb();
      v155 = 0;
      v51 = v50->SchedulerAssist;
      if ( v51 )
      {
        if ( v50->NestingLevel <= 1u )
        {
          v117 = v51[6];
          v51[6] = v117 + 1;
          if ( v117 == -1 )
LABEL_245:
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
            v118 = v80[6] - 1;
            v80[6] = v118;
            if ( !v118 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
        do
          KeYieldProcessorEx(&v155, v43, v30, v31);
        while ( *(_QWORD *)(a2 + 48) );
        v81 = v50->SchedulerAssist;
        if ( v81 )
        {
          if ( v50->NestingLevel <= 1u )
          {
            v119 = v81[6];
            v81[6] = v119 + 1;
            if ( v119 == -1 )
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
        v120 = KeGetCurrentPrcb();
        v121 = v120->SchedulerAssist;
        if ( v121 )
        {
          if ( v120->NestingLevel <= 1u )
          {
            v122 = v121[6] - 1;
            v121[6] = v122;
            if ( !v122 )
              KiRemoveSystemWorkPriorityKick(v120);
          }
        }
        KiSendHeteroRescheduleIntRequest(a2);
        v126 = KeGetCurrentPrcb();
        v156 = 0;
        v127 = v126->SchedulerAssist;
        if ( v127 )
        {
          if ( v126->NestingLevel <= 1u )
          {
            v128 = v127[6];
            v127[6] = v128 + 1;
            if ( v128 == -1 )
LABEL_260:
              KiRemoveSystemWorkPriorityKick(v126);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
        {
          v129 = v126->SchedulerAssist;
          if ( v129 )
          {
            if ( v126->NestingLevel <= 1u )
            {
              v130 = v129[6] - 1;
              v129[6] = v130;
              if ( !v130 )
                KiRemoveSystemWorkPriorityKick(v126);
            }
          }
          do
            KeYieldProcessorEx(&v156, v123, v124, v125);
          while ( *(_QWORD *)(a2 + 48) );
          v131 = v126->SchedulerAssist;
          if ( v131 )
          {
            if ( v126->NestingLevel <= 1u )
            {
              v132 = v131[6];
              v131[6] = v132 + 1;
              if ( v132 == -1 )
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
      if ( (*(_BYTE *)(ready + 2) & 4) == 0 || (v87 = KiIsThreadRankNonZero(ready, (struct _KPRCB *)a2), v52 = 1, !v87) )
        v52 = *(_BYTE *)(ready + 195);
      **(_BYTE **)(a2 + 56) = v52;
      if ( *(_QWORD *)(a2 + 33976) )
      {
        v133 = (unsigned int)KiVpThreadSystemWorkPriority;
        if ( ready != *(_QWORD *)(a2 + 24) )
          v133 = (unsigned int)v52;
        KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v133, 0LL);
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
    v88 = KeGetCurrentPrcb();
    v89 = v88->SchedulerAssist;
    if ( v89 )
    {
      if ( v88->NestingLevel <= 1u )
      {
        v107 = v89[6] - 1;
        v89[6] = v107;
        if ( !v107 )
          KiRemoveSystemWorkPriorityKick(v88);
      }
    }
    *(_QWORD *)(ready + 216) = 0LL;
    v159 = (_QWORD *)(ready + 216);
    KiReadyDeferredReadyList(a2, &v159);
    v93 = KeGetCurrentPrcb();
    v153 = 0;
    v94 = v93->SchedulerAssist;
    if ( v94 )
    {
      if ( v93->NestingLevel <= 1u )
      {
        v108 = v94[6];
        v94[6] = v108 + 1;
        if ( v108 == -1 )
LABEL_219:
          KiRemoveSystemWorkPriorityKick(v93);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 48), 0LL) )
    {
      v109 = v93->SchedulerAssist;
      if ( v109 )
      {
        if ( v93->NestingLevel <= 1u )
        {
          v110 = v109[6] - 1;
          v109[6] = v110;
          if ( !v110 )
            KiRemoveSystemWorkPriorityKick(v93);
        }
      }
      do
        KeYieldProcessorEx(&v153, v90, v91, v92);
      while ( *(_QWORD *)(a2 + 48) );
      v111 = v93->SchedulerAssist;
      if ( v111 )
      {
        if ( v93->NestingLevel <= 1u )
        {
          v112 = v111[6];
          v111[6] = v112 + 1;
          if ( v112 == -1 )
            goto LABEL_219;
        }
      }
    }
    ready = *(_QWORD *)(a2 + 16);
    if ( ready )
      goto LABEL_127;
  }
  if ( (*(_BYTE *)(ready + 2) & 4) == 0 || (v83 = KiIsThreadRankNonZero(ready, (struct _KPRCB *)a2), v75 = 1, !v83) )
    v75 = *(_BYTE *)(ready + 195);
  **(_BYTE **)(a2 + 56) = v75;
  if ( *(_QWORD *)(a2 + 33976) )
  {
    v116 = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( ready != *(_QWORD *)(a2 + 24) )
      v116 = (unsigned int)v75;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v116, 0LL);
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
    if ( (*(_BYTE *)(ready + 2) & 4) == 0 || (v95 = KiIsThreadRankNonZero(ready, (struct _KPRCB *)a2), v70 = 1, !v95) )
      v70 = *(_BYTE *)(ready + 195);
    **(_BYTE **)(a2 + 56) = v70;
    v71 = *(_QWORD *)(a2 + 33976);
    if ( v71 )
    {
      v134 = (unsigned int)KiVpThreadSystemWorkPriority;
      if ( ready != *(_QWORD *)(a2 + 24) )
        v134 = (unsigned int)v70;
      KiSetSchedulerAssistPriority(*(_QWORD *)(a2 + 33976), v134, 0LL);
      v71 = *(_QWORD *)(a2 + 33976);
    }
    *(_QWORD *)(a2 + 16) = ready;
    if ( v71 )
      *(_BYTE *)(v71 + 16) = ready == *(_QWORD *)(a2 + 24);
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
    KiStartThreadCycleAccumulation(a2, ready, 0);
    _enable();
    if ( (*(_DWORD *)(ready + 120) & 0x800) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(ready + 120), 0xBu);
      KiInsertDeferredPreemptionApc(a2, ready, 0LL, v82);
    }
    if ( (BYTE4(PerfGlobalGroupMask) & 4) != 0 )
      EtwTraceContextSwap(a1, a1);
  }
  else
  {
    v55 = 0;
    if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 && *(_BYTE *)(a1 + 388) == 5 && *(_BYTE *)(a1 + 793) )
    {
      v135 = KeGetCurrentPrcb();
      v157 = 0;
      while ( 1 )
      {
        LOBYTE(v53) = 1;
        KiSetVpThreadSpinLockCount(v135, v53);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
          break;
        KiSetVpThreadSpinLockCount(v135, 0LL);
        do
          KeYieldProcessorEx(&v157, v53, v137, v138);
        while ( *(_QWORD *)(a1 + 64) );
      }
      if ( (*(_DWORD *)(a1 + 120) & 0x400000) != 0 && *(_BYTE *)(a1 + 388) == 5 )
      {
        LOBYTE(v136) = 1;
        KiUpdateVpBackingRequiresPriorityKickState(a1, v136);
        KiUpdateVPBackingThreadPriority(v139, 0LL, 0);
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
        v140 = KeGetCurrentPrcb();
        v141 = v140->SchedulerAssist;
        v142 = (v141[5] & 0xFFFF0003) == 0;
        v141[5] &= 0xFFFF0003;
        if ( v142 )
          KiRemoveSystemWorkPriorityKick(v140);
      }
    }
    __writecr8(1uLL);
    KiDeliverApc(0, 0, 0LL);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v54 <= 0xFu && CurrentIrql >= 2u )
      {
        v144 = KeGetCurrentPrcb();
        v145 = v144->SchedulerAssist;
        v146 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v54 + 1));
        v142 = (v146 & v145[5]) == 0;
        v145[5] &= v146;
        if ( v142 )
          KiRemoveSystemWorkPriorityKick(v144);
      }
    }
  }
  __writecr8(v54);
  return v58;
}
