/*
 * XREFs of ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00807D0
 * Callers:
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C006A68C (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007D618 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C007AFB8 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C007C5A0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C007D3FC (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        UINT a3,
        unsigned int a4,
        unsigned __int64 a5,
        DXGK_UPDATEPAGETABLEFLAGS a6)
{
  VIDMM_GLOBAL *v6; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  enum _DXGK_PAGETABLEUPDATEMODE v15; // ecx
  void *v16; // rbx
  __int64 v17; // r8
  __int64 v19; // rax
  void *v20; // [rsp+90h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+D8h] [rbp+10h] BYREF

  v6 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  v21 = 0;
  v22 = 0LL;
  v20 = 0LL;
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(this, a2, &v21, &v22, &v20) < 0 )
  {
    v19 = WdLogNewEntry5_WdError(v12, v11, v13, v14);
    *(_QWORD *)(v19 + 24) = 3754LL;
    WdLogEvent5_WdError(v19);
    return 3221225473LL;
  }
  else
  {
    if ( (*((_BYTE *)v6 + 40936) & 0x10) != 0 )
      v15 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v15 = (__int16)*(_DWORD *)this >> 13;
    v16 = (void *)v22;
    VIDMM_GLOBAL::UpdatePageTable(
      v6,
      *(_DWORD *)this & 7,
      *((struct VIDMM_PROCESS **)a2 + 12),
      0LL,
      0LL,
      0LL,
      0LL,
      a3,
      a4,
      0LL,
      0LL,
      (*(_DWORD *)this >> 7) & 0x1F,
      v21,
      v22,
      v15,
      a5,
      a6,
      0LL);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(this, a2, v17, v16, v20);
    return 0LL;
  }
}
