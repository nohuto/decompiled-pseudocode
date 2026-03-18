/*
 * XREFs of ?bInsertMetrics@RFONTOBJ@@QAEHPAPAU_GLYPHDATA@@G@Z @ 0x87132
 * Callers:
 *     _xInsertMetricsPlusRFONTOBJ@12 @ 0x8648A (_xInsertMetricsPlusRFONTOBJ@12.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x8700E (-bGetGlyphMetrics@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z @ 0x207B5A (-pgdGetEudcMetrics@RFONTOBJ@@QAEPAU_GLYPHDATA@@GPAV1@@Z.c)
 * Callees:
 *     _xInsertMetricsRFONTOBJ@12 @ 0x8715C (_xInsertMetricsRFONTOBJ@12.c)
 *     ?bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z @ 0x8A934 (-bAllocateCache@RFONTOBJ@@QAEHPAV1@@Z.c)
 */

int __thiscall RFONTOBJ::bInsertMetrics(RFONTOBJ *this, struct _GLYPHDATA **a2, unsigned __int16 a3)
{
  int result; // eax

  if ( *(_DWORD *)(*(_DWORD *)this + 536) )
    return xInsertMetricsRFONTOBJ(this, a3);
  result = RFONTOBJ::bAllocateCache(this, this);
  if ( result )
    return xInsertMetricsRFONTOBJ(this, a3);
  return result;
}
