/*
 * XREFs of RtlGetNtGlobalFlags @ 0x140911DB0
 * Callers:
 *     RtlpAllocateHeap @ 0x1405837C0 (RtlpAllocateHeap.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetNtGlobalFlags(void)
{
  return NtGlobalFlag;
}
