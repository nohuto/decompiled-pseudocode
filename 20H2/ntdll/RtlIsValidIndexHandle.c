/*
 * XREFs of RtlIsValidIndexHandle @ 0x18004C9B0
 * Callers:
 *     RtlpAtomMapAtomToHandleEntry @ 0x18004C974 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlpFreeHandleForAtom @ 0x18004CCD0 (RtlpFreeHandleForAtom.c)
 * Callees:
 *     RtlIsValidHandle @ 0x18004C9F0 (RtlIsValidHandle.c)
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
