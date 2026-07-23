/*
 * XREFs of _RtlFreeHandle@8 @ 0x4B2E7780
 * Callers:
 *     _RtlpFreeHandleForAtom@8 @ 0x4B2A7933 (_RtlpFreeHandleForAtom@8.c)
 *     _RtlpInsertStringAtom@8 @ 0x4B2E0590 (_RtlpInsertStringAtom@8.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

BOOLEAN __cdecl RtlFreeHandle(PRTL_HANDLE_TABLE HandleTable, PRTL_HANDLE_TABLE_ENTRY Handle)
{
  BOOLEAN result; // al
  size_t v3; // [esp-4h] [ebp-Ch]

  LODWORD(v3) = HandleTable->SizeOfHandleTableEntry;
  memset(Handle, 0, v3);
  Handle->Flags = (ULONG)HandleTable->FreeHandles;
  result = 1;
  HandleTable->FreeHandles = Handle;
  return result;
}
