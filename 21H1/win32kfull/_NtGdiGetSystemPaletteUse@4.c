/*
 * XREFs of _NtGdiGetSystemPaletteUse@4 @ 0x213290
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetSystemPaletteUse@4 @ 0x125E2 (_GreGetSystemPaletteUse@4.c)
 */

unsigned int __stdcall NtGdiGetSystemPaletteUse(HDC a1)
{
  return GreGetSystemPaletteUse(a1);
}
