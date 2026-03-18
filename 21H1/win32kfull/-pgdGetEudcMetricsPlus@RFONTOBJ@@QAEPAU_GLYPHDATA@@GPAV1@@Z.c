/*
 * XREFs of ?pgdGetEudcMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z @ 0x207BE7
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z @ 0xC0F30 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@GKKPAHHH@Z @ 0x2071D7 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@GKKPAHHH@Z.c)
 * Callees:
 *     ?bInsertMetricsPlus@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x86460 (-bInsertMetricsPlus@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QAEPAUGPRUN@@G@Z @ 0x88018 (-gprunFindRun@RFONTOBJ@@QAEPAUGPRUN@@G@Z.c)
 *     ?bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z @ 0x8A934 (-bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ @ 0xC100E (-pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ.c)
 */

struct _GLYPHDATA *__thiscall RFONTOBJ::pgdGetEudcMetricsPlus(RFONTOBJ *this, int a2, struct RFONTOBJ *a3)
{
  _DWORD *v4; // eax
  struct _GLYPHDATA *result; // eax
  int v6; // edx
  struct GPRUN *Run; // eax
  unsigned int v8; // edi
  _DWORD *v9; // ebx
  int v10; // edi
  struct _GLYPHDATA **v11; // ecx

  if ( !*(_DWORD *)(*(_DWORD *)this + 536) && !RFONTOBJ::bAllocateCache(this, this) )
    return 0;
  v4 = *(_DWORD **)(*(_DWORD *)this + 536);
  if ( !*v4 )
    return RFONTOBJ::pgdDefault(this);
  v6 = a2;
  if ( (unsigned int)(unsigned __int16)a2 - v4[2] >= v4[3] )
  {
    Run = RFONTOBJ::gprunFindRun(this, a2);
    v8 = (unsigned __int16)a2 - *(_DWORD *)Run;
    if ( v8 < *((_DWORD *)Run + 1) )
    {
      v6 = a2;
      v9 = (_DWORD *)((char *)Run + 8);
      goto LABEL_9;
    }
    return 0;
  }
  v8 = (unsigned __int16)a2 - v4[2];
  v9 = v4 + 4;
LABEL_9:
  v10 = 4 * v8;
  v11 = (struct _GLYPHDATA **)(v10 + *v9);
  result = *v11;
  if ( *v11 )
    return result;
  if ( !RFONTOBJ::bInsertMetricsPlus(this, v11, v6) )
    return 0;
  return *(struct _GLYPHDATA **)(v10 + *v9);
}
