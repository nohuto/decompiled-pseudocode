/*
 * XREFs of ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00860A8
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0084CC0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00852A0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009EB00 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00AA760 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00D5C58 (-DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C00D70C4 (-ForceDiscardOffer@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1C002E3C0 (McTemplateK0p_EtwWriteTransfer.c)
 */

__int64 __fastcall VIDMM_GLOBAL::DiscardOfferedAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx

  if ( (*((_DWORD *)this + 1764) & 0x10) == 0
    && (v2 = *((_QWORD *)a2 + 66), _InterlockedCompareExchange16((volatile signed __int16 *)(v2 + 4), 3, 2) == 2) )
  {
    v3 = 1;
    if ( bTracingEnabled && (byte_1C006E941 & 1) != 0 )
      McTemplateK0p_EtwWriteTransfer(v2, &EventDiscardAllocation, 3LL, a2);
  }
  else
  {
    return 0;
  }
  return v3;
}
