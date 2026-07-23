/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x1405273C4
 * Callers:
 *     KseSetCompletionHook @ 0x140526FD0 (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x1407586E4 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocateNonPaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6245534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_140C2AA68);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C2AA74);
  }
  return v3;
}
