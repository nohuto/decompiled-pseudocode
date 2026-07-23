/*
 * XREFs of RtlCrc64 @ 0x1402FEC40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputeCrcInternal @ 0x1402FEC60 (RtlpComputeCrcInternal.c)
 */

ULONGLONG __cdecl RtlCrc64(const void *Buffer, size_t Size, ULONGLONG InitialCrc)
{
  return RtlpComputeCrcInternal(Buffer, Size, InitialCrc, &Crc64Ctrl);
}
