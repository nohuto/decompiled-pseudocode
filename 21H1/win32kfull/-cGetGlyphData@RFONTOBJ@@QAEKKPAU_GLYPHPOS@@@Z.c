/*
 * XREFs of ?cGetGlyphData@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z @ 0x207A92
 * Callers:
 *     ?STROBJ_bEnumLinked@@YGHPAVESTROBJ@@PAKPAPAU_GLYPHPOS@@@Z @ 0x2077A3 (-STROBJ_bEnumLinked@@YGHPAVESTROBJ@@PAKPAPAU_GLYPHPOS@@@Z.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z @ 0x223E25 (-bExtraRectsToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z @ 0x22438F (-bTextToPathWorkhorse@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z.c)
 *     _STROBJ_bEnum@12 @ 0x2255A9 (_STROBJ_bEnum@12.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall RFONTOBJ::cGetGlyphData(RFONTOBJ *this, unsigned int a2, struct _GLYPHPOS *a3)
{
  if ( (*(_BYTE *)(*(_DWORD *)this + 56) & 1) != 0 )
    return RFONTOBJ::cGetGlyphDataLookaside(this, a2, a3);
  else
    return RFONTOBJ::cGetGlyphDataCache(this, a2, a3);
}
