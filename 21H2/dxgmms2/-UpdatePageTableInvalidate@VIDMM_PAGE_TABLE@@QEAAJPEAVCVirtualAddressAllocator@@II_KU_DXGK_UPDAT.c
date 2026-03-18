/*
 * XREFs of ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00A1B20
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008CEB0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C00A0738 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 * Callees:
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C008C800 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C008CDE0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C00A1C58 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        UINT a3,
        LONG a4,
        unsigned __int64 a5,
        DXGK_UPDATEPAGETABLEFLAGS a6)
{
  VIDMM_GLOBAL *v6; // rbp
  enum _DXGK_PAGETABLEUPDATEMODE v11; // ecx
  unsigned __int64 v12; // rbx
  unsigned int v13; // r8d
  void *v15; // [rsp+90h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+D8h] [rbp+10h] BYREF

  v6 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  v16 = 0;
  v17 = 0LL;
  v15 = 0LL;
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(this, a2, &v16, &v17, &v15) < 0 )
  {
    WdLogSingleEntry1(2LL, 3883LL);
    return 3221225473LL;
  }
  else
  {
    if ( (*((_BYTE *)v6 + 40936) & 0x10) != 0 )
      v11 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v11 = (__int16)*(_DWORD *)this >> 13;
    v12 = v17;
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
      v16,
      v17,
      v11,
      a5,
      a6,
      0LL);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(this, a2, v13, v12, v15);
    return 0LL;
  }
}
