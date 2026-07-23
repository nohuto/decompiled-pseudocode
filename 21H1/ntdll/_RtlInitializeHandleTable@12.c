/*
 * XREFs of _RtlInitializeHandleTable@12 @ 0x4B2EB410
 * Callers:
 *     _RtlCreateAtomTableEx@12 @ 0x4B2E0014 (_RtlCreateAtomTableEx@12.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlInitializeHandleTable(
        ULONG MaximumNumberOfHandles,
        ULONG SizeOfHandleTableEntry,
        PRTL_HANDLE_TABLE HandleTable)
{
  ULONG v3; // ecx

  v3 = SizeOfHandleTableEntry;
  if ( (SizeOfHandleTableEntry & 0x80000000) != 0 )
    v3 = SizeOfHandleTableEntry & 0x7FFFFFFF;
  HandleTable->Reserved[1] = 0;
  HandleTable->FreeHandles = 0;
  HandleTable->CommittedHandles = 0;
  HandleTable->UnCommittedHandles = 0;
  HandleTable->MaxReservedHandles = 0;
  HandleTable->Reserved[0] = SizeOfHandleTableEntry >> 31;
  HandleTable->MaximumNumberOfHandles = MaximumNumberOfHandles;
  HandleTable->SizeOfHandleTableEntry = v3;
}
