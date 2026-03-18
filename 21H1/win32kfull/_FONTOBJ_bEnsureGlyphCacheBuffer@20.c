/*
 * XREFs of _FONTOBJ_bEnsureGlyphCacheBuffer@20 @ 0xF8362
 * Callers:
 *     ?CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEXPAX@Z @ 0xF88AE (-CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEXPAX@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QAEHKPAPAU_GLYPHDATA@@PAKPAPAU_GLYPHBITS@@@Z @ 0xF8744 (-bEnsureGlyphCacheBuffer@RFONTOBJ@@QAEHKPAPAU_GLYPHDATA@@PAKPAPAU_GLYPHBITS@@@Z.c)
 */

int __fastcall FONTOBJ_bEnsureGlyphCacheBuffer(
        int a1,
        unsigned int a2,
        struct _GLYPHDATA **a3,
        unsigned int *a4,
        struct _GLYPHBITS **a5)
{
  int v5; // eax
  int v6; // esi
  int v8; // [esp+4h] [ebp-4h] BYREF

  v8 = a1;
  v5 = RFONTOBJ::bEnsureGlyphCacheBuffer((RFONTOBJ *)&v8, a2, a3, a4, a5);
  v8 = 0;
  v6 = v5;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
  return v6;
}
