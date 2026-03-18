/*
 * XREFs of _EngCreateDeviceBitmap@16 @ 0xEDFD2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
HBITMAP __stdcall EngCreateDeviceBitmap(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  return __imp__EngCreateDeviceBitmap@16(dhsurf, sizl, iFormatCompat);
}
