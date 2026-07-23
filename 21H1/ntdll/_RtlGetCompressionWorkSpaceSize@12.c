/*
 * XREFs of _RtlGetCompressionWorkSpaceSize@12 @ 0x4B35A670
 * Callers:
 *     _EtwpInitializeCompression@4 @ 0x4B383119 (_EtwpInitializeCompression@4.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

NTSTATUS __cdecl RtlGetCompressionWorkSpaceSize(
        USHORT CompressionFormatAndEngine,
        PULONG CompressBufferWorkSpaceSize,
        PULONG CompressFragmentWorkSpaceSize)
{
  if ( !(_BYTE)CompressionFormatAndEngine || (unsigned __int8)CompressionFormatAndEngine == 1 )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormatAndEngine <= 4u )
    return ((int (__thiscall *)(int, int, PULONG, PULONG))RtlWorkSpaceProcs[(unsigned __int8)CompressionFormatAndEngine])(
             RtlWorkSpaceProcs[(unsigned __int8)CompressionFormatAndEngine],
             CompressionFormatAndEngine & 0xFF00,
             CompressBufferWorkSpaceSize,
             CompressFragmentWorkSpaceSize);
  return -1073741217;
}
