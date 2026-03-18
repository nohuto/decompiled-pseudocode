/*
 * XREFs of _VerifierEngCreateClip@0 @ 0x1FC90B
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YIHK@Z @ 0x1FC707 (-VerifierRandomFailure@@YIHK@Z.c)
 */

CLIPOBJ *__stdcall VerifierEngCreateClip()
{
  if ( VerifierRandomFailure() )
    return 0;
  else
    return EngCreateClip();
}
