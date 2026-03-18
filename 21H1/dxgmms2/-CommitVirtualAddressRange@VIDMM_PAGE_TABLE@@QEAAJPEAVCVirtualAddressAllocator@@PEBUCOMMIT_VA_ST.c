/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0073EF8
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0071A50 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BE108 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BE33C (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F758 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C005FA04 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0071708 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 *     ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_KPEAE@Z @ 0x1C0074230 (-ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_KP.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z @ 0x1C0085244 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00BBCCC (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct VIDMM_GLOBAL **a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        struct VIDMM_GLOBAL *a6,
        unsigned __int64 a7,
        char a8,
        struct VIDMM_ALLOC **a9)
{
  unsigned __int64 v12; // r10
  char *v13; // r9
  unsigned int v14; // r8d
  __int64 v15; // r14
  unsigned __int64 v16; // rbp
  int v17; // r15d
  unsigned int v18; // r12d
  unsigned int v19; // r15d
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  int v22; // ebx
  char v23; // r9
  int v24; // ebx
  unsigned int v25; // r12d
  unsigned int v26; // r14d
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int8 *v36; // rax
  unsigned int v37; // ebp
  unsigned int v38; // ebp
  __int64 v39; // rcx
  int updated; // ebp
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // r8d
  int v49; // eax
  __int64 v50; // r10
  __int64 v51; // r9
  unsigned int v52; // r11d
  __int64 v53; // rbp
  __int64 v54; // rcx
  __int64 v55; // rdx
  unsigned int i; // edx
  __int64 v57; // rcx
  struct _DXGK_UPDATEPAGETABLEFLAGS v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  unsigned __int64 v66; // [rsp+50h] [rbp-48h]
  __int64 v67; // [rsp+58h] [rbp-40h]
  __int64 v68; // [rsp+60h] [rbp-38h]
  unsigned __int64 v70; // [rsp+C0h] [rbp+28h]
  struct VIDMM_GLOBAL *v71; // [rsp+C8h] [rbp+30h]
  unsigned __int64 v72; // [rsp+D0h] [rbp+38h]
  char v73; // [rsp+E0h] [rbp+48h]

  v12 = a5 >> 12;
  *a9 = 0LL;
  v13 = (char *)a6 + (a5 >> 12);
  if ( (unsigned __int64)v13 <= a5 >> 12 )
  {
    v45 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v45 + 24) = 4352LL;
    WdLogEvent5_WdAssertion(v45);
    return 3221225485LL;
  }
  v14 = *(_DWORD *)this;
  v72 = a7 >> 12;
  v71 = a2[11];
  v15 = *((_QWORD *)v71 + 5027) + 1584LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v68 = v15;
  v16 = v12 & ~*(_QWORD *)(v15 + 48LL * (*(_DWORD *)this & 7) + 120);
  v66 = v16;
  v70 = v16 & ~*(_QWORD *)(v15 + 48LL * (*(_DWORD *)this & 7) + 104);
  v67 = *(_QWORD *)(v15 + 48LL * (*(_DWORD *)this & 7) + 128);
  v17 = *(_DWORD *)(v15 + 72);
  v18 = v17 & ((_DWORD)v13 - 1);
  v19 = v12 & v17;
  v20 = *((_QWORD *)this + 1);
  if ( v20 && *(_QWORD *)(v20 + 128) )
  {
    v21 = v14;
  }
  else
  {
    v32 = VIDMM_PAGE_TABLE::CommitPageTable(this, (struct CVirtualAddressAllocator *)a2, a9);
    if ( v32 < 0 )
    {
      v46 = WdLogNewEntry5_WdWarning(v35, v34);
      WdLogEvent5_WdWarning(v46);
      return (unsigned int)v32;
    }
    *(_DWORD *)this &= ~0x10000u;
    v21 = *(unsigned int *)this;
    v14 = *(_DWORD *)this;
  }
  v22 = 0;
  if ( (v14 & 0x10000) == 0 )
    v22 = 2;
  v23 = 1;
  if ( (v14 & 0x10000) != 0 )
    v23 = a8;
  v73 = v23;
  if ( !*((_BYTE *)a3 + 57) )
  {
    if ( *((_BYTE *)a3 + 56) )
    {
      if ( *((_DWORD *)this + 1) )
        goto LABEL_14;
      v21 = v14 | 0x40;
      *(_DWORD *)this = v21;
    }
    else
    {
      if ( (v14 & 0x40) != 0 && *((_DWORD *)this + 1) )
      {
        if ( !*((_BYTE *)a3 + 60) )
        {
          VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a2[12], *(_DWORD *)(*((_QWORD *)v71 + 3) + 232LL), 1);
          *((_BYTE *)a3 + 60) = 1;
        }
        v48 = 16 * *(_DWORD *)(v15 + 80) - 16;
        v49 = *(_DWORD *)(v15 + 80) - 1;
        v50 = v49;
        if ( v49 >= 0 )
        {
          v51 = 16LL * v49;
          do
          {
            if ( (*(_BYTE *)(v51 + *((_QWORD *)this + 3)) & 1) != 0 )
            {
              v52 = 0;
              v53 = 0LL;
              do
              {
                v54 = *((_QWORD *)this + 3);
                v55 = 2LL * (v52 + v48);
                ++v52;
                *(_OWORD *)(v54 + 8 * v55) = *(_OWORD *)(v54 + v51);
                *(_QWORD *)(v54 + 8 * v55 + 8) += v53++;
              }
              while ( v52 < 0x10 );
              *((_DWORD *)this + 1) += 15;
            }
            else
            {
              for ( i = 0; i < 0x10; ++i )
              {
                v57 = 16LL * (i + v48);
                *(_OWORD *)(*((_QWORD *)this + 3) + v57) = 0LL;
              }
            }
            v48 -= 16;
            v51 -= 16LL;
            --v50;
          }
          while ( v50 >= 0 );
        }
        v58 = 0;
        if ( (**(_DWORD **)(v15 + 440) & 8) != 0 )
        {
          updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                      this,
                      (struct CVirtualAddressAllocator *)a2,
                      0,
                      *(_DWORD *)(v15 + 80),
                      v70,
                      (struct _DXGK_UPDATEPAGETABLEFLAGS)8);
          if ( updated < 0 )
          {
            v62 = WdLogNewEntry5_WdAssertion(v60, v59, v61);
            *(_QWORD *)(v62 + 24) = 4471LL;
            goto LABEL_53;
          }
          v58 = (struct _DXGK_UPDATEPAGETABLEFLAGS)2;
        }
        updated = VIDMM_PAGE_TABLE::UpdatePageTable(
                    this,
                    a2,
                    (__int64)a3,
                    0LL,
                    0LL,
                    0,
                    0,
                    *(_DWORD *)(v15 + 76),
                    v70,
                    v58);
        if ( updated < 0 )
        {
          v62 = WdLogNewEntry5_WdAssertion(v64, v63, v65);
          *(_QWORD *)(v62 + 24) = 4489LL;
          goto LABEL_53;
        }
        v16 = v66;
        v23 = v73;
      }
      *(_DWORD *)this &= ~0x40u;
      v21 = *(unsigned int *)this;
    }
    v14 = v21;
  }
LABEL_14:
  v24 = (v14 >> 3) & 8 | v22;
  if ( (v14 & 0x40) != 0 )
  {
    v19 >>= 4;
    v18 >>= 4;
    v67 *= 16LL;
    v66 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
  }
  v25 = v18 + 1;
  v26 = v25 - v19;
  if ( !v23 )
    goto LABEL_17;
  v36 = (unsigned __int8 *)a3 + 61;
  if ( v19 )
  {
    VIDMM_PAGE_TABLE::InvalidatePageTable(this, v71, 0, v19, (unsigned __int8 *)a3 + 61);
    updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                this,
                (struct CVirtualAddressAllocator *)a2,
                0,
                v19,
                v70,
                (struct _DXGK_UPDATEPAGETABLEFLAGS)v24);
    if ( updated < 0 )
    {
      v62 = WdLogNewEntry5_WdAssertion(v43, v42, v44);
      *(_QWORD *)(v62 + 24) = 4531LL;
      goto LABEL_53;
    }
    v21 = *(unsigned int *)this;
    v36 = (unsigned __int8 *)a3 + 61;
  }
  v37 = (v21 & 0x40) != 0 ? *(_DWORD *)(v68 + 80) : *(_DWORD *)(v68 + 76);
  if ( v25 >= v37
    || (v38 = v37 - v25,
        VIDMM_PAGE_TABLE::InvalidatePageTable(this, v71, v25, v38, v36),
        updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                    this,
                    (struct CVirtualAddressAllocator *)a2,
                    v25,
                    v38,
                    v70 + v67 * v25,
                    (struct _DXGK_UPDATEPAGETABLEFLAGS)v24),
        updated >= 0) )
  {
LABEL_17:
    if ( ((*((_DWORD *)a3 + 13) + 3) & 0xFFFFFFFD) != 0 )
    {
      VIDMM_PAGE_TABLE::ModifyPageTable(
        this,
        (struct CVirtualAddressAllocator *)v21,
        a3,
        v19,
        v25 - v19,
        v72,
        (unsigned __int8 *)a3 + 61);
      v27 = VIDMM_PAGE_TABLE::UpdatePageTable(
              this,
              a2,
              (__int64)a3,
              *((struct _VIDMM_GLOBAL_ALLOC ****)a3 + 5),
              a4,
              *((_DWORD *)a3 + 12),
              v19,
              v25 - v19,
              v66,
              (struct _DXGK_UPDATEPAGETABLEFLAGS)v24);
    }
    else
    {
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, v71, v19, v26, (unsigned __int8 *)a3 + 61);
      v27 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
              this,
              (struct CVirtualAddressAllocator *)a2,
              v19,
              v26,
              v66,
              (struct _DXGK_UPDATEPAGETABLEFLAGS)v24);
    }
    v32 = v27;
    if ( v27 >= 0 )
    {
      *(_DWORD *)this |= 0x10000u;
      return 0LL;
    }
    v47 = WdLogNewEntry5_WdError(v29, v28, v30, v31);
    *(_QWORD *)(v47 + 24) = 4588LL;
    WdLogEvent5_WdError(v47);
    return (unsigned int)v32;
  }
  v62 = WdLogNewEntry5_WdAssertion(v39, v21, v41);
  *(_QWORD *)(v62 + 24) = 4548LL;
LABEL_53:
  WdLogEvent5_WdAssertion(v62);
  return (unsigned int)updated;
}
