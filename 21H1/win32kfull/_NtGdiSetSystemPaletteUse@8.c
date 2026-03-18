/*
 * XREFs of _NtGdiSetSystemPaletteUse@8 @ 0x214432
 * Callers:
 *     <none>
 * Callees:
 *     _GreSetSystemPaletteUse@8 @ 0x21E4BA (_GreSetSystemPaletteUse@8.c)
 */

int __stdcall NtGdiSetSystemPaletteUse(HDC a1, int a2)
{
  return GreSetSystemPaletteUse(a1);
}
