/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008CEB0
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008AF00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00E2518 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00E2768 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C008C800 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C008CDE0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_KPEAE@Z @ 0x1C008D3C0 (-ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_KP.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A11D8 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00A1B20 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C00A1CA8 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z @ 0x1C00A3AD0 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C00E02F8 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C00E4968 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        UINT64 a4,
        unsigned __int64 a5,
        struct VIDMM_ALLOC *a6,
        unsigned __int64 a7,
        char a8,
        struct VIDMM_ALLOC **a9)
{
  struct VIDMM_ALLOC **v9; // r11
  int v11; // ebx
  unsigned __int64 v13; // r8
  char *v15; // r10
  struct VIDMM_GLOBAL *v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r12
  __int64 v20; // r9
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // r9
  int v23; // ebp
  unsigned int v24; // r15d
  unsigned int v25; // ebp
  __int64 v26; // rax
  unsigned int v27; // r10d
  char v28; // r8
  unsigned int v29; // ebx
  unsigned int v30; // r15d
  unsigned int v31; // r12d
  VIDMM_GLOBAL *v32; // r15
  VIDMM_PAGE_TABLE_BASE *v33; // rcx
  struct VIDMM_ALLOC *v34; // r10
  struct _VIDMM_GLOBAL_ALLOC *v35; // rdx
  enum _DXGK_PAGETABLEUPDATEMODE v36; // eax
  void *v37; // rbx
  __int64 v38; // rdx
  int v39; // eax
  unsigned __int8 *v41; // rcx
  unsigned int v42; // eax
  int v43; // r15d
  int v44; // ebx
  __int64 v45; // rcx
  unsigned int v46; // r8d
  int v47; // eax
  __int64 v48; // r11
  unsigned int v49; // r9d
  __int64 v50; // r10
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rdx
  unsigned int i; // edx
  __int64 v83; // rcx
  int v84; // eax
  __int64 v85; // rcx
  int updated; // r12d
  __int64 v87; // rcx
  __int64 v88; // rcx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 *v91; // r8
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 **v94; // rax
  struct _DXGK_UPDATEPAGETABLEFLAGS v95; // [rsp+80h] [rbp-58h]
  struct VIDMM_GLOBAL *v96; // [rsp+90h] [rbp-48h]
  void *v97; // [rsp+98h] [rbp-40h] BYREF
  void *v98; // [rsp+A0h] [rbp-38h] BYREF
  char v100; // [rsp+100h] [rbp+28h]
  int v101; // [rsp+100h] [rbp+28h]
  struct VIDMM_ALLOC *v102; // [rsp+108h] [rbp+30h]
  struct VIDMM_ALLOC *v103; // [rsp+108h] [rbp+30h]
  unsigned __int64 v104; // [rsp+110h] [rbp+38h]

  v9 = a9;
  v11 = 0;
  v13 = a5 >> 12;
  v15 = (char *)a6 + (a5 >> 12);
  *a9 = 0LL;
  if ( (unsigned __int64)v15 <= a5 >> 12 )
  {
    WdLogSingleEntry1(1LL, 4480LL);
    DxgkLogInternalTriageEvent(v45, 0x40000LL);
    return 3221225485LL;
  }
  v16 = (struct VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  v17 = *(unsigned int *)this;
  v104 = a7 >> 12;
  v18 = *(_DWORD *)this & 7;
  v96 = v16;
  v19 = *((_QWORD *)v16 + 5028) + 1584LL * (((unsigned int)v17 >> 7) & 0x1F);
  v98 = (void *)v19;
  v20 = *(_QWORD *)(v19 + 48 * v18 + 104);
  v21 = v13 & ~*(_QWORD *)(v19 + 48 * v18 + 120);
  v97 = *(void **)(v19 + 48 * v18 + 128);
  v22 = v21 & ~v20;
  v23 = *(_DWORD *)(v19 + 72);
  v102 = (struct VIDMM_ALLOC *)v22;
  v24 = v23 & ((_DWORD)v15 - 1);
  v25 = v13 & v23;
  v26 = *((_QWORD *)this + 2);
  if ( v26 && *(_QWORD *)(v26 + 120) )
  {
    LOBYTE(v27) = v17;
  }
  else
  {
    LODWORD(a9) = VIDMM_PAGE_TABLE::CommitPageTable(this, a2, v9);
    if ( (int)a9 < 0 )
    {
      WdLogSingleEntry0(3LL);
      return (unsigned int)a9;
    }
    *(_DWORD *)this &= ~0x10000u;
    v27 = *(_DWORD *)this;
    v17 = *(unsigned int *)this;
    v22 = (unsigned __int64)v102;
  }
  if ( (v17 & 0x10000) == 0 )
    v11 = 2;
  v28 = 1;
  if ( (v17 & 0x10000) != 0 )
    v28 = a8;
  v100 = v28;
  if ( !*((_BYTE *)a3 + 65) )
  {
    if ( *((_BYTE *)a3 + 64) )
    {
      if ( *((_DWORD *)this + 1) )
        goto LABEL_10;
      v27 = v17 | 0x40;
      *(_DWORD *)this = v17 | 0x40;
    }
    else
    {
      if ( (v17 & 0x40) != 0 && *((_DWORD *)this + 1) )
      {
        if ( !*((_BYTE *)a3 + 68) )
        {
          VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(
            *((VIDMM_PROCESS **)a2 + 12),
            *(_DWORD *)(*((_QWORD *)v96 + 3) + 240LL),
            1);
          v22 = (unsigned __int64)v102;
          *((_BYTE *)a3 + 68) = 1;
        }
        v46 = 16 * *(_DWORD *)(v19 + 80) - 16;
        v47 = *(_DWORD *)(v19 + 80) - 1;
        v48 = v47;
        if ( v47 >= 0 )
        {
          v49 = v46 + 2;
          v50 = 16LL * v47;
          do
          {
            v51 = *((_QWORD *)this + 4);
            if ( (*(_BYTE *)(v50 + v51) & 1) != 0 )
            {
              v52 = 2LL * (v49 - 1);
              *(_OWORD *)(v51 + 16LL * v46) = *(_OWORD *)(v50 + v51);
              v53 = *((_QWORD *)this + 4);
              *(_OWORD *)(v53 + 8 * v52) = *(_OWORD *)(v50 + v53);
              ++*(_QWORD *)(v53 + 8 * v52 + 8);
              v54 = *((_QWORD *)this + 4);
              v55 = 2LL * (v49 + 1);
              v56 = 2LL * v49;
              *(_OWORD *)(v54 + 8 * v56) = *(_OWORD *)(v50 + v54);
              *(_QWORD *)(v54 + 8 * v56 + 8) += 2LL;
              v57 = *((_QWORD *)this + 4);
              *(_OWORD *)(v57 + 8 * v55) = *(_OWORD *)(v50 + v57);
              *(_QWORD *)(v57 + 8 * v55 + 8) += 3LL;
              v58 = *((_QWORD *)this + 4);
              v59 = 2LL * (v49 + 2);
              *(_OWORD *)(v58 + 8 * v59) = *(_OWORD *)(v50 + v58);
              *(_QWORD *)(v58 + 8 * v59 + 8) += 4LL;
              v60 = *((_QWORD *)this + 4);
              v61 = 2LL * (v49 + 3);
              *(_OWORD *)(v60 + 8 * v61) = *(_OWORD *)(v50 + v60);
              *(_QWORD *)(v60 + 8 * v61 + 8) += 5LL;
              v62 = *((_QWORD *)this + 4);
              v63 = 2LL * (v49 + 4);
              *(_OWORD *)(v62 + 8 * v63) = *(_OWORD *)(v50 + v62);
              *(_QWORD *)(v62 + 8 * v63 + 8) += 6LL;
              v64 = *((_QWORD *)this + 4);
              v65 = 2LL * (v49 + 5);
              *(_OWORD *)(v64 + 8 * v65) = *(_OWORD *)(v50 + v64);
              *(_QWORD *)(v64 + 8 * v65 + 8) += 7LL;
              v66 = *((_QWORD *)this + 4);
              v67 = 2LL * (v49 + 6);
              *(_OWORD *)(v66 + 8 * v67) = *(_OWORD *)(v50 + v66);
              *(_QWORD *)(v66 + 8 * v67 + 8) += 8LL;
              v68 = *((_QWORD *)this + 4);
              v69 = 2LL * (v49 + 7);
              *(_OWORD *)(v68 + 8 * v69) = *(_OWORD *)(v50 + v68);
              *(_QWORD *)(v68 + 8 * v69 + 8) += 9LL;
              v70 = *((_QWORD *)this + 4);
              v71 = 2LL * (v49 + 8);
              *(_OWORD *)(v70 + 8 * v71) = *(_OWORD *)(v50 + v70);
              *(_QWORD *)(v70 + 8 * v71 + 8) += 10LL;
              v72 = *((_QWORD *)this + 4);
              v73 = 2LL * (v49 + 9);
              *(_OWORD *)(v72 + 8 * v73) = *(_OWORD *)(v50 + v72);
              *(_QWORD *)(v72 + 8 * v73 + 8) += 11LL;
              v74 = *((_QWORD *)this + 4);
              v75 = 2LL * (v49 + 10);
              *(_OWORD *)(v74 + 8 * v75) = *(_OWORD *)(v50 + v74);
              *(_QWORD *)(v74 + 8 * v75 + 8) += 12LL;
              v76 = *((_QWORD *)this + 4);
              v77 = 2LL * (v49 + 11);
              *(_OWORD *)(v76 + 8 * v77) = *(_OWORD *)(v50 + v76);
              *(_QWORD *)(v76 + 8 * v77 + 8) += 13LL;
              v78 = *((_QWORD *)this + 4);
              v79 = 2LL * (v49 + 12);
              *(_OWORD *)(v78 + 8 * v79) = *(_OWORD *)(v50 + v78);
              *(_QWORD *)(v78 + 8 * v79 + 8) += 14LL;
              v80 = *((_QWORD *)this + 4);
              v81 = 2LL * (v49 + 13);
              *(_OWORD *)(v80 + 8 * v81) = *(_OWORD *)(v50 + v80);
              *(_QWORD *)(v80 + 8 * v81 + 8) += 15LL;
              *((_DWORD *)this + 1) += 15;
            }
            else
            {
              for ( i = 0; i < 0x10; ++i )
              {
                v83 = 16LL * (i + v46);
                *(_OWORD *)(*((_QWORD *)this + 4) + v83) = 0LL;
              }
            }
            v46 -= 16;
            v49 -= 16;
            v50 -= 16LL;
            --v48;
          }
          while ( v48 >= 0 );
          v22 = (unsigned __int64)v102;
        }
        v84 = 0;
        if ( (**(_DWORD **)(v19 + 440) & 8) != 0 )
        {
          LODWORD(a9) = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                          this,
                          a2,
                          0,
                          *(_DWORD *)(v19 + 80),
                          v22,
                          (struct _DXGK_UPDATEPAGETABLEFLAGS)8);
          if ( (int)a9 < 0 )
          {
            WdLogSingleEntry1(1LL, 4599LL);
            DxgkLogInternalTriageEvent(v85, 0x40000LL);
            return (unsigned int)a9;
          }
          v22 = (unsigned __int64)v102;
          v84 = 2;
        }
        updated = VIDMM_PAGE_TABLE::UpdatePageTable(this, a2, a3, 0LL, 0LL, 0, 0, *(_DWORD *)(v19 + 76), v22, v84);
        if ( updated < 0 )
        {
          WdLogSingleEntry1(1LL, 4617LL);
          DxgkLogInternalTriageEvent(v87, 0x40000LL);
          return (unsigned int)updated;
        }
        v28 = v100;
      }
      *(_DWORD *)this &= ~0x40u;
      v27 = *(_DWORD *)this;
    }
    v17 = v27;
  }
LABEL_10:
  v29 = ((unsigned int)v17 >> 3) & 8 | v11;
  if ( (v17 & 0x40) != 0 )
  {
    v25 >>= 4;
    v21 &= 0xFFFFFFFFFFFFFFF0uLL;
    v24 >>= 4;
    v97 = (void *)(16LL * (_QWORD)v97);
  }
  v30 = v24 + 1;
  v31 = v30 - v25;
  if ( v28 )
  {
    v41 = (unsigned __int8 *)a3 + 69;
    if ( v25 )
    {
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, v96, 0, v25, (unsigned __int8 *)a3 + 69);
      LODWORD(a9) = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                      this,
                      a2,
                      0,
                      v25,
                      (unsigned __int64)v102,
                      (struct _DXGK_UPDATEPAGETABLEFLAGS)v29);
      if ( (int)a9 < 0 )
      {
        WdLogSingleEntry1(1LL, 4659LL);
        DxgkLogInternalTriageEvent(v88, 0x40000LL);
        return (unsigned int)a9;
      }
      v27 = *(_DWORD *)this;
      v41 = (unsigned __int8 *)a3 + 69;
    }
    if ( (v27 & 0x40) != 0 )
      v42 = *((_DWORD *)v98 + 20);
    else
      v42 = *((_DWORD *)v98 + 19);
    if ( v30 < v42 )
    {
      LODWORD(a9) = v42 - v30;
      VIDMM_PAGE_TABLE::InvalidatePageTable(this, v96, v30, v42 - v30, v41);
      v43 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
              this,
              a2,
              v30,
              (unsigned int)a9,
              (unsigned __int64)v102 + (_QWORD)v97 * v30,
              (struct _DXGK_UPDATEPAGETABLEFLAGS)v29);
      if ( v43 < 0 )
      {
        WdLogSingleEntry1(1LL, 4676LL);
        DxgkLogInternalTriageEvent(v89, 0x40000LL);
        return (unsigned int)v43;
      }
    }
  }
  if ( ((*((_DWORD *)a3 + 15) + 3) & 0xFFFFFFFD) != 0 )
  {
    VIDMM_PAGE_TABLE::ModifyPageTable(
      this,
      (struct CVirtualAddressAllocator *)v17,
      a3,
      v25,
      v31,
      v104,
      (unsigned __int8 *)a3 + 69);
    v32 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
    v101 = *((_DWORD *)a3 + 14);
    v103 = (struct VIDMM_ALLOC *)*((_QWORD *)a3 + 6);
    LODWORD(a9) = 0;
    v98 = 0LL;
    v97 = 0LL;
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                v33,
                a2,
                (unsigned int *)&a9,
                (unsigned __int64 *)&v98,
                &v97) >= 0 )
    {
      v34 = 0LL;
      v35 = 0LL;
      if ( v101 == 1 )
      {
        v34 = v103;
        v35 = **(struct _VIDMM_GLOBAL_ALLOC ***)v103;
      }
      else if ( v101 == 3 )
      {
        v35 = v103;
      }
      if ( (*((_BYTE *)v32 + 40936) & 0x10) != 0 )
        v36 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      else
        v36 = (__int16)*(_DWORD *)this >> 13;
      v95 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v29;
      v37 = v98;
      VIDMM_GLOBAL::UpdatePageTable(
        v32,
        *(_DWORD *)this & 7,
        *((struct VIDMM_PROCESS **)a2 + 12),
        *((_QWORD *)a3 + 2),
        v34,
        v35,
        a4,
        v25,
        v31,
        (struct _DXGK_PTE *)(*((_QWORD *)this + 4) + 16LL * v25),
        0LL,
        (*(_DWORD *)this >> 7) & 0x1F,
        (UINT)a9,
        (SIZE_T)v98,
        v36,
        v21,
        v95,
        *((_QWORD *)a3 + 9));
      v38 = *((_QWORD *)a2 + 11);
      if ( (*(_BYTE *)(v38 + 40936) & 0x10) != 0 || (v39 = (int)(*(_DWORD *)this << 16) >> 29) == 0 )
      {
        VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(this, (struct VIDMM_GLOBAL *)v38, v37, v97);
      }
      else if ( v39 == 1
             && *(struct CVirtualAddressAllocator **)(v38
                                                    + 8 * (((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F)
                                                    + 40416) != a2 )
      {
        v90 = *((_QWORD *)this + 3) + 128LL;
        v91 = *(__int64 **)v90;
        if ( *(_QWORD *)(*(_QWORD *)v90 + 8LL) != v90
          || (v92 = *v91, *(__int64 **)(*v91 + 8) != v91)
          || (*(_QWORD *)v90 = v92,
              *(_QWORD *)(v92 + 8) = v90,
              v91[2] = *(_QWORD *)(v38 + 8LL * ((*(_DWORD *)this >> 7) & 0x1F) + 4968),
              v93 = 1584LL * ((*(_DWORD *)this >> 7) & 0x1F) + *(_QWORD *)(v38 + 40224) + 464LL,
              v94 = *(__int64 ***)(v93 + 8),
              *v94 != (__int64 *)v93) )
        {
          __fastfail(3u);
        }
        *v91 = v93;
        v91[1] = (__int64)v94;
        *v94 = v91;
        *(_QWORD *)(v93 + 8) = v91;
      }
      goto LABEL_22;
    }
    WdLogSingleEntry1(2LL, 3952LL);
    v44 = -1073741823;
LABEL_69:
    WdLogSingleEntry1(2LL, 4716LL);
    return (unsigned int)v44;
  }
  VIDMM_PAGE_TABLE::InvalidatePageTable(this, v96, v25, v31, (unsigned __int8 *)a3 + 69);
  v44 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(this, a2, v25, v31, v21, (struct _DXGK_UPDATEPAGETABLEFLAGS)v29);
  if ( v44 < 0 )
    goto LABEL_69;
LABEL_22:
  *(_DWORD *)this |= 0x10000u;
  return 0LL;
}
