/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x140521CD4
 * Callers:
 *     KseSetCompletionHook @ 0x1405218E0 (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x140742B74 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocateNonPaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6245534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_140C2A7C8);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C2A7D4);
  }
  return v3;
}
