/*
 * XREFs of _RtlLookupEntryHashTable@12 @ 0x4B35B2E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpPopulateContext@12 @ 0x4B35B59E (_RtlpPopulateContext@12.c)
 */

PRTL_DYNAMIC_HASH_TABLE_ENTRY __cdecl RtlLookupEntryHashTable(
        PRTL_DYNAMIC_HASH_TABLE HashTable,
        ULONG_PTR Signature,
        PRTL_DYNAMIC_HASH_TABLE_CONTEXT Context)
{
  char *v3; // esi
  PRTL_DYNAMIC_HASH_TABLE_ENTRY result; // eax
  char v5; // [esp+8h] [ebp-Ch] BYREF

  v3 = (char *)HIDWORD(Signature);
  if ( !HIDWORD(Signature) )
    v3 = &v5;
  RtlpPopulateContext(Signature);
  result = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)**((_DWORD **)v3 + 1);
  if ( *(PRTL_DYNAMIC_HASH_TABLE_ENTRY *)v3 == result || result->Signature != (_DWORD)Signature )
    return 0;
  return result;
}
