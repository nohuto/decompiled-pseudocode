/*
 * XREFs of RtlCompressBuffer @ 0x14023AA00
 * Callers:
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14023AA8C (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x1402C5BA8 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     EtwpCompressBuffer @ 0x1405A6AB0 (EtwpCompressBuffer.c)
 *     RtlCompressChunks @ 0x14090BB10 (RtlCompressChunks.c)
 *     EtwpWriteBufferCompressed @ 0x140944EBC (EtwpWriteBufferCompressed.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall RtlCompressBuffer(
        USHORT CompressionFormatAndEngine,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        ULONG UncompressedChunkSize,
        PULONG FinalCompressedSize,
        PVOID WorkSpace)
{
  if ( (unsigned __int8)CompressionFormatAndEngine < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormatAndEngine > 4u )
    return -1073741217;
  return ((__int64 (__fastcall *)(_QWORD, PUCHAR, ULONG, PUCHAR, ULONG, ULONG, PULONG, PVOID))RtlCompressBufferProcs[(unsigned __int8)CompressionFormatAndEngine])(
           CompressionFormatAndEngine & 0xFF00,
           UncompressedBuffer,
           UncompressedBufferSize,
           CompressedBuffer,
           CompressedBufferSize,
           UncompressedChunkSize,
           FinalCompressedSize,
           WorkSpace);
}
