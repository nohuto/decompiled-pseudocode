/*
 * XREFs of ?bSkipCHSFontSegUISymFallback@RFONTOBJ@@QAEHGPAVPFF@@0@Z @ 0x207A4F
 * Callers:
 *     _GreGetGlyphOutlineInternal@32 @ 0x85B86 (_GreGetGlyphOutlineInternal@32.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@GKKPAHHH@Z @ 0x2071D7 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@GKKPAHHH@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall RFONTOBJ::bSkipCHSFontSegUISymFallback(
        RFONTOBJ *this,
        unsigned __int16 a2,
        struct PFF *a3,
        struct PFF *a4)
{
  return !gbAllowSCPUAFontFallback
      && (unsigned __int16)(a2 + 0x2000) <= 0x18FFu
      && (*((_DWORD *)a4 + 8) & 0x4000) != 0
      && (*((_DWORD *)a3 + 8) & 0x8000) != 0;
}
