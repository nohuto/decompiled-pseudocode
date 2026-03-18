/*
 * XREFs of _NtGdiCreateCompatibleBitmap@12 @ 0x9DCC2
 * Callers:
 *     <none>
 * Callees:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 */

int __stdcall NtGdiCreateCompatibleBitmap(HDC a1, int a2, int a3)
{
  return GreCreateCompatibleBitmapInternal(a1, a2, a3 & 0xF0FFFFFF, 0, 0, 0);
}
