/*
 * XREFs of ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1C00A6D04
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008AF00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x1C0030178 (ExAllocateFromPagedLookasideList.c)
 *     ?DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1C00A6DEC (-DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z.c)
 */

unsigned __int8 __fastcall VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct _DXGK_GPUMMUCAPS *a3,
        const struct COMMIT_VA_STATE *a4,
        const struct VIDMM_PAGE_TABLE_LEVEL_DESC *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        unsigned __int8 *a10,
        unsigned __int8 *a11)
{
  char v12; // si
  unsigned __int64 v13; // r9
  char v14; // r15
  _DWORD *v15; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct CVirtualAddressAllocator *v21; // [rsp+58h] [rbp+10h]

  v21 = a2;
  v12 = 0;
  v13 = *((_QWORD *)a2 + 11);
  v14 = 0;
  v15 = 0LL;
  if ( (*(_QWORD *)a4 & 1) != 0 )
  {
    if ( (*(_QWORD *)a4 & 2) != 0 )
    {
      v12 = *(_BYTE *)(v13 + 40936) >> 7;
      if ( *(char *)(v13 + 40936) >= 0 )
        return 0;
    }
    else
    {
      if ( (*(_DWORD *)this & 0x20) == 0
        || !*((_BYTE *)a4 + 67)
        || (a3->Value & 0x100) == 0 && (((*((_QWORD *)a5 + 5) << 12) - 1LL) & a9) != 0 )
      {
        return 0;
      }
      v15 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v13 + 40256));
      if ( !v15 )
      {
        WdLogSingleEntry0(3LL);
        return 0;
      }
      a2 = v21;
    }
  }
  else
  {
    v14 = 1;
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * a6) & 1) != 0 )
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, a2, a6, v13);
    *a10 = 1;
    *a11 = 1;
  }
  if ( a7 != a6 && (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * a7) & 1) != 0 )
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, v21, a7, v13);
    *a10 = 1;
    *a11 = 1;
  }
  if ( !v14 )
  {
    v18 = *((_QWORD *)this + 5);
    *a10 = 1;
    *(_QWORD *)(v18 + 16LL * a6) |= 1uLL;
    ++*((_DWORD *)this + 1);
    v19 = *((_QWORD *)this + 5);
    v20 = *(_QWORD *)(v19 + 16LL * a6);
    if ( v12 )
    {
      *(_QWORD *)(v19 + 16LL * a6) = v20 | 2;
    }
    else
    {
      *(_QWORD *)(v19 + 16LL * a6) = v20 | 0x400;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6 + 8) = a9 >> 12;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^ (32 * *((_DWORD *)a4 + 15))) & 0x3E0;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 8;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 0x10;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 4;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 0x1F800;
      v15[2] = *((_DWORD *)a4 + 14);
      *(_QWORD *)v15 = *((_QWORD *)a4 + 6);
      *((_QWORD *)v15 + 2) = *((_QWORD *)a4 + 2);
      *((_QWORD *)v15 + 3) = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6);
      *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6) = v15;
    }
  }
  return 1;
}
