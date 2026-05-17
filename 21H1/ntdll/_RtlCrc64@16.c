/*
 * XREFs of _RtlCrc64@16 @ 0x4B35C6E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpComputeCrcInternal@20 @ 0x4B35C6FF (_RtlpComputeCrcInternal@20.c)
 */

int __stdcall RtlCrc64(int a1, int a2, int a3, int a4)
{
  return RtlpComputeCrcInternal(a3, a4, &Crc64Ctrl);
}
