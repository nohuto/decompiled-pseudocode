/*
 * XREFs of _VerifierCLIPOBJ_ppoGetPath@4 @ 0x1FC7A3
 * Callers:
 *     <none>
 * Callees:
 *     ?ppoGetPath@XCLIPOBJ@@QAEPAU_PATHOBJ@@XZ @ 0x1CCB24 (-ppoGetPath@XCLIPOBJ@@QAEPAU_PATHOBJ@@XZ.c)
 *     ?VerifierRandomFailure@@YIHK@Z @ 0x1FC707 (-VerifierRandomFailure@@YIHK@Z.c)
 */

struct _PATHOBJ *__stdcall VerifierCLIPOBJ_ppoGetPath(XCLIPOBJ *a1)
{
  if ( VerifierRandomFailure() )
    return 0;
  else
    return XCLIPOBJ::ppoGetPath(a1);
}
