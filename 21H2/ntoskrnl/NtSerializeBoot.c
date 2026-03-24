/*
 * XREFs of NtSerializeBoot @ 0x1407D2990
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x1403CEA90 (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x140627640 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot()
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
