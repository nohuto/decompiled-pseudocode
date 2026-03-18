/*
 * XREFs of ?DriverSegmentIdToAdapterSegmentIndex@VIDMM_GLOBAL@@QEAAIII@Z @ 0x1C0001068
 * Callers:
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C005FB34 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@EI_K@Z @ 0x1C0085730 (-AcquireGPUResourcesFromSegmentSet@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_VIDMM_PLACEMEN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::DriverSegmentIdToAdapterSegmentIndex(VIDMM_GLOBAL *this, unsigned int a2, int a3)
{
  __int64 v3; // rdx

  v3 = *((_QWORD *)this + 5027) + 1584LL * a2;
  if ( a3 )
    return (unsigned int)(a3 - 1);
  else
    return (unsigned int)*(unsigned __int16 *)(v3 + 28) - *(_DWORD *)(v3 + 20);
}
