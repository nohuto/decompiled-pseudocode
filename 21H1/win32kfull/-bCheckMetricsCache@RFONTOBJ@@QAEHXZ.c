/*
 * XREFs of ?bCheckMetricsCache@RFONTOBJ@@QAEHXZ @ 0x87776
 * Callers:
 *     _xInsertMetricsPlusRFONTOBJ@12 @ 0x8648A (_xInsertMetricsPlusRFONTOBJ@12.c)
 *     _xInsertMetricsRFONTOBJ@12 @ 0x8715C (_xInsertMetricsRFONTOBJ@12.c)
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QAEHKPAPAU_GLYPHDATA@@PAKPAPAU_GLYPHBITS@@@Z @ 0xF8744 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QAEHKPAPAU_GLYPHDATA@@PAKPAPAU_GLYPHBITS@@@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

int __thiscall RFONTOBJ::bCheckMetricsCache(RFONTOBJ *this)
{
  _DWORD *v1; // esi
  _DWORD *v3; // eax

  v1 = *(_DWORD **)this;
  if ( *(_DWORD *)(*(_DWORD *)this + 552) + (*(_DWORD *)(*(_DWORD *)this + 640) != 0 ? 20 : 64) <= *(_DWORD *)(*(_DWORD *)this + 556) )
    return 1;
  v3 = PALLOCMEM2(0x5F0u, 1667326791, 0);
  if ( v3 )
  {
    *v3 = v1[141];
    v1[139] = v3 + 380;
    v1[141] = v3;
    v1[138] = v3 + 2;
    return 1;
  }
  return 0;
}
