/*
 * XREFs of ?vCharPos_H1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJVEFLOAT@@@Z @ 0x65900
 * Callers:
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 * Callees:
 *     ?bInsertGlyphbits@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z @ 0x861B6 (-bInsertGlyphbits@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x86460 (-bInsertMetricsPlus@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x8700E (-bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QAEPAUGPRUN@@G@Z @ 0x88018 (-gprunFindRun@RFONTOBJ@@QAEPAUGPRUN@@G@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z @ 0x8A934 (-bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z @ 0xC0F30 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ @ 0xC100E (-pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 */

int __thiscall ESTROBJ::vCharPos_H1(
        struct ESTROBJ *this,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7,
        int a8)
{
  struct _GLYPHPOS *v8; // edx
  unsigned __int16 *v9; // esi
  int v10; // eax
  unsigned int v11; // eax
  unsigned __int16 *v12; // edi
  RFONTOBJ *v13; // ecx
  struct _GLYPHPOS *v14; // ebx
  _DWORD *v15; // ecx
  _DWORD *v16; // eax
  struct GPRUN *Run; // edx
  int v18; // esi
  unsigned int v19; // eax
  int v20; // edx
  struct GPRUN *v21; // eax
  struct _GLYPHDATA **v22; // ecx
  struct _GLYPHDATA *v23; // esi
  HGLYPH hg; // eax
  unsigned __int16 *v25; // ecx
  int v26; // eax
  signed int v27; // ecx
  struct _GLYPHPOS *v28; // esi
  int v29; // edi
  int v30; // edx
  int *p_y; // esi
  int v32; // eax
  _DWORD *v33; // ebx
  signed int v34; // eax
  int v35; // ecx
  int result; // eax
  _DWORD *v37; // ebx
  int v38; // ecx
  unsigned int v39; // esi
  int inserted; // eax
  unsigned int i; // esi
  struct GPRUN *v42; // [esp+10h] [ebp-30h]
  int v43; // [esp+10h] [ebp-30h]
  unsigned int v45; // [esp+18h] [ebp-28h]
  signed int v46; // [esp+18h] [ebp-28h]
  int v47; // [esp+1Ch] [ebp-24h]
  int v48; // [esp+20h] [ebp-20h] BYREF
  unsigned __int16 *v49; // [esp+24h] [ebp-1Ch]
  BOOL v50; // [esp+28h] [ebp-18h]
  int v51; // [esp+2Ch] [ebp-14h]
  unsigned int *v52; // [esp+30h] [ebp-10h]
  int v53; // [esp+34h] [ebp-Ch]
  struct _GLYPHPOS *v54; // [esp+38h] [ebp-8h]
  int v55; // [esp+3Ch] [ebp-4h]
  int v56; // [esp+50h] [ebp+10h]

  v8 = (struct _GLYPHPOS *)*((_DWORD *)this + 12);
  v9 = (unsigned __int16 *)*((_DWORD *)this + 8);
  v10 = *(_DWORD *)(*(_DWORD *)a3 + 280) & 0x40;
  v54 = v8;
  v49 = v9;
  *((_DWORD *)this + 1) |= v10 | 2;
  v55 = a7;
  v51 = a8;
  v50 = a7 == 0x40000000 && a8 == 6;
  v11 = *(_DWORD *)this;
  v12 = v9;
  v13 = a3;
  v14 = v8;
  v45 = v11;
  if ( !*(_DWORD *)(*(_DWORD *)a3 + 536) )
  {
    result = RFONTOBJ::bAllocateCache(a3, a3);
    if ( !result )
      return result;
    v13 = a3;
    v8 = v14;
  }
  v15 = *(_DWORD **)v13;
  if ( (*(_DWORD *)(v15[18] + 1120) & 0x40000000) != 0 && v15[15] == 1 )
  {
    result = RFONTOBJ::bGetGlyphMetrics(a3, v45, v8, v9, a2, this);
    if ( result )
      goto LABEL_16;
    return result;
  }
  v47 = 1;
  v48 = 1;
  v16 = (_DWORD *)v15[134];
  if ( *v16 )
  {
    Run = (struct GPRUN *)(v16 + 2);
    v42 = (struct GPRUN *)(v16 + 2);
    if ( v9 >= &v9[v45] )
      goto LABEL_15;
    v52 = v16 + 3;
    while ( 1 )
    {
      v18 = *v12;
      v19 = v18 - *(_DWORD *)Run;
      if ( v19 >= *v52 )
      {
        Run = RFONTOBJ::gprunFindRun(a3, *v12);
        v42 = Run;
        v52 = (unsigned int *)((char *)Run + 4);
        v39 = v18 - *(_DWORD *)Run;
        if ( v39 >= *((_DWORD *)Run + 1) )
        {
          result = (int)RFONTOBJ::wpgdGetLinkMetricsPlus(a3, a2, this, v12, v49, v45, &v48, 1);
          v23 = (struct _GLYPHDATA *)result;
          if ( !result )
            return result;
          Run = v42;
          v47 = v48;
          goto LABEL_12;
        }
        _mm_lfence();
        v53 = 4 * v39;
        v22 = (struct _GLYPHDATA **)(*((_DWORD *)Run + 2) + 4 * v39);
      }
      else
      {
        v20 = 4 * v19;
        v21 = v42;
        _mm_lfence();
        v53 = v20;
        v22 = (struct _GLYPHDATA **)(v20 + *((_DWORD *)v21 + 2));
        Run = v21;
      }
      v23 = *v22;
      if ( !*v22 )
      {
        result = RFONTOBJ::bInsertMetricsPlus(a3, v22, *v12);
        if ( !result )
          return result;
        Run = v42;
        v23 = *(struct _GLYPHDATA **)(v53 + *((_DWORD *)v42 + 2));
      }
LABEL_12:
      if ( !v23->gdf.pgb )
      {
        if ( v47 )
        {
          if ( *(_DWORD *)(*(_DWORD *)a3 + 60) )
          {
            inserted = RFONTOBJ::bInsertGlyphbits(a3, v23, v12 == v49);
            Run = v42;
            if ( !inserted )
            {
              v47 = 0;
              v48 = 0;
            }
          }
        }
      }
      hg = v23->hg;
      ++v12;
      v25 = v49;
      v14->pgdf = &v23->gdf;
      v14->hg = hg;
      ++v14;
      if ( v12 >= &v25[v45] )
      {
        if ( v47 )
          goto LABEL_15;
        goto LABEL_16;
      }
    }
  }
  for ( i = v45; i; --i )
  {
    v14->hg = *(_DWORD *)(*(_DWORD *)a3 + 520);
    v14->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(a3);
    ++v14;
  }
LABEL_15:
  v26 = *((_DWORD *)this + 12);
  *((_DWORD *)this + 48) |= 2u;
  *((_DWORD *)this + 7) = v26;
LABEL_16:
  v27 = 0;
  v28 = v54;
  v29 = 0;
  v56 = a4 + 8;
  v30 = 0;
  v54->ptl.x = v56 >> 4;
  p_y = &v28->ptl.y;
  v43 = 0;
  *p_y = (a5 + 8) >> 4;
  v32 = *(_DWORD *)a3;
  v46 = 0;
  v53 = (a5 + 8) >> 4;
  if ( (*(_BYTE *)(v32 + 280) & 0x10) == 0 || (*((_DWORD *)this + 48) & 0x1400) != 0 )
  {
    v37 = a6;
    v54 = *(struct _GLYPHPOS **)this;
    while ( 1 )
    {
      v38 = *(p_y - 2);
      if ( v30 + *(_DWORD *)(v38 + 12) < v43 )
        v43 = v30 + *(_DWORD *)(v38 + 12);
      if ( v30 + *(_DWORD *)(v38 + 16) > v46 )
        v46 = v30 + *(_DWORD *)(v38 + 16);
      v29 += *v37++;
      v30 = v50 ? 16 * v29 : lCvt(v55, v51, v29);
      v54 = (struct _GLYPHPOS *)((char *)v54 - 1);
      if ( !v54 )
        break;
      p_y += 4;
      *p_y = v53;
      *(p_y - 1) = (v30 + v56) >> 4;
    }
  }
  else
  {
    v33 = a6;
    v54 = *(struct _GLYPHPOS **)this;
    while ( 1 )
    {
      if ( v30 < v43 )
        v43 = v30;
      if ( v30 + *(_DWORD *)(*(p_y - 2) + 8) > v27 )
        v46 = v30 + *(_DWORD *)(*(p_y - 2) + 8);
      v29 += *v33++;
      v30 = v50 ? 16 * v29 : lCvt(v55, v51, v29);
      v54 = (struct _GLYPHPOS *)((char *)v54 - 1);
      if ( !v54 )
        break;
      p_y += 4;
      *p_y = v53;
      *(p_y - 1) = (v30 + v56) >> 4;
      v27 = v46;
    }
  }
  v34 = v46;
  if ( v30 > v46 )
    v34 = v30;
  *((_DWORD *)this + 21) = v34;
  *((_DWORD *)this + 15) = v30;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 19) = v43;
  v35 = *(_DWORD *)a3;
  if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)a2 + 1020) + 340) & 0x40) != 0 )
  {
    *((_DWORD *)this + 20) = -*(_DWORD *)(v35 + 324);
    result = -*(_DWORD *)(*(_DWORD *)a3 + 320);
  }
  else
  {
    *((_DWORD *)this + 20) = *(_DWORD *)(v35 + 320);
    result = *(_DWORD *)(*(_DWORD *)a3 + 324);
  }
  *((_DWORD *)this + 22) = result;
  *((_DWORD *)this + 48) |= 4u;
  return result;
}
