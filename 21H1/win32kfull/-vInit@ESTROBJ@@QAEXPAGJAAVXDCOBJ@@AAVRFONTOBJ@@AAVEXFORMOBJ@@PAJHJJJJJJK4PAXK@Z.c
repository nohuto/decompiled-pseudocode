/*
 * XREFs of ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290
 * Callers:
 *     ?GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z @ 0x61F50 (-GreExtTextOutWLocked@@YGHAAVXDCOBJ@@HHIPAUtagRECT@@PAGHPAHKPAXK@Z.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     _GreGetTextExtentExW@32 @ 0xF83A4 (_GreGetTextExtentExW@32.c)
 * Callees:
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ?vCharPos_H1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJVEFLOAT@@@Z @ 0x65900 (-vCharPos_H1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJVEFLOAT@@@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z @ 0x861B6 (-bInsertGlyphbits@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x86460 (-bInsertMetricsPlus@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x8700E (-bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJVEFLOAT@@PBH@Z @ 0x87CA4 (-vCharPos_H3@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJVEFLOAT@@PBH@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QAEPAUGPRUN@@G@Z @ 0x88018 (-gprunFindRun@RFONTOBJ@@QAEPAUGPRUN@@G@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z @ 0x8A934 (-bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z @ 0xC0F30 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ @ 0xC100E (-pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 *     ?bCalcEscapement@RFONTOBJ@@QAEHAAVEXFORMOBJ@@J@Z @ 0x223E01 (-bCalcEscapement@RFONTOBJ@@QAEHAAVEXFORMOBJ@@J@Z.c)
 *     ?vCharPos_G1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJPAJ@Z @ 0x2244C6 (-vCharPos_G1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJPAJ@Z.c)
 *     ?vCharPos_G2@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPAJ@Z @ 0x2246AB (-vCharPos_G2@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPAJ@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPBJPAJ@Z @ 0x2249F0 (-vCharPos_G3@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPBJPAJ@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPAJ@Z @ 0x224D70 (-vCharPos_G4@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPAJ@Z.c)
 *     ?vCharPos_H4@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPAJVEFLOAT@@3@Z @ 0x22507D (-vCharPos_H4@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPAJVEFLOAT@@3@Z.c)
 */

void __thiscall ESTROBJ::vInit(
        ESTROBJ *this,
        unsigned __int16 *a2,
        int a3,
        struct XDCOBJ *a4,
        struct RFONTOBJ *a5,
        int **a6,
        int *a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        int a12,
        int a13,
        char a14,
        int *a15,
        void *a16,
        unsigned int a17)
{
  int v17; // ebx
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  unsigned __int16 *v23; // edx
  int v24; // esi
  int v25; // esi
  void *v26; // eax
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  int *v30; // esi
  int v31; // ecx
  struct EXFORMOBJ *v32; // eax
  int *v33; // edx
  int v34; // eax
  int v35; // eax
  int *v36; // esi
  int v37; // ebx
  int v38; // ecx
  struct RFONTOBJ *v39; // eax
  int v40; // ecx
  unsigned int v41; // ecx
  struct _GLYPHPOS *v42; // edx
  struct RFONTOBJ *v43; // esi
  int v44; // ecx
  int v45; // eax
  int v46; // ecx
  _DWORD *v47; // edx
  unsigned __int16 *v48; // ecx
  _DWORD *v49; // eax
  int v50; // esi
  unsigned int v51; // eax
  int v52; // edx
  struct GPRUN *v53; // eax
  struct _GLYPHDATA **v54; // edx
  struct _GLYPHDATA *LinkMetricsPlus; // esi
  struct _GLYPHPOS *v56; // edx
  int v57; // eax
  int v58; // edx
  GLYPHDEF *pgdf; // ecx
  char *v60; // ecx
  int v61; // ecx
  int v62; // eax
  struct _GLYPHPOS *v63; // ecx
  int v64; // edx
  int v65; // eax
  int v66; // eax
  int j; // ecx
  int v68; // eax
  struct _GLYPHPOS *v69; // edi
  _DWORD *v70; // ebx
  int v71; // eax
  int v72; // ecx
  int v73; // esi
  int v74; // eax
  int v75; // esi
  int v76; // ecx
  int v77; // edx
  int v78; // eax
  struct GPRUN *Run; // eax
  unsigned int v80; // esi
  int v81; // edx
  unsigned int v82; // eax
  __int16 v83; // si
  unsigned int i; // ecx
  bool v85; // zf
  unsigned int v86; // ecx
  int *v87; // eax
  unsigned int v88; // ecx
  int *v89; // eax
  struct _GLYPHPOS *v90; // ebx
  unsigned int v91; // edi
  int v92; // ecx
  int v93; // esi
  int v94; // eax
  int v95; // edx
  int v96; // eax
  int v97; // edx
  int v98; // eax
  int v99; // ecx
  int v100; // ecx
  int v101; // eax
  int v102; // ecx
  struct _GLYPHPOS *v103; // edx
  ERECTL *v104; // esi
  int v105; // ebx
  int v106; // eax
  int v107; // ecx
  char *v108; // eax
  int v109; // ecx
  int v110; // eax
  int v111; // ecx
  char *v112; // eax
  int v113; // ecx
  int v114; // [esp+10h] [ebp-48h]
  int v115; // [esp+14h] [ebp-44h]
  struct RFONTOBJ *v116; // [esp+18h] [ebp-40h]
  unsigned __int16 *v117; // [esp+1Ch] [ebp-3Ch]
  unsigned int v118; // [esp+20h] [ebp-38h]
  int v119; // [esp+24h] [ebp-34h]
  int v120; // [esp+2Ch] [ebp-2Ch] BYREF
  int v121; // [esp+30h] [ebp-28h]
  struct GPRUN *v122; // [esp+34h] [ebp-24h]
  int v123; // [esp+38h] [ebp-20h]
  int v124; // [esp+3Ch] [ebp-1Ch]
  struct _GLYPHPOS *v125; // [esp+40h] [ebp-18h]
  struct ESTROBJ *v126; // [esp+44h] [ebp-14h]
  unsigned int *v127; // [esp+48h] [ebp-10h]
  int v128; // [esp+4Ch] [ebp-Ch]
  struct _GLYPHPOS *v129; // [esp+50h] [ebp-8h]
  int v130; // [esp+54h] [ebp-4h]

  v17 = a3;
  v19 = **a6;
  v20 = (*a6)[1];
  v126 = this;
  v123 = v19;
  v124 = v20;
  *(_DWORD *)this = a3;
  *((_DWORD *)this + 11) = a5;
  *((_DWORD *)this + 48) = 0;
  if ( a8 )
    v21 = 1024;
  else
    v21 = 0;
  *((_DWORD *)this + 1) = v21;
  v22 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a5 + 80) + 12);
  if ( !v22 )
    return;
  if ( (*(_BYTE *)(v22 + 4) & 0x10) != 0 )
  {
    v21 |= 0x80u;
    *((_DWORD *)this + 1) = v21;
  }
  v23 = a2;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 8) = a2;
  *((_DWORD *)this + 26) = a17;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  v24 = *(_DWORD *)a5;
  if ( (*(_BYTE *)(*(_DWORD *)a5 + 56) & 4) != 0 )
  {
    *((_DWORD *)this + 1) = v21 | 0x100;
    v24 = *(_DWORD *)a5;
    v130 = *(_DWORD *)(*(_DWORD *)a5 + 80);
    if ( (*(_BYTE *)(*(_DWORD *)(v130 + 12) + 4) & 2) != 0 )
    {
      v130 = *(unsigned __int8 *)(*(_DWORD *)(v130 + 20) + 108);
      if ( (_WORD)v130 )
      {
        v82 = &a2[a3] >= a2 ? (unsigned int)(2 * a3) >> 1 : 0;
        if ( v82 )
        {
          v83 = v130;
          for ( i = 0; i < v82; ++i )
            *v23++ -= v83;
          v24 = *(_DWORD *)a5;
        }
      }
    }
  }
  v25 = *(_DWORD *)(v24 + 72);
  if ( (*(_DWORD *)(v25 + 1120) & 0x40000) != 0 )
    *((_DWORD *)this + 48) |= 0x100u;
  v26 = a16;
  if ( !a16 )
  {
    v26 = (void *)AllocFreeTmpBuffer((22 * a3 + 3) & 0xFFFFFFFC);
    if ( !v26 )
      return;
    *((_DWORD *)this + 48) |= 1u;
  }
  *((_DWORD *)this + 12) = v26;
  v27 = *(_DWORD *)a5;
  v130 = *(_DWORD *)(*(_DWORD *)a5 + 184);
  if ( v130 != 1 || (*(_BYTE *)(v27 + 712) & 4) != 0 )
    v119 = a9;
  else
    v119 = *(_DWORD *)(v27 + 396);
  if ( (a14 & 0x18) != 0 )
  {
    if ( (a14 & 0x18) != 8 )
    {
      v115 = a13;
      v114 = a12;
      goto LABEL_18;
    }
    v114 = a12 - *(_DWORD *)(v27 + 340);
    v28 = a13 - *(_DWORD *)(v27 + 344);
  }
  else
  {
    v114 = a12 - *(_DWORD *)(v27 + 332);
    v28 = a13 - *(_DWORD *)(v27 + 336);
  }
  v115 = v28;
LABEL_18:
  v29 = a10;
  if ( (_DWORD)a10 && a7 && v130 == 1 && (*(_BYTE *)(v27 + 712) & 4) == 0 )
  {
    v85 = (*(_BYTE *)(v25 + 24) & 1) == 0;
    v30 = a7;
    if ( !v85 )
    {
      if ( a8 )
      {
        v122 = 0;
        v130 = &a7[2 * a3] >= a7 ? a3 & 0x1FFFFFFF : 0;
        if ( v130 )
        {
          v88 = v130;
          v89 = a7;
          do
          {
            *v89 += a10;
            v89 += 2;
            v122 = (struct GPRUN *)((char *)v122 + 1);
          }
          while ( (unsigned int)v122 < v88 );
        }
      }
      else
      {
        v122 = 0;
        v130 = &a7[a3] >= a7 ? (unsigned int)(4 * a3) >> 2 : 0;
        if ( v130 )
        {
          v86 = v130;
          v87 = a7;
          do
          {
            *v87++ += a10;
            v122 = (struct GPRUN *)((char *)v122 + 1);
          }
          while ( (unsigned int)v122 < v86 );
        }
      }
    }
  }
  else
  {
    v30 = a7;
  }
  v31 = *(_DWORD *)a5;
  v130 = *(_DWORD *)(*(_DWORD *)a5 + 396);
  v32 = (struct EXFORMOBJ *)a6;
  if ( v119 | v130 )
    goto LABEL_130;
  v33 = *a6;
  if ( ((*a6)[14] & 1) == 0 || v33[6] < 0 )
  {
LABEL_129:
    v29 = a10;
LABEL_130:
    if ( a8 )
    {
      if ( !RFONTOBJ::bCalcEscapement(a5, v32, v119) )
        return;
      *((_DWORD *)this + 48) |= 8u;
      ESTROBJ::vCharPos_G4(this, a4, a5, v114, v115, v30);
    }
    else if ( v119 == v130 )
    {
      if ( v30 )
        ESTROBJ::vCharPos_G1(this, a4, a5, v114, v115, v30, a15);
      else
        ESTROBJ::vCharPos_G2(this, a4, a5, v114, v115, v29, SHIDWORD(a10), a11, a15);
    }
    else
    {
      if ( !RFONTOBJ::bCalcEscapement(a5, v32, v119) )
        return;
      *((_DWORD *)this + 48) |= 8u;
      *((_DWORD *)this + 1) |= 0x200u;
      ESTROBJ::vCharPos_G3(this, a4, a5, v114, v115, a10, SHIDWORD(a10), a11, v30, a15);
    }
    v92 = *((_DWORD *)this + 15);
    v93 = *((_DWORD *)this + 16);
    *((_DWORD *)this + 17) = v92;
    *((_DWORD *)this + 18) = v93;
    if ( (a14 & 6) != 0 )
    {
      if ( (a14 & 6) == 6 )
      {
        v92 /= 2;
        v94 = 0;
        v93 /= 2;
        v95 = 0;
      }
      else
      {
        v94 = -v93;
        v95 = -v92;
      }
      *((_DWORD *)this + 15) = v95;
      *((_DWORD *)this + 16) = v94;
      if ( a3 )
      {
        v96 = *((_DWORD *)this + 12) + 12;
        v97 = a3;
        do
        {
          *(_DWORD *)(v96 - 4) -= v92;
          v96 += 16;
          *(_DWORD *)(v96 - 16) -= v93;
          --v97;
        }
        while ( v97 );
      }
      v98 = v114 - v92;
      v115 -= v93;
      v114 -= v92;
    }
    else
    {
      v98 = v114;
    }
    v99 = *((_DWORD *)this + 12);
    *((_DWORD *)this + 13) = v98;
    *((_DWORD *)this + 14) = v115;
    if ( a3 )
    {
      v100 = v99 + 12;
      do
      {
        v101 = *(_DWORD *)(v100 - 4);
        v100 += 16;
        *(_DWORD *)(v100 - 20) = (v101 + 8) >> 4;
        *(_DWORD *)(v100 - 16) = (*(_DWORD *)(v100 - 16) + 8) >> 4;
        --v17;
      }
      while ( v17 );
    }
    v37 = v114;
    goto LABEL_31;
  }
  v34 = v123;
  if ( v123 < 0 )
  {
    v32 = (struct EXFORMOBJ *)a6;
    goto LABEL_129;
  }
  if ( !v30 )
  {
    if ( *(_DWORD *)(v31 + 316) )
    {
      if ( !a10 )
      {
        v42 = (struct _GLYPHPOS *)*((_DWORD *)this + 12);
        v43 = a5;
        v116 = (struct RFONTOBJ *)*((_DWORD *)this + 8);
        v129 = v42;
        v42->ptl.x = (v114 + 8) >> 4;
        v125 = v42;
        v42->ptl.y = (v115 + 8) >> 4;
        v118 = *(_DWORD *)this;
        v44 = *(_DWORD *)this;
        *((_DWORD *)this + 1) |= *(_DWORD *)(*(_DWORD *)a5 + 280) & 0x71 | 2;
        v45 = *(_DWORD *)(*(_DWORD *)a5 + 316);
        *((_DWORD *)this + 2) = v45;
        v46 = 16 * v45 * v44;
        *((_DWORD *)this + 23) = v46;
        v47 = *(_DWORD **)a5;
        v130 = v46;
        v48 = (unsigned __int16 *)v116;
        v117 = (unsigned __int16 *)v116;
        if ( !v47[134] )
        {
          if ( !RFONTOBJ::bAllocateCache(a5, v116) )
            goto LABEL_27;
          v47 = *(_DWORD **)a5;
          v48 = (unsigned __int16 *)v116;
        }
        if ( (*(_DWORD *)(v47[18] + 1120) & 0x40000000) != 0 && v47[15] == 1 )
        {
          v121 = 0;
          v120 = 0;
          if ( RFONTOBJ::bGetGlyphMetrics(a5, v118, v129, (unsigned __int16 *)v116, a4, this) )
            goto LABEL_50;
          goto LABEL_27;
        }
        v121 = 1;
        v120 = 1;
        v49 = (_DWORD *)v47[134];
        if ( *v49 )
        {
          v122 = (struct GPRUN *)(v49 + 2);
          this = v126;
          if ( v116 < (struct RFONTOBJ *)((char *)v116 + 2 * v118) )
          {
            v127 = v49 + 3;
            while ( 1 )
            {
              v50 = *v48;
              v51 = v50 - *(_DWORD *)v122;
              v17 = a3;
              if ( v51 >= *v127 )
              {
                Run = RFONTOBJ::gprunFindRun(a5, *v48);
                v122 = Run;
                v80 = v50 - *(_DWORD *)Run;
                v127 = (unsigned int *)((char *)Run + 4);
                if ( v80 >= *((_DWORD *)Run + 1) )
                {
                  LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(
                                      a5,
                                      a4,
                                      this,
                                      v117,
                                      (const unsigned __int16 *)v116,
                                      v118,
                                      &v120,
                                      1);
                  if ( !LinkMetricsPlus )
                    goto LABEL_27;
                  v121 = v120;
                  goto LABEL_47;
                }
                _mm_lfence();
                v81 = *((_DWORD *)Run + 2);
                v128 = 4 * v80;
                v54 = (struct _GLYPHDATA **)(4 * v80 + v81);
                v48 = v117;
              }
              else
              {
                v52 = 4 * v51;
                v53 = v122;
                _mm_lfence();
                v128 = v52;
                v54 = (struct _GLYPHDATA **)(*((_DWORD *)v53 + 2) + v52);
              }
              LinkMetricsPlus = *v54;
              if ( !*v54 )
              {
                if ( !RFONTOBJ::bInsertMetricsPlus(a5, v54, *v48) )
                  goto LABEL_27;
                LinkMetricsPlus = *(struct _GLYPHDATA **)(v128 + *((_DWORD *)v122 + 2));
              }
LABEL_47:
              if ( !LinkMetricsPlus->gdf.pgb
                && v121
                && *(_DWORD *)(*(_DWORD *)a5 + 60)
                && !RFONTOBJ::bInsertGlyphbits(a5, LinkMetricsPlus, v117 == (unsigned __int16 *)v116) )
              {
                v121 = 0;
                v120 = 0;
              }
              v56 = v125;
              v48 = v117 + 1;
              v125->hg = LinkMetricsPlus->hg;
              v56->pgdf = &LinkMetricsPlus->gdf;
              v125 = v56 + 1;
              v117 = v48;
              if ( v48 >= (unsigned __int16 *)v116 + v118 )
              {
                v43 = a5;
                break;
              }
            }
          }
        }
        else if ( v118 )
        {
          v90 = v125;
          v91 = v118;
          do
          {
            v90->hg = *(_DWORD *)(*(_DWORD *)a5 + 520);
            v90->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a5);
            ++v90;
            --v91;
          }
          while ( v91 );
          this = v126;
          v17 = a3;
        }
LABEL_50:
        v57 = *((_DWORD *)this + 48);
        if ( (v57 & 0x1400) != 0 )
        {
          ESTROBJ::vCharPos_H3(
            this,
            a4,
            v43,
            v114,
            v115,
            0,
            0,
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a4 + 1020) + 296),
            &v120,
            v123,
            v124);
        }
        else
        {
          if ( v121 )
          {
            *((_DWORD *)this + 48) = v57 | 2;
            *((_DWORD *)this + 7) = *((_DWORD *)this + 12);
          }
          v58 = v130;
          pgdf = v129->pgdf;
          if ( (*((_BYTE *)this + 4) & 0x10) != 0 )
          {
            *((_DWORD *)this + 19) = 0;
            v60 = (char *)v58;
          }
          else
          {
            *((GLYPHDEF *)this + 19) = pgdf[3];
            v60 = (char *)pgdf[4].pgb + v58 + -16 * *((_DWORD *)this + 2);
          }
          *((_DWORD *)this + 21) = v60;
          v61 = *(_DWORD *)v43;
          if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)a4 + 1020) + 340) & 0x40) != 0 )
          {
            *((_DWORD *)this + 20) = -*(_DWORD *)(v61 + 324);
            v62 = -*(_DWORD *)(*(_DWORD *)v43 + 320);
          }
          else
          {
            *((_DWORD *)this + 20) = *(_DWORD *)(v61 + 320);
            v62 = *(_DWORD *)(*(_DWORD *)v43 + 324);
          }
          *((_DWORD *)this + 22) = v62;
          *((_DWORD *)this + 48) |= 4u;
          *((_DWORD *)this + 15) = v58;
          *((_DWORD *)this + 16) = 0;
        }
        goto LABEL_27;
      }
      v34 = v123;
    }
    ESTROBJ::vCharPos_H3(this, a4, a5, v114, v115, a10, HIDWORD(a10), a11, 0, v34, v124);
    goto LABEL_27;
  }
  if ( a8 )
  {
    if ( (a14 & 0xA0) != 0 )
    {
      if ( !RFONTOBJ::bCalcEscapement(a5, (struct EXFORMOBJ *)a6, v119) )
        return;
      *((_DWORD *)this + 48) |= 8u;
      v33 = *a6;
    }
    ESTROBJ::vCharPos_H4(this, a4, a5, v114, v115, v30, v123, v124, v33[6], v33[7]);
  }
  else
  {
    ESTROBJ::vCharPos_H1(this, a4, a5, v114, v115, v30, v123, v124);
  }
LABEL_27:
  v35 = *((_DWORD *)this + 15);
  *((_DWORD *)this + 18) = *((_DWORD *)this + 16);
  *((_DWORD *)this + 17) = v35;
  if ( (a14 & 6) != 0 )
  {
    if ( (a14 & 6) == 6 )
    {
      v35 /= 2;
      v72 = 0;
    }
    else
    {
      v72 = -v35;
    }
    *((_DWORD *)this + 15) = v72;
    v73 = v35 + 8;
    v74 = *((_DWORD *)this + 12);
    v75 = v73 >> 4;
    v76 = v74 + 16;
    *(_DWORD *)(v74 + 8) -= v75;
    v114 = 16 * *(_DWORD *)(v74 + 8);
    if ( !*((_DWORD *)this + 2) )
    {
      v77 = v17 - 1;
      if ( v17 != 1 )
      {
        do
        {
          v78 = v76;
          v76 += 16;
          *(_DWORD *)(v78 + 8) -= v75;
          --v77;
        }
        while ( v77 );
      }
    }
  }
  v36 = a15;
  if ( a15 )
  {
    v63 = *(struct _GLYPHPOS **)(*(_DWORD *)a5 + 424);
    v64 = *(_DWORD *)(*(_DWORD *)a5 + 428);
    v65 = *((_DWORD *)this + 2);
    v129 = v63;
    v128 = v64;
    if ( !v65 || (*((_DWORD *)this + 48) & 0x1400) != 0 )
    {
      v68 = *((_DWORD *)this + 12);
      v130 = v17 - 1;
      if ( v17 != 1 )
      {
        v69 = v129;
        v70 = (_DWORD *)(v68 + 24);
        do
        {
          v71 = lCvt(v69, v64, 16 * *v70 - v114);
          v64 = v128;
          v70 += 4;
          *v36++ = v71;
          --v130;
        }
        while ( v130 );
        this = v126;
        v63 = v129;
      }
      v37 = v114;
      *v36 = lCvt(v63, v64, ((v114 + *((_DWORD *)this + 15)) & 0xFFFFFFF0) - v114);
      goto LABEL_30;
    }
    v66 = lCvt(v63, v64, 16 * v65);
    for ( j = 0; v17; --v17 )
    {
      j += v66;
      *v36++ = j;
    }
  }
  v37 = v114;
LABEL_30:
  v38 = *((_DWORD *)this + 12);
  *((_DWORD *)this + 13) = 16 * *(_DWORD *)(v38 + 8);
  *((_DWORD *)this + 14) = 16 * *(_DWORD *)(v38 + 12);
LABEL_31:
  if ( (a14 & 0xA0) != 0
    && (*((_DWORD *)this + 48) |= a14 & 0xA0, v102 = *(_DWORD *)a5, !(v119 | a8 | *(_DWORD *)(*(_DWORD *)a5 + 396)))
    && ((*a6)[14] & 1) != 0 )
  {
    v103 = (struct _GLYPHPOS *)((v37 + 8) >> 4);
    v104 = (ESTROBJ *)((char *)this + 16 * *((_DWORD *)this + 27) + 112);
    v105 = (*((_DWORD *)this + 17) + 8) >> 4;
    v129 = v103;
    v130 = (v115 + 8) >> 4;
    if ( (a14 & 0x20) != 0 )
    {
      v106 = *(_DWORD *)(v102 + 284);
      v107 = v130;
      v108 = (char *)v103 + v106;
      *(_DWORD *)v104 = v108;
      *((_DWORD *)v104 + 2) = &v108[v105];
      v109 = *(_DWORD *)(*(_DWORD *)a5 + 288) + v107;
      *((_DWORD *)v104 + 1) = v109;
      *((_DWORD *)v104 + 3) = v109 + *(_DWORD *)(*(_DWORD *)a5 + 304);
      ERECTL::vOrder(v104);
      v39 = a5;
      ++*((_DWORD *)this + 27);
      v104 = (ERECTL *)((char *)v104 + 16);
      v103 = v129;
      v102 = *(_DWORD *)a5;
    }
    else
    {
      v39 = a5;
    }
    if ( a14 < 0 )
    {
      v110 = *(_DWORD *)(v102 + 292);
      v111 = v130;
      v112 = (char *)v103 + v110;
      *(_DWORD *)v104 = v112;
      *((_DWORD *)v104 + 2) = &v112[v105];
      v113 = *(_DWORD *)(*(_DWORD *)a5 + 296) + v111;
      *((_DWORD *)v104 + 1) = v113;
      *((_DWORD *)v104 + 3) = v113 + *(_DWORD *)(*(_DWORD *)a5 + 312);
      ERECTL::vOrder(v104);
      ++*((_DWORD *)this + 27);
      v104 = (ERECTL *)((char *)v104 + 16);
      v39 = a5;
    }
    *(_DWORD *)v104 = 0;
    *((_DWORD *)v104 + 2) = 0;
    *((_DWORD *)v104 + 3) = 0;
    *((_DWORD *)v104 + 1) = 0;
  }
  else
  {
    v39 = a5;
  }
  v40 = *((_DWORD *)this + 48);
  if ( (*(_BYTE *)(*(_DWORD *)v39 + 12) & 1) != 0 )
    v41 = v40 | 0x200;
  else
    v41 = v40 & 0xFFFFFDFF;
  *((_DWORD *)this + 48) = v41;
}
