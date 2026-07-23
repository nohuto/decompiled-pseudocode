/*
 * XREFs of _RtlCompressBuffer@32 @ 0x4B35A4F0
 * Callers:
 *     _EtwpWriteBufferCompressed@16 @ 0x4B3831CD (_EtwpWriteBufferCompressed@16.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

NTSTATUS __cdecl RtlCompressBuffer(
        USHORT CompressionFormatAndEngine,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        ULONG UncompressedChunkSize,
        PULONG FinalCompressedSize,
        PVOID WorkSpace)
{
  if ( !(_BYTE)CompressionFormatAndEngine || (unsigned __int8)CompressionFormatAndEngine == 1 )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormatAndEngine <= 4u )
    return ((int (__thiscall *)(int, int, PUCHAR, ULONG, PUCHAR, ULONG, ULONG, PULONG, PVOID))RtlCompressBufferProcs[(unsigned __int8)CompressionFormatAndEngine])(
             RtlCompressBufferProcs[(unsigned __int8)CompressionFormatAndEngine],
             CompressionFormatAndEngine & 0xFF00,
             UncompressedBuffer,
             UncompressedBufferSize,
             CompressedBuffer,
             CompressedBufferSize,
             UncompressedChunkSize,
             FinalCompressedSize,
             WorkSpace);
  return -1073741217;
}
