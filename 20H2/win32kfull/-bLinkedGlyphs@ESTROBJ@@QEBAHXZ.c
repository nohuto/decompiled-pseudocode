/*
 * XREFs of ?bLinkedGlyphs@ESTROBJ@@QEBAHXZ @ 0x1C0297C00
 * Callers:
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BC580 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ESTROBJ::bLinkedGlyphs(ESTROBJ *this)
{
  return (*((_DWORD *)this + 58) & 0x1400) != 0;
}
