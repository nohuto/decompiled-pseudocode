/*
 * XREFs of ?GetGpuVirtualAddress@VIDMM_ALLOC@@QEAA_KI@Z @ 0x1C0085668
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C007D3FC (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?VidMmGetAllocationGpuVirtualAddress@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@EI@Z @ 0x1C008563C (-VidMmGetAllocationGpuVirtualAddress@VIDMM_GLOBAL@@QEAA_KPEAU_VIDMM_MULTI_ALLOC@@EI@Z.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C0089530 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C008A48C (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00AEE54 (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BE690 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_ALLOC::GetGpuVirtualAddress(VIDMM_ALLOC *this, int a2)
{
  char *v2; // r8
  char *i; // rcx

  v2 = (char *)this + 128;
  for ( i = (char *)*((_QWORD *)this + 16); i != v2; i = *(char **)i )
  {
    if ( ((*((_DWORD *)i + 10) >> 4) & 0x3F) == a2 )
      return *((_QWORD *)i + 9);
  }
  return 0LL;
}
