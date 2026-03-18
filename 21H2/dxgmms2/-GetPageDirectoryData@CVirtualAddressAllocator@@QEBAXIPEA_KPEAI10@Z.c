/*
 * XREFs of ?GetPageDirectoryData@CVirtualAddressAllocator@@QEBAXIPEA_KPEAI10@Z @ 0x1C00B853C
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C00B79C0 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z @ 0x1C00DFC84 (-GetPageDirectoryData@VIDMM_PROCESS@@QEAAXKIPEA_KPEAI10@Z.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C0014DA8 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall CVirtualAddressAllocator::GetPageDirectoryData(
        CVirtualAddressAllocator *this,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned int *a4,
        unsigned int *a5,
        unsigned __int64 *a6)
{
  __int64 v7; // rdi
  VIDMM_PAGE_TABLE_BASE **v8; // r10
  __int64 v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r10
  __int64 v12; // rcx

  v7 = a2;
  v8 = (VIDMM_PAGE_TABLE_BASE **)(*((_QWORD *)this + 15) + 32LL * a2);
  if ( v8 && *v8 && VIDMM_PAGE_TABLE_BASE::IsResident(*v8) )
  {
    *v10 = *(_QWORD *)(v11 + 8);
    *a4 = *(_DWORD *)(v11 + 16);
    *a6 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 128LL);
    *a5 = *(_DWORD *)(v11 + 24);
  }
  else
  {
    *a4 = 0;
    *a6 = 0LL;
    *a5 = 0;
    WdLogSingleEntry2(1LL, this, v7);
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
  }
}
