/*
 * XREFs of RtlCrc32 @ 0x1405837A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputeCrcInternal @ 0x14033B560 (RtlpComputeCrcInternal.c)
 */

DWORD __cdecl RtlCrc32(const void *Buffer, size_t Size, DWORD InitialCrc)
{
  return RtlpComputeCrcInternal((unsigned __int64)Buffer, Size, InitialCrc, (__int64)&Crc32Ctrl);
}
