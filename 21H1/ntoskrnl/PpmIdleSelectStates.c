/*
 * XREFs of PpmIdleSelectStates @ 0x140392080
 * Callers:
 *     PoIdle @ 0x14026FDE0 (PoIdle.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     MmGetNextNode @ 0x140241930 (MmGetNextNode.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140273390 (KiGetNextTimerExpirationDueTime.c)
 *     KiEnumerateNextProcessorNumber @ 0x1402762E0 (KiEnumerateNextProcessorNumber.c)
 *     KeAddProcessorAffinityEx @ 0x140277170 (KeAddProcessorAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x1402791F0 (KeSubtractAffinityEx.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     PoCopyDeepIdleMask @ 0x140326950 (PoCopyDeepIdleMask.c)
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     PpmCheckPreConditionsForDeepSleep @ 0x14038DBBC (PpmCheckPreConditionsForDeepSleep.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PpmEstimateIdleDuration @ 0x14055FED4 (PpmEstimateIdleDuration.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140560910 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmIdleRollbackCoordinatedSelection @ 0x1405611CC (PpmIdleRollbackCoordinatedSelection.c)
 *     PpmIdleSetSynchronizationState @ 0x1405612D0 (PpmIdleSetSynchronizationState.c)
 *     PpmIdleUpdateSelectionStatistics @ 0x1405615C8 (PpmIdleUpdateSelectionStatistics.c)
 *     PpmUnlockProcessors @ 0x1405621F8 (PpmUnlockProcessors.c)
 */

__int64 __fastcall PpmIdleSelectStates(
        __int64 a1,
        LARGE_INTEGER *a2,
        unsigned __int64 *a3,
        char *a4,
        unsigned int *a5,
        int *a6,
        __int64 a7,
        bool *a8)
{
  __int64 v9; // r13
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 v12; // rbx
  LARGE_INTEGER v13; // rsi
  __int64 v14; // r15
  LARGE_INTEGER PerformanceCounter; // rdx
  __int64 v16; // r13
  LARGE_INTEGER v17; // r9
  LARGE_INTEGER *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rsi
  unsigned __int64 *v21; // rbx
  int v22; // ecx
  char v23; // al
  unsigned __int64 v24; // r12
  char v25; // bl
  __int64 v26; // r15
  __int64 v27; // rdi
  unsigned __int64 v28; // r14
  char v29; // al
  int v30; // esi
  unsigned __int64 v31; // rbx
  __int16 v32; // si
  bool v33; // zf
  unsigned __int64 v34; // rdi
  __int64 v35; // r12
  unsigned int v36; // ecx
  unsigned int v37; // edx
  unsigned int i; // eax
  ULONG v39; // eax
  char v40; // al
  int v41; // edi
  __int64 (__fastcall *v42)(_QWORD, __int64); // rax
  __int64 v43; // rsi
  unsigned int v44; // ebx
  unsigned int *v45; // rdi
  int v46; // eax
  char v47; // r15
  char v48; // r14
  __int64 v49; // rsi
  __int64 v50; // r9
  unsigned int v51; // r10d
  __int64 v52; // r11
  __int64 v53; // rax
  unsigned __int64 v54; // rdi
  unsigned __int64 v55; // r15
  char v56; // r9
  unsigned __int64 v57; // r14
  char v58; // dl
  int v59; // eax
  int v60; // ecx
  unsigned __int64 v61; // rbx
  unsigned __int64 v62; // rdi
  unsigned int v63; // edx
  unsigned int v64; // eax
  unsigned int j; // ecx
  ULONG v66; // eax
  __int64 v67; // r8
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // r9
  unsigned int v71; // r8d
  __int64 v72; // rdx
  __int64 v73; // rcx
  bool v74; // al
  int v75; // r14d
  _QWORD *v76; // rcx
  __int64 result; // rax
  unsigned int *v78; // rax
  int v79; // eax
  unsigned int (__fastcall *v80)(_QWORD, _QWORD); // rax
  unsigned int (__fastcall *v81)(_QWORD, _QWORD, __int64); // rax
  struct _KPRCB *CurrentPrcb; // rax
  _KNODE *ParentNode; // r8
  int v84; // r10d
  unsigned int NextNode; // eax
  __int64 v86; // r11
  char v87; // bl
  __int64 *v88; // rdx
  __int64 v89; // r10
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  unsigned __int64 v93; // rbx
  __int64 v94; // r12
  __int64 v95; // rax
  unsigned __int64 v96; // rax
  char v97; // bl
  __int64 *v98; // rdx
  __int64 v99; // r10
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  unsigned __int64 v103; // rsi
  __int64 v104; // rbx
  __int64 v105; // rax
  unsigned __int64 v106; // rax
  unsigned __int64 v107; // rdx
  signed __int64 v108; // rax
  _DWORD *v109; // rcx
  int v110; // eax
  __int64 v111; // r14
  unsigned int v112; // edx
  __int64 v113; // rax
  __int64 v114; // r12
  __int64 v115; // rsi
  int v116; // ebx
  unsigned __int8 v117; // cl
  int v118; // eax
  int v119; // r9d
  unsigned int v120; // r8d
  __int64 v121; // rax
  __int64 v122; // rdi
  unsigned int (__fastcall *v123)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v124; // rdx
  int v125; // eax
  _DWORD *v126; // rcx
  _DWORD *v127; // rax
  __int64 *v128; // rax
  __int64 v129; // rdx
  __int64 v130; // r10
  _DWORD *v131; // rax
  unsigned int v132; // ecx
  unsigned __int8 v133; // [rsp+50h] [rbp-B0h]
  char v134; // [rsp+50h] [rbp-B0h]
  char v135; // [rsp+51h] [rbp-AFh]
  unsigned int v136; // [rsp+54h] [rbp-ACh] BYREF
  int v137; // [rsp+58h] [rbp-A8h]
  int v138; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v139; // [rsp+60h] [rbp-A0h]
  __int64 v140; // [rsp+68h] [rbp-98h]
  LARGE_INTEGER *v141; // [rsp+70h] [rbp-90h]
  int v142; // [rsp+78h] [rbp-88h] BYREF
  int v143; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v144; // [rsp+80h] [rbp-80h]
  int v145; // [rsp+84h] [rbp-7Ch]
  int v146; // [rsp+88h] [rbp-78h] BYREF
  int v147; // [rsp+8Ch] [rbp-74h] BYREF
  int v148; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v149; // [rsp+98h] [rbp-68h]
  unsigned int v150; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v151; // [rsp+A8h] [rbp-58h]
  __int64 v152; // [rsp+B0h] [rbp-50h]
  _DWORD *v153; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v154; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v155; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v156; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 *v157; // [rsp+D8h] [rbp-28h]
  __int64 v158; // [rsp+E0h] [rbp-20h]
  bool *v159; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v160; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v161; // [rsp+F8h] [rbp-8h]
  int v162; // [rsp+100h] [rbp+0h] BYREF
  __int64 v163; // [rsp+108h] [rbp+8h]
  __int64 v164; // [rsp+110h] [rbp+10h]
  unsigned int *v165; // [rsp+118h] [rbp+18h]
  int *v166; // [rsp+120h] [rbp+20h]
  char *v167; // [rsp+128h] [rbp+28h]
  __int64 v168; // [rsp+130h] [rbp+30h]
  __int128 v169; // [rsp+138h] [rbp+38h] BYREF
  __int64 v170; // [rsp+148h] [rbp+48h]
  __int128 v171; // [rsp+150h] [rbp+50h] BYREF
  __int64 v172; // [rsp+160h] [rbp+60h]
  _DWORD *v173; // [rsp+168h] [rbp+68h] BYREF
  int v174; // [rsp+170h] [rbp+70h]
  int v175; // [rsp+174h] [rbp+74h]
  unsigned int *v176; // [rsp+178h] [rbp+78h] BYREF
  int v177; // [rsp+180h] [rbp+80h]
  int v178; // [rsp+184h] [rbp+84h]
  _QWORD v179[22]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v180[22]; // [rsp+240h] [rbp+140h] BYREF
  _BYTE v181[176]; // [rsp+2F0h] [rbp+1F0h] BYREF

  v165 = a5;
  v166 = a6;
  v168 = a7;
  v157 = a3;
  v141 = a2;
  v140 = a1;
  v159 = a8;
  v167 = a4;
  memset(v181, 0, 0xA8uLL);
  v9 = *(_QWORD *)(a1 + 0x8000);
  v10 = 0LL;
  v164 = *(_QWORD *)(a1 + 32776);
  v152 = PpmPlatformStates;
  v11 = *(_QWORD *)(a1 + 0x8000);
  v158 = v9;
  v150 = PopFxSystemLatencyHint;
  v133 = 0;
  LOBYTE(v137) = 1;
  LOBYTE(v145) = 0;
  v135 = 0;
  v161 = 0LL;
  v136 = 0;
  v153 = 0LL;
  v144 = 0;
  v149 = 0LL;
  v139 = 0;
  v138 = 0;
  v154 = 0LL;
  v160 = 0LL;
  v148 = 0;
  while ( 1 )
  {
    v12 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v13.QuadPart = MEMORY[0xFFFFF78000000350];
      v14 = MEMORY[0xFFFFF78000000008];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v12 )
        break;
    }
    _mm_pause();
  }
  v16 = v158;
  v17 = PerformanceCounter;
  v18 = v141;
  if ( PerformanceCounter.QuadPart > (unsigned __int64)v13.QuadPart )
  {
    v163 = 0LL;
    v19 = -1 - v13.QuadPart + PerformanceCounter.QuadPart;
    if ( MEMORY[0xFFFFF78000000369] )
      v19 <<= MEMORY[0xFFFFF78000000369];
    v10 = ((unsigned __int64)v19 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
    v163 = v10;
  }
  v20 = v140;
  v21 = v157;
  *v157 = v10 + v14;
  *(LARGE_INTEGER *)(v11 + 496) = v17;
  *(_QWORD *)(v11 + 504) = *(_QWORD *)(v20 + 32792) + *(_QWORD *)(v20 + 32968);
  *(_BYTE *)(v11 + 538) = *(_BYTE *)(v20 + 33212);
  *(_BYTE *)(v11 + 536) = *(_BYTE *)(v20 + 32824);
  *(_BYTE *)(v11 + 537) = *(_BYTE *)(v20 + 32825);
  *(_BYTE *)(v11 + 539) = 1;
  if ( *(_BYTE *)(v20 + 33)
    && (CurrentPrcb = KeGetCurrentPrcb(),
        v162 = 0,
        ParentNode = CurrentPrcb->ParentNode,
        v84 = ParentNode->Affinity.Reserved[0],
        (ParentNode->DeepIdleSet & ~(1LL << CurrentPrcb->GroupIndex)) == (ParentNode->Affinity.Mask & ~(1LL << (KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number] & 0x3F)))) )
  {
    while ( 1 )
    {
      NextNode = MmGetNextNode(v84, &v162);
      v22 = -1;
      if ( NextNode == -1 )
        break;
      if ( *(_QWORD *)(*(_QWORD *)(v86 + 8LL * NextNode) + 64LL) != *(_QWORD *)(*(_QWORD *)(v86 + 8LL * NextNode) + 136LL) )
        goto LABEL_9;
    }
    *(_BYTE *)(v11 + 540) = 1;
    *(_WORD *)(v11 + 48) |= 0x80u;
  }
  else
  {
LABEL_9:
    *(_BYTE *)(v11 + 540) = 0;
    v22 = -1;
  }
  if ( *(_BYTE *)(v11 + 1) )
  {
    *(_WORD *)(v11 + 48) |= 0x100u;
    v22 = *(_DWORD *)(v11 + 28);
  }
  *(_DWORD *)(v11 + 528) = v22;
  if ( PpmIdleRespectIdleStateMax )
  {
    v23 = BYTE6(PpmCurrentProfile[342 * dword_140C23ECC + 24]);
    *(_BYTE *)(v11 + 542) = v23;
    if ( v23 )
      *(_WORD *)(v11 + 48) |= 0x4000u;
  }
  else
  {
    *(_BYTE *)(v11 + 542) = 0;
  }
  *v18 = v17;
  *(_QWORD *)(v16 + 240) = 1310721LL;
  memset((void *)(v16 + 248), 0, 0xA0uLL);
  v24 = *v21;
  v25 = *(_BYTE *)(v20 + 33);
  v26 = *(_QWORD *)(v20 + 0x8000);
  v151 = v24;
  if ( !v25 && KiSerializeTimerExpiration )
  {
    v141 = 0LL;
    _m_prefetchw(&PpmPlatformIdleHint);
    v107 = PpmPlatformIdleHint;
    if ( (_WORD)PpmPlatformIdleHint )
    {
      while ( 1 )
      {
        v108 = _InterlockedCompareExchange64(&PpmPlatformIdleHint, v107 ^ (unsigned __int16)(v107 ^ (v107 - 1)), v107);
        if ( v107 == v108 )
          break;
        v107 = v108;
        _mm_pause();
        if ( !(_WORD)v108 )
          goto LABEL_173;
      }
      v141 = (LARGE_INTEGER *)(v107 >> 16);
    }
LABEL_173:
    v27 = *(_QWORD *)(v20 + 0x8000);
    v25 = *(_BYTE *)(v20 + 33);
  }
  else
  {
    v141 = 0LL;
    v27 = v26;
  }
  v170 = 0LL;
  v169 = 0LL;
  memset(v179, 0, 0xA8uLL);
  v28 = -1LL;
  v29 = *(_BYTE *)(v27 + 540);
  v30 = -(v25 != 0);
  v31 = KiClockTimerNextTickTime;
  v32 = v30 & 8;
  v155 = 0LL;
  v33 = *(_BYTE *)(v140 + 33) == 0;
  v142 = 2;
  if ( v33 )
  {
    KiGetNextTimerExpirationDueTime(v140, 0, v24, 0, 0, &v155, &v142);
    if ( v31 <= v155 )
      v31 = v155;
  }
  else if ( v29 && !(_BYTE)KiDynamicTickDisableReason && !KiClockState )
  {
    KiGetNextTimerExpirationDueTime(v140, 1u, v24, 0, 0, &v155, &v142);
    if ( v24 + (unsigned int)KiLastRequestedTimeIncrement < v155 )
      v31 = v155;
    else
      v142 = 2;
  }
  if ( v31 == -1LL )
  {
    v34 = -1LL;
  }
  else
  {
    v34 = 0LL;
    if ( v31 > v24 )
      v34 = v31 - v24;
  }
  v35 = v140;
  v36 = 0;
  v37 = *(_DWORD *)(v140 + 11684);
  for ( i = v37; i; i >>= 4 )
    v36 += KeMaximumIncrement;
  if ( v37 )
  {
    v39 = KeMaximumIncrement / (v37 + 1);
    if ( !v39 )
      v39 = 1;
    v28 = v39;
  }
  if ( v34 <= v28 )
  {
    v28 = v34;
  }
  else
  {
    v32 |= 1u;
    if ( v34 >= v36 )
      v34 = v36;
  }
  if ( PpmIdleDurationExpirationTimeout )
  {
    if ( *(_BYTE *)(v140 + 33) )
    {
      LODWORD(v179[0]) = 1310721;
      v87 = 0;
      memset((char *)v179 + 4, 0, 0xA4uLL);
      if ( KeNumberNodes )
      {
        v88 = KeNodeBlock;
        v89 = (unsigned __int16)KeNumberNodes;
        do
        {
          v90 = *v88;
          v91 = *(unsigned __int16 *)(*v88 + 144);
          v92 = *(_QWORD *)(*v88 + 72);
          if ( LOWORD(v179[0]) <= (unsigned __int16)v91 )
            LOWORD(v179[0]) = v91 + 1;
          v179[v91 + 1] |= v92;
          if ( *(_QWORD *)(v90 + 72) )
            v87 = 1;
          ++v88;
          --v89;
        }
        while ( v89 );
        if ( v87 )
        {
          *((_QWORD *)&v169 + 1) = v179[1];
          v93 = 0LL;
          *(_QWORD *)&v169 = v179;
          while ( 1 )
          {
            v146 = 0;
            if ( (int)KiEnumerateNextProcessorNumber((__int64)&v146, (unsigned __int16 **)&v169) < 0 )
              break;
            v94 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v146 + BYTE2(v146)];
            if ( (unsigned int)v94 >= KeQueryActiveProcessorCountEx(0xFFFFu) )
            {
              v95 = 0LL;
            }
            else
            {
              _mm_lfence();
              v95 = KiProcessorBlock[v94];
            }
            v96 = *(_QWORD *)(v95 + 32808);
            if ( v96 > v93 && v96 != -1LL )
              v93 = v96;
          }
          v16 = v158;
          if ( v93 && v34 + v151 > v93 )
          {
            v32 |= 0x2000u;
            v34 = v93 > v151 ? (unsigned int)(v93 - v151) : 1LL;
            if ( v34 < v28 )
              v28 = v34;
          }
          v35 = v140;
        }
      }
    }
  }
  if ( v28 < (unsigned __int64)v141 )
  {
    v28 = (unsigned __int64)v141;
    v34 = (unsigned __int64)v141;
    v32 |= 0x1000u;
  }
  *(_WORD *)(v26 + 48) |= v32;
  v40 = v142;
  *(_QWORD *)(v26 + 520) = v34;
  v41 = -1;
  *(_BYTE *)(v26 + 541) = v40;
  *(_QWORD *)(v26 + 512) = v28;
  v42 = *(__int64 (__fastcall **)(_QWORD, __int64))(v16 + 432);
  LODWORD(v141) = -1;
  if ( v42 )
  {
    v41 = v42(*(_QWORD *)(v16 + 488), v16 + 496);
    LODWORD(v141) = v41;
  }
  if ( *(_BYTE *)(v35 + 32829) )
  {
    v41 = 0;
    LODWORD(v141) = 0;
  }
  v43 = v152;
  if ( v152 )
  {
    PoCopyDeepIdleMask((_DWORD *)(v16 + 576));
    KeAddProcessorAffinityEx((_WORD *)(v16 + 576), *(_DWORD *)(v35 + 36));
    v109 = *(_DWORD **)(v16 + 752);
    v151 = *(_QWORD *)(v43 + 48);
    v110 = *(_DWORD *)v43;
    v153 = v109;
    memset(v109, 0, 4 * v110 + 8);
    v44 = v136;
    v111 = 0LL;
    if ( *(_DWORD *)(v16 + 776) )
    {
      v112 = 0;
      while ( 1 )
      {
        v113 = *(_QWORD *)(v16 + 784);
        v114 = v112;
        if ( PpmIdleVetoBias || !*(_BYTE *)(v113 + 24 * v111 + 1) )
        {
          LODWORD(v122) = -2;
        }
        else
        {
          v115 = *(unsigned int *)(v113 + 24 * v111 + 4);
          v116 = v140;
          if ( PpmDripsStateIndex == -1
            || (unsigned int)v115 < PpmDripsStateIndex
            || !PpmCheckPreConditionsForDeepSleep(v140) )
          {
            v118 = (unsigned __int8)v137;
            if ( v133 == 1 )
              v118 = 1;
            v117 = 0;
          }
          else
          {
            v117 = 1;
            v118 = (unsigned __int8)v137;
            if ( !v133 )
              v118 = 1;
          }
          v133 = v117;
          v137 = v118;
          if ( (_BYTE)v118 )
          {
            LOBYTE(v137) = 0;
            PpmEstimateIdleDuration(
              v116,
              v117,
              v117,
              *v157,
              0LL,
              (__int64)&v154,
              (__int64)&v160,
              (__int64)&v148,
              (__int64)&v138);
          }
          v119 = v154;
          v120 = v150;
          v136 = -1;
          *(_DWORD *)(v16 + 796) = 0;
          v121 = PpmIdleCheckCoordinatedStateEligibility(v116, v41, v120, v119, v115, v115, (__int64)&v136, v16 + 792);
          v44 = v136;
          v122 = v121;
          if ( !*(_BYTE *)(v152 + 12) && !v121 )
          {
            v123 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v152 + 16);
            if ( v123 )
              v122 = v123(*(_QWORD *)(v16 + 488), v136, (unsigned int)v115);
          }
          PpmIdleUpdateSelectionStatistics(v122, 1008 * v115 + v151 + 72);
          v124 = v152 + 384 * v115;
          if ( v122 != 0xFFFFFFFFLL )
            v161 = *(_QWORD *)(v124 + 64);
          if ( !v122 )
          {
            v127 = v153;
            v75 = -1;
            *v159 = 1;
            *v127 = v115;
            if ( *(_BYTE *)(v124 + 121) )
              v75 = v115;
            if ( (unsigned int)KeSubtractAffinityEx(
                                 (unsigned __int16 *)(v16 + 240),
                                 (unsigned __int16 *)(v124 + 128),
                                 v181) )
              PpmUnlockProcessors(v16 + 240, v181);
            v45 = v149;
            v35 = v140;
            v72 = (unsigned int)v149;
            v47 = v133;
            goto LABEL_92;
          }
          if ( v122 == 2147483651LL )
          {
            v135 = 1;
          }
          else
          {
            v125 = (unsigned __int8)v145;
            if ( v122 == 2147483656LL )
              v125 = 1;
            v145 = v125;
          }
          PpmIdleRollbackCoordinatedSelection(v16 + 792, 0LL);
        }
        v126 = v153;
        v112 = v114 + 1;
        v111 = (unsigned int)(v111 + 1);
        v144 = v114 + 1;
        v153[v114 + 2] = v122;
        if ( (unsigned int)v111 >= *(_DWORD *)(v16 + 776) )
          break;
        v41 = (int)v141;
      }
      v35 = v140;
      v144 = v112;
    }
    else
    {
      v126 = v153;
    }
    *(_DWORD *)(v16 + 796) = 0;
    *v126 = -1;
    PpmUnlockProcessors(v16 + 240, v16 + 240);
  }
  else
  {
    v44 = v136;
  }
  v45 = *(unsigned int **)(v16 + 744);
  v46 = *(_DWORD *)(v16 + 32);
  v47 = 0;
  v149 = v45;
  v48 = 1;
  memset(v45, 0, 4 * v46 + 8);
  v49 = 0LL;
  v161 = *(_QWORD *)(v16 + 40);
  v137 = 0;
  if ( !*(_DWORD *)(v16 + 760) )
  {
    v72 = 0LL;
    goto LABEL_91;
  }
  v50 = 2147483658LL;
  v51 = 0x80000000;
  v52 = 0x100000000LL;
  while ( 1 )
  {
    v53 = *(_QWORD *)(v16 + 768);
    v54 = (unsigned int)v49;
    v151 = (unsigned int)v49;
    v44 = *(_DWORD *)(v53 + 24 * v49 + 4);
    v136 = v44;
    if ( !v152 && v44 == *(_DWORD *)(v16 + 32) - 1 && *(_BYTE *)(v16 + 540) && PpmCheckPreConditionsForDeepSleep(v35) )
    {
      v134 = 1;
      if ( !v47 )
        v48 = 1;
    }
    else
    {
      if ( v47 == 1 )
        v48 = 1;
      v134 = 0;
    }
    if ( v48 )
    {
      LOBYTE(v140) = 0;
      v171 = 0LL;
      v55 = *v157;
      v172 = 0LL;
      memset(v180, 0, 0xA8uLL);
      v56 = v134;
      v57 = -1LL;
      v58 = *(_BYTE *)(*(_QWORD *)(v35 + 0x8000) + 540LL);
      v59 = 0;
      if ( *(_BYTE *)(v35 + 33) )
        v59 = 8;
      v138 = v59;
      if ( v134 )
        v138 = v59 | 4;
      v60 = 2;
      v33 = *(_BYTE *)(v35 + 33) == 0;
      v61 = KiClockTimerNextTickTime;
      v143 = 2;
      v156 = 0LL;
      if ( v33 )
      {
        KiGetNextTimerExpirationDueTime(v35, 0, v55, v134, 0, &v156, &v143);
        v56 = v134;
        if ( v61 <= v156 )
          v61 = v156;
      }
      else
      {
        if ( !v58 || (_BYTE)KiDynamicTickDisableReason || KiClockState )
          goto LABEL_60;
        KiGetNextTimerExpirationDueTime(v35, 1u, v55, v134, 0, &v156, &v143);
        v56 = v134;
        if ( v55 + (unsigned int)KiLastRequestedTimeIncrement >= v156 )
        {
          v60 = 2;
          goto LABEL_60;
        }
        v61 = v156;
      }
      v60 = v143;
LABEL_60:
      if ( v61 == -1LL )
      {
        v62 = -1LL;
      }
      else
      {
        v62 = 0LL;
        if ( v61 > v55 )
          v62 = v61 - v55;
      }
      v63 = *(_DWORD *)(v35 + 11684);
      v64 = v63;
      v148 = v60;
      for ( j = 0; v64; v64 >>= 4 )
        j += KeMaximumIncrement;
      if ( !v56 && v63 )
      {
        v66 = KeMaximumIncrement / (v63 + 1);
        if ( !v66 )
          v66 = 1;
        v57 = v66;
      }
      if ( v62 <= v57 )
      {
        v57 = v62;
      }
      else
      {
        v138 |= 1u;
        if ( v62 >= j )
          v62 = j;
      }
      if ( PpmIdleDurationExpirationTimeout )
      {
        if ( *(_BYTE *)(v35 + 33) )
        {
          LODWORD(v180[0]) = 1310721;
          v97 = 0;
          memset((char *)v180 + 4, 0, 0xA4uLL);
          if ( KeNumberNodes )
          {
            v98 = KeNodeBlock;
            v99 = (unsigned __int16)KeNumberNodes;
            do
            {
              v100 = *v98;
              v101 = *(unsigned __int16 *)(*v98 + 144);
              v102 = *(_QWORD *)(*v98 + 72);
              if ( LOWORD(v180[0]) <= (unsigned __int16)v101 )
                LOWORD(v180[0]) = v101 + 1;
              v180[v101 + 1] |= v102;
              if ( *(_QWORD *)(v100 + 72) )
                v97 = 1;
              ++v98;
              --v99;
            }
            while ( v99 );
            if ( v97 )
            {
              *((_QWORD *)&v171 + 1) = v180[1];
              v103 = 0LL;
              *(_QWORD *)&v171 = v180;
              while ( 1 )
              {
                v147 = 0;
                if ( (int)KiEnumerateNextProcessorNumber((__int64)&v147, (unsigned __int16 **)&v171) < 0 )
                  break;
                v104 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * (unsigned __int16)v147 + BYTE2(v147)];
                if ( (unsigned int)v104 >= KeQueryActiveProcessorCountEx(0xFFFFu) )
                {
                  v105 = 0LL;
                }
                else
                {
                  _mm_lfence();
                  v105 = KiProcessorBlock[v104];
                }
                v106 = *(_QWORD *)(v105 + 32808);
                if ( v106 > v103 && v106 != -1LL )
                  v103 = v106;
              }
              v16 = v158;
              if ( v103 && v62 + v55 > v103 )
              {
                v138 |= 0x2000u;
                v62 = v103 > v55 ? (unsigned int)(v103 - v55) : 1LL;
                if ( v62 < v57 )
                  v57 = v62;
              }
              LODWORD(v49) = v137;
            }
          }
        }
      }
      v44 = v136;
      v51 = 0x80000000;
      v160 = v62;
      v52 = 0x100000000LL;
      v54 = v151;
      v50 = 2147483658LL;
      v154 = v57;
      v48 = v140;
    }
    if ( !v44 )
    {
      v69 = 0LL;
      goto LABEL_83;
    }
    v67 = *(_QWORD *)(v35 + 0x8000);
    if ( *(_DWORD *)(v67 + 36) == 3 && PpmIdleVetoBias )
    {
      v69 = 4294967294LL;
      goto LABEL_83;
    }
    v68 = 248LL * v44;
    if ( *(_BYTE *)(v68 + v67 + 1063) )
    {
      v69 = v50;
      goto LABEL_83;
    }
    if ( v44 > (unsigned int)v141 && (_DWORD)v141 != -1 )
    {
      v69 = 2147483656LL;
      goto LABEL_83;
    }
    if ( !*(_BYTE *)(v68 + v67 + 1058) && *(_BYTE *)(v67 + 539) )
    {
      v69 = 2147483655LL;
      goto LABEL_83;
    }
    v79 = *(_DWORD *)(v68 + v67 + 1016);
    if ( v79 )
    {
      if ( v79 >= 0 )
      {
        if ( *(_QWORD *)(v68 + v67 + 1048) )
        {
          v128 = (__int64 *)(v68 + v67 + 1024);
          v129 = *v128;
          v33 = *v128 == (_QWORD)v128;
          v79 = v51;
          if ( !v33 )
            v79 = *(_DWORD *)(v129 + 16);
        }
        else
        {
          v79 = v51;
        }
      }
      else
      {
        v79 = -2147483635;
      }
    }
    v44 = v136;
    if ( v79 )
    {
      v69 = v52 | (unsigned int)v79;
    }
    else
    {
      if ( *(_DWORD *)(v68 + v67 + 1000) > v150 )
      {
        v44 = v136;
        v69 = 2147483650LL;
        goto LABEL_83;
      }
      if ( *(unsigned int *)(v68 + v67 + 1004) > v154 )
      {
        v44 = v136;
        v69 = 2147483651LL;
        goto LABEL_83;
      }
      v80 = *(unsigned int (__fastcall **)(_QWORD, _QWORD))(v67 + 448);
      v69 = v80 ? v80(*(_QWORD *)(v67 + 488), v136) : 0LL;
    }
    if ( !v69 )
    {
      v81 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))(v16 + 440);
      if ( v81 )
        v69 = v81(*(_QWORD *)(v16 + 488), v44, 0xFFFFFFFFLL);
    }
LABEL_83:
    v70 = v164 + 1000LL * v44;
    if ( !v69 )
    {
      v71 = 0;
LABEL_85:
      ++*(_QWORD *)(v70 + 8LL * v71 + 80);
      goto LABEL_86;
    }
    if ( (v69 & 0x80000000) == 0 )
    {
      if ( (v69 & 0x100000000LL) != 0 )
      {
        v130 = *(_QWORD *)(v70 + 200);
        v71 = 2;
        if ( v130 )
          ++*(_QWORD *)(((unsigned __int64)(((unsigned int)v69 & 0x7FFFFFFF) - 1) << 6) + *(_QWORD *)(v130 + 32) + 24);
      }
      else
      {
        v71 = 1;
      }
      goto LABEL_85;
    }
    if ( (unsigned int)v69 <= 0x8000000C )
    {
      v71 = v69 - 2147483646;
      goto LABEL_85;
    }
LABEL_86:
    if ( !v69 )
      break;
    if ( v69 == 2147483651LL )
    {
      v135 = 1;
    }
    else if ( v69 == 2147483656LL )
    {
      LOBYTE(v145) = 1;
    }
    v78 = v149;
    v49 = (unsigned int)(v49 + 1);
    v47 = v134;
    v51 = 0x80000000;
    v137 = v49;
    v52 = 0x100000000LL;
    v50 = 2147483658LL;
    v149[v54 + 2] = v69;
    if ( (unsigned int)v49 >= *(_DWORD *)(v16 + 760) )
    {
      v72 = v139;
      v45 = v78;
      goto LABEL_91;
    }
  }
  v45 = v149;
  v72 = (unsigned int)v49;
  v73 = 248LL * v44;
  *v149 = v44;
  v139 = v49;
  v74 = !*(_BYTE *)(v73 + v16 + 1058) || v152 && (!*(_BYTE *)(v73 + v16 + 1061) || v44);
  v47 = v134;
  *v159 = v74;
LABEL_91:
  v75 = -1;
LABEL_92:
  if ( *v159 )
  {
    LOBYTE(v72) = 1;
    PpmIdleSetSynchronizationState(v35 + 32832, v72);
    LODWORD(v72) = v139;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x200000) != 0 )
  {
    v131 = v153;
    if ( v153 )
    {
      v132 = v144;
      v153[1] = v144;
      v173 = v131;
      v175 = 0;
      v174 = 4 * v132 + 8;
      EtwTraceKernelEvent((__int64)&v173, 1u, 0x40200000u, 0x123Eu, 0x602u);
      LODWORD(v72) = v139;
    }
    if ( v45 )
    {
      v45[1] = v72;
      v177 = 4 * v72 + 8;
      v176 = v45;
      v178 = 0;
      EtwTraceKernelEvent((__int64)&v176, 1u, 0x40200000u, 0x123Du, 0x602u);
    }
  }
  *(_WORD *)(v16 + 48) |= v138;
  v76 = (_QWORD *)v168;
  *(_BYTE *)(v16 + 7) = v145;
  *(_BYTE *)(v16 + 6) = v135;
  *(_QWORD *)(v16 + 520) = v160;
  *(_QWORD *)(v16 + 512) = v154;
  *(_BYTE *)(v16 + 541) = v148;
  *v165 = v44;
  *v166 = v75;
  *v167 = v47;
  result = v161;
  *v76 = v161;
  return result;
}
