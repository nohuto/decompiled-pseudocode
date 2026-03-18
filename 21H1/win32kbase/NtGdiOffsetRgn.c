/*
 * XREFs of NtGdiOffsetRgn @ 0x1C004A9B0
 * Callers:
 *     <none>
 * Callees:
 *     GreOffsetRgn @ 0x1C0076320 (GreOffsetRgn.c)
 */

__int64 __fastcall NtGdiOffsetRgn(HRGN a1)
{
  return GreOffsetRgn(a1);
}
