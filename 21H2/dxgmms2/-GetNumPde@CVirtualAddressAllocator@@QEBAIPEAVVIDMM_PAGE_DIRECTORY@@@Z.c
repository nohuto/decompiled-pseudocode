/*
 * XREFs of ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0014CA4
 * Callers:
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C009E880 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z @ 0x1C00A8238 (-GetVirtualAddressOfPageTable@CVirtualAddressAllocator@@QEBA_KI_KE@Z.c)
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B06E8 (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00E440C (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualAddressAllocator::GetNumPde(CVirtualAddressAllocator *this, struct VIDMM_PAGE_DIRECTORY *a2)
{
  int v2; // r8d
  __int64 v3; // rdx

  v2 = *(_DWORD *)a2;
  v3 = (*(_DWORD *)a2 >> 7) & 0x1F;
  if ( (v2 & 0x10) != 0 )
    return *(unsigned int *)(32 * v3 + *((_QWORD *)this + 15) + 16);
  else
    return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 11) + 40224LL) + 48 * ((v2 & 7) + 33 * v3) + 88);
}
