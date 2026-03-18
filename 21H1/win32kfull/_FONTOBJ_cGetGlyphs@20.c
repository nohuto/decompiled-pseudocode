/*
 * XREFs of _FONTOBJ_cGetGlyphs@20 @ 0x1F3507
 * Callers:
 *     _NtGdiFONTOBJ_cGetGlyphs@20 @ 0x219EAF (_NtGdiFONTOBJ_cGetGlyphs@20.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@K@Z @ 0x240DE1 (-bInsertGlyphbitsLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@K@Z.c)
 */

ULONG __stdcall FONTOBJ_cGetGlyphs(FONTOBJ *pfo, ULONG iMode, ULONG cGlyph, HGLYPH *phg, PVOID *ppvGlyph)
{
  ULONG v5; // esi
  FONTOBJ *v7; // [esp+Ch] [ebp-14h] BYREF
  struct _GLYPHPOS v8; // [esp+10h] [ebp-10h] BYREF

  memset(&v8, 0, sizeof(v8));
  if ( !phg )
    return 0;
  v8.hg = *phg;
  v7 = pfo;
  v5 = 0;
  if ( RFONTOBJ::bInsertGlyphbitsLookaside((RFONTOBJ *)&v7, &v8, iMode) )
  {
    v5 = 1;
    *ppvGlyph = v8.pgdf;
  }
  v7 = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v7);
  return v5;
}
