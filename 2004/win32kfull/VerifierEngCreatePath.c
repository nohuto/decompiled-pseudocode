/*
 * XREFs of VerifierEngCreatePath @ 0x1C029ECC0
 * Callers:
 *     <none>
 * Callees:
 *     EngCreatePath @ 0x1C02873E0 (EngCreatePath.c)
 *     ?VerifierRandomFailure@@YAHK@Z @ 0x1C029E7DC (-VerifierRandomFailure@@YAHK@Z.c)
 */

PATHOBJ *VerifierEngCreatePath()
{
  if ( (unsigned int)VerifierRandomFailure() )
    return 0LL;
  else
    return EngCreatePath();
}
