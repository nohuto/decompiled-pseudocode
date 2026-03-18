/*
 * XREFs of ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C009FD00
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008A360 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008AF00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0002E04 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C009E854 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C009FDA0 (-InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ??0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z @ 0x1C00A1D10 (--0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z.c)
 */

struct VIDMM_PAGE_DIRECTORY *__fastcall CreatePageDirectory(
        struct CVirtualAddressAllocator *a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v6; // rbx
  VIDMM_PAGE_DIRECTORY *v7; // rax
  VIDMM_PAGE_DIRECTORY *v8; // rax
  VIDMM_PAGE_DIRECTORY *v9; // rbx
  __int64 v11; // rcx
  unsigned __int8 v12; // r9
  __int64 v13; // rcx

  v6 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 40224LL) + 1584LL * a2;
  v7 = (VIDMM_PAGE_DIRECTORY *)operator new(56LL, 0x36356956u, 256LL);
  if ( v7 && (v8 = VIDMM_PAGE_DIRECTORY::VIDMM_PAGE_DIRECTORY(v7, a2, *(_DWORD *)(v6 + 428), a3), (v9 = v8) != 0LL) )
  {
    if ( (int)VIDMM_PAGE_DIRECTORY::InitializePageDirectory(v8, a1) >= 0 )
      return v9;
    WdLogSingleEntry1(1LL, 4364LL);
    DxgkLogInternalTriageEvent(v11, 0x40000LL);
    VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v9, a1, 0LL, v12);
  }
  else
  {
    WdLogSingleEntry1(1LL, 4358LL);
    DxgkLogInternalTriageEvent(v13, 0x40000LL);
  }
  return 0LL;
}
