/*
 * XREFs of NtGdiSetSystemPaletteUse @ 0x1C02AF370
 * Callers:
 *     <none>
 * Callees:
 *     GreSetSystemPaletteUse @ 0x1C02B6800 (GreSetSystemPaletteUse.c)
 */

__int64 __fastcall NtGdiSetSystemPaletteUse(HDC a1)
{
  return GreSetSystemPaletteUse(a1);
}
