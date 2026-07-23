/*
 * XREFs of RtlOwnerAcesPresent @ 0x1800E69D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlOwnerAcesPresent(PACL pAcl)
{
  return RtlpOwnerAcesPresent(0, (__int64)pAcl);
}
