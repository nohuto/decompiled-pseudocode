/*
 * XREFs of ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C007AE28
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007D618 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C007AFB8 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C007C5A0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C007D3FC (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UpdatePageTable(
        VIDMM_PAGE_TABLE_BASE *a1,
        VIDMM_GLOBAL **a2,
        __int64 a3,
        struct _VIDMM_GLOBAL_ALLOC ***a4,
        unsigned __int64 a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned __int64 a9,
        struct _DXGK_UPDATEPAGETABLEFLAGS a10)
{
  VIDMM_GLOBAL *v10; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct VIDMM_ALLOC *v19; // rbp
  struct _VIDMM_GLOBAL_ALLOC *v20; // rdx
  enum _DXGK_PAGETABLEUPDATEMODE v21; // ecx
  unsigned __int64 v22; // rbx
  unsigned int v23; // r8d
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+90h] [rbp-28h] BYREF
  void *v27; // [rsp+98h] [rbp-20h] BYREF
  unsigned int v28; // [rsp+C8h] [rbp+10h] BYREF

  v10 = a2[11];
  v28 = 0;
  v26 = 0LL;
  v27 = 0LL;
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(a1, (struct CVirtualAddressAllocator *)a2, &v28, &v26, &v27) < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v16, v15, v17, v18);
    *(_QWORD *)(v25 + 24) = 3823LL;
    WdLogEvent5_WdError(v25);
    return 3221225473LL;
  }
  else
  {
    v19 = 0LL;
    if ( a6 == 1 )
    {
      v19 = (struct VIDMM_ALLOC *)a4;
      v20 = **a4;
    }
    else
    {
      v20 = 0LL;
      if ( a6 == 3 )
        v20 = (struct _VIDMM_GLOBAL_ALLOC *)a4;
    }
    if ( (*((_BYTE *)v10 + 40936) & 0x10) != 0 )
      v21 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v21 = (__int16)*(_DWORD *)a1 >> 13;
    v22 = v26;
    VIDMM_GLOBAL::UpdatePageTable(
      v10,
      *(_DWORD *)a1 & 7,
      a2[12],
      *(_QWORD *)(a3 + 16),
      v19,
      v20,
      a5,
      a7,
      a8,
      (struct _DXGK_PTE *)(*((_QWORD *)a1 + 3) + 16LL * a7),
      0LL,
      (*(_DWORD *)a1 >> 7) & 0x1F,
      v28,
      v26,
      v21,
      a9,
      a10,
      *(_QWORD *)(a3 + 64));
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(a1, (struct CVirtualAddressAllocator *)a2, v23, v22, v27);
    return 0LL;
  }
}
