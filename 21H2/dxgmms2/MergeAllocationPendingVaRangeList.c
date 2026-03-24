/*
 * XREFs of MergeAllocationPendingVaRangeList @ 0x1C005EAC0
 * Callers:
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006ECA0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 * Callees:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0087208 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 */

__int64 __fastcall MergeAllocationPendingVaRangeList(CVirtualAddressAllocator *this, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = a2 + 144;
  while ( *(_QWORD *)v3 != v3 )
  {
    result = CVirtualAddressAllocator::AddVaRangeToVadRangeList(
               this,
               *(struct VIDMM_VAD **)(*(_QWORD *)v3 - 24LL),
               (*(_DWORD *)(*(_QWORD *)v3 + 40LL) >> 4) & 0x3F,
               0LL,
               (struct VIDMM_MAPPED_VA_RANGE *)(*(_QWORD *)v3 - 24LL));
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
