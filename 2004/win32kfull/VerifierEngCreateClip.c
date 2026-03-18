/*
 * XREFs of VerifierEngCreateClip @ 0x1C029EB10
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C029E7DC (-VerifierRandomFailure@@YAHK@Z.c)
 */

CLIPOBJ *VerifierEngCreateClip()
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreateClip();
}
