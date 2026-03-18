/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x1405256A4
 * Callers:
 *     KseSetCompletionHook @ 0x1405252B0 (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x140751754 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocateNonPaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6245534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_140C2A8A8);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C2A8B4);
  }
  return v3;
}
