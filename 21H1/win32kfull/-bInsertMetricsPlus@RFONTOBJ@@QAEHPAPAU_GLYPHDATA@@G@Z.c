/*
 * XREFs of ?bInsertMetricsPlus@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x86460
 * Callers:
 *     ?vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z @ 0x65290 (-vInit@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@AAVEXFORMOBJ@@PAJHJJJJJJK4PAXK@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJVEFLOAT@@@Z @ 0x65900 (-vCharPos_H1@ESTROBJ@@QAEXAAVXDCOBJ@@AAVRFONTOBJ@@JJPBJVEFLOAT@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x87EA2 (-bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ @ 0xC100E (-pgdDefault@RFONTOBJ@@QAEPAU_GLYPHDATA@@XZ.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z @ 0x207BE7 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z.c)
 * Callees:
 *     _xInsertMetricsPlusRFONTOBJ@12 @ 0x8648A (_xInsertMetricsPlusRFONTOBJ@12.c)
 *     ?bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z @ 0x8A934 (-bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z.c)
 */

int __thiscall RFONTOBJ::bInsertMetricsPlus(RFONTOBJ *this, struct _GLYPHDATA **a2, int a3)
{
  int result; // eax

  if ( *(_DWORD *)(*(_DWORD *)this + 536) )
    return xInsertMetricsPlusRFONTOBJ(this, a3);
  result = RFONTOBJ::bAllocateCache(this, this);
  if ( result )
    return xInsertMetricsPlusRFONTOBJ(this, a3);
  return result;
}
