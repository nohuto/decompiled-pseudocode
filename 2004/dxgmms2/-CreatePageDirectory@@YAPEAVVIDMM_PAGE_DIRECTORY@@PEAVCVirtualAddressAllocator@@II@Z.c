/*
 * XREFs of ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C005F0F0
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0071174 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0071A30 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005E93C (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ??0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z @ 0x1C005F080 (--0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z.c)
 *     ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C005F18C (-InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 */

struct VIDMM_PAGE_DIRECTORY *__fastcall CreatePageDirectory(
        struct CVirtualAddressAllocator *a1,
        unsigned int a2,
        int a3)
{
  char v4; // si
  __int64 v6; // rbx
  VIDMM_PAGE_DIRECTORY *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  VIDMM_PAGE_DIRECTORY *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int8 v18; // r9

  v4 = a2;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 11) + 40216LL) + 1584LL * a2;
  v7 = (VIDMM_PAGE_DIRECTORY *)operator new[](0x28uLL, 0x36356956u, PagedPool);
  if ( v7 )
    v11 = VIDMM_PAGE_DIRECTORY::VIDMM_PAGE_DIRECTORY(v7, v4, *(_DWORD *)(v6 + 428), a3);
  else
    v11 = 0LL;
  if ( v11 )
  {
    if ( (int)VIDMM_PAGE_DIRECTORY::InitializePageDirectory(v11, a1) >= 0 )
      return v11;
    v17 = WdLogNewEntry5_WdAssertion(v13, v12, v14);
    *(_QWORD *)(v17 + 24) = 4236LL;
    WdLogEvent5_WdAssertion(v17);
    VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v11, a1, 0LL, v18);
  }
  else
  {
    v16 = WdLogNewEntry5_WdAssertion(v9, v8, v10);
    *(_QWORD *)(v16 + 24) = 4230LL;
    WdLogEvent5_WdAssertion(v16);
  }
  return 0LL;
}
