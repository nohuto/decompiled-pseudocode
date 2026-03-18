/*
 * XREFs of ?cGetGlyphDataLookaside@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z @ 0x241297
 * Callers:
 *     ?cGetGlyphData@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z @ 0x207A92 (-cGetGlyphData@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@K@Z @ 0x240DE1 (-bInsertGlyphbitsLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@K@Z.c)
 */

BOOL __thiscall RFONTOBJ::cGetGlyphDataLookaside(RFONTOBJ *this, unsigned int a2, struct _GLYPHPOS *a3)
{
  return a2 && RFONTOBJ::bInsertGlyphbitsLookaside(this, a3, *(_DWORD *)(*(_DWORD *)this + 60));
}
