/*
 * XREFs of _FONTOBJ_AdvanceGlyphCacheBuffer@16 @ 0xF833A
 * Callers:
 *     ?CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEXPAX@Z @ 0xF88AE (-CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEXPAX@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?AdvanceGlyphCacheBuffer@RFONTOBJ@@QAEXPAU_GLYPHDATA@@PAU_GLYPHBITS@@K@Z @ 0xF86FE (-AdvanceGlyphCacheBuffer@RFONTOBJ@@QAEXPAU_GLYPHDATA@@PAU_GLYPHBITS@@K@Z.c)
 */

void __fastcall FONTOBJ_AdvanceGlyphCacheBuffer(int a1, struct _GLYPHDATA *a2, struct _GLYPHBITS *a3, unsigned int a4)
{
  int v4; // [esp+0h] [ebp-4h] BYREF

  v4 = a1;
  RFONTOBJ::AdvanceGlyphCacheBuffer((RFONTOBJ *)&v4, a2, a3, a4);
  v4 = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
}
