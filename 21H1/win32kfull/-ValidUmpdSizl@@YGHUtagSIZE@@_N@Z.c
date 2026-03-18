/*
 * XREFs of ?ValidUmpdSizl@@YGHUtagSIZE@@_N@Z @ 0x21680C
 * Callers:
 *     _NtGdiEngCreateBitmap@24 @ 0x217CD3 (_NtGdiEngCreateBitmap@24.c)
 *     _NtGdiEngCreateDeviceBitmap@16 @ 0x217EFB (_NtGdiEngCreateDeviceBitmap@16.c)
 *     _NtGdiEngCreateDeviceSurface@16 @ 0x217F3F (_NtGdiEngCreateDeviceSurface@16.c)
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 */

BOOL __userpurge ValidUmpdSizl@<eax>(char a1@<cl>, struct tagSIZE a2, bool a3)
{
  return a2.cx > 0 && a2.cy > 0 && (!a1 || is_mul_ok(a2.cy, a2.cx));
}
