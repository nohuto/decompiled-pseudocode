/*
 * XREFs of ?QueryGlyphMetricsPlusBits@PFFOBJ@@QAEJPAUDHPDEV__@@PAU_FONTOBJ@@KKPAPAU_GLYPHDATA@@PAPAU_GLYPHBITS@@@Z @ 0xF86B2
 * Callers:
 *     _xInsertGlyphbitsRFONTOBJ@12 @ 0x861E0 (_xInsertGlyphbitsRFONTOBJ@12.c)
 *     _xInsertMetricsPlusRFONTOBJ@12 @ 0x8648A (_xInsertMetricsPlusRFONTOBJ@12.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@K@Z @ 0x240DE1 (-bInsertGlyphbitsLookaside@RFONTOBJ@@QAEHPAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     ??1ATTACHOBJ@@QAE@XZ @ 0x8735E (--1ATTACHOBJ@@QAE@XZ.c)
 *     ??0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z @ 0x8737C (--0ATTACHOBJ@@QAE@PAVPFFOBJ@@@Z.c)
 *     _UmfdQueryGlyphMetricsPlusBits@24 @ 0xF886E (_UmfdQueryGlyphMetricsPlusBits@24.c)
 */

int __thiscall PFFOBJ::QueryGlyphMetricsPlusBits(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        unsigned int a5,
        struct _GLYPHDATA **a6,
        struct _GLYPHBITS **a7)
{
  int GlyphMetricsPlusBits; // esi
  _BYTE v9[8]; // [esp+8h] [ebp-8h] BYREF

  if ( *(_DWORD *)(*(_DWORD *)this + 60) != dword_2785B8 )
    return -1;
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)v9, this);
  GlyphMetricsPlusBits = UmfdQueryGlyphMetricsPlusBits(a2, (struct _FONTOBJEX *)a3, a4, a5, a6, a7);
  ATTACHOBJ::~ATTACHOBJ((ATTACHOBJ *)v9);
  return GlyphMetricsPlusBits;
}
