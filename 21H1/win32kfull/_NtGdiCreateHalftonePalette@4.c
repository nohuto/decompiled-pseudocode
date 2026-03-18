/*
 * XREFs of _NtGdiCreateHalftonePalette@4 @ 0xADC08
 * Callers:
 *     <none>
 * Callees:
 *     _GreCreateCompatibleHalftonePalette@8 @ 0xADC12 (_GreCreateCompatibleHalftonePalette@8.c)
 */

int __thiscall NtGdiCreateHalftonePalette(void *this, int a2)
{
  return GreCreateCompatibleHalftonePalette(this, 0);
}
