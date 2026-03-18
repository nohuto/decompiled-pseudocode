/*
 * XREFs of ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C02A6A64
 * Callers:
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BC580 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C0089F90 (-cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02D424C (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

__int64 __fastcall RFONTOBJ::cGetGlyphData(struct _FONTOBJ **this, unsigned int a2, struct _GLYPHPOS *a3)
{
  unsigned int v3; // ebx

  if ( ((*this)[1].iTTUniq & 0x100000000LL) == 0 )
    return RFONTOBJ::cGetGlyphDataCache(this, a2, a3);
  v3 = 0;
  if ( a2 )
    LOBYTE(v3) = (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside((RFONTOBJ *)this, a3, (*this)[1].iFile) != 0;
  return v3;
}
