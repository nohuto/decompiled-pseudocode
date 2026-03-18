/*
 * XREFs of NtGdiOffsetRgn @ 0x1C0058820
 * Callers:
 *     <none>
 * Callees:
 *     GreOffsetRgn @ 0x1C007BAB0 (GreOffsetRgn.c)
 */

__int64 __fastcall NtGdiOffsetRgn(HRGN a1)
{
  return GreOffsetRgn(a1);
}
