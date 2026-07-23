/*
 * XREFs of _RtlDecompressFragment@32 @ 0x4B35A610
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

NTSTATUS __cdecl RtlDecompressFragment(
        USHORT CompressionFormat,
        PUCHAR UncompressedFragment,
        ULONG UncompressedFragmentSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        ULONG FragmentOffset,
        PULONG FinalUncompressedSize,
        PVOID WorkSpace)
{
  if ( !(_BYTE)CompressionFormat || (unsigned __int8)CompressionFormat == 1 )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat <= 4u )
    return ((int (__thiscall *)(int, PUCHAR, ULONG, PUCHAR, ULONG, ULONG, _DWORD, PULONG, PVOID))RtlDecompressFragmentProcs[(unsigned __int8)CompressionFormat])(
             RtlDecompressFragmentProcs[(unsigned __int8)CompressionFormat],
             UncompressedFragment,
             UncompressedFragmentSize,
             CompressedBuffer,
             CompressedBufferSize,
             FragmentOffset,
             0,
             FinalUncompressedSize,
             WorkSpace);
  return -1073741217;
}
