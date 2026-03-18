/*
 * XREFs of ??_GVIDMM_MAPPED_VA_RANGE@@AEAAPEAXI@Z @ 0x1C0002648
 * Callers:
 *     ?ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C007B820 (-ReleaseVaRangeReferenceSafe@VIDMM_MAPPED_VA_RANGE@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00894A4 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANGE@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0089730 (-CommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_COMMIT_VIRTUAL_ADDRESS_RANG.c)
 * Callees:
 *     ??1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ @ 0x1C00025D8 (--1VIDMM_MAPPED_VA_RANGE@@AEAA@XZ.c)
 */

VIDMM_MAPPED_VA_RANGE *__fastcall VIDMM_MAPPED_VA_RANGE::`scalar deleting destructor'(VIDMM_MAPPED_VA_RANGE *P)
{
  VIDMM_MAPPED_VA_RANGE::~VIDMM_MAPPED_VA_RANGE(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
