/*
 * XREFs of ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00A8720
 * Callers:
 *     GreGetTextExtentW @ 0x1C0024ECC (GreGetTextExtentW.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00AC7E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetTextExtentExW @ 0x1C015EFE8 (GreGetTextExtentExW.c)
 * Callees:
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C0005254 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C005EE9C (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C005F958 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C0060BF0 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C00625BC (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0062610 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00659FC (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0068928 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C0070A70 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C00A5440 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00F1A88 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1C01448A0 (-vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01480A0 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x1C02A72E8 (-bCalcEscapementP@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z @ 0x1C02BCD28 (-vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x1C02BCF90 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C02BD4B0 (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 */

void __fastcall ESTROBJ::vInit(
        ESTROBJ *this,
        unsigned __int16 *a2,
        unsigned int a3,
        struct XDCOBJ *a4,
        struct RFONTOBJ *a5,
        unsigned int **a6,
        __m128i *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        unsigned int a13,
        int a14,
        unsigned int a15,
        int *a16,
        void *a17,
        unsigned int a18)
{
  RFONTOBJ *v18; // r15
  int v20; // r11d
  struct XDCOBJ *v22; // r13
  __int64 v23; // rbp
  __m128i v24; // xmm6
  unsigned int v25; // xmm7_4
  int v26; // edx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rbx
  __int64 v30; // rax
  _DWORD *v31; // rcx
  int v32; // edx
  int v33; // r9d
  unsigned int v34; // r12d
  __int64 v35; // rcx
  int v36; // ebx
  unsigned int *v37; // rdx
  struct _GLYPHPOS *v38; // rbp
  unsigned __int16 *v39; // r8
  struct _GLYPHPOS *v40; // rsi
  unsigned __int16 *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r12
  int v44; // ecx
  int v45; // ebx
  __int64 v46; // rdx
  _DWORD *v47; // rcx
  unsigned __int16 *v48; // r12
  struct GPRUN *v49; // rbp
  _DWORD *v50; // r13
  int v51; // ebx
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r15
  struct _GLYPHDATA **v55; // rdx
  struct _GLYPHDATA *LinkMetricsPlus; // rbx
  unsigned int v57; // esi
  int v58; // eax
  GLYPHDEF *pgdf; // rcx
  int v60; // ecx
  __int64 v61; // rdx
  int v62; // ecx
  char v63; // r13
  char v64; // cl
  int v65; // r8d
  int v66; // eax
  int v67; // ecx
  int *v68; // rdx
  int v69; // ecx
  float v70; // xmm1_4
  __int64 v71; // r8
  float v72; // r9d
  int v73; // ecx
  __int64 v74; // r8
  __int64 v75; // r8
  int v76; // eax
  __int64 v77; // rcx
  __int64 v78; // r8
  float v79; // r9d
  int v80; // ecx
  __int64 v81; // r8
  __int64 v82; // r8
  __int64 v83; // rcx
  unsigned int v84; // r9d
  int v85; // edx
  unsigned int v86; // edx
  unsigned int v87; // edi
  _DWORD *v88; // r9
  unsigned int v89; // eax
  __int64 v90; // rbx
  __int64 v91; // r8
  float v92; // r11d
  unsigned int v93; // eax
  __int64 v94; // r8
  __int64 v95; // r8
  float v96; // r11d
  unsigned int v97; // eax
  __int64 v98; // r8
  __int64 v99; // r8
  float v100; // r11d
  unsigned int v101; // eax
  __int64 v102; // r8
  __int64 v103; // r8
  float v104; // r11d
  unsigned int v105; // eax
  __int64 v106; // r8
  __int64 v107; // r8
  __int64 v108; // rdi
  _DWORD *v109; // rbx
  __int64 v110; // r8
  float v111; // r9d
  unsigned int v112; // r11d
  __int64 v113; // r8
  __int64 v114; // r8
  int v115; // r9d
  int v116; // eax
  int v117; // r8d
  __int64 v118; // rax
  int v119; // r8d
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rax
  struct GPRUN *Run; // rax
  __int64 v124; // rbx
  unsigned __int64 v125; // rcx
  unsigned __int64 v126; // r8
  char v127; // al
  int v128; // eax
  __int64 v129; // rcx
  __int64 v130; // rcx
  __int64 v131; // rdx
  int v132; // eax
  __m128i *v133; // rdx
  unsigned __int64 v134; // r8
  __int64 v135; // rcx
  int *v136; // rax
  unsigned __int64 v137; // rcx
  __int64 v138; // rcx
  int *v139; // rax
  unsigned __int64 v140; // rcx
  int v141; // eax
  int v142; // edx
  _DWORD *v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rdx
  int v146; // r11d
  int v147; // r9d
  ERECTL *v148; // r8
  int v149; // r10d
  int v150; // r11d
  int v151; // ecx
  int v152; // edx
  __int64 v153; // r8
  int v154; // ecx
  int v155; // edx
  __int64 v156; // r8
  int v157; // [rsp+50h] [rbp-88h]
  int v158; // [rsp+54h] [rbp-84h] BYREF
  int v159; // [rsp+58h] [rbp-80h]
  unsigned int v160; // [rsp+5Ch] [rbp-7Ch]
  unsigned int v161; // [rsp+60h] [rbp-78h]
  int v162; // [rsp+64h] [rbp-74h]
  unsigned __int16 *v163; // [rsp+68h] [rbp-70h]
  struct _GLYPHPOS *v164; // [rsp+70h] [rbp-68h]
  unsigned int v165; // [rsp+E0h] [rbp+8h]

  v18 = a5;
  v20 = a8;
  v22 = a4;
  v23 = a3;
  v24 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a10), 0);
  v25 = **a6;
  *(_DWORD *)this = a3;
  *((_QWORD *)this + 7) = a5;
  *((_DWORD *)this + 58) = 0;
  v26 = a8 != 0 ? 0x400 : 0;
  *((_DWORD *)this + 1) = v26;
  v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 120LL) + 16LL);
  if ( !v27 )
    return;
  if ( (*(_DWORD *)(v27 + 4) & 0x10) != 0 )
  {
    v26 |= 0x80u;
    *((_DWORD *)this + 1) = v26;
  }
  *((_DWORD *)this + 31) = a18;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 5) = a2;
  *(_QWORD *)((char *)this + 116) = 0LL;
  v28 = *(_QWORD *)a5;
  if ( (*(_DWORD *)(*(_QWORD *)a5 + 84LL) & 4) != 0 )
  {
    *((_DWORD *)this + 1) = v26 | 0x100;
    RFONTOBJ::vFixUpGlyphIndices(a5, a2, a3);
    v28 = *(_QWORD *)a5;
  }
  v29 = *(_QWORD *)(v28 + 104);
  if ( (*(_DWORD *)(v29 + 1824) & 0x40000) != 0 )
    *((_DWORD *)this + 58) |= 0x100u;
  v30 = (__int64)a17;
  if ( !a17 )
  {
    v30 = AllocFreeTmpBuffer((30 * (_DWORD)v23 + 7) & 0xFFFFFFF8);
    if ( !v30 )
      return;
    *((_DWORD *)this + 58) |= 1u;
    v20 = a8;
  }
  *((_QWORD *)this + 8) = v30;
  v31 = *(_DWORD **)a5;
  v32 = *(_DWORD *)(*(_QWORD *)a5 + 208LL);
  if ( v32 != 1 || (v31[179] & 4) != 0 )
    v159 = a9;
  else
    v159 = v31[98];
  v33 = a14;
  v34 = a13;
  v160 = a15;
  if ( (a15 & 0x18) != 0 )
  {
    if ( (a15 & 0x18) == 8 )
    {
      v34 = a13 - v31[84];
      v33 = a14 - v31[85];
    }
  }
  else
  {
    v34 = a13 - v31[82];
    v33 = a14 - v31[83];
  }
  v157 = v34;
  v165 = v33;
  if ( a10 && a7 && v32 == 1 && (v31[179] & 4) == 0 && (*(_DWORD *)(v29 + 40) & 1) != 0 )
  {
    v133 = a7;
    v134 = 0LL;
    if ( v20 )
    {
      v138 = 2LL * (_DWORD)v23;
      v139 = &a7->m128i_i32[v138];
      v140 = (unsigned __int64)(v138 * 4) >> 3;
      if ( a7 > (__m128i *)v139 )
        v140 = 0LL;
      if ( v140 )
      {
        do
        {
          v133->m128i_i32[0] += a10;
          v133 = (__m128i *)((char *)v133 + 8);
          ++v134;
        }
        while ( v134 < v140 );
      }
    }
    else
    {
      v135 = (int)v23;
      v136 = &a7->m128i_i32[v135];
      v137 = (unsigned __int64)(v135 * 4) >> 2;
      if ( a7 > (__m128i *)v136 )
        v137 = 0LL;
      if ( v137 )
      {
        if ( v137 >= 0x10 )
        {
          do
          {
            v134 += 16LL;
            *v133 = _mm_add_epi32(v24, _mm_loadu_si128(v133));
            v133[1] = _mm_add_epi32(v24, _mm_loadu_si128(v133 + 1));
            v133[2] = _mm_add_epi32(v24, _mm_loadu_si128(v133 + 2));
            v133[3] = _mm_add_epi32(v24, _mm_loadu_si128(v133 + 3));
            v133 += 4;
          }
          while ( v134 < (v137 & 0xFFFFFFFFFFFFFFF0uLL) );
        }
        for ( ; v134 < v137; ++v134 )
        {
          v133->m128i_i32[0] += a10;
          v133 = (__m128i *)((char *)v133 + 4);
        }
      }
    }
  }
  v35 = *(_QWORD *)a5;
  v36 = v159;
  if ( v159 | *(_DWORD *)(*(_QWORD *)a5 + 392LL)
    || (v37 = *a6, ((*a6)[8] & 1) == 0)
    || *((float *)v37 + 3) < 0.0
    || *(float *)&v25 < 0.0 )
  {
    if ( v20 )
    {
      if ( v159 != *(_DWORD *)(v35 + 432) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v159) )
          return;
        v33 = v165;
      }
      *((_DWORD *)this + 58) |= 8u;
      ESTROBJ::vCharPos_G4(this, v22, a5, v34, v33, a7->m128i_i32);
    }
    else if ( v159 == *(_DWORD *)(*(_QWORD *)a5 + 392LL) )
    {
      if ( a7 )
        ESTROBJ::vCharPos_G1(this, v22, a5, v34, v33, a7->m128i_i32, a16);
      else
        ESTROBJ::vCharPos_G2(this, v22, a5, v34, v33, a10, a11, a12, a16);
    }
    else
    {
      if ( v159 != *(_DWORD *)(v35 + 432) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v159) )
          return;
        v33 = v165;
      }
      *((_DWORD *)this + 58) |= 8u;
      *((_DWORD *)this + 1) |= 0x200u;
      ESTROBJ::vCharPos_G3(this, v22, a5, v34, v33, a10, a11, a12, a7->m128i_i32, a16);
    }
    v125 = *((_QWORD *)this + 10);
    v63 = v160;
    v126 = HIDWORD(v125);
    v127 = v160;
    *((_QWORD *)this + 11) = v125;
    v128 = v127 & 6;
    if ( v128 )
    {
      if ( v128 == 6 )
      {
        LODWORD(v125) = (int)v125 / 2;
        LODWORD(v126) = (int)v126 / 2;
        v141 = 0;
        v142 = 0;
      }
      else
      {
        v141 = -HIDWORD(v125);
        v142 = -(int)v125;
      }
      *((_DWORD *)this + 20) = v142;
      *((_DWORD *)this + 21) = v141;
      if ( (_DWORD)v23 )
      {
        v143 = (_DWORD *)(*((_QWORD *)this + 8) + 20LL);
        v144 = v23;
        do
        {
          *(v143 - 1) -= v125;
          *v143 -= v126;
          v143 += 6;
          --v144;
        }
        while ( v144 );
      }
      v34 -= v125;
      v84 = v165 - v126;
    }
    else
    {
      v84 = v165;
    }
    v129 = *((_QWORD *)this + 8);
    *((_DWORD *)this + 18) = v34;
    *((_DWORD *)this + 19) = v84;
    if ( (_DWORD)v23 )
    {
      v130 = v129 + 20;
      v131 = v23;
      do
      {
        v132 = *(_DWORD *)(v130 - 4);
        v130 += 24LL;
        *(_DWORD *)(v130 - 28) = (v132 + 8) >> 4;
        *(_DWORD *)(v130 - 24) = (*(_DWORD *)(v130 - 24) + 8) >> 4;
        --v131;
      }
      while ( v131 );
    }
    goto LABEL_69;
  }
  if ( a7 )
  {
    if ( !v20 )
    {
      ESTROBJ::vCharPos_H1((unsigned int *)this, v22, a5, v34, v33, a7, v25);
      goto LABEL_48;
    }
    if ( (a15 & 0xA0) != 0 )
    {
      if ( v159 != *(_DWORD *)(v35 + 432) )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapementP(a5, (struct EXFORMOBJ *)a6, v159) )
          return;
        v33 = v165;
      }
      *((_DWORD *)this + 58) |= 8u;
      v37 = *a6;
    }
    ESTROBJ::vCharPos_H4(this, v22, a5, v34, v33, a7, v25, v37[3]);
    goto LABEL_48;
  }
  if ( !*(_DWORD *)(v35 + 312) || a11 | a10 )
  {
    ESTROBJ::vCharPos_H3((__int64)this, v22, a5, v34, v33, a10, a11, a12, v25, 0LL);
    goto LABEL_48;
  }
  v38 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
  v39 = (unsigned __int16 *)*((_QWORD *)this + 5);
  v40 = v38;
  v41 = v39;
  v164 = v38;
  v38->ptl.x = (int)(v34 + 8) >> 4;
  v38->ptl.y = (v33 + 8) >> 4;
  v42 = *(_QWORD *)a5;
  v43 = *(unsigned int *)this;
  v163 = v39;
  v161 = v43;
  *((_DWORD *)this + 1) |= *(_DWORD *)(v42 + 276) & 0x71 | 2;
  v44 = *(_DWORD *)(*(_QWORD *)a5 + 312LL);
  *((_DWORD *)this + 2) = v44;
  v45 = 16 * v44 * v43;
  *((_DWORD *)this + 28) = v45;
  v46 = *(_QWORD *)a5;
  v162 = v45;
  if ( !*(_QWORD *)(v46 + 480) )
  {
    if ( !(unsigned int)RFONTOBJ::bAllocateCache(a5, (struct RFONTOBJ *)v46) )
      goto LABEL_179;
    v46 = *(_QWORD *)a5;
    v39 = v41;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(v46 + 104) + 1824LL) & 0x40000000) != 0 && *(_DWORD *)(v46 + 88) == 1 )
  {
    v57 = 0;
    v158 = 0;
    if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(a5, (struct RFONTOBJ *)(unsigned int)v43, v38, v39, v22, this) )
      goto LABEL_45;
    goto LABEL_37;
  }
  v47 = *(_DWORD **)(v46 + 480);
  v158 = 1;
  if ( !*v47 )
  {
    for ( ; (_DWORD)v43; LODWORD(v43) = v43 - 1 )
    {
      v40->hg = *(_DWORD *)(*(_QWORD *)a5 + 460LL);
      v40->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a5);
      ++v40;
    }
    goto LABEL_36;
  }
  v48 = &v39[v43];
  v49 = (struct GPRUN *)(v47 + 4);
  if ( v39 >= v48 )
  {
    v38 = v40;
LABEL_36:
    v57 = 0;
LABEL_37:
    v58 = *((_DWORD *)this + 58);
    if ( (v58 & 0x1400) != 0 )
    {
      v34 = v157;
      ESTROBJ::vCharPos_H3(
        (__int64)this,
        v22,
        v18,
        v157,
        v165,
        0,
        0,
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 976LL) + 288LL),
        v25,
        (unsigned __int16 *)&v158);
      LODWORD(v23) = a3;
      goto LABEL_49;
    }
    if ( v158 )
    {
      *((_DWORD *)this + 58) = v58 | 2;
      *((_QWORD *)this + 4) = *((_QWORD *)this + 8);
    }
    pgdf = v38->pgdf;
    if ( (*((_DWORD *)this + 1) & 0x10) != 0 )
    {
      *((_DWORD *)this + 24) = 0;
      v60 = v45;
    }
    else
    {
      *((_DWORD *)this + 24) = pgdf[2].pgb;
      v60 = v45 + HIDWORD(pgdf[2].ppo) - 16 * *((_DWORD *)this + 2);
    }
    *((_DWORD *)this + 26) = v60;
    v61 = *(_QWORD *)v18;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 976LL) + 340LL) & 0x40) != 0 )
    {
      *((_DWORD *)this + 25) = -*(_DWORD *)(v61 + 320);
      v62 = -*(_DWORD *)(*(_QWORD *)v18 + 316LL);
    }
    else
    {
      *((_DWORD *)this + 25) = *(_DWORD *)(v61 + 316);
      v62 = *(_DWORD *)(*(_QWORD *)v18 + 320LL);
    }
    *((_DWORD *)this + 27) = v62;
    *((_DWORD *)this + 58) |= 4u;
    *((_DWORD *)this + 20) = v45;
    *((_DWORD *)this + 21) = 0;
LABEL_45:
    LODWORD(v23) = a3;
    v34 = v157;
    goto LABEL_49;
  }
  v50 = v47 + 5;
  while ( 1 )
  {
    v51 = *v41;
    v52 = (unsigned int)(v51 - *(_DWORD *)v49);
    if ( (unsigned int)v52 >= *v50 )
    {
      Run = RFONTOBJ::gprunFindRun(v18, v51);
      v49 = Run;
      v124 = (unsigned int)(v51 - *(_DWORD *)Run);
      v50 = (_DWORD *)((char *)Run + 4);
      if ( (unsigned int)v124 >= *((_DWORD *)Run + 1) )
      {
        LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(v18, a4, this, v41, v163, v161, &v158, 1);
        if ( !LinkMetricsPlus )
          goto LABEL_179;
        goto LABEL_33;
      }
      _mm_lfence();
      v53 = *((_QWORD *)Run + 1);
      v54 = 8 * v124;
    }
    else
    {
      _mm_lfence();
      v53 = *((_QWORD *)v49 + 1);
      v54 = 8 * v52;
    }
    v55 = (struct _GLYPHDATA **)(v54 + v53);
    LinkMetricsPlus = *v55;
    if ( !*v55 )
      break;
LABEL_32:
    v18 = a5;
LABEL_33:
    if ( !LinkMetricsPlus->gdf.pgb
      && v158
      && *(_DWORD *)(*(_QWORD *)v18 + 88LL)
      && !(unsigned int)RFONTOBJ::bInsertGlyphbits((struct _FONTOBJ **)v18, LinkMetricsPlus, v41 == v163) )
    {
      v158 = 0;
    }
    ++v41;
    v40->hg = LinkMetricsPlus->hg;
    v40->pgdf = &LinkMetricsPlus->gdf;
    ++v40;
    if ( v41 >= v48 )
    {
      v45 = v162;
      v38 = v164;
      v22 = a4;
      goto LABEL_36;
    }
  }
  if ( (unsigned int)RFONTOBJ::bInsertMetricsPlus(a5, v55) )
  {
    LinkMetricsPlus = *(struct _GLYPHDATA **)(v54 + *((_QWORD *)v49 + 1));
    goto LABEL_32;
  }
  v18 = a5;
LABEL_179:
  LODWORD(v23) = a3;
  v34 = v157;
LABEL_48:
  v57 = 0;
LABEL_49:
  v63 = v160;
  v64 = v160;
  v65 = *((_DWORD *)this + 20);
  v66 = *((_DWORD *)this + 21);
  *((_DWORD *)this + 22) = v65;
  *((_DWORD *)this + 23) = v66;
  v67 = v64 & 6;
  if ( v67 )
  {
    if ( v67 == 6 )
      v115 = 0;
    else
      v115 = -v65;
    *((_DWORD *)this + 20) = v115;
    v116 = v65 / 2;
    if ( v67 != 6 )
      v116 = v65;
    v117 = v116 + 8;
    v118 = *((_QWORD *)this + 8);
    v119 = v117 >> 4;
    v120 = v118 + 24;
    *(_DWORD *)(v118 + 16) -= v119;
    v34 = 16 * *(_DWORD *)(v118 + 16);
    if ( !*((_DWORD *)this + 2) && (_DWORD)v23 != 1 )
    {
      v121 = (unsigned int)(v23 - 1);
      do
      {
        v122 = v120;
        v120 += 24LL;
        *(_DWORD *)(v122 + 16) -= v119;
        --v121;
      }
      while ( v121 );
    }
  }
  v68 = a16;
  if ( a16 )
  {
    v69 = *((_DWORD *)this + 2);
    v70 = *(float *)(*(_QWORD *)v18 + 408LL);
    if ( !v69 || (*((_DWORD *)this + 58) & 0x1400) != 0 )
    {
      v87 = v23 - 1;
      v88 = (_DWORD *)(*((_QWORD *)this + 8) + 24LL);
      if ( (unsigned int)(v23 - 1) >= 4 )
      {
        v89 = ((unsigned int)(v23 - 5) >> 2) + 1;
        v90 = v89;
        v57 = 4 * v89;
        do
        {
          LODWORD(v91) = 0;
          v92 = (float)(int)(16 * v88[4] - v34) * v70;
          v93 = (unsigned __int8)(SLODWORD(v92) >> 23);
          if ( v93 <= 0x9E )
          {
            v94 = LODWORD(v92) & 0x7FFFFF | 0x800000LL;
            v95 = v93 < 0x76 ? v94 >> (118 - (unsigned __int8)v93) : v94 << ((unsigned __int8)v93 - 118);
            v91 = (v95 + 0x80000000LL) >> 32;
            if ( v92 < 0.0 )
              LODWORD(v91) = -(int)v91;
          }
          *v68 = v91;
          LODWORD(v91) = 0;
          v96 = (float)(int)(16 * v88[10] - v34) * v70;
          v97 = (unsigned __int8)(SLODWORD(v96) >> 23);
          if ( v97 <= 0x9E )
          {
            v98 = LODWORD(v96) & 0x7FFFFF | 0x800000LL;
            v99 = v97 < 0x76 ? v98 >> (118 - (unsigned __int8)v97) : v98 << ((unsigned __int8)v97 - 118);
            v91 = (v99 + 0x80000000LL) >> 32;
            if ( v96 < 0.0 )
              LODWORD(v91) = -(int)v91;
          }
          v68[1] = v91;
          LODWORD(v91) = 0;
          v100 = (float)(int)(16 * v88[16] - v34) * v70;
          v101 = (unsigned __int8)(SLODWORD(v100) >> 23);
          if ( v101 <= 0x9E )
          {
            v102 = LODWORD(v100) & 0x7FFFFF | 0x800000LL;
            v103 = v101 < 0x76 ? v102 >> (118 - (unsigned __int8)v101) : v102 << ((unsigned __int8)v101 - 118);
            v91 = (v103 + 0x80000000LL) >> 32;
            if ( v100 < 0.0 )
              LODWORD(v91) = -(int)v91;
          }
          v68[2] = v91;
          LODWORD(v91) = 0;
          v104 = (float)(int)(16 * v88[22] - v34) * v70;
          v105 = (unsigned __int8)(SLODWORD(v104) >> 23);
          if ( v105 <= 0x9E )
          {
            v106 = LODWORD(v104) & 0x7FFFFF | 0x800000LL;
            v107 = v105 < 0x76 ? v106 >> (118 - (unsigned __int8)v105) : v106 << ((unsigned __int8)v105 - 118);
            v91 = (v107 + 0x80000000LL) >> 32;
            if ( v104 < 0.0 )
              LODWORD(v91) = -(int)v91;
          }
          v68[3] = v91;
          v88 += 24;
          v68 += 4;
          --v90;
        }
        while ( v90 );
      }
      if ( v57 < v87 )
      {
        v108 = v87 - v57;
        v109 = v88 + 4;
        do
        {
          LODWORD(v110) = 0;
          v111 = (float)(int)(16 * *v109 - v34) * v70;
          v112 = (unsigned __int8)(SLODWORD(v111) >> 23);
          if ( v112 <= 0x9E )
          {
            v113 = LODWORD(v111) & 0x7FFFFF | 0x800000LL;
            v114 = v112 < 0x76 ? v113 >> (118 - (unsigned __int8)v112) : v113 << ((unsigned __int8)v112 - 118);
            v110 = (v114 + 0x80000000LL) >> 32;
            if ( v111 < 0.0 )
              LODWORD(v110) = -(int)v110;
          }
          *v68 = v110;
          v109 += 6;
          ++v68;
          --v108;
        }
        while ( v108 );
      }
      LODWORD(v78) = 0;
      v79 = (float)(int)(((v34 + *((_DWORD *)this + 20)) & 0xFFFFFFF0) - v34) * v70;
      v80 = (unsigned __int8)(SLODWORD(v79) >> 23) - 118;
      if ( v80 <= 40 )
      {
        v81 = LODWORD(v79) & 0x7FFFFF | 0x800000LL;
        v82 = v80 < 0 ? v81 >> (118 - (unsigned __int8)(SLODWORD(v79) >> 23)) : v81 << v80;
        v78 = (v82 + 0x80000000LL) >> 32;
        if ( v79 < 0.0 )
          LODWORD(v78) = -(int)v78;
      }
      *v68 = v78;
    }
    else
    {
      LODWORD(v71) = 0;
      v72 = (float)(16 * v69) * v70;
      v73 = (unsigned __int8)(SLODWORD(v72) >> 23) - 118;
      if ( v73 <= 40 )
      {
        v74 = LODWORD(v72) & 0x7FFFFF | 0x800000LL;
        v75 = v73 < 0 ? v74 >> (118 - (unsigned __int8)(SLODWORD(v72) >> 23)) : v74 << v73;
        v71 = (v75 + 0x80000000LL) >> 32;
        if ( v72 < 0.0 )
          LODWORD(v71) = -(int)v71;
      }
      v76 = 0;
      if ( (_DWORD)v23 )
      {
        v77 = (unsigned int)v23;
        do
        {
          v76 += v71;
          *v68++ = v76;
          --v77;
        }
        while ( v77 );
      }
    }
  }
  v83 = *((_QWORD *)this + 8);
  v84 = v165;
  v36 = v159;
  *((_DWORD *)this + 18) = 16 * *(_DWORD *)(v83 + 16);
  *((_DWORD *)this + 19) = 16 * *(_DWORD *)(v83 + 20);
LABEL_69:
  if ( (v63 & 0xA0) != 0 )
  {
    *((_DWORD *)this + 58) |= v63 & 0xA0;
    v145 = *(_QWORD *)v18;
    if ( !(v36 | a8 | *(_DWORD *)(*(_QWORD *)v18 + 392LL)) && ((*a6)[8] & 1) != 0 )
    {
      v146 = v84 + 8;
      v147 = (*((_DWORD *)this + 22) + 8) >> 4;
      v148 = (ESTROBJ *)((char *)this + 16 * *((unsigned int *)this + 32) + 132);
      v149 = (int)(v34 + 8) >> 4;
      v150 = v146 >> 4;
      if ( (v63 & 0x20) != 0 )
      {
        v151 = v149 + *(_DWORD *)(v145 + 280);
        *(_DWORD *)v148 = v151;
        *((_DWORD *)v148 + 2) = v151 + v147;
        v152 = v150 + *(_DWORD *)(*(_QWORD *)v18 + 284LL);
        *((_DWORD *)v148 + 1) = v152;
        *((_DWORD *)v148 + 3) = v152 + *(_DWORD *)(*(_QWORD *)v18 + 300LL);
        ERECTL::vOrder(v148);
        ++*((_DWORD *)this + 32);
        v145 = *(_QWORD *)v18;
        v148 = (ERECTL *)(v153 + 16);
      }
      if ( v63 < 0 )
      {
        v154 = v149 + *(_DWORD *)(v145 + 288);
        *(_DWORD *)v148 = v154;
        *((_DWORD *)v148 + 2) = v154 + v147;
        v155 = v150 + *(_DWORD *)(*(_QWORD *)v18 + 292LL);
        *((_DWORD *)v148 + 1) = v155;
        *((_DWORD *)v148 + 3) = v155 + *(_DWORD *)(*(_QWORD *)v18 + 308LL);
        ERECTL::vOrder(v148);
        ++*((_DWORD *)this + 32);
        v148 = (ERECTL *)(v156 + 16);
      }
      *(_QWORD *)v148 = 0LL;
      *((_QWORD *)v148 + 1) = 0LL;
    }
  }
  v85 = *((_DWORD *)this + 58);
  if ( (*(_DWORD *)(*(_QWORD *)v18 + 12LL) & 1) != 0 )
    v86 = v85 | 0x200;
  else
    v86 = v85 & 0xFFFFFDFF;
  *((_DWORD *)this + 58) = v86;
}
