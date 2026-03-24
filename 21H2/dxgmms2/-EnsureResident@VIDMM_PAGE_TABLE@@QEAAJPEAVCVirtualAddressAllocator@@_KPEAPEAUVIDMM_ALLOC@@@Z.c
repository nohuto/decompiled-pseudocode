/*
 * XREFs of ?EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005FB4C
 * Callers:
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005FBB0 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0072D68 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C00148E0 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0088EF8 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::EnsureResident(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        __int64 a3,
        struct VIDMM_ALLOC **a4)
{
  VIDMM_PAGE_TABLE *v5; // rcx
  struct VIDMM_ALLOC **v6; // r9
  struct CVirtualAddressAllocator *v7; // r10
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rax

  if ( !VIDMM_PAGE_TABLE_BASE::IsResident(this) )
  {
    v10 = VIDMM_PAGE_TABLE::CommitPageTable(v5, v7, v6);
    if ( v10 < 0 )
    {
      v11 = WdLogNewEntry5_WdWarning(v9, v8);
      WdLogEvent5_WdWarning(v11);
      return (unsigned int)v10;
    }
    *(_DWORD *)this &= ~0x10000u;
  }
  return 0LL;
}
