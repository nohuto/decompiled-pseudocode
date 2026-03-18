/*
 * XREFs of KiRetireDpcList @ 0x1402A8980
 * Callers:
 *     KiExecuteDpcDelegate @ 0x1403C6DC0 (KiExecuteDpcDelegate.c)
 *     KiIdleLoop @ 0x140424300 (KiIdleLoop.c)
 *     KyRetireDpcList @ 0x140428D70 (KyRetireDpcList.c)
 * Callees:
 *     KiEndPartialDpcProcessing @ 0x14023E4B8 (KiEndPartialDpcProcessing.c)
 *     KiNormalPriorityReadyScan @ 0x1402447EC (KiNormalPriorityReadyScan.c)
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     KiProcessExpiredTimerList @ 0x1402A7C20 (KiProcessExpiredTimerList.c)
 *     KiSelectActiveTimerTable @ 0x1402A8670 (KiSelectActiveTimerTable.c)
 *     KiExecuteAllDpcs @ 0x1402A9790 (KiExecuteAllDpcs.c)
 *     KiRemoveEntryTimer @ 0x1402E40E0 (KiRemoveEntryTimer.c)
 *     KiTimer2Expiration @ 0x1402F27B0 (KiTimer2Expiration.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     KiStartThreadCycleAccumulation @ 0x140345B70 (KiStartThreadCycleAccumulation.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     HalpTimerScaleCounter @ 0x1403A572C (HalpTimerScaleCounter.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KiBeginCounterAccumulation @ 0x140571770 (KiBeginCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x140575600 (KiUpdateThreadHgsFeedback.c)
 */

signed __int16 __fastcall KiRetireDpcList(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r14
  volatile signed __int16 *v3; // r15
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  char v8; // bl
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  unsigned int v13; // ecx
  int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned __int8 v22; // al
  __int64 v23; // r9
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  int v31; // eax
  __int64 v32; // r8
  int v33; // ebx
  __int64 v34; // r8
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r8
  bool v37; // zf
  signed __int16 result; // ax
  __int64 v39; // r9
  __int64 v40; // rcx
  unsigned int v41; // edx
  unsigned int v42; // edx
  unsigned __int8 v43; // al
  _QWORD *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 active; // rax
  unsigned __int8 v48; // dl
  unsigned __int64 *v49; // r10
  _QWORD *v50; // r11
  __int64 v51; // rcx
  unsigned __int64 v52; // r12
  __int64 v53; // r8
  unsigned int v54; // r14d
  unsigned __int8 v55; // al
  bool v56; // r10
  int v57; // r9d
  unsigned __int64 v58; // r15
  unsigned int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // r13
  ULONG_PTR v63; // rsi
  __int64 v64; // rbx
  __int64 v65; // rcx
  __int64 v66; // rax
  unsigned int v67; // ecx
  int v68; // eax
  unsigned __int64 v69; // r10
  unsigned int v70; // edx
  unsigned int v71; // ecx
  unsigned int v72; // r14d
  unsigned int v73; // ebx
  unsigned int v74; // r9d
  unsigned int v75; // esi
  int v76; // r8d
  __int64 v77; // r15
  _QWORD *v78; // rdi
  unsigned int v79; // esi
  unsigned int v80; // r10d
  __int64 v81; // rdi
  _QWORD *v82; // rbx
  __int64 v83; // r10
  unsigned int v84; // eax
  struct _KPRCB *v85; // r13
  _DWORD *v86; // rcx
  volatile signed __int64 *v87; // r13
  _QWORD *v88; // rax
  ULONG_PTR v89; // rdx
  unsigned __int64 v90; // rax
  struct _KPRCB *v91; // rcx
  _DWORD *v92; // rdx
  char v93; // al
  __int64 v94; // r11
  ULONG_PTR v95; // r9
  unsigned __int64 v96; // rax
  _QWORD *v97; // rcx
  ULONG_PTR v98; // r10
  _QWORD *v99; // rax
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *SchedulerAssist; // rcx
  unsigned int v102; // edx
  _QWORD *v103; // rax
  ULONG_PTR v104; // r13
  unsigned __int64 v105; // rax
  struct _KPRCB *v106; // rcx
  _DWORD *v107; // rdx
  char v108; // al
  __int64 v109; // r10
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // r12
  signed __int64 v113; // rdx
  struct _KPRCB *v114; // r11
  _DWORD *v115; // rcx
  volatile signed __int32 *v116; // r8
  __int64 v117; // rcx
  unsigned int v118; // r10d
  volatile signed __int32 *v119; // rcx
  struct _KPRCB *v120; // rcx
  _DWORD *v121; // r8
  _QWORD *i; // rcx
  _DWORD *v123; // rcx
  _DWORD *v124; // rcx
  _DWORD *v125; // rcx
  _DWORD *v126; // rcx
  _DWORD *v127; // rcx
  struct _KPRCB *v128; // rcx
  _DWORD *v129; // rdx
  struct _KPRCB *v130; // r13
  _DWORD *v131; // rcx
  struct _KPRCB *v132; // rcx
  _DWORD *v133; // rdx
  __int64 v134; // rax
  unsigned int v135; // r9d
  int v136; // ecx
  unsigned int v137; // edx
  __int64 v138; // rcx
  __int64 v139; // rbx
  __int64 v140; // r9
  unsigned int *v141; // r10
  __int64 v142; // r11
  __int64 v143; // r8
  unsigned __int64 v144; // rax
  __int64 InternalData; // rax
  __int64 v146; // rax
  __int64 v147; // r12
  signed __int64 v148; // rdx
  __int64 v149; // rdi
  __int64 v150; // rax
  unsigned __int64 v151; // r10
  signed __int64 v152; // rax
  int v153; // r9d
  __int64 v154; // r8
  __int64 v155; // rcx
  unsigned __int64 v156; // r8
  __int64 v157; // rdx
  __int64 v158; // rdx
  __int64 v159; // rdi
  __int64 v160; // rax
  unsigned __int64 v161; // r10
  signed __int64 v162; // rax
  int v163; // r9d
  __int64 v164; // r8
  __int64 v165; // rcx
  unsigned __int64 v166; // r8
  __int64 v167; // rdx
  __int64 v168; // rdx
  __int64 v169; // r8
  int v170; // eax
  int v171; // eax
  int v172; // eax
  struct _KPRCB *v173; // rcx
  _DWORD *v174; // rdx
  int v175; // eax
  int v176; // eax
  int v177; // eax
  int v178; // eax
  int v179; // eax
  int v180; // eax
  _DWORD *v181; // rcx
  int v182; // eax
  _DWORD *v183; // rcx
  int v184; // eax
  int v185; // eax
  int v186; // eax
  int v187; // eax
  int v188; // eax
  _DWORD *v189; // rcx
  int v190; // eax
  _DWORD *v191; // rcx
  int v192; // eax
  int v193; // eax
  _DWORD *v194; // rdx
  int v195; // eax
  _DWORD *v196; // rdx
  int v197; // eax
  int v198; // eax
  struct _KPRCB *v199; // rcx
  _DWORD *v200; // rdx
  int v201; // eax
  int v202; // eax
  __int64 v203; // rax
  signed __int32 v204[8]; // [rsp+0h] [rbp-100h] BYREF
  bool v205; // [rsp+30h] [rbp-D0h]
  unsigned int v206; // [rsp+34h] [rbp-CCh]
  int v207; // [rsp+38h] [rbp-C8h]
  unsigned int v208; // [rsp+3Ch] [rbp-C4h]
  __int64 v209; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v210; // [rsp+48h] [rbp-B8h]
  volatile signed __int32 *v211; // [rsp+50h] [rbp-B0h]
  int v212; // [rsp+58h] [rbp-A8h]
  struct _KPRCB *v213; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v214; // [rsp+68h] [rbp-98h]
  int v215; // [rsp+70h] [rbp-90h]
  int v216; // [rsp+74h] [rbp-8Ch]
  __int64 v217; // [rsp+78h] [rbp-88h]
  unsigned int v218; // [rsp+80h] [rbp-80h]
  ULONG_PTR BugCheckParameter4; // [rsp+88h] [rbp-78h]
  volatile signed __int64 *v220; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR v221; // [rsp+98h] [rbp-68h]
  ULONG_PTR v222; // [rsp+A0h] [rbp-60h]
  int v223; // [rsp+A8h] [rbp-58h]
  int v224; // [rsp+ACh] [rbp-54h] BYREF
  int v225; // [rsp+B0h] [rbp-50h] BYREF
  int v226; // [rsp+B4h] [rbp-4Ch] BYREF
  int v227; // [rsp+B8h] [rbp-48h] BYREF
  int v228; // [rsp+BCh] [rbp-44h] BYREF
  unsigned int v229; // [rsp+C0h] [rbp-40h]
  __int64 v230; // [rsp+C8h] [rbp-38h]
  __int64 v231; // [rsp+D0h] [rbp-30h]
  __int128 v232; // [rsp+D8h] [rbp-28h]
  __int64 v233; // [rsp+E8h] [rbp-18h]
  __int128 v234; // [rsp+F0h] [rbp-10h]
  __int64 v235; // [rsp+100h] [rbp+0h]
  __int128 v236; // [rsp+108h] [rbp+8h]
  __int64 v237; // [rsp+118h] [rbp+18h]
  __int128 v238; // [rsp+120h] [rbp+20h]
  __int64 v239; // [rsp+130h] [rbp+30h]
  __int128 v240; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v241[3]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v242[34]; // [rsp+160h] [rbp+60h] BYREF

  v1 = a1;
  v217 = a1;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = (volatile signed __int16 *)(a1 + 13244);
  v230 = v2;
  memset(v242, 0, sizeof(v242));
  while ( 2 )
  {
    *(_BYTE *)(v1 + 32) = 1;
    v4 = __rdtsc();
    v5 = v4 - *(_QWORD *)(v1 + 33152);
    *(_QWORD *)(v2 + 72) += v5;
    v6 = *(unsigned int *)(v2 + 80);
    v7 = v5 * *(unsigned int *)(v1 + 33208);
    *(_QWORD *)(v1 + 33152) = v4;
    v8 = *(_BYTE *)(v2 + 2);
    v9 = (v7 >> 16) + v6;
    if ( v9 > 0xFFFFFFFF )
      LODWORD(v9) = -1;
    *(_DWORD *)(v2 + 80) = v9;
    if ( (v8 & 0xBE) != 0 )
    {
      if ( v8 < 0 )
      {
        v10 = *(_QWORD *)(v1 + 34480);
        v11 = (*(_QWORD *)(*(_QWORD *)(v2 + 544) + 1024LL) >> 4) & 0x1FFLL;
        v12 = ((unsigned int)*(_QWORD *)(*(_QWORD *)(v2 + 544) + 1024LL) >> 13) & 0x3FFFF;
        _BitScanReverse(&v13, v12);
        v14 = 1 << v13;
        v15 = v13 - 2;
        v223 = v15;
        v16 = *(_QWORD *)(*(_QWORD *)(v10 + 8 * v15) + 8LL * (v12 ^ v14) + 8);
        *(_QWORD *)(v16 + 8 * v11) += v5;
        v8 &= ~0x80u;
      }
      if ( (v8 & 0x10) != 0 )
      {
        *(_QWORD *)(v1 + 8LL * *(unsigned __int8 *)(v2 + 124) + 33160) += v5;
        v8 &= ~0x10u;
      }
      if ( (v8 & 0x20) != 0 )
      {
        v17 = *(_QWORD *)(v2 + 1608);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v1 + 33968);
          v19 = *(_QWORD *)(v1 + 33976);
          if ( !v18 || !v19 )
            goto LABEL_17;
          if ( *(_BYTE *)(v19 + 100) )
          {
            v20 = *(_DWORD *)(v19 + 116);
          }
          else
          {
            v20 = *(_DWORD *)(v19 + 72);
            if ( v20 >= *(_DWORD *)(v18 + 512) )
              v20 = *(_DWORD *)(v18 + 512);
          }
          if ( v20 < 0x4B )
            v21 = v20 / 0x19;
          else
LABEL_17:
            v21 = 3;
          if ( KeHeteroSystem )
            v22 = *(_BYTE *)(v1 + 34056);
          else
            v22 = *(_BYTE *)(v1 + 34059);
          v23 = v21;
          v24 = v22;
          v210 = 0LL;
          v25 = v22 + 2LL * v21;
          v26 = *(_QWORD *)(v17 + 8 * v25);
          v27 = (_QWORD *)(v17 + 8 * v25);
          v28 = KiTimelineBitmapTime;
          *v27 = v5 + v26;
          v29 = *(_DWORD *)(v17 + 192);
          if ( v28 > v29 )
          {
            LODWORD(v210) = v28;
            if ( v28 - v29 >= 0x20 )
              HIDWORD(v210) = 1;
            else
              HIDWORD(v210) = (*(_DWORD *)(v17 + 196) << (v28 - v29)) | 1;
            *(_QWORD *)(v17 + 192) = v210;
          }
          else
          {
            v30 = v29 - v28;
            if ( v30 < 0x20 )
              *(_DWORD *)(v17 + 196) |= 1 << v30;
          }
          if ( !KiEfficiencyClassSystem )
          {
            v31 = (unsigned __int8)*(_DWORD *)(v2 + 512);
            if ( v31 == 2 || v31 == 5 )
              *(_QWORD *)(v17 + 16 * v23 + 8) += v5;
          }
          if ( *(_QWORD *)(v2 + 1552) )
          {
            *(_QWORD *)(v17 + 8 * (v24 + 2 * (v23 + 8))) += v5;
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v2 + 1552) + 1608LL) + 8 * (v24 + 8 + 2 * v23)),
              v5);
          }
        }
        v8 &= ~0x20u;
      }
      if ( (v8 & 0x40) != 0 )
      {
        v134 = *(_QWORD *)(v2 + 968);
        if ( v134 )
          *(_BYTE *)(v134 + 64) = 0;
      }
      if ( KiHgsPlusEnabled )
        KiUpdateThreadHgsFeedback(v1, v2, v5, 0LL);
      v32 = *(_QWORD *)(v1 + 33200);
      if ( v32 )
      {
        if ( *(_BYTE *)(v2 + 125) )
        {
          v135 = (unsigned __int8)*(_DWORD *)(v2 + 512);
          if ( v135 < 6 )
          {
            v136 = 0;
            v137 = *(_DWORD *)(v2 + 80);
            if ( v137 <= *(_DWORD *)(v2 + 84) )
              v137 = *(_DWORD *)(v2 + 84);
            LOBYTE(v136) = v137 >= KiDynamicHeteroCpuPolicyExpectedCycles;
            v138 = *(unsigned __int8 *)(v2 + 516) + (unsigned int)KiHgsPlusConfiguration * (v136 + 2 * v135);
            *(_QWORD *)(v32 + 8 * v138) += v5;
          }
        }
      }
      if ( (v8 & 0xBE) != 0 )
      {
        v45 = *(_QWORD *)(v2 + 104);
        if ( v45 )
        {
          for ( i = (_QWORD *)(*(unsigned int *)(v1 + 216) + v45); i; i = (_QWORD *)i[51] )
            *i += v5;
        }
        if ( (*(_BYTE *)(v2 + 2) & 8) != 0
          && (*(_QWORD *)(*(_QWORD *)(v2 + 576) + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v1 + 192) + 136LL) + 8) & *(_QWORD *)(*(_QWORD *)(v1 + 192) + 128LL)) != *(_QWORD *)(*(_QWORD *)(v1 + 192) + 128LL) )
        {
          *(_QWORD *)(v1 + 33192) += v5;
        }
        v46 = *(_QWORD *)(v2 + 360);
        if ( v46 )
        {
          v139 = *(_QWORD *)(v46 + 32);
          if ( v139 )
          {
            v140 = 1LL;
            if ( KiHwCountersCount )
            {
              v141 = (unsigned int *)&KiHwCounters;
              v142 = (unsigned int)KiHwCountersCount;
              v143 = v46 + 48;
              do
              {
                if ( (v139 & v140) != 0 )
                {
                  v144 = __readpmc(*v141);
                  *(_QWORD *)(v143 + 8) += (unsigned int)(v144 - *(_DWORD *)v143);
                  *(_QWORD *)v143 = v144;
                }
                v140 *= 2LL;
                ++v141;
                v143 += 24LL;
                --v142;
              }
              while ( v142 );
            }
          }
        }
      }
    }
    v33 = *(unsigned __int16 *)v3;
    *v3 = 1;
    if ( (v33 & 8) == 0 )
      goto LABEL_36;
    LOWORD(v33) = v33 & 0xFFF7;
    v216 = v33;
    active = KiSelectActiveTimerTable(v1, 1);
    v51 = active;
    if ( !active )
    {
      _enable();
      v242[1] = *v50;
      goto LABEL_114;
    }
    v52 = *v49;
    v53 = KiLastNonHrTimerExpiration;
    v54 = *(_DWORD *)(active + 16912);
    v210 = *v49;
    if ( KiLastNonHrTimerExpiration == *(_QWORD *)(active + 16904) )
      v55 = 0;
    else
      v55 = v48;
    v56 = KiLastPseudoHrTimerExpiration != *(_QWORD *)(v51 + 16896);
    v57 = v55;
    if ( KiGlobalTimerResolutionRequests )
      v57 = v56;
    v205 = KiLastPseudoHrTimerExpiration != *(_QWORD *)(v51 + 16896);
    v58 = v52 >> 18;
    v212 = v57;
    if ( v56 )
    {
      *(_QWORD *)(v51 + 16896) = KiLastPseudoHrTimerExpiration;
      *(_DWORD *)(v51 + 16912) = v58;
    }
    if ( (_BYTE)v57 )
    {
      v59 = *(_DWORD *)(v51 + 16916);
      *(_QWORD *)(v51 + 16904) = v53;
      if ( v54 >= v59 )
        v54 = v59;
      *(_DWORD *)(v51 + 16916) = v52 >> 18;
    }
    if ( !v56 && !(_BYTE)v57 )
    {
      _enable();
      v242[1] = *v50;
LABEL_170:
      v3 = (volatile signed __int16 *)(v1 + 13244);
      goto LABEL_111;
    }
    _enable();
    v242[1] = *v50;
    v240 = 0LL;
    if ( KiSerializeTimerExpiration )
    {
      if ( !*(_BYTE *)(v1 + 33) )
        goto LABEL_170;
      v60 = KiProcessorBlock[0];
    }
    else
    {
      v60 = v1;
    }
    v61 = v60 + 15360;
    v209 = v60 + 15360;
    if ( v60 == -15360 )
      goto LABEL_170;
    v62 = v1 + 16LL * *(unsigned int *)(v1 + 36672);
    *(_DWORD *)(v1 + 36672) = ((unsigned __int8)*(_DWORD *)(v1 + 36672) + 1) & 0xF;
    v63 = HalpPerformanceCounter;
    *(_QWORD *)(v62 + 36680) = v52;
    if ( *(_DWORD *)(v63 + 228) == 5 )
    {
      v64 = 10000000LL;
      if ( HalpTimerReferencePage )
      {
        if ( (*(_DWORD *)(v63 + 224) & 0x10000) != 0 )
          v65 = *(_QWORD *)(v63 + 72) + KeGetPcr()->Prcb.Number * *(_DWORD *)(v63 + 80);
        else
          v65 = *(_QWORD *)(v63 + 72);
        v66 = MEMORY[0xFFFFF780000003B8]
            + (((unsigned __int64)(*(__int64 (__fastcall **)(__int64))(v63 + 112))(v65)
              * (unsigned __int128)*((unsigned __int64 *)HalpTimerReferencePage + 1)) >> 64);
        goto LABEL_86;
      }
      if ( *(_DWORD *)(v63 + 220) == 64 )
      {
        InternalData = HalpTimerGetInternalData(v63);
        v146 = (*(__int64 (__fastcall **)(__int64))(v63 + 112))(InternalData);
        v147 = *(_QWORD *)(v63 + 208);
        v148 = v146;
      }
      else
      {
        do
        {
          v147 = *(_QWORD *)(v63 + 208);
          do
          {
            v149 = *(_QWORD *)(v63 + 200);
            v150 = HalpTimerGetInternalData(v63);
            v151 = (*(__int64 (__fastcall **)(__int64))(v63 + 112))(v150);
            _InterlockedOr(v204, 0);
            v152 = *(_QWORD *)(v63 + 200);
          }
          while ( v149 != v152 );
        }
        while ( v147 != *(_QWORD *)(v63 + 208) );
        v153 = *(_DWORD *)(v63 + 220);
        if ( ((v149 ^ v151) & (1LL << ((unsigned __int8)v153 - 1))) != 0 )
        {
          if ( v153 == 64 )
            v154 = -1LL;
          else
            v154 = (1LL << v153) - 1;
          v155 = 0LL;
          if ( v153 != 64 )
            v155 = 1LL << v153;
          v156 = v149 & v154;
          v148 = v151 | v149 ^ v156;
          if ( v151 < v156 )
            v148 += v155;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v63 + 200), v148, v152);
          v61 = v209;
        }
        else
        {
          if ( v153 == 64 )
            v157 = -1LL;
          else
            v157 = (1LL << v153) - 1;
          v158 = v149 & ~v157;
          v61 = v209;
          v148 = v151 | v158;
        }
      }
      v66 = HalpTimerScaleCounter(v147 + v148, *(_QWORD *)(v63 + 192), 10000000LL);
    }
    else
    {
      v64 = *(_QWORD *)(v63 + 192);
      if ( *(_DWORD *)(v63 + 220) == 64 )
      {
        v110 = HalpTimerGetInternalData(v63);
        v111 = (*(__int64 (__fastcall **)(__int64))(v63 + 112))(v110);
        v112 = *(_QWORD *)(v63 + 208);
        v113 = v111;
      }
      else
      {
        do
        {
          v112 = *(_QWORD *)(v63 + 208);
          do
          {
            v159 = *(_QWORD *)(v63 + 200);
            v160 = HalpTimerGetInternalData(v63);
            v161 = (*(__int64 (__fastcall **)(__int64))(v63 + 112))(v160);
            _InterlockedOr(v204, 0);
            v162 = *(_QWORD *)(v63 + 200);
          }
          while ( v159 != v162 );
        }
        while ( v112 != *(_QWORD *)(v63 + 208) );
        v163 = *(_DWORD *)(v63 + 220);
        if ( ((v159 ^ v161) & (1LL << ((unsigned __int8)v163 - 1))) != 0 )
        {
          if ( v163 == 64 )
            v164 = -1LL;
          else
            v164 = (1LL << v163) - 1;
          v165 = 0LL;
          if ( v163 != 64 )
            v165 = 1LL << v163;
          v166 = v159 & v164;
          v113 = v161 | v159 ^ v166;
          if ( v161 < v166 )
            v113 += v165;
          _InterlockedCompareExchange64((volatile signed __int64 *)(v63 + 200), v113, v162);
          v61 = v209;
        }
        else
        {
          if ( v163 == 64 )
            v167 = -1LL;
          else
            v167 = (1LL << v163) - 1;
          v168 = v159 & ~v167;
          v61 = v209;
          v113 = v161 | v168;
        }
      }
      v66 = v112 + v113;
    }
    v52 = v210;
LABEL_86:
    if ( v63 != HalpOriginalPerformanceCounter && HalpOriginalPerformanceCounter )
    {
      v169 = *(_QWORD *)(HalpOriginalPerformanceCounter + 192);
      if ( *(_DWORD *)(HalpOriginalPerformanceCounter + 228) == 5 )
        v169 = 10000000LL;
      v66 = HalpTimerScaleCounter(v66, v64, v169);
    }
    *(_QWORD *)(v62 + 36688) = v66;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      *(_QWORD *)&v240 = v52;
      v241[0] = &v240;
      BYTE8(v240) = 0;
      v241[1] = 16LL;
      EtwTraceKernelEvent((unsigned int)v241, 1, 1073872896, 3920, 1538);
    }
    v67 = v58 - v54 + 1;
    v218 = v67;
    if ( v67 <= 0x100 )
    {
LABEL_90:
      v215 = v67;
      v68 = 256 - v67;
      v214 = v52;
      v69 = v52;
      if ( 256 - v67 > 0x18 )
        v68 = 24;
      goto LABEL_92;
    }
    v83 = (v58 - v67 + 1) << 18;
    do
    {
      if ( v67 <= 0x100 )
        goto LABEL_90;
      v69 = v83 + 0x4000000;
      v215 = 256;
      v214 = v69;
      v68 = 0;
LABEL_92:
      v220 = 0LL;
      v233 = 0LL;
      v70 = 0;
      v71 = v54 + v215;
      v206 = 0;
      v72 = v54 - 1;
      v229 = v71;
      v232 = 0LL;
      v73 = v72;
      BYTE3(v232) = -64;
      v74 = v71 - 1;
      v75 = 0;
      v76 = v71 - 1 + v68;
      v208 = v71 - 1;
      v207 = v76;
      do
      {
        v77 = v61 + 32 * ((unsigned __int8)++v73 + 16LL);
        if ( v75 <= v74 || *(_QWORD *)(v77 + 24) <= v69 )
        {
          v78 = (_QWORD *)(v77 + 8);
          if ( v78 != (_QWORD *)*v78 )
          {
LABEL_129:
            CurrentPrcb = KeGetCurrentPrcb();
            v224 = 0;
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v170 = SchedulerAssist[6];
                SchedulerAssist[6] = v170 + 1;
                if ( v170 == -1 )
LABEL_252:
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)v77, 0LL) )
            {
              v125 = CurrentPrcb->SchedulerAssist;
              if ( v125 )
              {
                if ( CurrentPrcb->NestingLevel <= 1u )
                {
                  v171 = v125[6] - 1;
                  v125[6] = v171;
                  if ( !v171 )
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                }
              }
              do
                KeYieldProcessorEx(&v224);
              while ( *(_QWORD *)v77 );
              v126 = CurrentPrcb->SchedulerAssist;
              if ( v126 )
              {
                if ( CurrentPrcb->NestingLevel <= 1u )
                {
                  v172 = v126[6];
                  v126[6] = v172 + 1;
                  if ( v172 == -1 )
                    goto LABEL_252;
                }
              }
            }
            v102 = v206;
            v220 = (volatile signed __int64 *)v77;
            while ( 1 )
            {
              v103 = (_QWORD *)*v78;
              v69 = v214;
              if ( v78 == (_QWORD *)*v78 )
                break;
              v104 = (ULONG_PTR)(v103 - 4);
              v105 = *(v103 - 1);
              if ( v105 > v214 )
              {
                *(_QWORD *)(v77 + 24) = v105;
                break;
              }
              v237 = 0LL;
              v108 = (BYTE3(v232) ^ v102) & 0x3F ^ BYTE3(v232) ^ *(_BYTE *)(v104 + 3);
              BYTE3(v232) ^= (BYTE3(v232) ^ v102) & 0x3F;
              v236 = 0LL;
              BYTE3(v236) = v108;
              _InterlockedXor((volatile signed __int32 *)v104, v236);
              v109 = v209;
              BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(v209 + 8LL * v102), v104);
              KiRemoveEntryTimer(v109, v104, (unsigned __int8)v73, &v220);
              v102 = ++v206;
              if ( BugCheckParameter4 )
                KeBugCheckEx(0xC7u, 8uLL, 1uLL, v104, BugCheckParameter4);
              if ( v102 == 64 )
              {
                _InterlockedAnd64(v220, 0LL);
                v173 = KeGetCurrentPrcb();
                v174 = v173->SchedulerAssist;
                if ( v174 )
                {
                  if ( v173->NestingLevel <= 1u )
                  {
                    v175 = v174[6] - 1;
                    v174[6] = v175;
                    if ( !v175 )
                      KiRemoveSystemWorkPriorityKick(v173);
                  }
                }
                KiProcessExpiredTimerList(v217, (int *)v242, v209, 0x40u);
                v70 = 0;
                v206 = 0;
                if ( v78 == (_QWORD *)*v78 )
                {
                  v69 = v214;
                  goto LABEL_137;
                }
                goto LABEL_129;
              }
            }
            _InterlockedAnd64(v220, 0LL);
            v106 = KeGetCurrentPrcb();
            v107 = v106->SchedulerAssist;
            if ( v107 )
            {
              if ( v106->NestingLevel <= 1u )
              {
                v176 = v107[6] - 1;
                v107[6] = v176;
                if ( !v176 )
                {
                  KiRemoveSystemWorkPriorityKick(v106);
                  v69 = v214;
                }
              }
            }
            v70 = v206;
LABEL_137:
            v76 = v207;
            v74 = v208;
          }
          v61 = v209;
          ++v75;
        }
      }
      while ( v73 != v76 );
      if ( v70 )
      {
        KiProcessExpiredTimerList(v217, (int *)v242, v61, v70);
        v76 = v207;
        v74 = v208;
      }
      if ( !(_BYTE)v212 )
      {
        v1 = v217;
        goto LABEL_107;
      }
      v206 = 0;
      v79 = 0;
      v234 = 0LL;
      BYTE3(v234) = -64;
      v80 = 0;
      v235 = 0LL;
      do
      {
        v81 = 32 * ((unsigned __int8)++v72 + 272LL) + v61;
        if ( v79 > v74 && *(_QWORD *)(v81 + 24) > v214 )
          goto LABEL_104;
        v82 = (_QWORD *)(v81 + 8);
        if ( v82 == (_QWORD *)*v82 )
          goto LABEL_103;
        do
        {
          v85 = KeGetCurrentPrcb();
          v225 = 0;
          v86 = v85->SchedulerAssist;
          if ( v86 )
          {
            if ( v85->NestingLevel <= 1u )
            {
              v177 = v86[6];
              v86[6] = v177 + 1;
              if ( v177 == -1 )
LABEL_272:
                KiRemoveSystemWorkPriorityKick(v85);
            }
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)v81, 0LL) )
          {
            v123 = v85->SchedulerAssist;
            if ( v123 )
            {
              if ( v85->NestingLevel <= 1u )
              {
                v178 = v123[6] - 1;
                v123[6] = v178;
                if ( !v178 )
                  KiRemoveSystemWorkPriorityKick(v85);
              }
            }
            do
              KeYieldProcessorEx(&v225);
            while ( *(_QWORD *)v81 );
            v124 = v85->SchedulerAssist;
            if ( v124 )
            {
              if ( v85->NestingLevel <= 1u )
              {
                v179 = v124[6];
                v124[6] = v179 + 1;
                if ( v179 == -1 )
                  goto LABEL_272;
              }
            }
          }
          v80 = v206;
          v87 = (volatile signed __int64 *)v81;
          do
          {
            v88 = (_QWORD *)*v82;
            if ( v82 == (_QWORD *)*v82 )
              goto LABEL_121;
            v89 = (ULONG_PTR)(v88 - 4);
            v90 = *(v88 - 1);
            v221 = v89;
            if ( v90 > v214 )
            {
              *(_QWORD *)(v81 + 24) = v90;
LABEL_121:
              _InterlockedAnd64(v87, 0LL);
              v91 = KeGetCurrentPrcb();
              v92 = v91->SchedulerAssist;
              if ( v92 )
              {
                if ( v91->NestingLevel <= 1u )
                {
                  v202 = v92[6] - 1;
                  v92[6] = v202;
                  if ( !v202 )
                  {
                    KiRemoveSystemWorkPriorityKick(v91);
                    v80 = v206;
                  }
                }
              }
              goto LABEL_122;
            }
            v239 = 0LL;
            v93 = (BYTE3(v234) ^ v80) & 0x3F ^ BYTE3(v234) ^ *(_BYTE *)(v89 + 3);
            BYTE3(v234) ^= (BYTE3(v234) ^ v80) & 0x3F;
            v238 = 0LL;
            BYTE3(v238) = v93;
            _InterlockedXor((volatile signed __int32 *)v89, v238);
            v94 = v209;
            v95 = _InterlockedExchange64((volatile __int64 *)(v209 + 8LL * v80), v89);
            v96 = *(unsigned __int16 *)(v89 + 58);
            v211 = (volatile signed __int32 *)v96;
            v222 = v95;
            v97 = *(_QWORD **)(v89 + 32);
            v98 = v94 + 32 * ((unsigned __int8)v72 + ((unsigned __int64)(unsigned int)v96 << 8) + 16);
            v231 = v94 + 32 * ((unsigned __int8)v72 + ((v96 ^ 1) << 8) + 16);
            v99 = *(_QWORD **)(v89 + 40);
            BugCheckParameter4 = v98;
            if ( v97[1] != v89 + 32 || *v99 != v89 + 32 )
              __fastfail(3u);
            *v99 = v97;
            v97[1] = v99;
            if ( v99 == v97 )
            {
              v37 = (_WORD)v211 == 0;
              *(_DWORD *)(v98 + 28) = -1;
              v114 = KeGetCurrentPrcb();
              v213 = v114;
              v115 = v114->SchedulerAssist;
              if ( v37 )
              {
                v226 = 0;
                if ( v115 )
                {
                  if ( v114->NestingLevel <= 1u )
                  {
                    v180 = v115[6];
                    v115[6] = v180 + 1;
                    if ( v180 == -1 )
                    {
LABEL_282:
                      KiRemoveSystemWorkPriorityKick(v114);
                      v114 = v213;
                    }
                  }
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)v81, 0LL) )
                {
                  v181 = v114->SchedulerAssist;
                  if ( v181 )
                  {
                    if ( v114->NestingLevel <= 1u )
                    {
                      v182 = v181[6] - 1;
                      v181[6] = v182;
                      if ( !v182 )
                        KiRemoveSystemWorkPriorityKick(v114);
                    }
                  }
                  do
                    KeYieldProcessorEx(&v226);
                  while ( *(_QWORD *)v81 );
                  v114 = v213;
                  v183 = v213->SchedulerAssist;
                  if ( v183 )
                  {
                    if ( v213->NestingLevel <= 1u )
                    {
                      v184 = v183[6];
                      v183[6] = v184 + 1;
                      if ( v184 == -1 )
                        goto LABEL_282;
                    }
                  }
                }
                v116 = (volatile signed __int32 *)v81;
              }
              else
              {
                v116 = (volatile signed __int32 *)(v209 + 32 * ((unsigned __int8)v72 + 16LL));
                v211 = v116;
                if ( v115 )
                {
                  if ( v114->NestingLevel <= 1u )
                  {
                    v185 = v115[6];
                    v115[6] = v185 + 1;
                    if ( v185 == -1 )
                    {
                      KiRemoveSystemWorkPriorityKick(v114);
                      v89 = v221;
                      v95 = v222;
                      v116 = v211;
                      v98 = BugCheckParameter4;
                      v114 = v213;
                    }
                  }
                }
                if ( _interlockedbittestandset64(v116, 0LL) )
                {
                  v127 = v114->SchedulerAssist;
                  if ( v127 )
                  {
                    if ( v114->NestingLevel <= 1u )
                    {
                      v186 = v127[6] - 1;
                      v127[6] = v186;
                      if ( !v186 )
                      {
                        KiRemoveSystemWorkPriorityKick(v114);
                        v116 = v211;
                      }
                    }
                  }
                  _mm_pause();
                }
                else if ( v116 )
                {
                  goto LABEL_150;
                }
                _InterlockedAnd64(v87, 0LL);
                v128 = KeGetCurrentPrcb();
                v129 = v128->SchedulerAssist;
                if ( v129 )
                {
                  if ( v128->NestingLevel <= 1u )
                  {
                    v187 = v129[6] - 1;
                    v129[6] = v187;
                    if ( !v187 )
                    {
                      KiRemoveSystemWorkPriorityKick(v128);
                      v116 = v211;
                    }
                  }
                }
                v130 = KeGetCurrentPrcb();
                v211 = v116;
                v227 = 0;
                v131 = v130->SchedulerAssist;
                if ( v131 )
                {
                  if ( v130->NestingLevel <= 1u )
                  {
                    v188 = v131[6];
                    v131[6] = v188 + 1;
                    if ( v188 == -1 )
                    {
LABEL_305:
                      KiRemoveSystemWorkPriorityKick(v130);
                      v116 = v211;
                    }
                  }
                }
                while ( _interlockedbittestandset64(v116, 0LL) )
                {
                  v189 = v130->SchedulerAssist;
                  if ( v189 )
                  {
                    if ( v130->NestingLevel <= 1u )
                    {
                      v190 = v189[6] - 1;
                      v189[6] = v190;
                      if ( !v190 )
                        KiRemoveSystemWorkPriorityKick(v130);
                    }
                  }
                  do
                  {
                    KeYieldProcessorEx(&v227);
                    v116 = v211;
                  }
                  while ( *(_QWORD *)v211 );
                  v191 = v130->SchedulerAssist;
                  if ( v191 )
                  {
                    if ( v130->NestingLevel <= 1u )
                    {
                      v192 = v191[6];
                      v191[6] = v192 + 1;
                      if ( v192 == -1 )
                        goto LABEL_305;
                    }
                  }
                }
                v132 = KeGetCurrentPrcb();
                v87 = (volatile signed __int64 *)v81;
                v213 = v132;
                v228 = 0;
                v133 = v132->SchedulerAssist;
                if ( v133 )
                {
                  if ( v132->NestingLevel <= 1u )
                  {
                    v193 = v133[6];
                    v133[6] = v193 + 1;
                    if ( v193 == -1 )
                    {
LABEL_317:
                      KiRemoveSystemWorkPriorityKick(v132);
                      v132 = v213;
                    }
                  }
                }
                while ( _interlockedbittestandset64((volatile signed __int32 *)v81, 0LL) )
                {
                  v194 = v132->SchedulerAssist;
                  if ( v194 )
                  {
                    if ( v132->NestingLevel <= 1u )
                    {
                      v195 = v194[6] - 1;
                      v194[6] = v195;
                      if ( !v195 )
                        KiRemoveSystemWorkPriorityKick(v132);
                    }
                  }
                  do
                    KeYieldProcessorEx(&v228);
                  while ( *(_QWORD *)v81 );
                  v132 = v213;
                  v196 = v213->SchedulerAssist;
                  if ( v196 )
                  {
                    if ( v213->NestingLevel <= 1u )
                    {
                      v197 = v196[6];
                      v196[6] = v197 + 1;
                      if ( v197 == -1 )
                        goto LABEL_317;
                    }
                  }
                }
                v116 = v211;
              }
              v98 = BugCheckParameter4;
              v95 = v222;
              v89 = v221;
LABEL_150:
              v94 = v209;
              if ( *(_DWORD *)(v98 + 28) == -1 && *(_DWORD *)(v231 + 28) == -1 )
              {
                v117 = qword_140D07E98[2 * *(unsigned __int8 *)(v209 - 15152)];
                if ( KiSerializeTimerExpiration )
                {
                  v118 = v72 & 0x3F;
                  v119 = (volatile signed __int32 *)(v117 + 8LL * ((unsigned __int8)v72 >> 6));
                }
                else
                {
                  v118 = *(unsigned __int8 *)(v209 - 15151);
                  v119 = (volatile signed __int32 *)(((unsigned __int64)(unsigned __int8)v72 << 6) + v117);
                }
                _interlockedbittestandreset64(v119, v118);
              }
              _InterlockedAnd64((volatile signed __int64 *)v116, 0LL);
              v120 = KeGetCurrentPrcb();
              v121 = v120->SchedulerAssist;
              if ( v121 )
              {
                if ( v120->NestingLevel <= 1u )
                {
                  v198 = v121[6] - 1;
                  v121[6] = v198;
                  if ( !v198 )
                  {
                    KiRemoveSystemWorkPriorityKick(v120);
                    v89 = v221;
                    v95 = v222;
                    v94 = v209;
                  }
                }
              }
            }
            v80 = ++v206;
            if ( v95 )
              KeBugCheckEx(0xC7u, 8uLL, 1uLL, v89, v95);
          }
          while ( v80 != 64 );
          _InterlockedAnd64(v87, 0LL);
          v199 = KeGetCurrentPrcb();
          v200 = v199->SchedulerAssist;
          if ( v200 )
          {
            if ( v199->NestingLevel <= 1u )
            {
              v201 = v200[6] - 1;
              v200[6] = v201;
              if ( !v201 )
              {
                KiRemoveSystemWorkPriorityKick(v199);
                v94 = v209;
              }
            }
          }
          KiProcessExpiredTimerList(v217, (int *)v242, v94, 0x40u);
          v80 = 0;
          v206 = 0;
        }
        while ( v82 != (_QWORD *)*v82 );
LABEL_122:
        v76 = v207;
        v74 = v208;
LABEL_103:
        ++v79;
LABEL_104:
        v61 = v209;
      }
      while ( v72 != v76 );
      v1 = v217;
      if ( v80 )
        KiProcessExpiredTimerList(v217, (int *)v242, v209, v80);
LABEL_107:
      v37 = v218 == v215;
      v67 = v218 - v215;
      v54 = v229;
      v83 = v214;
      v52 = v210;
      v218 -= v215;
    }
    while ( !v37 );
    LOWORD(v33) = v216;
    v3 = (volatile signed __int16 *)(v1 + 13244);
    v57 = v212;
    v56 = v205;
    if ( (*(_BYTE *)(v1 + 13244) & 8) == 0 )
    {
      v84 = *(_DWORD *)(v1 + 33128);
      *(_DWORD *)(v1 + 33124) = 0;
      if ( v84 >= KeTimeIncrement )
        *(_DWORD *)(v1 + 33128) = v84 - KeTimeIncrement;
      else
        *(_DWORD *)(v1 + 33128) = 0;
    }
LABEL_111:
    if ( *(_BYTE *)(v1 + 33) )
      KiTimer2Expiration(v1, v52, v56, v57, (__int64)v242);
    v2 = v230;
LABEL_114:
    _disable();
LABEL_36:
    if ( (v33 & 0x40) != 0 )
    {
      LOWORD(v33) = v33 & 0xFFBF;
      _enable();
      KiNormalPriorityReadyScan(v1);
      _disable();
    }
    if ( (unsigned __int8)KiExecuteAllDpcs(v1, v2, v242, 0LL) )
    {
      if ( (v33 & 4) != 0 )
      {
        _enable();
        KeSignalGate((_DWORD *)(v1 + 32320), 0);
        _disable();
      }
      v35 = __rdtsc();
      v36 = v35 - *(_QWORD *)(v1 + 33152);
      *(_QWORD *)(v1 + 33400) += v36;
      if ( (*(_BYTE *)(v2 + 2) & 0x20) != 0 )
      {
        v39 = *(_QWORD *)(v1 + 33968);
        v40 = *(_QWORD *)(v1 + 33976);
        if ( !v39 || !v40 )
          goto LABEL_55;
        if ( *(_BYTE *)(v40 + 100) )
        {
          v41 = *(_DWORD *)(v40 + 116);
        }
        else
        {
          v41 = *(_DWORD *)(v40 + 72);
          if ( v41 >= *(_DWORD *)(v39 + 512) )
            v41 = *(_DWORD *)(v39 + 512);
        }
        if ( v41 < 0x4B )
          v42 = v41 / 0x19;
        else
LABEL_55:
          v42 = 3;
        if ( KeHeteroSystem )
          v43 = *(_BYTE *)(v1 + 34056);
        else
          v43 = *(_BYTE *)(v1 + 34059);
        v44 = (_QWORD *)(v1 + 8 * (v43 + 2 * (v42 + 2088LL)));
        *v44 += v36;
      }
      if ( (*(_BYTE *)(v2 + 2) & 0x40) != 0 )
      {
        v203 = *(_QWORD *)(v2 + 968);
        if ( v203 )
          *(_BYTE *)(v203 + 64) = 1;
      }
      *(_QWORD *)(v1 + 33152) = v35;
      if ( (*(_BYTE *)(v2 + 2) & 2) != 0 )
        KiBeginCounterAccumulation(v2, 0LL);
      v37 = *(_BYTE *)(v1 + 6) == 0;
      *(_BYTE *)(v1 + 32) = 0;
      if ( !v37 )
        *(_BYTE *)(v1 + 6) = 0;
      result = _InterlockedCompareExchange16(v3, 0, 1);
      if ( result == 1 )
      {
        *(_QWORD *)(v1 + 13152) = 0LL;
        return result;
      }
      continue;
    }
    break;
  }
  LOBYTE(v34) = 1;
  KiStartThreadCycleAccumulation(v1, v2, v34);
  return KiEndPartialDpcProcessing((__int16 *)v3, v33 | 0x80, v1 + 13120);
}
