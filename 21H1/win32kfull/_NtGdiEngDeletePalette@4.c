/*
 * XREFs of _NtGdiEngDeletePalette@4 @ 0x218136
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiEngDeletePalette(HPALETTE a1)
{
  return EngDeletePaletteInternal(a1, 0x8000u);
}
