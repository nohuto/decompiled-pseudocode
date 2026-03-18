/*
 * XREFs of _NtGdiGetGlyphIndicesW@20 @ 0x854FE
 * Callers:
 *     <none>
 * Callees:
 *     _NtGdiGetGlyphIndicesWInternal@24 @ 0x85522 (_NtGdiGetGlyphIndicesWInternal@24.c)
 */

int __stdcall NtGdiGetGlyphIndicesW(int a1, void *Src, int a3, int a4, int a5)
{
  return NtGdiGetGlyphIndicesWInternal(a1, Src, a3, a4, a5, 0);
}
