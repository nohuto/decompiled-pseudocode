/*
 * XREFs of _RtlCrc32@12 @ 0x4B35C6B0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpComputeCrcInternal@20 @ 0x4B35C6FF (_RtlpComputeCrcInternal@20.c)
 */

int __stdcall RtlCrc32(int a1, int a2, int a3)
{
  return RtlpComputeCrcInternal(a3, 0, Crc32Ctrl);
}
