/*
 * XREFs of ?GetVidMmAllocFromOwner@@YAPEAUVIDMM_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0002528
 * Callers:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0002E2C (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z @ 0x1C00864E8 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@EE@Z.c)
 *     ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00894A4 (-FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     GetBaseLogicalPageFromVaRange @ 0x1C008D530 (GetBaseLogicalPageFromVaRange.c)
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C008EDD4 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C00A6C0C (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 *     ?VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z @ 0x1C00A7354 (-VidMmiLogEndVaRangeMapping@@YAXPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@_K22@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetVidMmAllocFromOwner(int a1, __int64 a2)
{
  int v2; // ecx
  int v4; // ecx

  v2 = a1 - 1;
  if ( !v2 )
    return a2;
  v4 = v2 - 3;
  if ( !v4 )
    return *(_QWORD *)(a2 + 64);
  if ( v4 == 1 )
    return *(_QWORD *)(a2 + 24);
  return 0LL;
}
