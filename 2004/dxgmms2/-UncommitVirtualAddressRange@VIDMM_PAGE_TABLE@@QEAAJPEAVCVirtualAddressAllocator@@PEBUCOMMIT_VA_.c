/*
 * XREFs of ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1C0072750
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0071A30 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C0072E60 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0073CBC (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C0073E40 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00B4074 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r12
  const struct COMMIT_VA_STATE *v6; // r11
  unsigned __int64 v9; // r10
  unsigned int v10; // r8d
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // r14d
  unsigned int v15; // r15d
  unsigned int v16; // r14d
  char v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  VIDMM_GLOBAL *v21; // rsi
  int v22; // edi
  int v23; // edi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  enum _DXGK_PAGETABLEUPDATEMODE v28; // eax
  void *v29; // rdi
  __int64 v30; // rdx
  int v31; // eax
  __int64 v33; // rsi
  __int64 v34; // rbp
  __int64 v35; // r8
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 *v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 **v46; // rax
  unsigned __int64 v47; // [rsp+30h] [rbp-A8h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v48; // [rsp+80h] [rbp-58h]
  void *v49; // [rsp+90h] [rbp-48h] BYREF
  void *v50; // [rsp+98h] [rbp-40h] BYREF
  unsigned int v52; // [rsp+F8h] [rbp+20h] BYREF

  v5 = a4;
  v6 = a3;
  if ( (a4 & 0xFFF) != 0 )
    return 3221225485LL;
  v9 = (a4 >> 12) + a5;
  if ( v9 <= a4 >> 12 )
    return 3221225485LL;
  v10 = *(_DWORD *)this;
  v11 = *((_QWORD *)a2 + 11);
  v12 = *((_QWORD *)this + 1);
  if ( v12 && *(_QWORD *)(v12 + 128) )
  {
    v13 = *(_DWORD *)(*(_QWORD *)(v11 + 40216) + 1584LL * ((v10 >> 7) & 0x1F) + 72);
    v14 = v13 & (v9 - 1);
    v15 = (a4 >> 12) & v13;
    if ( (v10 & 0x40) != 0 )
    {
      v15 >>= 4;
      v14 >>= 4;
      v5 = a4 & 0xFFFFFFFFFFFF0000uLL;
    }
    v16 = v14 - v15 + 1;
    if ( *(_QWORD *)(v11 + 41024) && v15 < v16 + v15 )
    {
      v33 = 16LL * v15;
      v34 = v16;
      do
      {
        v35 = *((_QWORD *)this + 3);
        v36 = *(_QWORD *)(v35 + v33);
        if ( (v36 & 1) != 0 )
          VIDMM_GLOBAL::RecordPageMappingHistory(v11, (v36 >> 5) & 0x1F, *(_QWORD *)(v35 + v33 + 8), 1LL, 1, 0LL, v47);
        v33 += 16LL;
        --v34;
      }
      while ( v34 );
      v6 = a3;
    }
    v17 = 0;
    if ( v15 < v16 + v15 )
    {
      v18 = 16LL * v15;
      v19 = v16;
      do
      {
        v20 = *((_QWORD *)this + 3);
        if ( (*(_BYTE *)(v20 + v18) & 1) != 0 )
        {
          --*((_DWORD *)this + 1);
          v17 = 1;
          *(_QWORD *)(v20 + v18) = 0LL;
          *(_QWORD *)(v18 + *((_QWORD *)this + 3) + 8) = 0LL;
        }
        v18 += 16LL;
        --v19;
      }
      while ( v19 );
      if ( v17 )
        *((_BYTE *)v6 + 61) = 1;
    }
    if ( *((_DWORD *)this + 1) || (*((_DWORD *)a2 + 36) & 4) != 0 )
    {
      v21 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
      v22 = *(_DWORD *)this >> 3;
      v52 = 0;
      v49 = 0LL;
      v23 = v22 & 8;
      v50 = 0LL;
      if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(this, a2, &v52, (unsigned __int64 *)&v49, &v50) < 0 )
      {
        v37 = WdLogNewEntry5_WdError(v25, v24, v26, v27);
        *(_QWORD *)(v37 + 24) = 3754LL;
        WdLogEvent5_WdError(v37);
        v41 = WdLogNewEntry5_WdAssertion(v39, v38, v40);
        *(_QWORD *)(v41 + 24) = 6360LL;
        WdLogEvent5_WdAssertion(v41);
        return 3221225473LL;
      }
      if ( (*((_BYTE *)v21 + 40936) & 0x10) != 0 )
        v28 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      else
        v28 = (__int16)*(_DWORD *)this >> 13;
      v48 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v23;
      v29 = v49;
      VIDMM_GLOBAL::UpdatePageTable(
        v21,
        *(_DWORD *)this & 7,
        *((struct VIDMM_PROCESS **)a2 + 12),
        0LL,
        0LL,
        0LL,
        0LL,
        v15,
        v16,
        0LL,
        0LL,
        (*(_DWORD *)this >> 7) & 0x1F,
        v52,
        (unsigned __int64)v49,
        v28,
        v5 >> 12,
        v48,
        0LL);
      v30 = *((_QWORD *)a2 + 11);
      if ( (*(_BYTE *)(v30 + 40936) & 0x10) != 0 || (v31 = (int)(*(_DWORD *)this << 16) >> 29) == 0 )
      {
        VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(this, (struct VIDMM_GLOBAL *)v30, v29, v50);
      }
      else if ( v31 == 1
             && *(struct CVirtualAddressAllocator **)(v30
                                                    + 8 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
                                                    + 40416) != a2 )
      {
        v42 = *((_QWORD *)this + 2) + 128LL;
        v43 = *(__int64 **)v42;
        if ( *(_QWORD *)(*(_QWORD *)v42 + 8LL) != v42
          || (v44 = *v43, *(__int64 **)(*v43 + 8) != v43)
          || (*(_QWORD *)v42 = v44,
              *(_QWORD *)(v44 + 8) = v42,
              v43[2] = *(_QWORD *)(v30 + 8LL * ((*(_DWORD *)this >> 7) & 0x1F) + 4952),
              v45 = 1584LL * ((*(_DWORD *)this >> 7) & 0x1F) + *(_QWORD *)(v30 + 40216) + 464LL,
              v46 = *(__int64 ***)(v45 + 8),
              *v46 != (__int64 *)v45) )
        {
          __fastfail(3u);
        }
        *v43 = v45;
        v43[1] = (__int64)v46;
        *v46 = v43;
        *(_QWORD *)(v45 + 8) = v43;
      }
    }
  }
  return 0LL;
}
