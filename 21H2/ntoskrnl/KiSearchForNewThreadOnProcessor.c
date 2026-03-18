/*
 * XREFs of KiSearchForNewThreadOnProcessor @ 0x1402B4130
 * Callers:
 *     KiSwapThread @ 0x1402B3140 (KiSwapThread.c)
 *     KiSearchForNewThreadOnSubNode @ 0x1403441B0 (KiSearchForNewThreadOnSubNode.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRemoveThreadFromReadyQueue @ 0x140210484 (KiRemoveThreadFromReadyQueue.c)
 *     KiGroupSchedulingMoveThread @ 0x140210580 (KiGroupSchedulingMoveThread.c)
 *     KiCheckForMaxOverQuotaScb @ 0x14023BD18 (KiCheckForMaxOverQuotaScb.c)
 *     KiSetVpThreadSpinLockCount @ 0x1402B1050 (KiSetVpThreadSpinLockCount.c)
 *     KiMayStealStandbyThread @ 0x1402B4E80 (KiMayStealStandbyThread.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiEnterDeferredReadyState @ 0x1402F69A0 (KiEnterDeferredReadyState.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiSelectNextThread @ 0x14035C3FC (KiSelectNextThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14045AD66 (KiConvertDynamicHeteroPolicy.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 */

__int64 __fastcall KiSearchForNewThreadOnProcessor(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  char v6; // r14
  int v7; // r11d
  struct _KPRCB *v9; // rbp
  _DWORD *v10; // rcx
  struct _KPRCB *v11; // rbp
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  _DWORD *v14; // rcx
  struct _KPRCB *CurrentPrcb; // r13
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rbp
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v19; // rbp
  _DWORD *v20; // rcx
  __int64 v21; // rbp
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  _WORD *v25; // rdx
  unsigned int v26; // r15d
  __int64 v27; // r10
  __int64 v28; // rdx
  unsigned int v29; // eax
  _QWORD **v30; // r12
  _QWORD *v31; // r13
  _WORD *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // r9
  unsigned int v35; // eax
  struct _KPRCB *v36; // rcx
  _DWORD *v37; // rdx
  __int64 v38; // rax
  char *v39; // r12
  char v40; // r13
  char v41; // al
  char v42; // cl
  __int64 *v43; // rax
  char v44; // r9
  __int64 v45; // r10
  char v46; // r12
  int v47; // r15d
  __int64 v48; // rbx
  __int64 v49; // rsi
  int v50; // r15d
  struct _KPRCB *v51; // rcx
  _DWORD *v52; // rdx
  __int64 v53; // rcx
  struct _KPRCB *v54; // rcx
  _DWORD *v55; // rdx
  unsigned int v56; // r15d
  __int64 v57; // r8
  unsigned int v58; // eax
  _QWORD *v59; // r12
  __int64 v60; // r9
  _QWORD *v61; // rdx
  _WORD *v62; // rcx
  __int64 v63; // rax
  __int64 v64; // r13
  unsigned int v65; // eax
  __int64 v66; // rcx
  _QWORD *v67; // rdx
  _QWORD *v68; // rax
  _DWORD *v69; // rdx
  struct _KPRCB *v70; // rcx
  _DWORD *v71; // rdx
  _DWORD *v72; // rcx
  _DWORD *v73; // rcx
  _DWORD *v74; // rcx
  _DWORD *v75; // rcx
  _DWORD *v76; // rcx
  _DWORD *v77; // rcx
  _DWORD *v78; // rdx
  _DWORD *v79; // rcx
  _DWORD *v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rcx
  struct _KPRCB *v86; // rcx
  _DWORD *v87; // rdx
  _QWORD *v88; // r11
  struct _KPRCB *v89; // rcx
  _DWORD *v90; // rdx
  _QWORD *v91; // rbp
  char v92; // r12
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  int v101; // eax
  int v102; // eax
  int v103; // eax
  int v104; // eax
  int v105; // edx
  __int64 v106; // rax
  __int64 v107; // rdx
  int v108; // eax
  unsigned __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rax
  unsigned __int64 v112; // rcx
  unsigned __int64 v113; // rax
  __int64 v114; // rax
  int v115; // eax
  int v116; // eax
  int v117; // eax
  int v118; // eax
  int v119; // eax
  __int64 v120; // rdx
  char v121; // al
  char v122; // al
  unsigned int v123; // edx
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  char v128; // [rsp+30h] [rbp-78h]
  char v129; // [rsp+34h] [rbp-74h]
  __int64 v130; // [rsp+38h] [rbp-70h]
  _QWORD *v131; // [rsp+38h] [rbp-70h]
  __int64 v132; // [rsp+40h] [rbp-68h]
  __int64 v133; // [rsp+40h] [rbp-68h]
  int v134; // [rsp+48h] [rbp-60h] BYREF
  int v135; // [rsp+4Ch] [rbp-5Ch] BYREF
  int v136; // [rsp+50h] [rbp-58h] BYREF
  int v137; // [rsp+54h] [rbp-54h] BYREF
  int v138; // [rsp+58h] [rbp-50h]
  int v139; // [rsp+5Ch] [rbp-4Ch] BYREF
  _QWORD *v140; // [rsp+60h] [rbp-48h] BYREF
  struct _KPRCB *v141; // [rsp+B8h] [rbp+10h]
  int v142; // [rsp+C8h] [rbp+20h]
  __int64 v143; // [rsp+C8h] [rbp+20h]
  int v144; // [rsp+C8h] [rbp+20h]

  v6 = 64;
LABEL_2:
  while ( 2 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( a2 )
      {
        if ( !*(_DWORD *)(a2 + 32472) && !(unsigned __int8)KiMayStealStandbyThread(a2, a1) && !*(_QWORD *)(a2 + 32560) )
          return 0LL;
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = a1;
        v134 = v7;
        v17 = a2;
        if ( a1 <= a2 )
        {
          v16 = a2;
          v17 = a1;
        }
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v93 = SchedulerAssist[6];
            SchedulerAssist[6] = v93 + 1;
            if ( v93 == -1 )
LABEL_142:
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 48), 0LL) )
        {
          v74 = CurrentPrcb->SchedulerAssist;
          if ( v74 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v94 = v74[6] - 1;
              v74[6] = v94;
              if ( !v94 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          do
            KeYieldProcessorEx(&v134);
          while ( *(_QWORD *)(v17 + 48) );
          v75 = CurrentPrcb->SchedulerAssist;
          if ( v75 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v95 = v75[6];
              v75[6] = v95 + 1;
              if ( v95 == -1 )
                goto LABEL_142;
            }
          }
        }
        if ( v17 != v16 )
        {
          v19 = KeGetCurrentPrcb();
          v135 = 0;
          v20 = v19->SchedulerAssist;
          if ( v20 )
          {
            if ( v19->NestingLevel <= 1u )
            {
              v96 = v20[6];
              v20[6] = v96 + 1;
              if ( v96 == -1 )
LABEL_151:
                KiRemoveSystemWorkPriorityKick(v19);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 48), 0LL) )
          {
            v72 = v19->SchedulerAssist;
            if ( v72 )
            {
              if ( v19->NestingLevel <= 1u )
              {
                v97 = v72[6] - 1;
                v72[6] = v97;
                if ( !v97 )
                  KiRemoveSystemWorkPriorityKick(v19);
              }
            }
            do
              KeYieldProcessorEx(&v135);
            while ( *(_QWORD *)(v16 + 48) );
            v73 = v19->SchedulerAssist;
            if ( v73 )
            {
              if ( v19->NestingLevel <= 1u )
              {
                v98 = v73[6];
                v73[6] = v98 + 1;
                if ( v98 == -1 )
                  goto LABEL_151;
              }
            }
          }
        }
      }
      else
      {
        if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFFE) == 0 )
          return 0LL;
        v9 = KeGetCurrentPrcb();
        v136 = 0;
        v10 = v9->SchedulerAssist;
        if ( v10 )
        {
          if ( v9->NestingLevel <= 1u )
          {
            v99 = v10[6];
            v10[6] = v99 + 1;
            if ( v99 == -1 )
LABEL_160:
              KiRemoveSystemWorkPriorityKick(v9);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
        {
          v76 = v9->SchedulerAssist;
          if ( v76 )
          {
            if ( v9->NestingLevel <= 1u )
            {
              v100 = v76[6] - 1;
              v76[6] = v100;
              if ( !v100 )
                KiRemoveSystemWorkPriorityKick(v9);
            }
          }
          do
            KeYieldProcessorEx(&v136);
          while ( *(_QWORD *)(a1 + 48) );
          v77 = v9->SchedulerAssist;
          if ( v77 )
          {
            if ( v9->NestingLevel <= 1u )
            {
              v101 = v77[6];
              v77[6] = v101 + 1;
              if ( v101 == -1 )
                goto LABEL_160;
            }
          }
        }
        v11 = KeGetCurrentPrcb();
        v137 = 0;
        v12 = v11->SchedulerAssist;
        if ( v12 )
        {
          if ( v11->NestingLevel <= 1u )
          {
            v102 = v12[6];
            v12[6] = v102 + 1;
            if ( v102 == -1 )
LABEL_169:
              KiRemoveSystemWorkPriorityKick(v11);
          }
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)a3, 0LL) )
        {
          v13 = v11->SchedulerAssist;
          if ( v13 )
          {
            if ( v11->NestingLevel <= 1u )
            {
              v103 = v13[6] - 1;
              v13[6] = v103;
              if ( !v103 )
                KiRemoveSystemWorkPriorityKick(v11);
            }
          }
          do
            KeYieldProcessorEx(&v137);
          while ( *(_QWORD *)a3 );
          v14 = v11->SchedulerAssist;
          if ( v14 )
          {
            if ( v11->NestingLevel <= 1u )
            {
              v104 = v14[6];
              v14[6] = v104 + 1;
              if ( v104 == -1 )
                goto LABEL_169;
            }
          }
        }
      }
      v21 = *(_QWORD *)(a1 + 16);
      if ( !v21 )
        break;
      if ( a3 )
      {
        _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
        v70 = KeGetCurrentPrcb();
        v78 = v70->SchedulerAssist;
        if ( v78 )
        {
          if ( v70->NestingLevel <= 1u )
          {
            v117 = v78[6] - 1;
            v78[6] = v117;
            if ( !v117 )
LABEL_208:
              KiRemoveSystemWorkPriorityKick(v70);
          }
        }
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
        v70 = KeGetCurrentPrcb();
        v71 = v70->SchedulerAssist;
        if ( v71 )
        {
          if ( v70->NestingLevel <= 1u )
          {
            v118 = v71[6] - 1;
            v71[6] = v118;
            if ( !v118 )
              goto LABEL_208;
          }
        }
      }
      v7 = 0;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( v21 != *(_QWORD *)(a1 + 24) )
      {
        v44 = 1;
        goto LABEL_57;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v86 = KeGetCurrentPrcb();
      v87 = v86->SchedulerAssist;
      if ( v87 )
      {
        if ( v86->NestingLevel <= 1u )
        {
          v119 = v87[6] - 1;
          v87[6] = v119;
          if ( !v119 )
          {
            KiRemoveSystemWorkPriorityKick(v86);
            goto LABEL_2;
          }
        }
      }
    }
    if ( a3 )
    {
      v56 = *(_DWORD *)(a3 + 8) & 0xFFFFFFFE;
      if ( v56 )
      {
        v57 = 64LL;
        v133 = *(_QWORD *)(a1 + 200);
        v144 = 64;
LABEL_72:
        _BitScanReverse(&v58, v56);
        v56 ^= 1 << v58;
        v59 = (_QWORD *)(a3 + 16 + 16LL * v58);
        v128 = v58;
        v60 = v133;
        v61 = (_QWORD *)*v59;
        v131 = (_QWORD *)*v59;
        while ( 1 )
        {
          v62 = (_WORD *)v61[45];
          v21 = (__int64)(v61 - 27);
          v63 = *(unsigned __int8 *)(a1 + 208);
          if ( (unsigned __int16)v63 < *v62 )
          {
            v64 = *(_QWORD *)&v62[4 * v63 + 4];
            if ( v64 )
            {
              v65 = *(unsigned __int8 *)(v21 + 125);
              if ( v65 >= 5 )
              {
                v65 = KiConvertDynamicHeteroPolicy(v61 - 27, v61, v57, v60);
                v61 = v131;
                v60 = v133;
                LODWORD(v57) = v144;
              }
              if ( v65 )
              {
                v57 = *(_QWORD *)(a1 + 192);
                v105 = v65 * *(unsigned __int8 *)(v57 + 185);
                v106 = *(_QWORD *)(v57 + 192);
                LODWORD(v57) = v144;
                v107 = v64 & *(_QWORD *)(v106 + 24LL * ((unsigned int)*(unsigned __int8 *)(v21 + 516) + v105) + 16);
                if ( v107 )
                  v64 = v107;
                v61 = v131;
              }
              if ( (v60 & v64) != 0 )
              {
                v66 = *(_QWORD *)(v21 + 104);
                if ( !v66 )
                  break;
                v85 = *(unsigned int *)(a1 + 216) + v66;
                if ( !v85 || !KiCheckForMaxOverQuotaScb(v85) )
                  break;
              }
            }
          }
          v61 = (_QWORD *)*v61;
          v57 = (unsigned int)(v57 - 1);
          v144 = v57;
          v131 = v61;
          if ( v61 == v59 || !(_DWORD)v57 )
          {
            if ( !v56 || !(_DWORD)v57 )
            {
              v21 = 0LL;
              goto LABEL_87;
            }
            goto LABEL_72;
          }
        }
        if ( (*(_DWORD *)(v21 + 120) & 0x400000) != 0 )
          _InterlockedAnd(*(volatile signed __int32 **)(v21 + 968), 0xFFFBFFFF);
        v67 = *(_QWORD **)(v21 + 216);
        v68 = *(_QWORD **)(v21 + 224);
        if ( v67[1] != v21 + 216 || *v68 != v21 + 216 )
          __fastfail(3u);
        *v68 = v67;
        v67[1] = v68;
        if ( v68 == v67 )
          *(_DWORD *)(a3 + 8) ^= 1 << v128;
        --*(_DWORD *)(a3 + 672);
        *(_QWORD *)(a3 + 680) -= *(unsigned int *)(v21 + 1648);
        *(_DWORD *)(v21 + 536) = *(_DWORD *)(a1 + 36);
      }
LABEL_87:
      _InterlockedAnd64((volatile signed __int64 *)a3, 0LL);
      v36 = KeGetCurrentPrcb();
      v69 = v36->SchedulerAssist;
      if ( v69 )
      {
        if ( v36->NestingLevel <= 1u )
        {
          v108 = v69[6] - 1;
          v69[6] = v108;
          if ( !v108 )
            goto LABEL_199;
        }
      }
    }
    else
    {
      if ( !(unsigned __int8)KiMayStealStandbyThread(a2, a1) )
        goto LABEL_32;
      v23 = *(_QWORD *)(a2 + 16);
      if ( *(_QWORD *)(v23 + 568) != KiCpuSetSequence && (*(_DWORD *)(v23 + 116) & 8) == 0 )
        goto LABEL_32;
      v21 = *(_QWORD *)(a2 + 16);
      v24 = *(unsigned __int8 *)(a1 + 208);
      v25 = *(_WORD **)(v21 + 576);
      if ( (unsigned __int16)v24 < *v25 && ((*(_QWORD *)&v25[4 * v24 + 4] >> *(_BYTE *)(a1 + 209)) & 1) != 0 )
      {
        KiSelectNextThread(a2, 0LL, v22);
        *(_DWORD *)(v21 + 536) = *(_DWORD *)(a1 + 36);
      }
      else
      {
        v21 = 0LL;
LABEL_32:
        v26 = *(_DWORD *)(a2 + 32472);
        if ( v26 )
        {
          v27 = *(_QWORD *)(a1 + 200);
          v28 = 64LL;
          v142 = 64;
          v130 = v27;
LABEL_34:
          _BitScanReverse(&v29, v26);
          v26 ^= 1 << v29;
          v30 = (_QWORD **)(a2 + 32576 + 16LL * v29);
          v129 = v29;
          v31 = *v30;
          while ( 1 )
          {
            v32 = (_WORD *)v31[45];
            v21 = (__int64)(v31 - 27);
            v33 = *(unsigned __int8 *)(a1 + 208);
            if ( (unsigned __int16)v33 < *v32 )
            {
              v34 = *(_QWORD *)&v32[4 * v33 + 4];
              v132 = v34;
              if ( v34 )
              {
                v35 = *(unsigned __int8 *)(v21 + 125);
                if ( v35 >= 5 )
                {
                  v35 = KiConvertDynamicHeteroPolicy(v31 - 27, v28, v22, v34);
                  v34 = v132;
                  LODWORD(v28) = v142;
                  v27 = v130;
                }
                if ( v35 )
                {
                  v22 = *(_QWORD *)(a1 + 192);
                  if ( (v34 & *(_QWORD *)(*(_QWORD *)(v22 + 192)
                                        + 24LL
                                        * (*(unsigned __int8 *)(v21 + 516) + v35 * *(unsigned __int8 *)(v22 + 185))
                                        + 16)) != 0 )
                    v34 &= *(_QWORD *)(*(_QWORD *)(v22 + 192)
                                     + 24LL * (*(unsigned __int8 *)(v21 + 516) + v35 * *(unsigned __int8 *)(v22 + 185))
                                     + 16);
                  LODWORD(v28) = v142;
                }
                if ( (v27 & v34) != 0 )
                {
                  v83 = *(_QWORD *)(v21 + 104);
                  if ( !v83 )
                    break;
                  v84 = *(unsigned int *)(a1 + 216) + v83;
                  if ( !v84 || !KiCheckForMaxOverQuotaScb(v84) )
                    break;
                }
              }
            }
            v31 = (_QWORD *)*v31;
            v28 = (unsigned int)(v28 - 1);
            v142 = v28;
            if ( v31 == v30 || !(_DWORD)v28 )
            {
              if ( !v26 || !(_DWORD)v28 )
              {
                v21 = 0LL;
                goto LABEL_44;
              }
              goto LABEL_34;
            }
          }
          KiRemoveThreadFromReadyQueue(a2, (__int64)v31, v129);
          *(_DWORD *)(v21 + 536) = *(_DWORD *)(a1 + 36);
        }
        else
        {
LABEL_44:
          v138 = 0;
          if ( !KiPerfIsoEnabled
            || (v109 = *(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL)
                     - ((*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) >> 1) & 0x5555555555555555LL),
                (unsigned int)((0x101010101010101LL
                              * (((v109 & 0x3333333333333333LL)
                                + ((v109 >> 2) & 0x3333333333333333LL)
                                + (((v109 & 0x3333333333333333LL) + ((v109 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24 >= KiPerfIsoEnabled)
            && ((v110 = *(_QWORD *)(a1 + 200), v111 = *(_QWORD *)(a1 + 34912), v110 == v111)
             || (v112 = v111 & ~v110, (*(_QWORD *)(*(_QWORD *)(a1 + 192) + 40LL) & v112) != 0)
             || (_BitScanForward64(&v113, v112),
                 v114 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int8 *)(a1 + 208)
                                                                         + (int)v113],
                 v138 = v114,
                 (*(_DWORD *)(KiProcessorBlock[v114] + 236) & 0x400) != 0)) )
          {
            v21 = KiGroupSchedulingMoveThread(a1, a2, a2 + 32560);
          }
        }
      }
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
      v36 = KeGetCurrentPrcb();
      v37 = v36->SchedulerAssist;
      if ( v37 )
      {
        if ( v36->NestingLevel <= 1u )
        {
          v115 = v37[6] - 1;
          v37[6] = v115;
          if ( !v115 )
LABEL_199:
            KiRemoveSystemWorkPriorityKick(v36);
        }
      }
    }
    if ( !v21 )
    {
      v38 = *(_QWORD *)(a1 + 35000);
      if ( v38 )
        *(_BYTE *)(v38 + 16) = 1;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      KiSetVpThreadSpinLockCount((__int64)KeGetCurrentPrcb(), 0);
      return v21;
    }
    if ( *(_QWORD *)(v21 + 568) != KiCpuSetSequence && (*(_DWORD *)(v21 + 116) & 8) == 0 )
    {
      KiEnterDeferredReadyState(v21);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v89 = KeGetCurrentPrcb();
      v90 = v89->SchedulerAssist;
      if ( v90 )
      {
        if ( v89->NestingLevel <= 1u )
        {
          v116 = v90[6] - 1;
          v90[6] = v116;
          if ( !v116 )
          {
            KiRemoveSystemWorkPriorityKick(v89);
            v88 = 0LL;
          }
        }
      }
      v91 = (_QWORD *)(v21 + 216);
      v140 = v88;
      v92 = (char)v88;
      *v91 = v88;
      do
      {
        KiDeferredReadySingleThread(a1, v91 - 27, &v140);
        v91 = v140;
        ++v92;
        if ( v140 )
          v140 = (_QWORD *)*v140;
        if ( (v92 & 0xF) == 0 )
          KiFlushSoftwareInterruptBatch(a1 + 12760);
      }
      while ( v91 );
      KiFlushSoftwareInterruptBatch(a1 + 12760);
      continue;
    }
    break;
  }
  v39 = *(char **)(a1 + 56);
  v40 = *v39;
  if ( (*(_BYTE *)(v21 + 2) & 4) != 0 )
  {
    if ( *(char *)(v21 + 195) < 16
      && *(_QWORD *)(v21 + 104)
      && (v81 = *(_QWORD *)(v21 + 104)) != 0
      && (v82 = *(unsigned int *)(a1 + 216) + v81) != 0
      && (unsigned int)KiGetThreadEffectiveRankNonZero(v21, v82, 0LL, 0, 0LL) )
    {
      v41 = v40 ^ (v40 ^ 1) & 0x7F;
    }
    else
    {
      v41 = v40 ^ (v40 ^ *(_BYTE *)(v21 + 195)) & 0x7F;
    }
  }
  else
  {
    v41 = v40 ^ (*(_BYTE *)(v21 + 195) ^ v40) & 0x7F;
  }
  v42 = v41 & 0x7F | (*(_BYTE *)(v21 + 119) << 7);
  *v39 = v42;
  v43 = (__int64 *)(a1 + 56);
  v44 = 0;
  if ( *(_QWORD *)(a1 + 35000) )
  {
    if ( v21 == *(_QWORD *)(a1 + 24) )
      v120 = (unsigned int)KiVpThreadSystemWorkPriority;
    else
      v120 = v42 & 0x7F;
    KiSetSchedulerAssistPriority(*(_QWORD *)(a1 + 35000), v120, 0LL);
    v44 = 0;
    v43 = (__int64 *)(a1 + 56);
  }
  v45 = *v43;
  if ( KeHeteroSystem )
  {
    v121 = (*(_BYTE *)(v45 + 64) ^ *(_BYTE *)(v21 + 512)) & 7 ^ *(_BYTE *)(v45 + 64);
    v122 = (v121 ^ (8 * *(_BYTE *)(v21 + 516))) & 0x38 ^ v121;
    v123 = *(_DWORD *)(v21 + 80);
    if ( v123 <= *(_DWORD *)(v21 + 84) )
      v123 = *(_DWORD *)(v21 + 84);
    if ( v123 < KiDynamicHeteroCpuPolicyExpectedCycles )
      v6 = 0;
    *(_BYTE *)(v45 + 64) = v6 | v122 & 0xBF;
  }
LABEL_57:
  *(_QWORD *)(a1 + 8) = v21;
  if ( *(_BYTE *)(v21 + 388) == 1 )
    *(_DWORD *)(v21 + 132) = *(_DWORD *)(v21 + 132) - *(_DWORD *)(v21 + 436) + MEMORY[0xFFFFF78000000320];
  *(_BYTE *)(v21 + 388) = 2;
  if ( !v44 )
  {
    v46 = *(_BYTE *)(a1 + 209);
    v47 = *(unsigned __int8 *)(a1 + 35);
    v48 = *(_QWORD *)(a1 + 192);
    v49 = 1LL << v46;
    v143 = *(_QWORD *)(a1 + 34912);
    *(_BYTE *)(a1 + 13243) = 0;
    if ( (v47 & 1) == 0 )
    {
      v50 = v47 + 1;
      *(_BYTE *)(a1 + 35) = v50;
      v51 = KeGetCurrentPrcb();
      v141 = v51;
      v139 = 0;
      v52 = v51->SchedulerAssist;
      if ( v52 )
      {
        if ( v51->NestingLevel <= 1u )
        {
          v124 = v52[6];
          v52[6] = v124 + 1;
          if ( v124 == -1 )
            KiRemoveSystemWorkPriorityKick(v51);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)v48, 0LL) )
      {
        v79 = v141->SchedulerAssist;
        if ( v79 )
        {
          if ( v141->NestingLevel <= 1u )
          {
            v125 = v79[6] - 1;
            v79[6] = v125;
            if ( !v125 )
              KiRemoveSystemWorkPriorityKick(v141);
          }
        }
        do
          KeYieldProcessorEx(&v139);
        while ( *(_QWORD *)v48 );
        v80 = v141->SchedulerAssist;
        if ( v80 )
        {
          if ( v141->NestingLevel <= 1u )
          {
            v126 = v80[6];
            v80[6] = v126 + 1;
            if ( v126 == -1 )
              KiRemoveSystemWorkPriorityKick(v141);
          }
        }
      }
      if ( v50 == 1 )
        *(_QWORD *)(v48 + 8) &= ~(1LL << v46);
      *(_QWORD *)(v48 + 40) &= ~(1LL << v46);
      *(_QWORD *)(v48 + 16) &= ~v143;
      v53 = *(_QWORD *)(v48 + 24) & ~v143;
      if ( (v143 & ~*(_QWORD *)(v48 + 40)) == v49 )
        v53 |= v49;
      *(_QWORD *)(v48 + 24) = v53;
      *(_QWORD *)(v48 + 32) &= ~*(_QWORD *)(a1 + 34936);
      _InterlockedAnd64((volatile signed __int64 *)v48, 0LL);
      v54 = KeGetCurrentPrcb();
      v55 = v54->SchedulerAssist;
      if ( v55 )
      {
        if ( v54->NestingLevel <= 1u )
        {
          v127 = v55[6] - 1;
          v55[6] = v127;
          if ( !v127 )
            KiRemoveSystemWorkPriorityKick(v54);
        }
      }
      goto LABEL_68;
    }
LABEL_234:
    __fastfail(0x21u);
  }
LABEL_68:
  if ( (*(_BYTE *)(a1 + 35) & 1) == 0 )
    goto LABEL_234;
  return v21;
}
