/*
 * XREFs of _NtGdiEngCreateDeviceBitmap@16 @ 0x217EFB
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidUmpdSizl@@YGHUtagSIZE@@_N@Z @ 0x21680C (-ValidUmpdSizl@@YGHUtagSIZE@@_N@Z.c)
 */

HBITMAP __stdcall NtGdiEngCreateDeviceBitmap(DHSURF dhsurf, SIZEL sizl, int a3)
{
  bool savedregs; // [esp+0h] [ebp+0h]

  if ( ValidUmpdSizl(1, sizl, savedregs) && (unsigned int)(a3 - 1) <= 7 )
    return EngCreateDeviceBitmap(dhsurf, sizl, a3 | 0x8000);
  else
    return 0;
}
