/*
 * XREFs of _NtGdiCreateBitmapFromDxSurface@20 @ 0x212354
 * Callers:
 *     <none>
 * Callees:
 *     _GreCreateBitmapFromDxSurface@28 @ 0x2012E7 (_GreCreateBitmapFromDxSurface@28.c)
 */

int __stdcall NtGdiCreateBitmapFromDxSurface(HDC a1, int a2, unsigned int a3, int a4, int a5)
{
  return GreCreateBitmapFromDxSurface(a1, a2, a3, a4, 0, 0, a5);
}
