/*
 * XREFs of _VerifierEngCreateDeviceBitmap@16 @ 0x1FC91D
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YIHK@Z @ 0x1FC707 (-VerifierRandomFailure@@YIHK@Z.c)
 */

HBITMAP __stdcall VerifierEngCreateDeviceBitmap(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( VerifierRandomFailure() )
    return 0;
  else
    return EngCreateDeviceBitmap(dhsurf, sizl, iFormatCompat);
}
