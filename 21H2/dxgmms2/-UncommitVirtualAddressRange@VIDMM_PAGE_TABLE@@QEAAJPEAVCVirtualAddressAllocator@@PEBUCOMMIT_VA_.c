/*
 * XREFs of ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1C00715E0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00705F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C0071CF0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0072B4C (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C0072CD0 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00B2E54 (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
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
  __int64 v29; // rdx
  int v30; // eax
  __int64 v32; // rsi
  __int64 v33; // rbp
  __int64 v34; // r8
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 *v42; // r8
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 **v45; // rax
  unsigned __int64 v46; // [rsp+30h] [rbp-A8h]
  void *v47; // [rsp+90h] [rbp-48h] BYREF
  void *v48; // [rsp+98h] [rbp-40h] BYREF
  unsigned int v50; // [rsp+F8h] [rbp+20h] BYREF

  v5 = a4;
  v6 = a3;
  if ( (a4 & 0xFFF) != 0 )
    return 3221225485LL;
  v9 = (a4 >> 12) + a5;
  if ( v9 <= a4 >> 12 )
    return 3221225485LL;
  v10 = *(_DWORD *)this;
  v11 = *((_QWORD *)a2 + 11);
  v12 = *((_QWORD *)this + 2);
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
      v32 = 16LL * v15;
      v33 = v16;
      do
      {
        v34 = *((_QWORD *)this + 4);
        v35 = *(_QWORD *)(v34 + v32);
        if ( (v35 & 1) != 0 )
          VIDMM_GLOBAL::RecordPageMappingHistory(v11, (v35 >> 5) & 0x1F, *(_QWORD *)(v34 + v32 + 8), 1LL, 1, 0LL, v46);
        v32 += 16LL;
        --v33;
      }
      while ( v33 );
      v6 = a3;
    }
    v17 = 0;
    if ( v15 < v16 + v15 )
    {
      v18 = 16LL * v15;
      v19 = v16;
      do
      {
        v20 = *((_QWORD *)this + 4);
        if ( (*(_BYTE *)(v20 + v18) & 1) != 0 )
        {
          --*((_DWORD *)this + 1);
          v17 = 1;
          *(_QWORD *)(v20 + v18) = 0LL;
          *(_QWORD *)(v18 + *((_QWORD *)this + 4) + 8) = 0LL;
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
      v50 = 0;
      v47 = 0LL;
      v23 = v22 & 8;
      v48 = 0LL;
      if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(this, a2, &v50, (unsigned __int64 *)&v47, &v48) < 0 )
      {
        v36 = WdLogNewEntry5_WdError(v25, v24, v26, v27);
        *(_QWORD *)(v36 + 24) = 4244LL;
        WdLogEvent5_WdError(v36);
        v40 = WdLogNewEntry5_WdAssertion(v38, v37, v39);
        *(_QWORD *)(v40 + 24) = 6935LL;
        WdLogEvent5_WdAssertion(v40);
        return 3221225473LL;
      }
      if ( (*((_BYTE *)v21 + 40936) & 0x10) != 0 )
        v28 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      else
        v28 = (__int16)*(_DWORD *)this >> 13;
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
        v50,
        (unsigned __int64)v47,
        v28,
        v5 >> 12,
        (struct _DXGK_UPDATEPAGETABLEFLAGS)v23,
        0LL);
      v29 = *((_QWORD *)a2 + 11);
      if ( (*(_BYTE *)(v29 + 40936) & 0x10) != 0 || (v30 = (int)(*(_DWORD *)this << 16) >> 29) == 0 )
      {
        VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(this, (struct VIDMM_GLOBAL *)v29, v47, v48);
      }
      else if ( v30 == 1
             && *(struct CVirtualAddressAllocator **)(v29
                                                    + 8 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
                                                    + 40416) != a2 )
      {
        v41 = *((_QWORD *)this + 3) + 128LL;
        v42 = *(__int64 **)v41;
        if ( *(_QWORD *)(*(_QWORD *)v41 + 8LL) != v41
          || (v43 = *v42, *(__int64 **)(*v42 + 8) != v42)
          || (*(_QWORD *)v41 = v43,
              *(_QWORD *)(v43 + 8) = v41,
              v42[2] = *(_QWORD *)(v29 + 8LL * ((*(_DWORD *)this >> 7) & 0x1F) + 4952),
              v44 = 1584LL * ((*(_DWORD *)this >> 7) & 0x1F) + *(_QWORD *)(v29 + 40216) + 464LL,
              v45 = *(__int64 ***)(v44 + 8),
              *v45 != (__int64 *)v44) )
        {
          __fastfail(3u);
        }
        *v42 = v44;
        v42[1] = (__int64)v45;
        *v45 = v42;
        *(_QWORD *)(v44 + 8) = v42;
      }
    }
  }
  return 0LL;
}
