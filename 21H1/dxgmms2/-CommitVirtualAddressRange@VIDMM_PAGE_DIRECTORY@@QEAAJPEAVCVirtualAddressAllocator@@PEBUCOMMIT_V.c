/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0071A50
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C0071194 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C00718E8 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0071A50 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BE33C (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C00136A0 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ExFreeToPagedLookasideList @ 0x1C002616C (ExFreeToPagedLookasideList.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005E93C (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005EB24 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005EFB0 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C005F0F0 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1C005F318 (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C005F664 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C005F82C (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C0071898 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0071A50 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1C0072770 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C0072E80 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0073CDC (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0073EF8 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?CheckPageTableInvalid@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1C0075214 (-CheckPageTableInvalid@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@I_K@Z.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C008763C (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?CheckContiguousSysMem@@YAEPEAU_MDL@@I_K@Z @ 0x1C00BDD4C (-CheckContiguousSysMem@@YAEPEAU_MDL@@I_K@Z.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BE108 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BE33C (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VAD_OWNER_TYPE@@@Z @ 0x1C00BF09C (-RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VA.c)
 *     ?RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x1C00BFB5C (-RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
        VIDMM_PAGE_DIRECTORY *this,
        VIDMM_GLOBAL **a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        char a8,
        struct VIDMM_ALLOC **a9)
{
  enum _DXGK_PAGETABLEUPDATEMODE v9; // r12d
  __int64 v12; // r10
  __int64 v13; // rax
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rsi
  unsigned int v17; // r8d
  char v18; // r9
  unsigned int v19; // r9d
  __int64 v20; // rbx
  struct VIDMM_PROCESS *v21; // r13
  __int64 v22; // rdx
  struct CVirtualAddressAllocator *v23; // rcx
  int v24; // r8d
  unsigned int v25; // eax
  __int64 v26; // rax
  int v27; // ebx
  char v28; // cl
  int v29; // eax
  unsigned __int64 v30; // r9
  unsigned int v31; // r11d
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v32; // r10
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // r13
  char *v35; // rcx
  unsigned int v36; // r8d
  int v37; // esi
  unsigned int v38; // r10d
  unsigned int v39; // r11d
  char *v40; // rax
  __int64 v41; // r8
  unsigned __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  unsigned int v47; // r11d
  char v48; // r10
  unsigned __int8 v49; // dl
  int v50; // r10d
  unsigned int v51; // eax
  __int64 v52; // rsi
  __int64 v53; // r8
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  int v56; // ecx
  char v57; // r9
  struct VIDMM_GLOBAL *v58; // r10
  int v59; // eax
  unsigned __int64 v60; // r13
  VIDMM_PAGE_TABLE *v61; // rcx
  unsigned int v62; // r11d
  int v63; // eax
  struct CVirtualAddressAllocator *v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // r10
  unsigned __int64 v67; // rsi
  unsigned __int64 v68; // rsi
  struct CVirtualAddressAllocator *v69; // r13
  __int64 result; // rax
  unsigned int v71; // r11d
  unsigned int v72; // r11d
  __int64 v73; // rsi
  __int64 v74; // r13
  int v75; // eax
  unsigned __int8 v76; // r8
  char v77; // r9
  struct VIDMM_PAGE_TABLE *PageTable; // rax
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // rcx
  char v82; // si
  int v83; // eax
  __int64 v84; // r10
  __int64 v85; // rdx
  char v86; // cl
  unsigned int v87; // eax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  unsigned __int64 v93; // rdx
  unsigned int v94; // ecx
  struct _DXGK_PTE *v95; // r11
  void *v96; // rbx
  __int64 v97; // r8
  struct VIDMM_ALLOC **v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rax
  __int64 v104; // rax
  unsigned __int64 v105; // r9
  __int64 v106; // rcx
  __int64 v107; // rax
  int v108; // ecx
  struct _VIDMM_GLOBAL_ALLOC *VidMmGlobalAllocFromOwner; // rax
  __int64 v110; // rdx
  int v111; // r8d
  int v112; // r8d
  unsigned int v113; // ecx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rsi
  _DWORD *v118; // rcx
  int v119; // eax
  unsigned int v120; // eax
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  unsigned __int64 v125; // [rsp+38h] [rbp-130h]
  struct VIDMM_ALLOC **v126; // [rsp+40h] [rbp-128h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v127; // [rsp+80h] [rbp-E8h]
  unsigned __int8 v128; // [rsp+90h] [rbp-D8h] BYREF
  char v129; // [rsp+91h] [rbp-D7h]
  int v130; // [rsp+94h] [rbp-D4h]
  unsigned __int8 v131; // [rsp+98h] [rbp-D0h]
  char v132; // [rsp+99h] [rbp-CFh]
  unsigned int v133; // [rsp+9Ch] [rbp-CCh]
  char v134; // [rsp+A0h] [rbp-C8h]
  unsigned int v135; // [rsp+A4h] [rbp-C4h]
  struct VIDMM_GLOBAL *v136; // [rsp+A8h] [rbp-C0h]
  char v137; // [rsp+B0h] [rbp-B8h]
  unsigned int v138; // [rsp+B4h] [rbp-B4h]
  unsigned int v139; // [rsp+B8h] [rbp-B0h]
  unsigned int v140; // [rsp+BCh] [rbp-ACh]
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v141; // [rsp+C0h] [rbp-A8h]
  unsigned int v142[2]; // [rsp+C8h] [rbp-A0h]
  unsigned __int64 v143; // [rsp+D0h] [rbp-98h]
  __int64 v144; // [rsp+D8h] [rbp-90h]
  unsigned __int64 v145; // [rsp+E0h] [rbp-88h]
  unsigned int v146; // [rsp+E8h] [rbp-80h]
  struct VIDMM_ALLOC *v147; // [rsp+F0h] [rbp-78h]
  void *v148; // [rsp+F8h] [rbp-70h] BYREF
  unsigned __int64 v149; // [rsp+100h] [rbp-68h]
  VIDMM_GLOBAL *v150; // [rsp+108h] [rbp-60h]
  struct _VIDMM_GLOBAL_ALLOC *v151; // [rsp+110h] [rbp-58h]
  unsigned __int64 v152; // [rsp+118h] [rbp-50h]
  __int64 v153; // [rsp+120h] [rbp-48h]
  unsigned __int64 v154; // [rsp+128h] [rbp-40h]
  unsigned __int64 v156; // [rsp+180h] [rbp+18h] BYREF
  unsigned __int64 v157; // [rsp+188h] [rbp+20h]

  v157 = a4;
  v9 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
  v149 = a4;
  *a9 = 0LL;
  v12 = *(_QWORD *)a3 & 1LL;
  if ( (*(_QWORD *)a3 & 1) == 0 )
  {
    v13 = *((_QWORD *)this + 1);
    if ( !v13 || !*(_QWORD *)(v13 + 128) || !*((_DWORD *)this + 1) )
      return 0LL;
  }
  v14 = a7;
  v15 = a5;
  if ( ((a7 | a5) & 0xFFF) != 0 )
  {
    v124 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v124 + 24) = 5398LL;
    WdLogEvent5_WdAssertion(v124);
    return 3221225485LL;
  }
  v16 = a5 >> 12;
  v154 = a5 >> 12;
  v152 = (a5 >> 12) + a6;
  if ( v152 <= a5 >> 12 )
  {
    v104 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v104 + 24) = 5415LL;
    WdLogEvent5_WdAssertion(v104);
    return 3221225485LL;
  }
  v17 = *(_DWORD *)this;
  v18 = *(_DWORD *)this;
  v150 = a2[11];
  v19 = v18 & 7;
  v20 = *((_QWORD *)v150 + 5027);
  v21 = a2[12];
  v22 = (v17 >> 7) & 0x1F;
  v151 = 0LL;
  v147 = 0LL;
  v153 = v20 + 1584 * v22;
  v141 = (struct VIDMM_PAGE_TABLE_LEVEL_DESC *)(48LL * v19 + 88 + v153);
  v23 = (struct CVirtualAddressAllocator *)a2;
  v143 = (v16 & *((_QWORD *)v141 + 2)) >> *((_QWORD *)v141 + 3);
  v24 = v17 & 0x10;
  if ( v24 )
    v25 = *((_DWORD *)a2[15] + 8 * v22 + 4);
  else
    v25 = *(_DWORD *)(v20 + 48 * (v19 + 33 * v22) + 88);
  v138 = v25;
  if ( v24 && *((_QWORD *)v150 + 5123) )
  {
    v105 = a6 << 12;
    if ( v12 )
      VIDMM_GLOBAL::RecordVaPagingHistoryCommit(
        v150,
        v21,
        a5,
        v105,
        *((_DWORD *)a3 + 13),
        a7,
        *((_QWORD *)a3 + 4),
        *((_QWORD *)a3 + 5),
        *((_DWORD *)a3 + 12));
    else
      VIDMM_GLOBAL::RecordVaPagingHistoryUncommit(v150, v21, a5, v105);
    v23 = (struct CVirtualAddressAllocator *)a2;
  }
  v26 = *((_QWORD *)this + 1);
  v27 = 0;
  v140 = 0;
  v139 = 0;
  v129 = 0;
  if ( v26 && *(_QWORD *)(v26 + 128) )
  {
    v28 = a8;
  }
  else
  {
    result = VIDMM_PAGE_DIRECTORY::CommitPageDirectory(this, v23, a9);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)this &= ~0x10000u;
    v28 = 1;
  }
  v29 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 0x10000) == 0 )
  {
    v28 = 1;
    v27 = 2;
  }
  LODWORD(v30) = v143;
  if ( v28 )
  {
    if ( (_DWORD)v143 )
    {
      v101 = 0LL;
      v102 = (unsigned int)v143;
      do
      {
        v103 = *((_QWORD *)this + 3);
        v101 += 16LL;
        *(_QWORD *)(v101 + v103 - 16) = 0LL;
        *(_QWORD *)(v101 + v103 - 8) = 0LL;
        --v102;
      }
      while ( v102 );
      v29 = *(_DWORD *)this;
    }
    v31 = v138;
    v139 = v138;
    v129 = 1;
  }
  else
  {
    v31 = v138;
  }
  v32 = v141;
  *(_QWORD *)v142 = v15 >> 12;
  v134 = 0;
  v146 = 0;
  v33 = *((_QWORD *)v141 + 5);
  v34 = v16 & ~*((_QWORD *)v141 + 4);
  v145 = v33 + v34;
  v35 = (char *)(v33 + v34);
  v36 = 0;
  if ( (v29 & 0x20) != 0 && *((_BYTE *)a3 + 57) )
  {
    if ( *((_BYTE *)a3 + 56) )
      v36 = v31;
    v146 = v36;
  }
  v37 = 0;
  v130 = 0;
  while ( 1 )
  {
    v137 = v129;
    if ( (unsigned int)v30 >= v31 )
      goto LABEL_62;
    v38 = v36 + v30;
    v128 = 0;
    v39 = v36 + v30;
    v135 = v36 + v30;
    v133 = v36 + v30;
    v132 = 0;
    LOBYTE(v156) = 0;
    if ( *((_BYTE *)a3 + 58) && (*(_DWORD *)this & 0x20) != 0 )
    {
      v39 = v38 + v138;
      LOBYTE(v156) = 1;
      if ( v38 != (_DWORD)v30 )
        v39 = v30;
      v133 = v39;
    }
    if ( (unsigned __int64)v35 >= v152 )
      v134 = 1;
    v40 = (char *)v152;
    v41 = *(_QWORD *)a3;
    if ( (unsigned __int64)v35 < v152 )
      v40 = v35;
    v148 = v40;
    v42 = (unsigned __int64)&v40[-*(_QWORD *)v142];
    v136 = (struct VIDMM_GLOBAL *)&v40[-*(_QWORD *)v142];
    if ( (v41 & 1) != 0 )
      break;
    v43 = *((_QWORD *)this + 3);
    if ( (*(_BYTE *)(v43 + 16LL * v38) & 1) != 0 || (*(_BYTE *)(v43 + 16LL * v39) & 1) != 0 )
      break;
LABEL_61:
    v30 = (unsigned int)(v30 + 1);
    v32 = v141;
    v34 = (unsigned __int64)v148;
    v68 = v42 << 12;
    v149 += v68;
    v14 += v68;
    v37 = v130;
    v33 = *((_QWORD *)v141 + 5);
    v143 = v30;
    *(_QWORD *)v142 = v148;
    v35 = (char *)v148 + v33;
    v145 = (unsigned __int64)v148 + v33;
    if ( v134 )
      goto LABEL_62;
    v36 = v146;
    v31 = v138;
  }
  if ( (v41 & 2) != 0 )
  {
    v106 = *((_QWORD *)this + 3);
    if ( (*(_BYTE *)(v106 + 16LL * v38) & 2) != 0 )
    {
      v107 = v38;
    }
    else
    {
      if ( !(_BYTE)v156 || (*(_BYTE *)(v106 + 16LL * v39) & 2) == 0 )
        goto LABEL_30;
      v107 = v39;
    }
    if ( (_DWORD)v107 != -1 && (((unsigned __int8)v41 ^ *(_BYTE *)(v106 + 16 * v107)) & 8) == 0 )
      goto LABEL_61;
  }
LABEL_30:
  if ( v33 <= v42 && ((_DWORD)a2[18] & 4) == 0 )
  {
    if ( VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
           this,
           (struct CVirtualAddressAllocator *)a2,
           *(const struct _DXGK_GPUMMUCAPS **)(v153 + 440),
           a3,
           v141,
           v38,
           v39,
           v142[0],
           v14,
           &v128,
           (unsigned __int8 *)a3 + 61) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 16LL * v135) & 0x400LL) != 0 )
      {
        v108 = *((_DWORD *)a3 + 12);
        v147 = (struct VIDMM_ALLOC *)*((_QWORD *)a3 + 5);
        VidMmGlobalAllocFromOwner = (struct _VIDMM_GLOBAL_ALLOC *)GetVidMmGlobalAllocFromOwner(v108, (__int64)v147);
        v151 = VidMmGlobalAllocFromOwner;
        if ( v111 != 1 )
        {
          v112 = v111 - 4;
          if ( v112 )
          {
            if ( v112 == 1 )
              v147 = *(struct VIDMM_ALLOC **)(v110 + 16);
            else
              v147 = 0LL;
          }
          else
          {
            v147 = *(struct VIDMM_ALLOC **)(v110 + 64);
          }
        }
      }
      goto LABEL_59;
    }
    LODWORD(v30) = v143;
    v38 = v135;
  }
  v44 = *((_QWORD *)this + 3);
  v45 = v38;
  v144 = v38;
  v46 = *(_QWORD *)(v44 + 16LL * v38) & 0x400LL;
  if ( (*(_QWORD *)(v44 + 16LL * v38) & 0x400) != 0 )
  {
    v71 = v133;
LABEL_170:
    v113 = v38;
    if ( !v46 )
      v113 = v71;
    if ( *((_QWORD *)v141 + 5) <= v42 )
    {
      v117 = v113;
      ExFreeToPagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)((char *)a2[11] + 40256),
        *(PVOID *)(*((_QWORD *)this + 4) + 8LL * v113));
      *(_QWORD *)(*((_QWORD *)this + 4) + 8 * v117) = 0LL;
      v42 = 2 * v117;
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v42) &= ~0x400uLL;
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v42) &= ~1uLL;
      --*((_DWORD *)this + 1);
      LODWORD(v42) = (_DWORD)v136;
    }
    else
    {
      v130 = VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(
               this,
               (struct CVirtualAddressAllocator *)a2,
               v141,
               *((_BYTE *)a3 + 57),
               v34 << 12,
               v113,
               a9);
      if ( v130 < 0 )
      {
        v116 = WdLogNewEntry5_WdWarning(v115, v114);
        v37 = v130;
        *(_QWORD *)(v116 + 24) = v130;
LABEL_203:
        WdLogEvent5_WdWarning(v116);
        goto LABEL_204;
      }
    }
    v45 = v144;
    LODWORD(v30) = v143;
    v132 = 1;
    goto LABEL_33;
  }
  if ( (_BYTE)v156 )
  {
    v71 = v133;
    if ( (*(_DWORD *)(v44 + 16LL * v133) & 0x400LL) != 0 )
      goto LABEL_170;
  }
LABEL_33:
  v47 = *(_DWORD *)this;
  v48 = *(_DWORD *)this;
  v49 = *((_BYTE *)a3 + 56);
  v131 = v49;
  v50 = v48 & 0x20;
  if ( !v50 || *((_DWORD *)a3 + 13) || !v49 )
    goto LABEL_35;
  if ( !*((_BYTE *)a3 + 57) )
  {
    v118 = *(_DWORD **)(*((_QWORD *)this + 4) + 8 * v45);
    if ( v118 )
    {
      if ( v118[1] && (*v118 & 0x40) == 0 )
      {
        v49 = 0;
        v131 = 0;
        goto LABEL_186;
      }
    }
  }
  if ( (v42 & 0xF) != 0 )
  {
    v49 = 0;
    v131 = 0;
    goto LABEL_186;
  }
  v131 = CheckContiguousSysMem(*((struct _MDL **)a3 + 4), v42, v14 >> 12);
  v49 = v131;
  if ( v131 )
  {
LABEL_35:
    v51 = v135;
    goto LABEL_36;
  }
  LODWORD(v30) = v143;
LABEL_186:
  v51 = v30;
  v135 = v30;
  if ( (_BYTE)v156 )
    v133 = v30 + v138;
LABEL_36:
  v52 = v51;
  if ( (*(_BYTE *)a3 & 1) == 0 && (*(_BYTE *)(*((_QWORD *)this + 3) + 16LL * v51) & 2) == 0
    || *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * v51) )
  {
    goto LABEL_38;
  }
  if ( v50 )
  {
    if ( *((_BYTE *)a3 + 57) && v49 || *((_DWORD *)a3 + 13) == -3 )
    {
      v76 = 1;
    }
    else
    {
      v76 = 0;
      if ( v49 )
      {
        v77 = 1;
        goto LABEL_89;
      }
    }
    v77 = 0;
LABEL_89:
    PageTable = CreatePageTable((struct CVirtualAddressAllocator *)a2, (v47 >> 7) & 0x1F, v76, v77);
    goto LABEL_90;
  }
  PageTable = CreatePageDirectory((struct CVirtualAddressAllocator *)a2, (v47 >> 7) & 0x1F, (v47 & 7) - 1);
LABEL_90:
  v81 = *((_QWORD *)this + 4);
  *(_QWORD *)(v81 + 8 * v52) = PageTable;
  if ( !*(_QWORD *)(*((_QWORD *)this + 4) + 8 * v52) )
  {
    v122 = WdLogNewEntry5_WdAssertion(v81, v79, v80);
    *(_QWORD *)(v122 + 24) = 5761LL;
    WdLogEvent5_WdAssertion(v122);
    v37 = -1073741801;
LABEL_204:
    v32 = v141;
LABEL_62:
    v69 = (struct CVirtualAddressAllocator *)a2;
    goto LABEL_63;
  }
LABEL_38:
  v53 = *((_QWORD *)this + 3);
  v144 = 16 * v52;
  v54 = *(_QWORD *)(16 * v52 + v53);
  v55 = (unsigned __int8)v54;
  LOBYTE(v55) = (v54 & 1) == 0;
  v56 = v54 & 2;
  if ( v56 )
  {
    v72 = v133;
  }
  else
  {
    v57 = v55;
    if ( !(_BYTE)v156 || (v72 = v133, (*(_BYTE *)(v53 + 16LL * v133) & 2) == 0) )
    {
      v58 = v136;
      goto LABEL_41;
    }
  }
  v58 = v136;
  if ( *((_QWORD *)v141 + 5) <= (unsigned __int64)v136 )
  {
    v120 = v135;
    v57 = v55;
    if ( !v56 )
      v120 = v72;
    v121 = 2LL * v120;
    *(_QWORD *)(v53 + 8 * v121) &= ~2uLL;
    *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v121) &= ~1uLL;
    --*((_DWORD *)this + 1);
    goto LABEL_197;
  }
  v125 = v34;
  v69 = (struct CVirtualAddressAllocator *)a2;
  v119 = VIDMM_PAGE_DIRECTORY::ExpandZeroPte(
           this,
           (struct CVirtualAddressAllocator *)a2,
           a3,
           v135,
           v72,
           *(unsigned __int64 *)v142,
           (unsigned __int64)v148,
           v125,
           v145,
           a9);
  v130 = v119;
  if ( v119 >= 0 )
  {
    v58 = v136;
    v57 = 0;
LABEL_197:
    v132 = 1;
LABEL_41:
    v59 = *(_DWORD *)this;
    v60 = 8 * v52;
    v145 = 8 * v52;
    if ( (v59 & 0x20) == 0 )
    {
      v42 = (unsigned __int64)v136;
      v63 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
              *(VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 4) + v60),
              (struct CVirtualAddressAllocator *)a2,
              a3,
              v149,
              *(_QWORD *)v142 << 12,
              (unsigned __int64)v136,
              v14,
              v57,
              a9);
      v62 = v133;
      v130 = v63;
      goto LABEL_49;
    }
    if ( (*(_BYTE *)a3 & 1) != 0 )
    {
      v82 = *((_BYTE *)a3 + 56);
      v126 = a9;
      *((_BYTE *)a3 + 56) = v131;
      v83 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
              *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 4) + v60),
              (struct CVirtualAddressAllocator *)a2,
              a3,
              v149,
              *(_QWORD *)v142 << 12,
              v58,
              v14,
              v57,
              v126);
      *((_BYTE *)a3 + 56) = v82;
      v37 = v83;
      v130 = v83;
    }
    else
    {
      v61 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 4) + 8 * v52);
      if ( v61 && *((_DWORD *)v61 + 1) )
      {
        v37 = VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
                v61,
                (struct CVirtualAddressAllocator *)a2,
                a3,
                *(_QWORD *)v142 << 12,
                (unsigned __int64)v58);
        v130 = v37;
      }
      else
      {
        v37 = v130;
      }
    }
    if ( *((_BYTE *)a3 + 58) )
    {
      if ( v37 < 0 )
        goto LABEL_202;
      v62 = v133;
      v73 = 2LL * v133;
      if ( (*(_BYTE *)(*((_QWORD *)this + 3) + 16LL * v133) & 1) == 0 )
        goto LABEL_48;
      v74 = 8LL * v133;
      v75 = VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
              *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 4) + v74),
              (struct CVirtualAddressAllocator *)a2,
              a3,
              *(_QWORD *)v142 << 12,
              (unsigned __int64)v136);
      v130 = v75;
      if ( v75 < 0 )
      {
        v37 = v75;
        goto LABEL_202;
      }
      v61 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 4) + v74);
      if ( !*((_DWORD *)v61 + 1) )
      {
        v55 = (unsigned __int64)a2;
        if ( ((_DWORD)a2[18] & 4) == 0 )
        {
          --*((_DWORD *)this + 1);
          v88 = *((_QWORD *)this + 3);
          v128 = 1;
          *(_QWORD *)(v88 + 8 * v73) = 0LL;
          *(_QWORD *)(v88 + 8 * v73 + 8) = 0LL;
          VIDMM_PAGE_TABLE::DestroyPageTable(
            *(struct VIDMM_ALLOC ***)(*((_QWORD *)this + 4) + v74),
            (struct CVirtualAddressAllocator *)a2,
            *(_QWORD *)v142 & ~*((_QWORD *)v141 + 4));
          *(_QWORD *)(*((_QWORD *)this + 4) + v74) = 0LL;
        }
      }
      v60 = v145;
    }
    v62 = v133;
LABEL_48:
    v42 = (unsigned __int64)v136;
    v63 = v130;
LABEL_49:
    if ( v63 >= 0 )
    {
      if ( (*(_BYTE *)a3 & 1) != 0 )
      {
        v84 = v144;
        if ( (*(_DWORD *)this & 0x20) == 0
          || *((_BYTE *)a3 + 57)
          || (v85 = *((_QWORD *)this + 3),
              ((**(_DWORD **)(*((_QWORD *)this + 4) + v60) >> 6) & 1) == ((*(_DWORD *)(v144 + v85) & 0x60000) == 0x20000LL)) )
        {
          v85 = *((_QWORD *)this + 3);
          v86 = 0;
        }
        else
        {
          v86 = 1;
        }
        if ( (*(_QWORD *)(v85 + v144) & 1) == 0 || v86 || v132 )
        {
          if ( (*(_QWORD *)(v85 + v144) & 1LL) == 0 )
          {
            *(_QWORD *)(v85 + v144) |= 1uLL;
            ++*((_DWORD *)this + 1);
            v85 = *((_QWORD *)this + 3);
          }
          *(_QWORD *)(v85 + v84) &= ~0x400uLL;
          *(_QWORD *)(*((_QWORD *)this + 3) + v84) &= ~2uLL;
          *(_QWORD *)(*((_QWORD *)this + 3) + v84) &= ~8uLL;
          if ( (_BYTE)v156 )
          {
            v100 = 2LL * v62;
            *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v100) &= ~0x400uLL;
            *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v100) &= ~2uLL;
            *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v100) &= ~8uLL;
          }
          VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, (struct CVirtualAddressAllocator *)a2, v135);
          goto LABEL_105;
        }
      }
      else
      {
        if ( v132 )
          v128 = 1;
        v64 = (struct CVirtualAddressAllocator *)a2;
        if ( ((_DWORD)a2[18] & 4) == 0 )
        {
          v65 = *((_QWORD *)this + 3);
          v66 = v144;
          v67 = *(_QWORD *)v142 & ~*((_QWORD *)v141 + 4);
          if ( (*(_BYTE *)(v65 + v144) & 1) != 0 )
          {
            if ( !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + v60) + 4LL) )
            {
              --*((_DWORD *)this + 1);
              *(_QWORD *)(v65 + v66) = 0LL;
              *(_QWORD *)(v65 + v66 + 8) = 0LL;
              v98 = *(struct VIDMM_ALLOC ***)(*((_QWORD *)this + 4) + v60);
              if ( (*(_DWORD *)this & 0x20) != 0 )
                VIDMM_PAGE_TABLE::DestroyPageTable(v98, (struct CVirtualAddressAllocator *)a2, v67);
              else
                VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(
                  (VIDMM_PAGE_DIRECTORY *)v98,
                  (struct CVirtualAddressAllocator *)a2,
                  v67,
                  v57);
              v99 = *((_QWORD *)this + 4);
              v62 = v133;
              v128 = 1;
              *(_QWORD *)(v99 + v60) = 0LL;
            }
            v64 = (struct CVirtualAddressAllocator *)a2;
          }
          if ( v62 != v135 && VIDMM_PAGE_DIRECTORY::CheckPageTableInvalid(this, v64, v62, v67) )
          {
LABEL_105:
            if ( !v129 )
              v129 = 1;
            LODWORD(v30) = v143;
            v87 = v143;
            v42 = (unsigned __int64)v136;
            if ( v137 )
              v87 = v140;
            v140 = v87;
            if ( (unsigned int)v143 >= v139 )
            {
              v140 = v87;
              v139 = v143 + 1;
            }
            goto LABEL_61;
          }
          v42 = (unsigned __int64)v136;
        }
      }
LABEL_59:
      if ( !v128 )
      {
        LODWORD(v30) = v143;
        goto LABEL_61;
      }
      goto LABEL_105;
    }
    v37 = v130;
LABEL_202:
    v116 = WdLogNewEntry5_WdWarning(v61, v55);
    goto LABEL_203;
  }
  v32 = v141;
  v37 = v119;
LABEL_63:
  if ( v129 )
  {
    LODWORD(a9) = 0;
    v156 = 0LL;
    v148 = 0LL;
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(this, v69, (unsigned int *)&a9, &v156, &v148) >= 0 )
    {
      v93 = v140 * *((_QWORD *)v141 + 5) + (v154 & ~(*((_QWORD *)v141 + 2) | *((_QWORD *)v141 + 4)));
      v94 = *(_DWORD *)this;
      if ( *((_BYTE *)a3 + 57) && (v94 & 0x20) != 0 )
        v95 = (struct _DXGK_PTE *)(*((_QWORD *)this + 3) + 16LL * (v138 + v140));
      else
        v95 = 0LL;
      if ( (*((_BYTE *)v150 + 40936) & 0x10) == 0 )
        v9 = (__int16)v94 >> 13;
      v139 -= v140;
      v127 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v27;
      v96 = (void *)v156;
      VIDMM_GLOBAL::UpdatePageTable(
        v150,
        v94 & 7,
        *((struct VIDMM_PROCESS **)v69 + 12),
        *((_QWORD *)a3 + 2),
        v147,
        v151,
        v157 + (v93 << 12) - (v154 << 12),
        v140,
        v139,
        (struct _DXGK_PTE *)(*((_QWORD *)this + 3) + 16LL * v140),
        v95,
        (v94 >> 7) & 0x1F,
        (unsigned int)a9,
        v156,
        v9,
        v93,
        v127,
        *((_QWORD *)a3 + 8));
      VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(this, v69, v97, v96, v148);
      *(_DWORD *)this |= 0x10000u;
      v32 = v141;
      goto LABEL_64;
    }
    v123 = WdLogNewEntry5_WdError(v90, v89, v91, v92);
    *(_QWORD *)(v123 + 24) = 6033LL;
    WdLogEvent5_WdError(v123);
    return 3221225473LL;
  }
  else
  {
LABEL_64:
    if ( !*((_DWORD *)this + 1) && (*((_DWORD *)v69 + 36) & 4) == 0 )
      VIDMM_PAGE_DIRECTORY::EvictPageDirectory((struct VIDMM_ALLOC **)this, v69, v15 & ~*((_QWORD *)v32 + 4), 1u, 1u);
    return (unsigned int)v37;
  }
}
