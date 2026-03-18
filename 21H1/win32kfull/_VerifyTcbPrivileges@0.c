/*
 * XREFs of _VerifyTcbPrivileges@0 @ 0xEC9AE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall VerifyTcbPrivileges()
{
  return SeSinglePrivilegeCheck((LUID)7LL, 1);
}
