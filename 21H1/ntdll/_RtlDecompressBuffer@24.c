/*
 * XREFs of _RtlDecompressBuffer@24 @ 0x4B35A550
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

NTSTATUS __cdecl RtlDecompressBuffer(
        USHORT CompressionFormat,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        PULONG FinalUncompressedSize)
{
  if ( !(_BYTE)CompressionFormat || (unsigned __int8)CompressionFormat == 1 )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat <= 4u )
    return ((int (__thiscall *)(int, PUCHAR, ULONG, PUCHAR, ULONG, _DWORD, PULONG, _DWORD))RtlDecompressBufferProcs[(unsigned __int8)CompressionFormat])(
             RtlDecompressBufferProcs[(unsigned __int8)CompressionFormat],
             UncompressedBuffer,
             UncompressedBufferSize,
             CompressedBuffer,
             CompressedBufferSize,
             0,
             FinalUncompressedSize,
             0);
  return -1073741217;
}
