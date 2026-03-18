/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x140521684
 * Callers:
 *     KseSetCompletionHook @ 0x140521290 (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x140740FF4 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocateNonPaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6245534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_140C2A9C8);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C2A9D4);
  }
  return v3;
}
