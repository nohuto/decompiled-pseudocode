/*
 * XREFs of VerifyTcbPrivileges @ 0x1C012DB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN VerifyTcbPrivileges()
{
  return SeSinglePrivilegeCheck((LUID)7LL, 1);
}
