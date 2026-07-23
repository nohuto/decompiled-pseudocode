/*
 * XREFs of _RtlAreAllAccessesGranted@8 @ 0x4B346010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlAreAllAccessesGranted(ACCESS_MASK GrantedAccess, ACCESS_MASK DesiredAccess)
{
  return (DesiredAccess & ~GrantedAccess) == 0;
}
