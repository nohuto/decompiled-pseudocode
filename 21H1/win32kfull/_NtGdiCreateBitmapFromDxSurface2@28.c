/*
 * XREFs of _NtGdiCreateBitmapFromDxSurface2@28 @ 0x21232C
 * Callers:
 *     <none>
 * Callees:
 *     _GreCreateBitmapFromDxSurface@28 @ 0x2012E7 (_GreCreateBitmapFromDxSurface@28.c)
 */

int __stdcall NtGdiCreateBitmapFromDxSurface2(HDC a1, int a2, unsigned int a3, int a4, _DWORD *a5, int a6, int a7)
{
  return GreCreateBitmapFromDxSurface(a1, a2, a3, a4, a5, a6, a7);
}
