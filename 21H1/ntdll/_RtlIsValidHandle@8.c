/*
 * XREFs of _RtlIsValidHandle@8 @ 0x4B2E0560
 * Callers:
 *     _RtlIsValidIndexHandle@12 @ 0x4B2E0520 (_RtlIsValidIndexHandle@12.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsValidHandle(PRTL_HANDLE_TABLE HandleTable, PRTL_HANDLE_TABLE_ENTRY Handle)
{
  return Handle
      && Handle >= HandleTable->CommittedHandles
      && Handle < HandleTable->UnCommittedHandles
      && ((HandleTable->SizeOfHandleTableEntry - 1) & (unsigned int)Handle) == 0
      && (Handle->Flags & 1) != 0;
}
