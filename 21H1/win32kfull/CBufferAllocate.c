/*
 * XREFs of CBufferAllocate @ 0x1B656B
 * Callers:
 *     CreateNewEventEntry @ 0x1B66D4 (CreateNewEventEntry.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall CBufferAllocate(char a1, _DWORD *a2, SIZE_T NumberOfBytes)
{
  PVOID PoolWithTag; // eax
  PVOID v5; // esi

  if ( !NumberOfBytes )
    return 0;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(a1 != 0 ? PagedPool : 512), NumberOfBytes, 0x47417254u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, NumberOfBytes);
  *a2 = v5;
  if ( !v5 )
    return 0;
  a2[1] = NumberOfBytes;
  return 1;
}
