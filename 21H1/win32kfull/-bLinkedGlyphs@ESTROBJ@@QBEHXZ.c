/*
 * XREFs of ?bLinkedGlyphs@ESTROBJ@@QBEHXZ @ 0x1F8626
 * Callers:
 *     ?bExtraRectsToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z @ 0x223E25 (-bExtraRectsToPath@ESTROBJ@@QAEHAAVEPATHOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall ESTROBJ::bLinkedGlyphs(ESTROBJ *this)
{
  return (*((_DWORD *)this + 48) & 0x1400) != 0;
}
