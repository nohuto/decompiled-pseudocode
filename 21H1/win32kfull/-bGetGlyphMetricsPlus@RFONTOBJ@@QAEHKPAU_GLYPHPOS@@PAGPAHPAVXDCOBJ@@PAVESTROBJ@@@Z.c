/*
 * XREFs of ?bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x87EA2
 * Callers:
 *     ?vCharPos_H3@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJVEFLOAT@@PBH@Z @ 0x87CA4 (-vCharPos_H3@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJVEFLOAT@@PBH@Z.c)
 *     ?vCharPos_G1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJPAJ@Z @ 0x2244C6 (-vCharPos_G1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJPAJ@Z.c)
 *     ?vCharPos_G2@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPAJ@Z @ 0x2246AB (-vCharPos_G2@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPAJ@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPBJPAJ@Z @ 0x2249F0 (-vCharPos_G3@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJJJJPBJPAJ@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPAJ@Z @ 0x224D70 (-vCharPos_G4@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPAJ@Z.c)
 *     ?vCharPos_H4@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPAJVEFLOAT@@3@Z @ 0x22507D (-vCharPos_H4@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPAJVEFLOAT@@3@Z.c)
 *     ?vInitSimple@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@JJPAX@Z @ 0x225464 (-vInitSimple@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@JJPAX@Z.c)
 * Callees:
 *     ?bInsertGlyphbits@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z @ 0x861B6 (-bInsertGlyphbits@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x86460 (-bInsertMetricsPlus@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x8700E (-bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QAEPAUGPRUN@@G@Z @ 0x88018 (-gprunFindRun@RFONTOBJ@@QAEPAUGPRUN@@G@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z @ 0x8A934 (-bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z @ 0xC0F30 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ @ 0xC100E (-pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ.c)
 */

int __thiscall RFONTOBJ::bGetGlyphMetricsPlus(
        RFONTOBJ *this,
        unsigned int a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        int *a5,
        struct XDCOBJ *a6,
        struct ESTROBJ *a7)
{
  int v8; // ecx
  int v9; // esi
  unsigned __int16 *v10; // ebx
  _DWORD *v11; // eax
  unsigned __int16 *v12; // ecx
  unsigned int v13; // edx
  struct _GLYPHDATA *LinkMetricsPlus; // ecx
  int result; // eax
  struct GPRUN *Run; // eax
  int inserted; // eax
  unsigned int v18; // ebx
  struct _GLYPHPOS *v19; // esi
  unsigned __int16 *v20; // [esp+10h] [ebp-18h]
  char *v22; // [esp+18h] [ebp-10h]
  struct _GLYPHPOS *i; // [esp+20h] [ebp-8h]
  unsigned int *v25; // [esp+24h] [ebp-4h]
  struct _GLYPHPOS *v26; // [esp+34h] [ebp+Ch]
  struct _GLYPHPOS *v27; // [esp+34h] [ebp+Ch]
  struct _GLYPHPOS *v28; // [esp+34h] [ebp+Ch]
  unsigned __int16 *v29; // [esp+38h] [ebp+10h]

  if ( *(_DWORD *)(*(_DWORD *)this + 536) || (result = RFONTOBJ::bAllocateCache(this, this)) != 0 )
  {
    v8 = *(_DWORD *)this;
    v9 = 1;
    if ( (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 72) + 1120) & 0x40000000) != 0 && *(_DWORD *)(v8 + 60) == 1 )
    {
      if ( a5 )
        *a5 = 0;
      return RFONTOBJ::bGetGlyphMetrics(this, a2, a3, a4, a6, a7);
    }
    v10 = a4;
    *a5 = 1;
    v11 = *(_DWORD **)(v8 + 536);
    if ( !*v11 )
    {
      v18 = a2;
      if ( a2 )
      {
        v19 = a3;
        do
        {
          v19->hg = *(_DWORD *)(*(_DWORD *)this + 520);
          v19->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
          ++v19;
          --v18;
        }
        while ( v18 );
        return 1;
      }
      return v9;
    }
    v12 = (unsigned __int16 *)(v11 + 2);
    v29 = (unsigned __int16 *)(v11 + 2);
    v20 = &v10[a2];
    if ( v10 >= v20 )
      return v9;
    v25 = v11 + 3;
    for ( i = a3; ; ++i )
    {
      v26 = (struct _GLYPHPOS *)*v10;
      v13 = (unsigned int)v26 - *(_DWORD *)v12;
      if ( v13 < *v25 )
        break;
      Run = RFONTOBJ::gprunFindRun(this, *v10);
      v29 = (unsigned __int16 *)Run;
      v13 = (unsigned int)v26 - *(_DWORD *)Run;
      v22 = (char *)v13;
      v25 = (unsigned int *)((char *)Run + 4);
      if ( v13 < *((_DWORD *)Run + 1) )
      {
        _mm_lfence();
        LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_DWORD *)Run + 2) + 4 * v13);
        goto LABEL_8;
      }
      LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, a6, a7, v10, a4, a2, a5, 1);
      v27 = (struct _GLYPHPOS *)LinkMetricsPlus;
      if ( !LinkMetricsPlus )
        return 0;
      v13 = (unsigned int)v22;
LABEL_9:
      if ( !LinkMetricsPlus )
      {
        v28 = (struct _GLYPHPOS *)(4 * v13);
        if ( !RFONTOBJ::bInsertMetricsPlus(this, (struct _GLYPHDATA **)(4 * v13 + *((_DWORD *)v29 + 2)), *v10) )
          return 0;
        LinkMetricsPlus = *(struct _GLYPHDATA **)((char *)&v28->hg + *((_DWORD *)v29 + 2));
        v27 = (struct _GLYPHPOS *)LinkMetricsPlus;
      }
      if ( !LinkMetricsPlus->gdf.pgb && *a5 && *(_DWORD *)(*(_DWORD *)this + 60) )
      {
        inserted = RFONTOBJ::bInsertGlyphbits(this, LinkMetricsPlus, v10 == a4);
        LinkMetricsPlus = (struct _GLYPHDATA *)v27;
        if ( !inserted )
          *a5 = 0;
      }
      ++v10;
      i->hg = LinkMetricsPlus->hg;
      i->pgdf = &LinkMetricsPlus->gdf;
      if ( v10 >= v20 )
        return v9;
      v12 = v29;
    }
    _mm_lfence();
    LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_DWORD *)v29 + 2) + 4 * v13);
LABEL_8:
    v27 = (struct _GLYPHPOS *)LinkMetricsPlus;
    goto LABEL_9;
  }
  return result;
}
