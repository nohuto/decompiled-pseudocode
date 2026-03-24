/*
 * XREFs of ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005FBB0
 * Callers:
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BCCD8 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015054 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ExFreeToPagedLookasideList @ 0x1C00260FC (ExFreeToPagedLookasideList.c)
 *     ?EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005FB4C (-EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0072D68 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0088D2C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0088FCC (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C008A4C8 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::ExpandLargePagePteWithFix(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct VIDMM_PAGE_TABLE_LEVEL_DESC *a3,
        char a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct VIDMM_ALLOC **a7)
{
  unsigned int v8; // edx
  unsigned __int8 v10; // r9
  VIDMM_PAGE_TABLE *PageTable; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  VIDMM_PAGE_TABLE *v14; // r15
  __int64 v15; // rax
  int v16; // edi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // r10
  unsigned __int64 v28; // rax
  __int64 v29; // r8
  __int64 VidMmGlobalAllocFromOwner; // rax
  unsigned __int64 v31; // r9
  __int64 v32; // r10
  __int64 v33; // rcx
  unsigned int v34; // r8d
  _QWORD v36[16]; // [rsp+58h] [rbp-41h] BYREF
  struct VIDMM_ALLOC *v37; // [rsp+E8h] [rbp+4Fh] BYREF
  const struct VIDMM_PAGE_TABLE_LEVEL_DESC *v38; // [rsp+F8h] [rbp+5Fh]
  char v39; // [rsp+100h] [rbp+67h]

  v39 = a4;
  v38 = a3;
  ++*((_DWORD *)this + 1);
  v8 = *(_DWORD *)this;
  v37 = 0LL;
  v10 = (v8 & 0x40) != 0 && !a4;
  PageTable = CreatePageTable(a2, (v8 >> 7) & 0x1F, (v8 & 0x40) != 0, v10);
  v14 = PageTable;
  if ( !PageTable )
  {
    _InterlockedIncrement(&dword_1C00507AC);
    v15 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v15 + 24) = 5403LL;
    WdLogEvent5_WdLowResource(v15);
    v16 = -1073741801;
    goto LABEL_17;
  }
  v17 = VIDMM_PAGE_TABLE::EnsureResident(PageTable, a2, v13, &v37);
  v20 = a5;
  v16 = v17;
  if ( v17 < 0 )
    goto LABEL_8;
  v22 = *((_QWORD *)this + 6);
  v23 = a6;
  v24 = *(_QWORD *)(v22 + 8LL * a6);
  if ( !v24 )
  {
LABEL_14:
    v34 = a6;
    *(_QWORD *)(v22 + 8 * v23) = v14;
    VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, v34);
    v16 = 0;
    goto LABEL_15;
  }
  memset(v36, 0, 0x48uLL);
  v25 = *(_QWORD *)v24;
  v26 = 2LL * a6;
  v27 = *((_QWORD *)this + 5);
  LODWORD(v36[6]) = *(_DWORD *)(v24 + 8);
  v36[5] = v25;
  v28 = *(_QWORD *)(v27 + 16LL * a6);
  v29 = (v28 >> 5) & 0x1F;
  v36[0] = v28 & 0xFFFFFFFFFFFFFBFFuLL;
  v36[2] = *(_QWORD *)(v24 + 16);
  BYTE1(v36[7]) = v39;
  LOBYTE(v28) = (*(_DWORD *)this & 0x40) != 0;
  HIDWORD(v36[6]) = v29;
  LOBYTE(v36[7]) = v28;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v36[6], v25);
  v33 = *(_QWORD *)(v32 + 8 * v26 + 8);
  if ( VidMmGlobalAllocFromOwner )
    v31 = (v33 << 12) - *(_QWORD *)(VidMmGlobalAllocFromOwner + 136);
  v16 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
          v14,
          a2,
          (const struct COMMIT_VA_STATE *)v36,
          v31,
          v20,
          *((struct VIDMM_GLOBAL **)v38 + 5),
          v33 << 12,
          0,
          &v37);
  if ( v16 >= 0 )
  {
    ExFreeToPagedLookasideList(
      (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 11) + 40256LL),
      *(PVOID *)(*((_QWORD *)this + 6) + 8 * v23));
    *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v23) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v26) &= ~0x400uLL;
    v22 = *((_QWORD *)this + 6);
    goto LABEL_14;
  }
LABEL_8:
  v21 = WdLogNewEntry5_WdWarning(v19, v18);
  WdLogEvent5_WdWarning(v21);
LABEL_15:
  if ( v16 >= 0 )
    goto LABEL_19;
  VIDMM_PAGE_TABLE::DestroyPageTable(v14, a2, v20);
LABEL_17:
  if ( v37 )
    *a7 = (struct VIDMM_ALLOC *)*((_QWORD *)this + 3);
LABEL_19:
  --*((_DWORD *)this + 1);
  return (unsigned int)v16;
}
