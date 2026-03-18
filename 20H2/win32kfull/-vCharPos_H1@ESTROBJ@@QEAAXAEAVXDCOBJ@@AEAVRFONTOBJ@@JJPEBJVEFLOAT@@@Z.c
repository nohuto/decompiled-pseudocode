/*
 * XREFs of ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C00A5440
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C00A8720 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C005F958 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C0060BF0 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C00625BC (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0062610 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C00659FC (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C0070A70 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     bFToL @ 0x1C00F05F8 (bFToL.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C01480A0 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 */

__int64 __fastcall ESTROBJ::vCharPos_H1(
        unsigned int *a1,
        struct RFONTOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7)
{
  struct _GLYPHPOS *v8; // rbx
  unsigned __int16 *v10; // r14
  struct ESTROBJ *v11; // rbp
  int v12; // xmm6_4
  int v13; // r10d
  __int64 v14; // rax
  unsigned __int16 *v15; // rdi
  __int64 v16; // r15
  struct _GLYPHPOS *v17; // rsi
  __int64 v18; // r12
  _DWORD *v19; // r12
  unsigned __int16 *v20; // r15
  struct GPRUN *v21; // rbp
  _DWORD *v22; // r12
  int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r14
  struct _GLYPHDATA **v27; // rdx
  struct _GLYPHDATA *v28; // rbx
  __int64 v29; // rax
  int v30; // r13d
  int v31; // r14d
  LONG *p_y; // rbx
  int v33; // r12d
  int v34; // esi
  int v35; // edi
  __int64 v36; // r8
  int v37; // r15d
  _DWORD *v38; // rbp
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 result; // rax
  int v42; // ecx
  int v43; // r9d
  _DWORD *v44; // r10
  __int64 v45; // rdx
  int v46; // ecx
  int v47; // ecx
  struct GPRUN *Run; // rax
  __int64 v49; // rbx
  unsigned int v50; // edx
  __int64 v51; // r8
  __int64 v52; // r8
  int v53; // [rsp+40h] [rbp-68h] BYREF
  unsigned int v54; // [rsp+44h] [rbp-64h]
  struct _GLYPHPOS *v55; // [rsp+48h] [rbp-60h]
  _BOOL8 v56; // [rsp+50h] [rbp-58h]
  unsigned __int16 *v57; // [rsp+58h] [rbp-50h]
  struct XDCOBJ *v59; // [rsp+B8h] [rbp+10h]

  v59 = a2;
  v10 = (unsigned __int16 *)*((_QWORD *)a1 + 5);
  v11 = (struct ESTROBJ *)a1;
  v12 = a7;
  v13 = *(_DWORD *)(*(_QWORD *)a3 + 276LL) & 0x40 | 2;
  v55 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 8);
  v8 = v55;
  a1[1] |= v13;
  v57 = v10;
  v56 = *(float *)&v12 == 16.0;
  v14 = *(_QWORD *)a3;
  v15 = v10;
  v16 = *a1;
  v17 = v8;
  v54 = *a1;
  if ( !*(_QWORD *)(v14 + 480) )
  {
    result = RFONTOBJ::bAllocateCache(a3, a2);
    if ( !(_DWORD)result )
      return result;
    a2 = v59;
  }
  v18 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(v18 + 104) + 1824LL) & 0x40000000) != 0 && *(_DWORD *)(v18 + 88) == 1 )
  {
    result = RFONTOBJ::bGetGlyphMetrics(a3, (struct RFONTOBJ *)(unsigned int)v16, v8, v10, a2, v11);
    if ( (_DWORD)result )
      goto LABEL_14;
    return result;
  }
  v19 = *(_DWORD **)(v18 + 480);
  a7 = 1;
  if ( !*v19 )
  {
    if ( (_DWORD)v16 )
    {
      do
      {
        v17->hg = *(_DWORD *)(*(_QWORD *)a3 + 460LL);
        v17->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a3);
        ++v17;
        LODWORD(v16) = v16 - 1;
      }
      while ( (_DWORD)v16 );
      v8 = v55;
    }
    goto LABEL_13;
  }
  v20 = &v10[v16];
  v21 = (struct GPRUN *)(v19 + 4);
  if ( v10 >= v20 )
  {
    v11 = (struct ESTROBJ *)a1;
LABEL_13:
    v29 = *((_QWORD *)v11 + 8);
    *((_DWORD *)v11 + 58) |= 2u;
    *((_QWORD *)v11 + 4) = v29;
    goto LABEL_14;
  }
  v22 = v19 + 5;
  do
  {
    v23 = *v15;
    v24 = (unsigned int)(v23 - *(_DWORD *)v21);
    if ( (unsigned int)v24 < *v22 )
    {
      _mm_lfence();
      v25 = *((_QWORD *)v21 + 1);
      v26 = 8 * v24;
LABEL_8:
      v27 = (struct _GLYPHDATA **)(v26 + v25);
      v28 = *v27;
      if ( !*v27 )
      {
        result = RFONTOBJ::bInsertMetricsPlus(a3, v27);
        if ( !(_DWORD)result )
          return result;
        v28 = *(struct _GLYPHDATA **)(v26 + *((_QWORD *)v21 + 1));
      }
      v10 = v57;
      goto LABEL_10;
    }
    Run = RFONTOBJ::gprunFindRun(a3, v23);
    v21 = Run;
    v49 = (unsigned int)(v23 - *(_DWORD *)Run);
    v22 = (_DWORD *)((char *)Run + 4);
    if ( (unsigned int)v49 < *((_DWORD *)Run + 1) )
    {
      _mm_lfence();
      v25 = *((_QWORD *)Run + 1);
      v26 = 8 * v49;
      goto LABEL_8;
    }
    result = (__int64)RFONTOBJ::wpgdGetLinkMetricsPlus(a3, v59, (struct ESTROBJ *)a1, v15, v10, v54, &a7, 1);
    v28 = (struct _GLYPHDATA *)result;
    if ( !result )
      return result;
LABEL_10:
    if ( !v28->gdf.pgb
      && *(float *)&a7 != 0.0
      && *(_DWORD *)(*(_QWORD *)a3 + 88LL)
      && !(unsigned int)RFONTOBJ::bInsertGlyphbits((struct _FONTOBJ **)a3, v28, v15 == v10) )
    {
      *(float *)&a7 = 0.0;
    }
    ++v15;
    v17->hg = v28->hg;
    v17->pgdf = &v28->gdf;
    ++v17;
  }
  while ( v15 < v20 );
  v8 = v55;
  v11 = (struct ESTROBJ *)a1;
  if ( *(float *)&a7 != 0.0 )
    goto LABEL_13;
LABEL_14:
  v30 = a4 + 8;
  v8->ptl.x = v30 >> 4;
  v31 = 0;
  p_y = &v8->ptl.y;
  v33 = (a5 + 8) >> 4;
  v34 = 0;
  v35 = 0;
  LODWORD(v36) = 0;
  *p_y = v33;
  if ( (*(_DWORD *)(*(_QWORD *)a3 + 276LL) & 0x10) == 0 || (*((_DWORD *)v11 + 58) & 0x1400) != 0 )
  {
    v43 = *(_DWORD *)v11;
    v44 = a6;
    while ( 1 )
    {
      v45 = *(_QWORD *)(p_y - 3);
      ++v44;
      v46 = v36 + *(_DWORD *)(v45 + 16);
      if ( v46 >= v31 )
        v46 = v31;
      v31 = v46;
      v47 = v36 + *(_DWORD *)(v45 + 20);
      if ( v47 <= v34 )
        v47 = v34;
      v35 += *(v44 - 1);
      v34 = v47;
      if ( v56 )
      {
        LODWORD(v36) = 16 * v35;
      }
      else
      {
        LODWORD(v36) = 0;
        *(float *)&a7 = (float)v35 * *(float *)&v12;
        v50 = (unsigned __int8)(a7 >> 23);
        if ( v50 <= 0x9E )
        {
          v51 = a7 & 0x7FFFFF | 0x800000LL;
          v52 = v50 < 0x76 ? v51 >> (118 - (unsigned __int8)v50) : v51 << ((unsigned __int8)v50 - 118);
          v36 = (v52 + 0x80000000LL) >> 32;
          if ( a7 < 0 )
            LODWORD(v36) = -(int)v36;
        }
      }
      if ( !--v43 )
        break;
      p_y += 6;
      *p_y = v33;
      *(p_y - 1) = ((int)v36 + v30) >> 4;
    }
  }
  else
  {
    v37 = *(_DWORD *)v11;
    v38 = a6;
    while ( 1 )
    {
      if ( (int)v36 < v31 )
        v31 = v36;
      v39 = (unsigned int)(v36 + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL));
      if ( (int)v39 > v34 )
        v34 = v36 + *(_DWORD *)(*(_QWORD *)(p_y - 3) + 12LL);
      v35 += *v38++;
      if ( v56 )
      {
        LODWORD(v36) = 16 * v35;
      }
      else
      {
        v53 = 0;
        bFToL(v39, &v53, 0LL);
        LODWORD(v36) = v53;
      }
      if ( !--v37 )
        break;
      p_y += 6;
      *p_y = v33;
      *(p_y - 1) = ((int)v36 + v30) >> 4;
    }
    v11 = (struct ESTROBJ *)a1;
  }
  *((_DWORD *)v11 + 20) = v36;
  if ( (int)v36 <= v34 )
    LODWORD(v36) = v34;
  *((_DWORD *)v11 + 26) = v36;
  *((_DWORD *)v11 + 21) = 0;
  *((_DWORD *)v11 + 24) = v31;
  v40 = *(_QWORD *)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59 + 976LL) + 340LL) & 0x40) != 0 )
  {
    *((_DWORD *)v11 + 25) = -*(_DWORD *)(v40 + 320);
    result = *(_QWORD *)a3;
    v42 = -*(_DWORD *)(*(_QWORD *)a3 + 316LL);
  }
  else
  {
    *((_DWORD *)v11 + 25) = *(_DWORD *)(v40 + 316);
    result = *(_QWORD *)a3;
    v42 = *(_DWORD *)(*(_QWORD *)a3 + 320LL);
  }
  *((_DWORD *)v11 + 27) = v42;
  *((_DWORD *)v11 + 58) |= 4u;
  return result;
}
