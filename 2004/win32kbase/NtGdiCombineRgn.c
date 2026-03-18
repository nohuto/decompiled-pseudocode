/*
 * XREFs of NtGdiCombineRgn @ 0x1C0046C80
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineRgn @ 0x1C0084B00 (GreCombineRgn.c)
 */

__int64 __fastcall NtGdiCombineRgn(HRGN a1, HRGN a2, HRGN a3)
{
  return GreCombineRgn(a1, a2, a3);
}
