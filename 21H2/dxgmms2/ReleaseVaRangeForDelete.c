/*
 * XREFs of ReleaseVaRangeForDelete @ 0x1C00602D8
 * Callers:
 *     ?FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z @ 0x1C0089784 (-FreeVad@CVirtualAddressAllocator@@SAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x1C0001338 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 */

__int64 __fastcall ReleaseVaRangeForDelete(VIDMM_MAPPED_VA_RANGE *a1, unsigned int a2)
{
  return VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference(a1, a2);
}
