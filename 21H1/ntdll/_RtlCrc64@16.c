/*
 * XREFs of _RtlCrc64@16 @ 0x4B35C6E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpComputeCrcInternal@20 @ 0x4B35C6FF (_RtlpComputeCrcInternal@20.c)
 */

ULONGLONG __cdecl RtlCrc64(const void *Buffer, size_t Size, ULONGLONG InitialCrc)
{
  ULONGLONG result; // rax

  LODWORD(result) = RtlpComputeCrcInternal(HIDWORD(Size), InitialCrc, &Crc64Ctrl);
  return result;
}
