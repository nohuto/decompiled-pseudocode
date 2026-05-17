/*
 * XREFs of _RtlDeleteHashTable@4 @ 0x4B35AE30
 * Callers:
 *     _RtlpCreateHashTable@16 @ 0x4B35B3EB (_RtlpCreateHashTable@16.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

unsigned int __stdcall RtlDeleteHashTable(int a1)
{
  unsigned int result; // eax
  int v2; // esi
  unsigned int i; // ebx

  result = *(_DWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 32);
  if ( result > 0x80 )
  {
    if ( v2 )
    {
      for ( i = 0; i < 0x10; ++i )
      {
        if ( !*(_DWORD *)(v2 + 4 * i) )
          break;
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(v2 + 4 * i));
      }
      result = RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v2);
    }
  }
  else if ( v2 )
  {
    result = RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, *(_DWORD *)(a1 + 32));
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
    return RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, a1);
  return result;
}
