/*
 * XREFs of _RtlDeleteHashTable@4 @ 0x4B35AE30
 * Callers:
 *     _RtlpCreateHashTable@16 @ 0x4B35B3EB (_RtlpCreateHashTable@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

LOGICAL __cdecl RtlDeleteHashTable(PRTL_DYNAMIC_HASH_TABLE HashTable)
{
  LOGICAL result; // eax
  _DWORD *Directory; // esi
  unsigned int i; // ebx

  result = HashTable->TableSize;
  Directory = HashTable->Directory;
  if ( result > 0x80 )
  {
    if ( Directory )
    {
      for ( i = 0; i < 0x10; ++i )
      {
        if ( !Directory[i] )
          break;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)Directory[i]);
      }
      result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Directory);
    }
  }
  else if ( Directory )
  {
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, HashTable->Directory);
  }
  if ( (HashTable->Flags & 1) != 0 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, HashTable);
  return result;
}
