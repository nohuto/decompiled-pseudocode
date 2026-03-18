/*
 * XREFs of RtlGetCompressionWorkSpaceSize @ 0x1402C3020
 * Callers:
 *     SmDecompressBuffer @ 0x1402C3074 (SmDecompressBuffer.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1402CA708 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?SmCompressCtxStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z @ 0x1403C4988 (-SmCompressCtxStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@K@Z.c)
 *     EtwpInitializeCompression @ 0x1405A7918 (EtwpInitializeCompression.c)
 *     PopHiberInitializeResources @ 0x140762F40 (PopHiberInitializeResources.c)
 *     EtwpInitializeCompressedWriter @ 0x140943E80 (EtwpInitializeCompressedWriter.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall RtlGetCompressionWorkSpaceSize(
        USHORT CompressionFormatAndEngine,
        PULONG CompressBufferWorkSpaceSize,
        PULONG CompressFragmentWorkSpaceSize)
{
  if ( (unsigned __int8)CompressionFormatAndEngine < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormatAndEngine > 4u )
    return -1073741217;
  return ((__int64 (__fastcall *)(_WORD, PULONG, PULONG))RtlWorkSpaceProcs[(unsigned __int8)CompressionFormatAndEngine])(
           CompressionFormatAndEngine & 0xFF00,
           CompressBufferWorkSpaceSize,
           CompressFragmentWorkSpaceSize);
}
