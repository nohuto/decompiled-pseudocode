/*
 * XREFs of ?bTextExtent@RFONTOBJ@@QAEHAAVXDCOBJ@@PAGHJJJJIPAUtagSIZE@@@Z @ 0xE2810
 * Callers:
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 * Callees:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x8700E (-bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QAEJXZ @ 0x882A8 (-lOverhang@RFONTOBJ@@QAEJXZ.c)
 *     ??$SafeDivide@JJJ@@YGJJJPAJ@Z @ 0xC1F0C (--$SafeDivide@JJJ@@YGJJJPAJ@Z.c)
 *     ?bIs1Over16@EFLOAT@@QBEHXZ @ 0xE29CE (-bIs1Over16@EFLOAT@@QBEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _lCvt@12 @ 0xEE304 (_lCvt@12.c)
 */

int __thiscall RFONTOBJ::bTextExtent(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned __int16 *a3,
        signed int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        struct tagSIZE *a10)
{
  int v10; // esi
  RFONTOBJ *v11; // edi
  unsigned __int16 *v12; // eax
  signed int v13; // ecx
  int v14; // ebx
  int v15; // edx
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // esi
  int v19; // edi
  GLYPHDEF **p_pgdf; // ecx
  GLYPHDEF v21; // eax
  bool v22; // zf
  int v23; // ebx
  _DWORD *v24; // ecx
  LONG v25; // eax
  LONG v26; // edx
  _DWORD *v27; // ecx
  signed int v29; // esi
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  unsigned __int16 v33; // ax
  signed int v34; // ecx
  unsigned __int16 *v35; // edi
  __int16 v36; // ax
  LONG cx; // edx
  int v39; // [esp+20h] [ebp-54Ch] BYREF
  signed int v40; // [esp+24h] [ebp-548h]
  int v41; // [esp+28h] [ebp-544h]
  unsigned __int16 *v42; // [esp+2Ch] [ebp-540h]
  int v43; // [esp+30h] [ebp-53Ch]
  int v44; // [esp+34h] [ebp-538h]
  int v45; // [esp+38h] [ebp-534h]
  int v46; // [esp+3Ch] [ebp-530h]
  struct _GLYPHPOS v47; // [esp+40h] [ebp-52Ch] BYREF

  v39 = 0;
  v10 = 0;
  v11 = this;
  v12 = a3;
  v46 = 0;
  v45 = 0;
  if ( a6 )
  {
    v46 = lCvt(*(_DWORD *)(*(_DWORD *)this + 416), *(_DWORD *)(*(_DWORD *)this + 420), a6);
    v12 = a3;
  }
  v13 = a4;
  v14 = 0;
  v44 = 0;
  v15 = a4;
  v40 = a4;
  v42 = v12;
  if ( a4 )
  {
    v44 = 0;
    while ( 1 )
    {
      v43 = v15;
      v16 = v15;
      if ( v15 > 82 )
      {
        v16 = 82;
        v43 = 82;
      }
      if ( !RFONTOBJ::bGetGlyphMetrics(v11, v16, &v47, v42, a2, 0) )
        return 0;
      v17 = v43;
      if ( v43 > 0 )
      {
        v18 = v44;
        v19 = v43;
        p_pgdf = &v47.pgdf;
        do
        {
          v21.pgb = (*p_pgdf)[2].pgb;
          v14 += (int)v21.pgb;
          if ( v46 < 0 && (int)v21.pgb + v46 <= 0 )
            ++v18;
          p_pgdf += 4;
          --v19;
        }
        while ( v19 );
        v11 = this;
        v17 = v43;
        v44 = v18;
        v10 = v45;
      }
      v15 = v40 - v17;
      v22 = v40 == v17;
      v40 -= v17;
      v42 += v17;
      if ( v22 )
      {
        v13 = a4;
        goto LABEL_15;
      }
    }
  }
  else
  {
LABEL_15:
    if ( a6 )
    {
      if ( (a9 & 1) != 0
        && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v11 + 72) + 24) & 1) != 0
        && (*(_BYTE *)(*(_DWORD *)v11 + 712) & 4) == 0 )
      {
        v29 = v13;
        if ( a6 <= 0 )
          v29 = v13 - 1;
      }
      else
      {
        v29 = v13 - v44;
      }
      v10 = v46 * v29;
    }
    if ( a7 )
    {
      v30 = lCvt(*(_DWORD *)(*(_DWORD *)v11 + 416), *(_DWORD *)(*(_DWORD *)v11 + 420), a7);
      if ( !SafeDivide<long,long,long>(v30, a8, &v39) )
      {
        v31 = *(_DWORD *)v11;
        v32 = v39;
        v41 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v11 + 80) + 20);
        v45 = *(_DWORD *)(v31 + 528);
        if ( v46 + v39 + v45 < 0 )
          v32 = -(v46 + v45);
        if ( (a9 & 2) != 0 )
          v33 = *(_WORD *)(v31 + 524);
        else
          v33 = *(_WORD *)(v41 + 118);
        v34 = a4;
        v45 = v33;
        if ( a4 > 0 )
        {
          v35 = a3;
          do
          {
            v36 = *v35++;
            if ( v36 == (_WORD)v45 )
              v10 += v32;
            --v34;
          }
          while ( v34 );
          v11 = this;
        }
      }
    }
    v23 = v10 + v14;
    if ( (a9 & 1) != 0 )
      v23 += 16 * RFONTOBJ::lOverhang(v11);
    if ( EFLOAT::bIs1Over16((EFLOAT *)(*(_DWORD *)v11 + 672)) )
      v25 = (v23 + 8) >> 4;
    else
      v25 = lCvt(*v24, v24[1], v23);
    a10->cx = v25;
    if ( !EFLOAT::bIs1Over16((EFLOAT *)(*(_DWORD *)v11 + 680)) )
      v26 = lCvt(*v27, v27[1], 16 * v26);
    a10->cy = v26;
    if ( _gbDBCSCodePage
      && *(_DWORD *)(*(_DWORD *)v11 + 184) == 1
      && (_UNKNOWN *)(((unsigned int)&loc_200010 + 4) & *(_DWORD *)(*(_DWORD *)v11 + 712)) == (_UNKNOWN *)((char *)&loc_1FFFFC + 4)
      && (a5 == 900 || a5 == 2700) )
    {
      cx = a10->cx;
      a10->cx = a10->cy;
      a10->cy = cx;
    }
    return 1;
  }
}
