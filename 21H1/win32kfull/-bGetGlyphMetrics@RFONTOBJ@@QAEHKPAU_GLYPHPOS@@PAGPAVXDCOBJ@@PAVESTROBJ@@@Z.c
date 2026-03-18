/*
 * XREFs of ?bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x8700E
 * Callers:
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJVEFLOAT@@@Z @ 0x65900 (-vCharPos_H1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJVEFLOAT@@@Z.c)
 *     _GreGetCharABCWidthsW@24 @ 0x866BE (_GreGetCharABCWidthsW@24.c)
 *     ?bGetWidthTable@RFONTOBJ@@QAEHAAVXDCOBJ@@KPAGK1@Z @ 0x86D0C (-bGetWidthTable@RFONTOBJ@@QAEHAAVXDCOBJ@@KPAGK1@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x87EA2 (-bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?bGetWidthData@RFONTOBJ@@QAEHPAU_WIDTHDATA@@AAVXDCOBJ@@@Z @ 0x881C4 (-bGetWidthData@RFONTOBJ@@QAEHPAU_WIDTHDATA@@AAVXDCOBJ@@@Z.c)
 *     _GreGetCharWidthW@24 @ 0xC0C72 (_GreGetCharWidthW@24.c)
 *     ?bTextExtent@RFONTOBJ@@QAEHAAVXDCOBJ@@PAGHJJJJIPAUtagSIZE@@@Z @ 0xE2810 (-bTextExtent@RFONTOBJ@@QAEHAAVXDCOBJ@@PAGHJJJJIPAUtagSIZE@@@Z.c)
 * Callees:
 *     ?bInsertMetrics@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x87132 (-bInsertMetrics@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QAEPAUGPRUN@@G@Z @ 0x88018 (-gprunFindRun@RFONTOBJ@@QAEPAUGPRUN@@G@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z @ 0x8A934 (-bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z @ 0xC0F30 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ @ 0xC100E (-pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ.c)
 */

int __thiscall RFONTOBJ::bGetGlyphMetrics(
        RFONTOBJ *this,
        unsigned int a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        struct XDCOBJ *a5,
        struct ESTROBJ *a6)
{
  unsigned __int16 *v7; // edi
  _DWORD *v8; // eax
  struct GPRUN *Run; // edx
  unsigned int v10; // ebx
  struct _GLYPHDATA *LinkMetricsPlus; // ecx
  unsigned __int16 v12; // ax
  struct _GLYPHPOS *v13; // ebx
  int v15; // ebx
  unsigned int v16; // edi
  struct _GLYPHPOS *v17; // ebx
  unsigned __int16 *v18; // [esp+10h] [ebp-14h]
  int v20; // [esp+18h] [ebp-Ch] BYREF
  unsigned int *v21; // [esp+1Ch] [ebp-8h]
  struct _GLYPHPOS *v22; // [esp+20h] [ebp-4h]
  unsigned __int16 v23; // [esp+30h] [ebp+Ch]
  unsigned __int16 *v24; // [esp+34h] [ebp+10h]

  if ( *(_DWORD *)(*(_DWORD *)this + 536) || RFONTOBJ::bAllocateCache(this, this) )
  {
    v7 = a4;
    v8 = *(_DWORD **)(*(_DWORD *)this + 536);
    if ( *v8 )
    {
      Run = (struct GPRUN *)(v8 + 2);
      v24 = (unsigned __int16 *)(v8 + 2);
      v18 = &v7[a2];
      if ( v7 < v18 )
      {
        v21 = v8 + 3;
        v22 = a3;
        while ( 1 )
        {
          v10 = *v7 - *(_DWORD *)Run;
          v23 = *v7;
          if ( v10 < *v21 )
            break;
          Run = RFONTOBJ::gprunFindRun(this, *v7);
          v12 = v23;
          v24 = (unsigned __int16 *)Run;
          v10 = v23 - *(_DWORD *)Run;
          v21 = (unsigned int *)((char *)Run + 4);
          if ( v10 >= *((_DWORD *)Run + 1) )
          {
            v20 = 0;
            LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, a5, a6, v7, a4, a2, &v20, 0);
            if ( !LinkMetricsPlus )
              return 0;
            Run = (struct GPRUN *)v24;
            goto LABEL_7;
          }
          _mm_lfence();
          LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_DWORD *)Run + 2) + 4 * v10);
LABEL_8:
          if ( !LinkMetricsPlus )
          {
            v15 = 4 * v10;
            if ( !RFONTOBJ::bInsertMetrics(this, (struct _GLYPHDATA **)(v15 + *((_DWORD *)Run + 2)), v12) )
              return 0;
            Run = (struct GPRUN *)v24;
            LinkMetricsPlus = *(struct _GLYPHDATA **)(v15 + *((_DWORD *)v24 + 2));
          }
          v13 = v22;
          ++v7;
          v22->hg = LinkMetricsPlus->hg;
          v13->pgdf = &LinkMetricsPlus->gdf;
          v22 = v13 + 1;
          if ( v7 >= v18 )
            return 1;
        }
        _mm_lfence();
        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_DWORD *)Run + 2) + 4 * v10);
LABEL_7:
        v12 = v23;
        goto LABEL_8;
      }
    }
    else
    {
      v16 = a2;
      if ( a2 )
      {
        v17 = a3;
        do
        {
          v17->hg = *(_DWORD *)(*(_DWORD *)this + 520);
          v17->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
          ++v17;
          --v16;
        }
        while ( v16 );
      }
    }
    return 1;
  }
  return 0;
}
