/*
 * XREFs of _VerifierEngCreatePath@0 @ 0x1FC9A2
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YIHK@Z @ 0x1FC707 (-VerifierRandomFailure@@YIHK@Z.c)
 */

PATHOBJ *__stdcall VerifierEngCreatePath()
{
  if ( VerifierRandomFailure() )
    return 0;
  else
    return EngCreatePath();
}
