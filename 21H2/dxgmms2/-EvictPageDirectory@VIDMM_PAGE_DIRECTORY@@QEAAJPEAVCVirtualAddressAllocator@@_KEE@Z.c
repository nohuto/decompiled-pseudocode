/*
 * XREFs of ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C00A0030
 * Callers:
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C002DBF4 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008AF00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C009E880 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C00A0030 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 * Callees:
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x1C0014DA8 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ExFreeToPagedLookasideList @ 0x1C001E5D2 (ExFreeToPagedLookasideList.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C008C800 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C008CDE0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C00A0030 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C00A0738 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00A0810 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C00A1C58 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::EvictPageDirectory(
        struct VIDMM_ALLOC **this,
        struct VIDMM_PROCESS **a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        char a5)
{
  unsigned __int64 v5; // rdi
  unsigned int *v7; // rcx
  unsigned __int8 v8; // r9
  struct VIDMM_PROCESS **v9; // r11
  unsigned int v10; // ecx
  unsigned __int64 v11; // r14
  __int64 v12; // r8
  _DWORD **v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r12
  __int64 v16; // r15
  unsigned __int64 v17; // rbp
  _DWORD *v18; // r13
  unsigned int v19; // esi
  __int64 v20; // rdi
  struct VIDMM_ALLOC *v21; // rax
  void *v22; // r10
  __int64 v23; // r14
  __int64 v24; // r10
  VIDMM_PAGE_DIRECTORY *v26; // rcx
  enum _DXGK_PAGETABLEUPDATEMODE v27; // eax
  unsigned __int64 v28; // rdi
  unsigned int v29; // r8d
  unsigned __int64 v30; // [rsp+78h] [rbp-70h]
  unsigned int v31; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+98h] [rbp-50h] BYREF
  void *v33; // [rsp+A0h] [rbp-48h] BYREF

  v5 = a3;
  if ( !VIDMM_PAGE_TABLE_BASE::IsResident((VIDMM_PAGE_TABLE_BASE *)this) )
    return 0LL;
  v10 = *v7;
  v11 = (unsigned __int64)v9[11];
  v12 = (v10 >> 7) & 0x1F;
  v13 = (_DWORD **)(*(_QWORD *)(v11 + 40224) + 1584 * v12);
  v32 = v11;
  v33 = v13;
  if ( (v10 & 0x10) != 0 )
  {
    v14 = v10 & 7;
    v15 = *((unsigned int *)v9[15] + 8 * v12 + 4);
  }
  else
  {
    v14 = v10 & 7;
    v15 = LODWORD(v13[6 * v14 + 11]);
  }
  v31 = v15;
  v16 = 0LL;
  v17 = v5;
  v18 = v13[6 * v14 + 16];
  if ( (_DWORD)v15 )
  {
    v19 = v15;
    v20 = 0LL;
    while ( 1 )
    {
      if ( !v8 )
        goto LABEL_13;
      v21 = this[6];
      if ( (*(_DWORD *)this & 0x20) != 0 )
        break;
      v26 = *(VIDMM_PAGE_DIRECTORY **)((char *)v21 + v16);
      if ( v26 )
      {
        VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v26, (struct CVirtualAddressAllocator *)v9, v17, v8, a5);
LABEL_36:
        v8 = a4;
        v9 = a2;
      }
LABEL_13:
      *(_QWORD *)((char *)this[5] + v20) = 0LL;
      if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
        *((_QWORD *)this[5] + 2 * v19) = 0LL;
      v11 = v32;
      v17 += (unsigned __int64)v18;
      ++v19;
      v16 += 8LL;
      v20 += 16LL;
      if ( !--v15 )
      {
        v13 = (_DWORD **)v33;
        LODWORD(v15) = v31;
        v5 = a3;
        goto LABEL_17;
      }
    }
    v22 = *(void **)((char *)v21 + v16);
    if ( (*(_DWORD *)((_BYTE *)this[5] + v20) & 0x400LL) != 0 )
    {
      if ( !v22 )
        goto LABEL_10;
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v11 + 40256), v22);
      *(_QWORD *)((char *)this[6] + v16) = 0LL;
    }
    else
    {
      if ( !v22 )
        goto LABEL_10;
      VIDMM_PAGE_TABLE::EvictPageTable((VIDMM_PAGE_TABLE *)v22, (struct CVirtualAddressAllocator *)v9, v17, a5);
    }
    v9 = a2;
    v8 = a4;
LABEL_10:
    if ( (*(_DWORD *)this & 0x1000) != 0 )
    {
      v23 = 8LL * v19;
      v24 = *(_QWORD *)((char *)this[6] + v23);
      if ( (*((_DWORD *)this[5] + 4 * v19) & 0x400LL) != 0 )
      {
        if ( v24 )
        {
          ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v32 + 40256), *(PVOID *)((char *)this[6] + v23));
          *(_QWORD *)((char *)this[6] + v23) = 0LL;
          goto LABEL_36;
        }
      }
      else if ( v24 )
      {
        VIDMM_PAGE_TABLE::EvictPageTable(
          *(VIDMM_PAGE_TABLE **)((char *)this[6] + v23),
          (struct CVirtualAddressAllocator *)v9,
          v17,
          a5);
        goto LABEL_36;
      }
    }
    goto LABEL_13;
  }
LABEL_17:
  if ( (*v13[55] & 8) == 0 || !a5 )
  {
LABEL_18:
    *((_DWORD *)this[2] + 17) |= 0x200000u;
    *((_BYTE *)this[2] + 82) = 0;
    VIDMM_GLOBAL::EvictOneAllocation((VIDMM_GLOBAL *)v11, this[3], 0);
    *((_DWORD *)this[2] + 17) &= ~0x200000u;
    return 0LL;
  }
  v31 = 0;
  v32 = 0LL;
  v33 = 0LL;
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
              (VIDMM_PAGE_TABLE_BASE *)this,
              (struct CVirtualAddressAllocator *)v9,
              &v31,
              &v32,
              &v33) >= 0 )
  {
    if ( (*(_BYTE *)(v11 + 40936) & 0x10) != 0 )
      v27 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v27 = (__int16)*(_DWORD *)this >> 13;
    v30 = v5;
    v28 = v32;
    VIDMM_GLOBAL::UpdatePageTable(
      (VIDMM_GLOBAL *)v11,
      *(_DWORD *)this & 7,
      a2[12],
      0LL,
      0LL,
      0LL,
      0LL,
      0,
      v15,
      0LL,
      0LL,
      (*(_DWORD *)this >> 7) & 0x1F,
      v31,
      v32,
      v27,
      v30,
      (DXGK_UPDATEPAGETABLEFLAGS)4,
      0LL);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
      (VIDMM_PAGE_TABLE_BASE *)this,
      (struct CVirtualAddressAllocator *)a2,
      v29,
      v28,
      v33);
    goto LABEL_18;
  }
  WdLogSingleEntry1(2LL, 6602LL);
  return 3221225473LL;
}
