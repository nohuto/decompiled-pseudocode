/*
 * XREFs of RtlIsValidIndexHandle @ 0x1800599C0
 * Callers:
 *     RtlpAtomMapAtomToHandleEntry @ 0x180059984 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpFreeHandleForAtom @ 0x180059CE0 (RtlpFreeHandleForAtom.c)
 * Callees:
 *     RtlIsValidHandle @ 0x180059A00 (RtlIsValidHandle.c)
 */

BOOLEAN __cdecl RtlIsValidIndexHandle(
        PRTL_HANDLE_TABLE HandleTable,
        ULONG HandleIndex,
        PRTL_HANDLE_TABLE_ENTRY *Handle)
{
  _RTL_HANDLE_TABLE_ENTRY *v4; // rbx

  v4 = (PRTL_HANDLE_TABLE_ENTRY)((char *)HandleTable->CommittedHandles
                               + HandleIndex * HandleTable->SizeOfHandleTableEntry);
  if ( !RtlIsValidHandle(HandleTable, v4) )
    return 0;
  *Handle = v4;
  return 1;
}
