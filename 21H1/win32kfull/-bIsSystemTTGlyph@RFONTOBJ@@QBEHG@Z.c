/*
 * XREFs of ?bIsSystemTTGlyph@RFONTOBJ@@QBEHG@Z @ 0xC1144
 * Callers:
 *     ?bGetWidthTable@RFONTOBJ@@QAEHAAVXDCOBJ@@KPAGK1@Z @ 0x86D0C (-bGetWidthTable@RFONTOBJ@@QAEHAAVXDCOBJ@@KPAGK1@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z @ 0x877DE (-vXlatGlyphArray@RFONTOBJ@@QAEXPBGIPAKKH@Z.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z @ 0xC0F30 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@GKKPAHHH@Z @ 0x2071D7 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@GKKPAHHH@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall RFONTOBJ::bIsSystemTTGlyph(RFONTOBJ *this, unsigned __int16 a2)
{
  int v2; // edi

  v2 = 0;
  if ( *(_DWORD *)(*(_DWORD *)this + 704) && a2 >= gqlTTSystem && a2 <= (unsigned __int16)word_2756CE )
    return ((0x80000000 >> ((a2 - gqlTTSystem) % 32)) & *(_DWORD *)(dword_2756D0 + 4 * ((a2 - gqlTTSystem) / 32))) != 0;
  return v2;
}
