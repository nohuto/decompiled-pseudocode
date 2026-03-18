/*
 * XREFs of ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0080A14
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007B170 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BDB38 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BDD6C (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C006A598 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0080900 (-InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z.c)
 */

struct VIDMM_PAGE_TABLE *__fastcall CreatePageTable(
        struct CVirtualAddressAllocator *a1,
        unsigned int a2,
        char a3,
        unsigned __int8 a4)
{
  __int64 v5; // rsi
  VIDMM_PAGE_TABLE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  VIDMM_PAGE_TABLE *v12; // rbx
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 v19; // rax

  v5 = a2;
  v8 = (VIDMM_PAGE_TABLE *)operator new[](0x20uLL, 0x33356956u, PagedPool);
  v12 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *((_OWORD *)v8 + 1) = 0LL;
    *(_DWORD *)v8 = (v5 & 0x1F) << 7;
  }
  else
  {
    v12 = 0LL;
  }
  if ( v12 )
  {
    v13 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 40216LL) + 1584 * v5 + 76) >> 4;
    if ( !a3 )
      v13 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 40216LL) + 1584 * v5 + 76);
    if ( (int)VIDMM_PAGE_TABLE::InitializePageTable(v12, a1, v13, a3, a4) >= 0 )
      return v12;
    v19 = WdLogNewEntry5_WdAssertion(v15, v14, v16);
    *(_QWORD *)(v19 + 24) = 4109LL;
    WdLogEvent5_WdAssertion(v19);
    VIDMM_PAGE_TABLE::DestroyPageTable((struct VIDMM_ALLOC **)v12, a1, 0LL);
  }
  else
  {
    v18 = WdLogNewEntry5_WdAssertion(v10, v9, v11);
    *(_QWORD *)(v18 + 24) = 4094LL;
    WdLogEvent5_WdAssertion(v18);
  }
  return 0LL;
}
