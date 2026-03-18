/*
 * XREFs of _EngCreateDeviceSurface@16 @ 0xEDFCC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
HSURF __stdcall EngCreateDeviceSurface(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  return __imp__EngCreateDeviceSurface@16(dhsurf, sizl, iFormatCompat);
}
