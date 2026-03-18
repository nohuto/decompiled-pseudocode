/*
 * XREFs of NtGdiCreateHalftonePalette @ 0x1C01212F0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleHalftonePalette @ 0x1C0121308 (GreCreateCompatibleHalftonePalette.c)
 */

__int64 __fastcall NtGdiCreateHalftonePalette(__int64 a1)
{
  return GreCreateCompatibleHalftonePalette(a1, 0LL);
}
