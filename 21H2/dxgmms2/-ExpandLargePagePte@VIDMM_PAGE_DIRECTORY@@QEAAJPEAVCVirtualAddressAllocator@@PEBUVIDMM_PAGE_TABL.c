/*
 * XREFs of ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BCCD8
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00705F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015054 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ExFreeToPagedLookasideList @ 0x1C00260FC (ExFreeToPagedLookasideList.c)
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005FBB0 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0072D68 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0088D2C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0088FCC (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C008A4C8 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct VIDMM_PAGE_TABLE_LEVEL_DESC *a3,
        char a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct VIDMM_ALLOC **a7)
{
  __int64 v12; // rbx
  __int64 v13; // rdx
  unsigned __int64 v14; // rbp
  __int64 v15; // r11
  int v16; // r9d
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int8 v19; // bl
  __int64 VidMmGlobalAllocFromOwner; // rax
  char v21; // r9
  unsigned int v22; // r10d
  __int64 v23; // r11
  char v24; // r9
  __int64 v25; // rcx
  struct VIDMM_ALLOC **PageTable; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // ebp
  __int64 v31; // rax
  __int64 v32; // [rsp+50h] [rbp-88h]
  _QWORD v33[10]; // [rsp+60h] [rbp-78h] BYREF

  if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() )
    return VIDMM_PAGE_DIRECTORY::ExpandLargePagePteWithFix(this, a2, a3, a4, a5, a6, a7);
  v32 = 8LL * a6;
  v12 = *(_QWORD *)(v32 + *((_QWORD *)this + 6));
  memset(v33, 0, 0x48uLL);
  v13 = *(_QWORD *)v12;
  v14 = 0LL;
  v15 = *((_QWORD *)this + 5);
  v16 = *(_DWORD *)this >> 6;
  LODWORD(v33[6]) = *(_DWORD *)(v12 + 8);
  v17 = *(_QWORD *)(v15 + 16LL * a6);
  v33[5] = v13;
  v33[0] = v17 & 0xFFFFFFFFFFFFFBFFuLL;
  v18 = *(_QWORD *)(v12 + 16);
  HIDWORD(v33[6]) = (v17 >> 5) & 0x1F;
  v19 = v16 & 1;
  LOBYTE(v33[7]) = v16 & 1;
  v33[2] = v18;
  BYTE1(v33[7]) = a4;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v33[6], v13);
  if ( VidMmGlobalAllocFromOwner )
    v14 = (*(_QWORD *)(v23 + 16LL * a6 + 8) << 12) - *(_QWORD *)(VidMmGlobalAllocFromOwner + 136);
  v24 = (v21 & 1) != 0 && !a4;
  PageTable = (struct VIDMM_ALLOC **)CreatePageTable(a2, (v22 >> 7) & 0x1F, v19, v24);
  if ( PageTable )
  {
    v30 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
            (VIDMM_PAGE_TABLE *)PageTable,
            (struct VIDMM_GLOBAL **)a2,
            (const struct COMMIT_VA_STATE *)v33,
            v14,
            a5,
            *((struct VIDMM_GLOBAL **)a3 + 5),
            *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6 + 8) << 12,
            0,
            a7);
    if ( v30 >= 0 )
    {
      ExFreeToPagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 11) + 40256LL),
        *(PVOID *)(v32 + *((_QWORD *)this + 6)));
      *(_QWORD *)(v32 + *((_QWORD *)this + 6)) = 0LL;
      *(_QWORD *)(v32 + *((_QWORD *)this + 6)) = PageTable;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) &= ~0x400uLL;
      VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, a6);
      return 0LL;
    }
    else
    {
      v31 = WdLogNewEntry5_WdWarning(v29, v28);
      WdLogEvent5_WdWarning(v31);
      if ( *a7 == PageTable[3] )
        *a7 = (struct VIDMM_ALLOC *)*((_QWORD *)this + 3);
      VIDMM_PAGE_TABLE::DestroyPageTable((struct _KEVENT **)PageTable, a2, a5);
      return (unsigned int)v30;
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1C00507AC);
    v27 = WdLogNewEntry5_WdLowResource(v25);
    *(_QWORD *)(v27 + 24) = 5335LL;
    WdLogEvent5_WdLowResource(v27);
    return 3221225495LL;
  }
}
