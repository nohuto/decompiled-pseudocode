/*
 * XREFs of RtlWalkHeap @ 0x1800F35F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWalkHeap(__int64 a1, __int64 a2)
{
  return RtlpWalkHeapInternal(a1, a2);
}
