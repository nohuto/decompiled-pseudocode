/*
 * XREFs of RtlCrc64 @ 0x14030E0E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputeCrcInternal @ 0x14030E100 (RtlpComputeCrcInternal.c)
 */

ULONGLONG __cdecl RtlCrc64(const void *Buffer, size_t Size, ULONGLONG InitialCrc)
{
  return RtlpComputeCrcInternal(Buffer, Size, InitialCrc, &Crc64Ctrl);
}
