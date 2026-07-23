/*
 * XREFs of RtlGetNtGlobalFlags @ 0x1409178F0
 * Callers:
 *     RtlpAllocateHeap @ 0x140587120 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
