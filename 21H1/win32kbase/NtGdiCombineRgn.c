/*
 * XREFs of NtGdiCombineRgn @ 0x1C003A070
 * Callers:
 *     <none>
 * Callees:
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 */

__int64 __fastcall NtGdiCombineRgn(HRGN a1, HRGN a2, HRGN a3)
{
  return GreCombineRgn(a1, a2, a3);
}
