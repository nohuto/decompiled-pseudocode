/*
 * XREFs of RtlpBreakPointHeap @ 0x1800FA24C
 * Callers:
 *     RtlpCreateSplitBlock @ 0x18001DD64 (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18001EEB4 (RtlpCoalesceFreeBlocks.c)
 *     RtlpGrowBlockInPlace @ 0x18001F630 (RtlpGrowBlockInPlace.c)
 *     RtlpReAllocateHeap @ 0x1800219E4 (RtlpReAllocateHeap.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     RtlpValidateHeapEntry @ 0x18005E250 (RtlpValidateHeapEntry.c)
 *     RtlpCheckHeapSignature @ 0x18005E4C0 (RtlpCheckHeapSignature.c)
 *     RtlpCheckBusyBlockTail @ 0x1800F66E8 (RtlpCheckBusyBlockTail.c)
 *     RtlDebugAllocateHeap @ 0x1800F8640 (RtlDebugAllocateHeap.c)
 *     RtlDebugCreateHeap @ 0x1800F8B50 (RtlDebugCreateHeap.c)
 *     RtlDebugFreeHeap @ 0x1800F904C (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1800F9630 (RtlDebugReAllocateHeap.c)
 *     RtlpValidateHeap @ 0x1800FA274 (RtlpValidateHeap.c)
 * Callees:
 *     <none>
 */

struct _PEB *RtlpBreakPointHeap()
{
  struct _PEB *result; // rax

  result = NtCurrentPeb();
  if ( result->BeingDebugged )
  {
    __debugbreak();
    RtlpHeapInvalidBreakPoint = 0;
  }
  return result;
}
