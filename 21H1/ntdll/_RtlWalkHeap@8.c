/*
 * XREFs of _RtlWalkHeap@8 @ 0x4B3575D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpWalkHeapInternal@12 @ 0x4B35A1E8 (_RtlpWalkHeapInternal@12.c)
 */

NTSTATUS __cdecl RtlWalkHeap(PVOID HeapHandle, PRTL_HEAP_WALK_ENTRY Entry)
{
  return RtlpWalkHeapInternal(1);
}
