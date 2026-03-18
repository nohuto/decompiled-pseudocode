/*
 * XREFs of VerifierEngCreatePath @ 0x1C029D870
 * Callers:
 *     <none>
 * Callees:
 *     EngCreatePath @ 0x1C0285E70 (EngCreatePath.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C029D38C (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *VerifierEngCreatePath()
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreatePath();
}
