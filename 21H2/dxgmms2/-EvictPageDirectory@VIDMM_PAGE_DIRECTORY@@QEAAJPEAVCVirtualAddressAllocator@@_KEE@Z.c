/*
 * XREFs of ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0088410
 * Callers:
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C0023994 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00705F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0088250 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0088410 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C00148E0 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ExFreeToPagedLookasideList @ 0x1C00260FC (ExFreeToPagedLookasideList.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C0070430 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C0071CF0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0072B4C (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C0075FFC (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0088410 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C0088E20 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::EvictPageDirectory(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        char a5)
{
  unsigned __int64 v5; // r12
  int *v8; // rcx
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rbx
  unsigned int v14; // r14d
  unsigned __int64 v15; // r15
  char *v16; // rdx
  __int64 v17; // r12
  unsigned int v18; // r10d
  struct VIDMM_ALLOC *v19; // rax
  struct VIDMM_ALLOC *v20; // rax
  __int64 v21; // rdx
  int v22; // r8d
  struct VIDMM_ALLOC *v23; // rax
  __int64 v24; // r8
  VIDMM_PAGE_TABLE *v25; // r10
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  enum _DXGK_PAGETABLEUPDATEMODE v31; // eax
  void *v32; // rbx
  __int64 v33; // r8
  VIDMM_PAGE_DIRECTORY *v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // [rsp+90h] [rbp-68h] BYREF
  void *v37; // [rsp+98h] [rbp-60h] BYREF
  unsigned __int64 v38; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-50h]
  __int64 v40; // [rsp+B0h] [rbp-48h]
  __int64 v41; // [rsp+B8h] [rbp-40h]

  v5 = a3;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) )
    return 0LL;
  v9 = *v8;
  v10 = *((_QWORD *)a2 + 11);
  v11 = ((unsigned int)*v8 >> 7) & 0x1F;
  v12 = *v8 & 7;
  v13 = *(_QWORD *)(v10 + 40216) + 1584 * v11;
  v41 = v13;
  if ( (v9 & 0x10) != 0 )
    v14 = *(_DWORD *)(32 * v11 + *((_QWORD *)a2 + 15) + 16);
  else
    v14 = *(_DWORD *)(v13 + 48 * v12 + 88);
  v15 = v5;
  v40 = *(_QWORD *)(v13 + 48 * v12 + 128);
  if ( v14 )
  {
    v16 = 0LL;
    v17 = 0LL;
    v37 = 0LL;
    v18 = v14;
    v38 = v14;
    v36 = v14;
    while ( !a4 )
    {
LABEL_13:
      *(_QWORD *)((char *)this[5] + (_QWORD)v16) = 0LL;
      if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
        *((_QWORD *)this[5] + 2 * v18) = 0LL;
      v15 += v40;
      ++v18;
      v16 += 16;
      v36 = v18;
      v17 += 8LL;
      v37 = v16;
      if ( !--v38 )
      {
        v13 = v41;
        v5 = a3;
        goto LABEL_17;
      }
    }
    if ( (*(_DWORD *)this & 0x20) != 0 )
    {
      v19 = this[6];
      if ( *(_QWORD *)((char *)v19 + v17) )
      {
        if ( (*(_DWORD *)((_BYTE *)this[5] + (_QWORD)v16) & 0x400) != 0 )
        {
          ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v10 + 40256), *(PVOID *)((char *)v19 + v17));
          *(_QWORD *)((char *)this[6] + v17) = 0LL;
        }
        else
        {
          VIDMM_PAGE_TABLE::EvictPageTable(*(VIDMM_PAGE_TABLE **)((char *)v19 + v17), a2, v15, a5);
        }
        v16 = (char *)v37;
      }
      if ( (*(_DWORD *)this & 0x1000) == 0 )
        goto LABEL_12;
      v20 = this[5];
      v21 = 8LL * v36;
      v39 = v21;
      v22 = *((_DWORD *)v20 + 4 * v36);
      v23 = this[6];
      v24 = v22 & 0x400;
      v25 = *(VIDMM_PAGE_TABLE **)((char *)v23 + v21);
      if ( v25 )
      {
        if ( v24 )
        {
          ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v10 + 40256), *(PVOID *)((char *)v23 + v21));
          *(_QWORD *)((char *)this[6] + v39) = 0LL;
        }
        else
        {
          VIDMM_PAGE_TABLE::EvictPageTable(v25, a2, v15, a5);
        }
      }
    }
    else
    {
      v34 = *(VIDMM_PAGE_DIRECTORY **)((char *)this[6] + v17);
      if ( !v34 )
        goto LABEL_13;
      VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v34, a2, v15, a4, a5);
    }
    v16 = (char *)v37;
LABEL_12:
    v18 = v36;
    goto LABEL_13;
  }
LABEL_17:
  if ( (**(_DWORD **)(v13 + 440) & 8) == 0 || !a5 )
  {
LABEL_18:
    *((_DWORD *)this[2] + 19) |= 0x100000u;
    *((_BYTE *)this[2] + 89) = 0;
    VIDMM_GLOBAL::EvictOneAllocation((struct VIDMM_ALLOC **)v10, this[3], 0LL);
    *((_DWORD *)this[2] + 19) &= ~0x100000u;
    return 0LL;
  }
  v36 = 0;
  v38 = 0LL;
  v37 = 0LL;
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress((VIDMM_PAGE_TABLE_BASE *)this, a2, &v36, &v38, &v37) >= 0 )
  {
    if ( (*(_BYTE *)(v10 + 40936) & 0x10) != 0 )
      v31 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v31 = (__int16)*(_DWORD *)this >> 13;
    v32 = (void *)v38;
    VIDMM_GLOBAL::UpdatePageTable(
      (VIDMM_GLOBAL *)v10,
      *(_DWORD *)this & 7,
      *((struct VIDMM_PROCESS **)a2 + 12),
      0LL,
      0LL,
      0LL,
      0LL,
      0,
      v14,
      0LL,
      0LL,
      (*(_DWORD *)this >> 7) & 0x1F,
      v36,
      v38,
      v31,
      v5,
      (DXGK_UPDATEPAGETABLEFLAGS)4,
      0LL);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress((VIDMM_PAGE_TABLE_BASE *)this, a2, v33, v32, v37);
    goto LABEL_18;
  }
  v35 = WdLogNewEntry5_WdError(v28, v27, v29, v30);
  *(_QWORD *)(v35 + 24) = 7047LL;
  WdLogEvent5_WdError(v35);
  return 3221225473LL;
}
