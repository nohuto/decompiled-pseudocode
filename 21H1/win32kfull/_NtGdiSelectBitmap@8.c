/*
 * XREFs of _NtGdiSelectBitmap@8 @ 0x98B0E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtGdiSelectBitmap(int a1, int a2)
{
  return hbmSelectBitmapInternal(a1, a2, 0, 0, 0);
}
