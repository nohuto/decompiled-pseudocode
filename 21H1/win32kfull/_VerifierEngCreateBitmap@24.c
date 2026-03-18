/*
 * XREFs of _VerifierEngCreateBitmap@24 @ 0x1FC8DD
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YIHK@Z @ 0x1FC707 (-VerifierRandomFailure@@YIHK@Z.c)
 */

HBITMAP __stdcall VerifierEngCreateBitmap(SIZEL sizl, LONG lWidth, ULONG iFormat, FLONG fl, PVOID pvBits)
{
  if ( VerifierRandomFailure() )
    return 0;
  else
    return EngCreateBitmap(sizl, lWidth, iFormat, fl, pvBits);
}
