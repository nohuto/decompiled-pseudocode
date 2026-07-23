/*
 * XREFs of NtSerializeBoot @ 0x1407CE5A0
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x1403CE0A0 (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x14063B9A0 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot(void)
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
