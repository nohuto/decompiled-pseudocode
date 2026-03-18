/*
 * XREFs of ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C00BE644
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00959E0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z @ 0x1C00BB6AC (-GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C00010A8 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 */

void __fastcall CVirtualAddressAllocator::GetPageDirectoryData(
        CVirtualAddressAllocator *this,
        __int64 a2,
        unsigned __int64 *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v6; // r11
  CVirtualAddressAllocator *v7; // rbx
  __int64 v8; // rdi
  CVirtualAddressAllocator **v9; // r10
  __int64 v10; // r10
  __int64 v11; // rax

  v6 = 0LL;
  v7 = this;
  v8 = (unsigned int)a2;
  v9 = (CVirtualAddressAllocator **)(*((_QWORD *)this + 15) + 32LL * (unsigned int)a2);
  if ( v9 && (this = *v9) != 0LL && VIDMM_PAGE_TABLE_BASE::IsResident(this) )
  {
    *a3 = *(_QWORD *)(v10 + 8);
    *a4 = *(_DWORD *)(v10 + 16);
    *a6 = *(_QWORD *)(*((_QWORD *)this + 1) + 136LL);
    *a5 = *(_DWORD *)(v10 + 24);
  }
  else
  {
    *a4 = v6;
    *a6 = v6;
    *a5 = v6;
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v11 + 24) = v7;
    *(_QWORD *)(v11 + 32) = v8;
    WdLogEvent5_WdAssertion(v11);
  }
}
