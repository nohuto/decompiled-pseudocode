/*
 * XREFs of ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005EFB0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0071A50 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C00010A8 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016B50 (_guard_dispatch_icall_nop.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@I_K@Z @ 0x1C006FFC0 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitPageDirectory(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        struct VIDMM_ALLOC **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  bool v10; // cf
  __int64 result; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  char v14; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( VIDMM_PAGE_TABLE_BASE::IsResident(this) )
    return 0LL;
  v7 = *(_QWORD *)(v5 + 8);
  if ( !v7 )
    return 0LL;
  v8 = *((_QWORD *)a2 + 11);
  *(_BYTE *)(v7 + 89) = 0;
  v9 = *((_QWORD *)this + 2);
  v10 = (*((_DWORD *)a2 + 36) & 4) != 0;
  v14 = 0;
  result = VIDMM_GLOBAL::PageInOneAllocation(v8, v9, v10 ? 0 : 7, 0LL, &v14, v6, 0, -1LL);
  if ( v14 )
    result = 3221226029LL;
  if ( (int)result >= 0 )
  {
    v12 = *((_QWORD *)this + 1);
    if ( (*(_DWORD *)(*(_QWORD *)(v12 + 128) + 80LL) & 0x1000) != 0 )
      *(_QWORD *)(*((_QWORD *)this + 1) + 136LL) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v12 + 96) + 8LL) + 24LL)
                                                                                             + 104LL))(
                                                     *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 96) + 8LL) + 24LL),
                                                     *(_QWORD *)(*(_QWORD *)(v12 + 96) + 24LL));
    v13 = *(unsigned int *)this;
    if ( (v13 & 0x10) != 0 )
      ++*(_QWORD *)(32 * ((v13 >> 7) & 0x1F) + *((_QWORD *)a2 + 15) + 8);
    return 0LL;
  }
  return result;
}
