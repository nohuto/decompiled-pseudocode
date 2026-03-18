/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1409178F0
 * Callers:
 *     RtlpAllocateHeap @ 0x140587120 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

__int64 RtlGetNtGlobalFlags()
{
  return NtGlobalFlag;
}
