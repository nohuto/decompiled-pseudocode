/*
 * XREFs of ?DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1C00A6DEC
 * Callers:
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1C00A6D04 (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 * Callees:
 *     ExFreeToPagedLookasideList @ 0x1C001E5D2 (ExFreeToPagedLookasideList.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi

  v4 = *((_QWORD *)this + 5);
  v5 = 2LL * a3;
  v6 = a3;
  if ( (*(_DWORD *)(v4 + 16LL * a3) & 0x402) == 0x400LL )
  {
    ExFreeToPagedLookasideList(
      (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 11) + 40256LL),
      *(PVOID *)(*((_QWORD *)this + 6) + 8LL * a3));
    *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v6) = 0LL;
    v4 = *((_QWORD *)this + 5);
  }
  *(_QWORD *)(v4 + 8 * v5) = 0LL;
  *(_QWORD *)(v4 + 8 * v5 + 8) = 0LL;
  --*((_DWORD *)this + 1);
}
