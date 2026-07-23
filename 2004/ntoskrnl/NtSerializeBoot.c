/*
 * XREFs of NtSerializeBoot @ 0x1407BFD10
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x1403CB480 (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot(void)
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
