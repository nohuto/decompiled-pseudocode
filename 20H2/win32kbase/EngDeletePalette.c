/*
 * XREFs of EngDeletePalette @ 0x1C0085A20
 * Callers:
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C0085800 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 * Callees:
 *     ?EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z @ 0x1C00CF790 (-EngDeletePaletteInternal@@YAHPEAUHPALETTE__@@K@Z.c)
 */

BOOL __stdcall EngDeletePalette(HPALETTE hpal)
{
  return EngDeletePaletteInternal(hpal, 0);
}
