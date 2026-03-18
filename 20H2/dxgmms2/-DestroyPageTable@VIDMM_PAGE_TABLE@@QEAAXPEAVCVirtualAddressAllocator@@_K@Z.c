/*
 * XREFs of ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C006A598
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007B170 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CheckPageTableInvalid@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1C007E73C (-CheckPageTableInvalid@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@I_K@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0080A14 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0083D0C (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1C0087A90 (-DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BDB38 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0017740 (__security_check_cookie.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C006A68C (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0073180 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1C0073C90 (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAU_VIDMM_LOCAL_ALLOC@@EU_D3DDDICB_D.c)
 */

void __fastcall VIDMM_PAGE_TABLE::DestroyPageTable(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3)
{
  VIDMM_GLOBAL *v3; // rdi
  PRKPROCESS *v6; // rcx
  struct _VIDMM_GLOBAL_ALLOC *v7; // r8
  struct VIDMM_ALLOC *v8; // rcx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  v3 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  VIDMM_PAGE_TABLE::EvictPageTable((VIDMM_PAGE_TABLE *)this, a2, a3, 1u);
  if ( this[2] )
  {
    v6 = (PRKPROCESS *)*((_QWORD *)a2 + 12);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*v6, &ApcState);
    VIDMM_GLOBAL::CloseOneAllocation(v3, this[2], 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
    KeUnstackDetachProcess(&ApcState);
    this[2] = 0LL;
  }
  v7 = this[1];
  if ( v7 )
  {
    VIDMM_GLOBAL::DestroyOneAllocation(v3, 0LL, v7, 0);
    this[1] = 0LL;
  }
  v8 = this[3];
  if ( v8 )
  {
    operator delete(v8);
    this[3] = 0LL;
  }
  operator delete(this);
}
