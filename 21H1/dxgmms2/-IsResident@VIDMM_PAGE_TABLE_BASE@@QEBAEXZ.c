/*
 * XREFs of ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C00010A8
 * Callers:
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x1C00260C4 (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005EB24 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005EFB0 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F758 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005FD44 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C00894D0 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C00BE644 (-GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VIDMM_PAGE_TABLE_BASE::IsResident(VIDMM_PAGE_TABLE_BASE *this)
{
  __int64 v1; // rdx
  unsigned __int8 result; // al

  v1 = *((_QWORD *)this + 1);
  result = 0;
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 128) )
      return 1;
  }
  return result;
}
