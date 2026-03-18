/*
 * XREFs of NtSerializeBoot @ 0x140861890
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x1403DCD34 (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot()
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
