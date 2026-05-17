/*
 * XREFs of _RtlWalkHeap@8 @ 0x4B3575D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpWalkHeapInternal@12 @ 0x4B35A1E8 (_RtlpWalkHeapInternal@12.c)
 */

int __stdcall RtlWalkHeap(int a1, int a2)
{
  return RtlpWalkHeapInternal(1);
}
