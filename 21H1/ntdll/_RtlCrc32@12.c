/*
 * XREFs of _RtlCrc32@12 @ 0x4B35C6B0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpComputeCrcInternal@20 @ 0x4B35C6FF (_RtlpComputeCrcInternal@20.c)
 */

DWORD __cdecl RtlCrc32(const void *Buffer, size_t Size, DWORD InitialCrc)
{
  return RtlpComputeCrcInternal(HIDWORD(Size), 0, Crc32Ctrl);
}
