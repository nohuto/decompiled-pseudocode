/*
 * XREFs of RtlGetNtGlobalFlags @ 0x140910A10
 * Callers:
 *     RtlpAllocateHeap @ 0x140583090 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
