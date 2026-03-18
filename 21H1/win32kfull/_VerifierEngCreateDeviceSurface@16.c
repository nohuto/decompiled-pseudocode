/*
 * XREFs of _VerifierEngCreateDeviceSurface@16 @ 0x1FC945
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YIHK@Z @ 0x1FC707 (-VerifierRandomFailure@@YIHK@Z.c)
 */

HSURF __stdcall VerifierEngCreateDeviceSurface(DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat)
{
  if ( VerifierRandomFailure() )
    return 0;
  else
    return EngCreateDeviceSurface(dhsurf, sizl, iFormatCompat);
}
