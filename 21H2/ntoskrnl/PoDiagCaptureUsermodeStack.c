/*
 * XREFs of PoDiagCaptureUsermodeStack @ 0x14062224C
 * Callers:
 *     NtSetTimerResolution @ 0x1406B3A00 (NtSetTimerResolution.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x1402C17B0 (RtlWalkFrameChain.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

PVOID *PoDiagCaptureUsermodeStack()
{
  PVOID *PoolWithTag; // rax
  PVOID *v1; // rbx
  ULONG v2; // eax

  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x108uLL, 0x50455654u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x108uLL);
    v2 = RtlWalkFrameChain(v1 + 1, 0x20u, 1u);
    if ( v2 )
    {
      *(_DWORD *)v1 = v2;
    }
    else
    {
      ExFreePoolWithTag(v1, 0x50455654u);
      return 0LL;
    }
  }
  return v1;
}
