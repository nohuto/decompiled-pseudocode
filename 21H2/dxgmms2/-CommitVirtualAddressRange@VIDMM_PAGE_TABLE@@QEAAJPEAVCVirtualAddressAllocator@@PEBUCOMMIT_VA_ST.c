/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0072D68
 * Callers:
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005FBB0 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00705F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BCCD8 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BCF64 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     ?EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005FB4C (-EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C007029C (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 *     ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_KPEAE@Z @ 0x1C00732F0 (-ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_KP.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z @ 0x1C0087034 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0088EF8 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00891A8 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00BA8B8 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
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
  unsigned __int64 v12; // r8
  char *v13; // r9
  __int64 v14; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rax
  unsigned __int64 v19; // rbp
  unsigned int v20; // r15d
  unsigned int v21; // r12d
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rax
  __int64 v27; // rax
  struct CVirtualAddressAllocator *v28; // rdx
  int v29; // ebx
  char v30; // r8
  int v31; // ecx
  int v32; // r8d
  int v33; // eax
  __int64 v34; // r10
  __int64 v35; // r9
  unsigned int v36; // r11d
  __int64 v37; // rbp
  __int64 v38; // rcx
  __int64 v39; // rdx
  unsigned int i; // edx
  __int64 v41; // rcx
  struct _DXGK_UPDATEPAGETABLEFLAGS v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  int updated; // ebp
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  unsigned int v51; // ebx
  unsigned int v52; // r12d
  unsigned int v53; // r14d
  unsigned __int8 *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned int v57; // ebp
  unsigned int v58; // ebp
  __int64 v59; // rcx
  __int64 v60; // r8
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  unsigned __int64 v67; // [rsp+50h] [rbp-48h]
  __int64 v68; // [rsp+58h] [rbp-40h]
  __int64 v69; // [rsp+60h] [rbp-38h]
  unsigned __int64 v71; // [rsp+C0h] [rbp+28h]
  struct VIDMM_GLOBAL *v72; // [rsp+C8h] [rbp+30h]
  unsigned __int64 v73; // [rsp+D0h] [rbp+38h]
  char v74; // [rsp+E0h] [rbp+48h]

  v12 = a5 >> 12;
  *a9 = 0LL;
  v13 = (char *)a6 + (a5 >> 12);
  if ( (unsigned __int64)v13 <= a5 >> 12 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2, v12);
    *(_QWORD *)(v14 + 24) = 4871LL;
    WdLogEvent5_WdAssertion(v14);
    return 3221225485LL;
  }
  v16 = *(unsigned int *)this;
  v73 = a7 >> 12;
  v72 = a2[11];
  v17 = *((_QWORD *)v72 + 5027) + 1584 * ((v16 >> 7) & 0x1F);
  v18 = 6 * (v16 & 7);
  v69 = v17;
  v19 = v12 & ~*(_QWORD *)(v17 + 8 * v18 + 120);
  v68 = *(_QWORD *)(v17 + 8 * v18 + 128);
  v71 = v19 & ~*(_QWORD *)(v17 + 8 * v18 + 104);
  v67 = v19;
  v20 = v12 & *(_DWORD *)(v17 + 72);
  v21 = *(_DWORD *)(v17 + 72) & ((_DWORD)v13 - 1);
  if ( (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() )
  {
    v25 = VIDMM_PAGE_TABLE::EnsureResident(this, (struct CVirtualAddressAllocator *)a2, v22, a9);
    if ( v25 < 0 )
    {
LABEL_5:
      v26 = WdLogNewEntry5_WdWarning(v24, v23);
      WdLogEvent5_WdWarning(v26);
      return (unsigned int)v25;
    }
  }
  else
  {
    v27 = *((_QWORD *)this + 2);
    if ( !v27 || !*(_QWORD *)(v27 + 128) )
    {
      v25 = VIDMM_PAGE_TABLE::CommitPageTable(this, (struct CVirtualAddressAllocator *)a2, a9);
      if ( v25 < 0 )
        goto LABEL_5;
      *(_DWORD *)this &= ~0x10000u;
    }
  }
  v28 = (struct CVirtualAddressAllocator *)*(unsigned int *)this;
  v29 = 0;
  if ( (*(_DWORD *)this & 0x10000) == 0 )
    v29 = 2;
  v30 = 1;
  LOBYTE(v31) = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 0x10000) != 0 )
    v30 = a8;
  v74 = v30;
  if ( !*((_BYTE *)a3 + 57) )
  {
    if ( *((_BYTE *)a3 + 56) )
    {
      if ( !*((_DWORD *)this + 1) )
      {
        LOBYTE(v31) = (unsigned __int8)v28 | 0x40;
        *(_DWORD *)this = (unsigned int)v28 | 0x40;
        v28 = (struct CVirtualAddressAllocator *)((unsigned int)v28 | 0x40);
      }
      goto LABEL_41;
    }
    if ( ((unsigned __int8)v28 & 0x40) != 0 && *((_DWORD *)this + 1) )
    {
      if ( !*((_BYTE *)a3 + 60) )
      {
        VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(a2[12], *(_DWORD *)(*((_QWORD *)v72 + 3) + 232LL), 1);
        *((_BYTE *)a3 + 60) = 1;
      }
      v32 = 16 * *(_DWORD *)(v17 + 80) - 16;
      v33 = *(_DWORD *)(v17 + 80) - 1;
      v34 = v33;
      if ( v33 >= 0 )
      {
        v35 = 16LL * v33;
        do
        {
          if ( (*(_BYTE *)(v35 + *((_QWORD *)this + 4)) & 1) != 0 )
          {
            v36 = 0;
            v37 = 0LL;
            do
            {
              v38 = *((_QWORD *)this + 4);
              v39 = 2LL * (v36 + v32);
              ++v36;
              *(_OWORD *)(v38 + 8 * v39) = *(_OWORD *)(v38 + v35);
              *(_QWORD *)(v38 + 8 * v39 + 8) += v37++;
            }
            while ( v36 < 0x10 );
            *((_DWORD *)this + 1) += 15;
          }
          else
          {
            for ( i = 0; i < 0x10; ++i )
            {
              v41 = 16LL * (i + v32);
              *(_OWORD *)(*((_QWORD *)this + 4) + v41) = 0LL;
            }
          }
          v32 -= 16;
          v35 -= 16LL;
          --v34;
        }
        while ( v34 >= 0 );
      }
      v42 = 0;
      if ( (**(_DWORD **)(v17 + 440) & 8) != 0 )
      {
        updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                    this,
                    (struct CVirtualAddressAllocator *)a2,
                    0,
                    *(_DWORD *)(v17 + 80),
                    v71,
                    (struct _DXGK_UPDATEPAGETABLEFLAGS)8);
        if ( updated < 0 )
        {
          v47 = WdLogNewEntry5_WdAssertion(v44, v43, v46);
          *(_QWORD *)(v47 + 24) = 5003LL;
LABEL_35:
          WdLogEvent5_WdAssertion(v47);
          return (unsigned int)updated;
        }
        v42 = (struct _DXGK_UPDATEPAGETABLEFLAGS)2;
      }
      updated = VIDMM_PAGE_TABLE::UpdatePageTable(
                  this,
                  a2,
                  (__int64)a3,
                  0LL,
                  0LL,
                  0,
                  0,
                  *(_DWORD *)(v17 + 76),
                  v71,
                  v42);
      if ( updated < 0 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v49, v48, v50);
        *(_QWORD *)(v47 + 24) = 5021LL;
        goto LABEL_35;
      }
      v19 = v67;
      v30 = v74;
    }
    *(_DWORD *)this &= ~0x40u;
    v28 = (struct CVirtualAddressAllocator *)*(unsigned int *)this;
    v31 = *(_DWORD *)this;
  }
LABEL_41:
  v51 = ((unsigned int)v28 >> 3) & 8 | v29;
  if ( ((unsigned __int8)v28 & 0x40) != 0 )
  {
    v20 >>= 4;
    v21 >>= 4;
    v68 *= 16LL;
    v67 = v19 & 0xFFFFFFFFFFFFFFF0uLL;
  }
  v52 = v21 + 1;
  v53 = v52 - v20;
  if ( v30 )
  {
    v54 = (unsigned __int8 *)a3 + 61;
    if ( v20 )
    {
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, v72, 0, v20, (unsigned __int8 *)a3 + 61);
      updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                  this,
                  (struct CVirtualAddressAllocator *)a2,
                  0,
                  v20,
                  v71,
                  (struct _DXGK_UPDATEPAGETABLEFLAGS)v51);
      if ( updated < 0 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v55, v28, v56);
        *(_QWORD *)(v47 + 24) = 5063LL;
        goto LABEL_35;
      }
      v31 = *(_DWORD *)this;
      v54 = (unsigned __int8 *)a3 + 61;
    }
    if ( (v31 & 0x40) != 0 )
      v57 = *(_DWORD *)(v69 + 80);
    else
      v57 = *(_DWORD *)(v69 + 76);
    if ( v52 < v57 )
    {
      v58 = v57 - v52;
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, v72, v52, v58, v54);
      updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                  this,
                  (struct CVirtualAddressAllocator *)a2,
                  v52,
                  v58,
                  v71 + v68 * v52,
                  (struct _DXGK_UPDATEPAGETABLEFLAGS)v51);
      if ( updated < 0 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v59, v28, v60);
        *(_QWORD *)(v47 + 24) = 5080LL;
        goto LABEL_35;
      }
    }
  }
  if ( ((*((_DWORD *)a3 + 13) + 3) & 0xFFFFFFFD) != 0 )
  {
    VIDMM_PAGE_TABLE::ModifyPageTable(this, v28, a3, v20, v52 - v20, v73, (unsigned __int8 *)a3 + 61);
    v61 = VIDMM_PAGE_TABLE::UpdatePageTable(
            this,
            a2,
            (__int64)a3,
            *((struct _VIDMM_GLOBAL_ALLOC ****)a3 + 5),
            a4,
            *((_DWORD *)a3 + 12),
            v20,
            v52 - v20,
            v67,
            (struct _DXGK_UPDATEPAGETABLEFLAGS)v51);
  }
  else
  {
    VIDMM_PAGE_TABLE::InvalidatePageTable(this, v72, v20, v53, (unsigned __int8 *)a3 + 61);
    v61 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
            this,
            (struct CVirtualAddressAllocator *)a2,
            v20,
            v53,
            v67,
            (struct _DXGK_UPDATEPAGETABLEFLAGS)v51);
  }
  v25 = v61;
  if ( v61 < 0 )
  {
    v66 = WdLogNewEntry5_WdError(v63, v62, v64, v65);
    *(_QWORD *)(v66 + 24) = 5120LL;
    WdLogEvent5_WdError(v66);
    return (unsigned int)v25;
  }
  *(_DWORD *)this |= 0x10000u;
  return 0LL;
}
