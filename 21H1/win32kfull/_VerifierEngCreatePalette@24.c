/*
 * XREFs of _VerifierEngCreatePalette@24 @ 0x1FC987
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YIHK@Z @ 0x1FC707 (-VerifierRandomFailure@@YIHK@Z.c)
 */

HPALETTE __stdcall VerifierEngCreatePalette(ULONG a1, ULONG a2, ULONG *a3, FLONG a4, FLONG a5, FLONG a6)
{
  if ( VerifierRandomFailure() )
    return 0;
  else
    return EngCreatePalette(a1, a2, a3, a4, a5, a6);
}
