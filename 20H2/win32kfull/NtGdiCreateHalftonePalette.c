/*
 * XREFs of NtGdiCreateHalftonePalette @ 0x1C0122150
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleHalftonePalette @ 0x1C0122168 (GreCreateCompatibleHalftonePalette.c)
 */

__int64 __fastcall NtGdiCreateHalftonePalette(__int64 a1)
{
  return GreCreateCompatibleHalftonePalette(a1, 0LL);
}
