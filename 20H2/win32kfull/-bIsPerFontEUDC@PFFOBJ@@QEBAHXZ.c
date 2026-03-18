/*
 * XREFs of ?bIsPerFontEUDC@PFFOBJ@@QEBAHXZ @ 0x1C015EAA0
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C00264BC (GreGetGlyphOutlineInternal.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1C01116E8 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C01452C4 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PFFOBJ::bIsPerFontEUDC(PFFOBJ *this)
{
  return (*(_DWORD *)(*(_QWORD *)this + 52LL) & 0xA) == 8;
}
