/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x140527184
 * Callers:
 *     KseSetCompletionHook @ 0x140526D90 (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x140758524 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocateNonPaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6245534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_140C2AA28);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140C2AA34);
  }
  return v3;
}
