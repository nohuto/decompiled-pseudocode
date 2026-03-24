/*
 * XREFs of ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1C0088A58
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00705F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x1C00260B8 (ExAllocateFromPagedLookasideList.c)
 *     ?DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1C0088CA8 (-DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z.c)
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
  __int64 v12; // r9
  unsigned __int8 v13; // si
  char v14; // bl
  char v15; // r15
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  _DWORD *v26; // [rsp+68h] [rbp+10h]

  v12 = *((_QWORD *)a2 + 11);
  v13 = 0;
  v26 = 0LL;
  v14 = 0;
  v15 = 0;
  if ( (*(_QWORD *)a4 & 1) != 0 )
  {
    if ( (*(_QWORD *)a4 & 2) != 0 )
    {
      v13 = *(_BYTE *)(v12 + 40936) >> 7;
    }
    else if ( (*(_DWORD *)this & 0x20) != 0
           && *((_BYTE *)a4 + 59)
           && !*((_QWORD *)a4 + 8)
           && ((a3->Value & 0x100) != 0 || (((*((_QWORD *)a5 + 5) << 12) - 1LL) & a9) == 0) )
    {
      v26 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v12 + 40256));
      if ( v26 )
      {
        v14 = 1;
      }
      else
      {
        v20 = WdLogNewEntry5_WdWarning(v19, v18);
        WdLogEvent5_WdWarning(v20);
      }
    }
  }
  else
  {
    v15 = 1;
  }
  if ( !(v13 | (unsigned __int8)(v14 | v15)) )
    return 0;
  v21 = a8;
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * a6) & 1) != 0 )
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, a2, a6, a8);
    v21 = a8;
    *a10 = 1;
    *a11 = 1;
  }
  if ( a7 != a6 && (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * a7) & 1) != 0 )
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, a2, a7, v21);
    *a10 = 1;
    *a11 = 1;
  }
  if ( !v15 )
  {
    v22 = *((_QWORD *)this + 5);
    *a10 = 1;
    *(_QWORD *)(v22 + 16LL * a6) |= 1uLL;
    ++*((_DWORD *)this + 1);
    v23 = *((_QWORD *)this + 5);
    v24 = *(_QWORD *)(v23 + 16LL * a6);
    if ( v13 )
    {
      *(_QWORD *)(v23 + 16LL * a6) = v24 | 2;
    }
    else
    {
      *(_QWORD *)(v23 + 16LL * a6) = v24 | 0x400;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6 + 8) = a9 >> 12;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^ (32 * *((_DWORD *)a4 + 13))) & 0x3E0;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 8;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 0x10;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 4;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^= (*(_DWORD *)a4 ^ *(_DWORD *)(*((_QWORD *)this + 5) + 16LL * a6)) & 0x1F800;
      v26[2] = *((_DWORD *)a4 + 12);
      *(_QWORD *)v26 = *((_QWORD *)a4 + 5);
      *((_QWORD *)v26 + 2) = *((_QWORD *)a4 + 2);
      *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6) = v26;
    }
  }
  return 1;
}
