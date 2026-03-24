/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00705F0
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C006FD28 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0070480 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00705F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BCF64 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0015054 (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00179EC (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     ExFreeToPagedLookasideList @ 0x1C00260FC (ExFreeToPagedLookasideList.c)
 *     ?CheckPageTableInvalid@VIDMM_PAGE_DIRECTORY@@QEAAEI_KPEAPEAV1@PEAPEAVVIDMM_PAGE_TABLE@@@Z @ 0x1C005FAA8 (-CheckPageTableInvalid@VIDMM_PAGE_DIRECTORY@@QEAAEI_KPEAPEAV1@PEAPEAVVIDMM_PAGE_TABLE@@@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C0070430 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00705F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1C00715E0 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C0071CF0 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0072B4C (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0072D68 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0088228 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C0088410 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0088760 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C0088830 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1C0088A58 (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0088D2C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C0088FCC (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C008A4C8 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?CheckContiguousSysMem@@YAEPEAU_MDL@@I_K@Z @ 0x1C00BC918 (-CheckContiguousSysMem@@YAEPEAU_MDL@@I_K@Z.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BCCD8 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00BCF64 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VAD_OWNER_TYPE@@@Z @ 0x1C00BDCCC (-RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VA.c)
 *     ?RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x1C00BE78C (-RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        char a8,
        struct VIDMM_ALLOC **a9)
{
  struct COMMIT_VA_STATE *v10; // r13
  struct CVirtualAddressAllocator *v11; // r12
  unsigned __int64 *v12; // rdi
  __int64 v13; // r11
  int v14; // r11d
  __int64 v15; // rax
  __int64 result; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v19; // r10d
  char v20; // r8
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rbx
  struct VIDMM_PROCESS *v24; // r14
  int v25; // r10d
  unsigned int v26; // eax
  unsigned __int64 *v27; // r15
  unsigned __int64 v28; // r9
  __int64 v29; // rax
  int v30; // r10d
  char v31; // dl
  struct _DXGK_UPDATEPAGETABLEFLAGS v32; // ebx
  char v33; // cl
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  unsigned int v38; // r8d
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r11
  unsigned __int64 v41; // rcx
  unsigned int v42; // eax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r8
  unsigned int v45; // r14d
  unsigned int v46; // edx
  unsigned __int64 v47; // r14
  unsigned int v48; // edi
  unsigned int v49; // r15d
  int v50; // eax
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 v53; // r8
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // ecx
  __int64 v58; // rdx
  int v59; // r8d
  int v60; // r8d
  int v61; // r8d
  bool v62; // zf
  __int64 v63; // rcx
  __int64 v64; // r14
  __int64 v65; // rdx
  unsigned int v66; // ecx
  int v67; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r15
  __int64 v71; // rdi
  unsigned int v72; // r11d
  unsigned __int8 v73; // r15
  int v74; // r10d
  _DWORD *v75; // rcx
  __int64 v76; // r12
  unsigned __int8 v77; // r8
  unsigned __int8 v78; // r9
  struct CVirtualAddressAllocator *v79; // r14
  struct VIDMM_PAGE_DIRECTORY *PageTable; // rax
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // r8
  __int64 v86; // r13
  __int64 v87; // rcx
  bool v88; // dl
  int v89; // ecx
  char v90; // di
  unsigned int v91; // r9d
  unsigned int v92; // eax
  __int64 v93; // rcx
  struct COMMIT_VA_STATE *v94; // rdx
  char v95; // r14
  __int64 v96; // r15
  struct CVirtualAddressAllocator *v97; // r12
  unsigned __int64 v98; // r9
  struct COMMIT_VA_STATE *v99; // r8
  unsigned __int64 v100; // rax
  int v101; // eax
  __int64 v102; // rcx
  unsigned int v103; // r10d
  unsigned __int64 v104; // r9
  __int64 v105; // rdi
  __int64 v106; // r14
  int v107; // eax
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v108; // r11
  __int64 v109; // rax
  __int64 v110; // rax
  unsigned __int64 v111; // r9
  struct COMMIT_VA_STATE *v112; // r8
  unsigned __int64 v113; // rax
  int v114; // eax
  __int64 v115; // r8
  char v116; // dl
  __int64 v117; // rcx
  int v118; // eax
  __int64 v119; // rdi
  unsigned int v120; // edx
  char v121; // al
  char v122; // di
  int v123; // eax
  unsigned __int64 v124; // r8
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rax
  unsigned int v132; // esi
  unsigned int v133; // ecx
  unsigned __int64 v134; // rdx
  struct _DXGK_PTE *v135; // r9
  enum _DXGK_PAGETABLEUPDATEMODE v136; // r14d
  __int64 v137; // r8
  unsigned __int64 *v138; // rbx
  unsigned __int64 *v139; // rbx
  __int64 v140; // rax
  struct _VIDMM_GLOBAL_ALLOC *v141; // [rsp+28h] [rbp-E8h]
  struct VIDMM_GLOBAL *v142; // [rsp+28h] [rbp-E8h]
  struct VIDMM_ALLOC **v143; // [rsp+30h] [rbp-E0h]
  struct VIDMM_ALLOC **v144; // [rsp+30h] [rbp-E0h]
  struct VIDMM_ALLOC **v145; // [rsp+40h] [rbp-D0h]
  struct VIDMM_ALLOC **v146; // [rsp+40h] [rbp-D0h]
  unsigned __int8 v147; // [rsp+90h] [rbp-80h] BYREF
  char v148; // [rsp+91h] [rbp-7Fh]
  char v149; // [rsp+92h] [rbp-7Eh]
  char v150; // [rsp+93h] [rbp-7Dh]
  int v151; // [rsp+94h] [rbp-7Ch]
  int v152; // [rsp+98h] [rbp-78h]
  unsigned int v153; // [rsp+9Ch] [rbp-74h]
  unsigned int v154; // [rsp+A0h] [rbp-70h]
  char v155; // [rsp+A4h] [rbp-6Ch]
  unsigned int v156; // [rsp+A8h] [rbp-68h]
  unsigned int v157[2]; // [rsp+B0h] [rbp-60h]
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v158; // [rsp+B8h] [rbp-58h]
  unsigned int v159; // [rsp+C0h] [rbp-50h]
  struct VIDMM_GLOBAL *v160; // [rsp+C8h] [rbp-48h]
  unsigned int v161; // [rsp+D0h] [rbp-40h]
  VIDMM_PAGE_TABLE *v162; // [rsp+D8h] [rbp-38h]
  unsigned __int64 v163; // [rsp+E0h] [rbp-30h]
  unsigned int v164; // [rsp+E8h] [rbp-28h]
  int v165; // [rsp+ECh] [rbp-24h]
  struct VIDMM_PAGE_DIRECTORY *v166; // [rsp+F0h] [rbp-20h] BYREF
  struct VIDMM_PAGE_TABLE *v167; // [rsp+F8h] [rbp-18h] BYREF
  unsigned __int64 v168; // [rsp+100h] [rbp-10h]
  unsigned int v169; // [rsp+108h] [rbp-8h]
  unsigned int v170; // [rsp+10Ch] [rbp-4h]
  struct VIDMM_ALLOC *v171; // [rsp+110h] [rbp+0h]
  void *v172; // [rsp+118h] [rbp+8h] BYREF
  unsigned __int64 v173; // [rsp+120h] [rbp+10h]
  unsigned __int64 v174; // [rsp+128h] [rbp+18h]
  VIDMM_GLOBAL *v175; // [rsp+130h] [rbp+20h]
  __int64 v176; // [rsp+138h] [rbp+28h]
  unsigned __int64 v177; // [rsp+140h] [rbp+30h]
  struct _VIDMM_GLOBAL_ALLOC *VidMmGlobalAllocFromOwner; // [rsp+148h] [rbp+38h]
  unsigned __int64 v179; // [rsp+150h] [rbp+40h]
  struct COMMIT_VA_STATE *v181; // [rsp+1B0h] [rbp+A0h] BYREF
  unsigned __int64 v182; // [rsp+1B8h] [rbp+A8h]

  v182 = a4;
  v181 = a3;
  v168 = a4;
  v10 = a3;
  v162 = 0LL;
  v11 = a2;
  v167 = 0LL;
  *a9 = 0LL;
  v12 = 0LL;
  v13 = *(_QWORD *)a3;
  v166 = 0LL;
  v14 = v13 & 1;
  if ( !v14 )
  {
    v15 = *((_QWORD *)this + 2);
    if ( !v15 || !*(_QWORD *)(v15 + 128) || !*((_DWORD *)this + 1) )
      return 0LL;
  }
  if ( ((a7 | a5) & 0xFFF) != 0 )
  {
    v140 = WdLogNewEntry5_WdAssertion(0LL, a5, a3);
    *(_QWORD *)(v140 + 24) = 6111LL;
    WdLogEvent5_WdAssertion(v140);
    return 3221225485LL;
  }
  v173 = a5 >> 12;
  v17 = (a5 >> 12) + a6;
  v179 = v17;
  if ( v17 <= a5 >> 12 )
  {
    v18 = WdLogNewEntry5_WdAssertion(0LL, v17, a3);
    *(_QWORD *)(v18 + 24) = 6128LL;
    WdLogEvent5_WdAssertion(v18);
    return 3221225485LL;
  }
  v19 = *(_DWORD *)this;
  v20 = *(_DWORD *)this;
  v175 = (VIDMM_GLOBAL *)*((_QWORD *)v11 + 11);
  v21 = v20 & 7;
  v22 = (v19 >> 7) & 0x1F;
  v23 = *((_QWORD *)v175 + 5027);
  VidMmGlobalAllocFromOwner = 0LL;
  v171 = 0LL;
  v176 = v23 + 1584 * v22;
  v24 = (struct VIDMM_PROCESS *)*((_QWORD *)v11 + 12);
  v158 = (struct VIDMM_PAGE_TABLE_LEVEL_DESC *)(v176 + 88 + 48 * v21);
  v163 = (v173 & *((_QWORD *)v158 + 2)) >> *((_QWORD *)v158 + 3);
  v25 = v19 & 0x10;
  if ( v25 )
    v26 = *(_DWORD *)(32 * v22 + *((_QWORD *)v11 + 15) + 16);
  else
    v26 = *(_DWORD *)(v23 + 48 * (v21 + 33 * v22) + 88);
  v27 = (unsigned __int64 *)v162;
  v154 = v26;
  if ( v25 && *((_QWORD *)v175 + 5123) )
  {
    v28 = a6 << 12;
    if ( v14 )
      VIDMM_GLOBAL::RecordVaPagingHistoryCommit(
        v175,
        v24,
        a5,
        v28,
        *((_DWORD *)v10 + 13),
        a7,
        *((_QWORD *)v10 + 4),
        *((_QWORD *)v10 + 5),
        *((_DWORD *)v10 + 12));
    else
      VIDMM_GLOBAL::RecordVaPagingHistoryUncommit(v175, v24, a5, v28);
  }
  v29 = *((_QWORD *)this + 2);
  v30 = 0;
  v31 = 0;
  v156 = 0;
  v159 = 0;
  v32 = 0;
  v148 = 0;
  if ( v29 && *(_QWORD *)(v29 + 128) )
  {
    v33 = a8;
  }
  else
  {
    result = VIDMM_PAGE_DIRECTORY::CommitPageDirectory(this, v11, a9);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)this &= ~0x10000u;
    v30 = 0;
    v31 = 0;
    v33 = 1;
  }
  v34 = *(_DWORD *)this;
  if ( (*(_DWORD *)this & 0x10000) == 0 )
  {
    v33 = 1;
    v32 = (struct _DXGK_UPDATEPAGETABLEFLAGS)2;
  }
  if ( v33 )
  {
    if ( (_DWORD)v163 )
    {
      v35 = 0LL;
      v36 = (unsigned int)v163;
      do
      {
        v37 = *((_QWORD *)this + 5);
        v35 += 16LL;
        *(_QWORD *)(v35 + v37 - 16) = 0LL;
        *(_QWORD *)(v35 + v37 - 8) = 0LL;
        --v36;
      }
      while ( v36 );
      v34 = *(_DWORD *)this;
    }
    v38 = v154;
    v31 = 1;
    v148 = 1;
    v159 = v154;
  }
  else
  {
    v38 = v154;
  }
  LOBYTE(v165) = 0;
  v164 = 0;
  v39 = *((_QWORD *)v158 + 5);
  v40 = v173 & ~*((_QWORD *)v158 + 4);
  *(_QWORD *)v157 = v173;
  v174 = v40;
  v172 = (void *)(v39 + v40);
  v41 = v39 + v40;
  if ( (v34 & 0x20) != 0 && *((_BYTE *)v10 + 57) )
  {
    v42 = 0;
    if ( *((_BYTE *)v10 + 56) )
      v42 = v38;
    v164 = v42;
  }
  LODWORD(v43) = v163;
  v44 = v39 + v40;
  v45 = v154;
  v155 = v31;
  v46 = v163;
  v151 = 0;
  v169 = v163;
  v170 = 0;
  if ( (unsigned int)v163 >= v154 )
    goto LABEL_190;
  v47 = *(_QWORD *)v157;
  while ( 1 )
  {
    LOBYTE(v30) = 0;
    v48 = v43 + v164;
    v152 = v30;
    v49 = v43 + v164;
    v147 = 0;
    v150 = 0;
    v149 = 0;
    v161 = v43 + v164;
    v153 = v43 + v164;
    if ( *((_BYTE *)v10 + 58) && (*(_DWORD *)this & 0x20) != 0 )
    {
      LOBYTE(v30) = 1;
      v49 = v48 + v154;
      v149 = 1;
      if ( v48 != (_DWORD)v163 )
        v49 = v46;
      v153 = v49;
    }
    v50 = (unsigned __int8)v165;
    if ( v41 >= v179 )
      v50 = 1;
    v165 = v50;
    v51 = v179;
    v52 = *(_QWORD *)v10;
    if ( v44 < v179 )
      v51 = v44;
    v177 = v51;
    v53 = v51 - v47;
    v160 = (struct VIDMM_GLOBAL *)(v51 - v47);
    if ( (v52 & 1) == 0 )
    {
      v54 = *((_QWORD *)this + 5);
      if ( (*(_BYTE *)(v54 + 16LL * v48) & 1) == 0 && (*(_BYTE *)(v54 + 16LL * v49) & 1) == 0 )
        goto LABEL_181;
    }
    if ( (v52 & 2) != 0 )
    {
      v55 = *((_QWORD *)this + 5);
      if ( (*(_BYTE *)(v55 + 16LL * v48) & 2) != 0 )
      {
        v56 = v48;
      }
      else
      {
        if ( !(_BYTE)v30 || (*(_BYTE *)(v55 + 16LL * v49) & 2) == 0 )
          goto LABEL_58;
        v56 = v49;
      }
      if ( (_DWORD)v56 != -1 && (((unsigned __int8)v52 ^ *(_BYTE *)(v55 + 16 * v56)) & 8) == 0 )
        goto LABEL_181;
    }
LABEL_58:
    if ( v39 <= v53 && (*((_DWORD *)v11 + 36) & 4) == 0 )
    {
      if ( VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
             this,
             v11,
             *(const struct _DXGK_GPUMMUCAPS **)(v176 + 440),
             v10,
             v158,
             v48,
             v49,
             v47,
             a7,
             &v147,
             (unsigned __int8 *)v10 + 61) )
      {
        if ( (*(_DWORD *)(*((_QWORD *)this + 5) + 16LL * v48) & 0x400LL) == 0 )
          goto LABEL_68;
        v57 = *((_DWORD *)v10 + 12);
        v171 = (struct VIDMM_ALLOC *)*((_QWORD *)v10 + 5);
        VidMmGlobalAllocFromOwner = (struct _VIDMM_GLOBAL_ALLOC *)GetVidMmGlobalAllocFromOwner(v57, (__int64)v171);
        v60 = v59 - 1;
        if ( !v60 )
          goto LABEL_68;
        v61 = v60 - 3;
        if ( !v61 )
        {
          v171 = *(struct VIDMM_ALLOC **)(v58 + 64);
LABEL_68:
          LOBYTE(v61) = v147;
          goto LABEL_171;
        }
        v62 = v61 == 1;
        LOBYTE(v61) = v147;
        if ( v62 )
          v171 = *(struct VIDMM_ALLOC **)(v58 + 24);
        else
          v171 = 0LL;
        goto LABEL_171;
      }
      v40 = v174;
      v53 = (unsigned __int64)v160;
      v152 = v147;
    }
    v63 = *((_QWORD *)this + 5);
    v64 = v48;
    v65 = *(_QWORD *)(v63 + 16LL * v48) & 0x400LL;
    if ( (*(_QWORD *)(v63 + 16LL * v48) & 0x400) != 0 || v149 && (*(_DWORD *)(v63 + 16LL * v49) & 0x400LL) != 0 )
    {
      v66 = v48;
      if ( !v65 )
        v66 = v49;
      if ( *((_QWORD *)v158 + 5) <= v53 )
      {
        v71 = v66;
        ExFreeToPagedLookasideList(
          (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)v11 + 11) + 40256LL),
          *(PVOID *)(*((_QWORD *)this + 6) + 8LL * v66));
        *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v71) = 0LL;
        v71 *= 2LL;
        *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v71) &= ~0x400uLL;
        *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v71) &= ~1uLL;
        --*((_DWORD *)this + 1);
        v48 = v161;
      }
      else
      {
        v67 = VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(this, v11, v158, *((_BYTE *)v10 + 57), v40 << 12, v66, a9);
        v70 = v67;
        v151 = v67;
        if ( v67 < 0 )
        {
          v125 = WdLogNewEntry5_WdWarning(v69, v68);
          *(_QWORD *)(v125 + 24) = v70;
          WdLogEvent5_WdWarning(v125);
          goto LABEL_189;
        }
        Feature_3895685435__private_IsEnabledDeviceUsage();
      }
      v150 = 1;
    }
    v72 = *(_DWORD *)this;
    v73 = *((_BYTE *)v10 + 56);
    v74 = *(_DWORD *)this & 0x20;
    if ( v74 && !*((_DWORD *)v10 + 13) && v73 )
    {
      if ( *((_BYTE *)v10 + 57)
        || (v75 = *(_DWORD **)(*((_QWORD *)this + 6) + 8 * v64)) == 0LL
        || !v75[1]
        || (*v75 & 0x40) != 0 )
      {
        if ( ((unsigned __int8)v160 & 0xF) != 0 )
        {
          v73 = 0;
        }
        else
        {
          v73 = CheckContiguousSysMem(*((struct _MDL **)v10 + 4), (unsigned int)v160, a7 >> 12);
          if ( v73 )
            goto LABEL_93;
        }
      }
      else
      {
        v73 = 0;
      }
      v48 = v163;
      v161 = v163;
      if ( v149 )
        v153 = v154 + v163;
    }
LABEL_93:
    v76 = v48;
    if ( (*(_BYTE *)v10 & 1) == 0 && (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * v48) & 2) == 0
      || *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * v48) )
    {
      v79 = a2;
      goto LABEL_109;
    }
    if ( v74 )
    {
      if ( *((_BYTE *)v10 + 57) && v73 || *((_DWORD *)v10 + 13) == -3 )
      {
        v77 = 1;
      }
      else
      {
        v77 = 0;
        if ( v73 )
        {
          v78 = 1;
LABEL_104:
          v79 = a2;
          PageTable = CreatePageTable(a2, (v72 >> 7) & 0x1F, v77, v78);
          goto LABEL_106;
        }
      }
      v78 = 0;
      goto LABEL_104;
    }
    v79 = a2;
    PageTable = CreatePageDirectory(a2, (v72 >> 7) & 0x1F, (v72 & 7) - 1);
LABEL_106:
    v83 = *((_QWORD *)this + 6);
    *(_QWORD *)(v83 + 8LL * v48) = PageTable;
    if ( !*(_QWORD *)(*((_QWORD *)this + 6) + 8LL * v48) )
    {
      v84 = WdLogNewEntry5_WdAssertion(v83, v81, v82);
      *(_QWORD *)(v84 + 24) = 6477LL;
      WdLogEvent5_WdAssertion(v84);
      v151 = -1073741801;
      goto LABEL_188;
    }
LABEL_109:
    v85 = *((_QWORD *)this + 5);
    v86 = 2LL * v48;
    v87 = *(_QWORD *)(v85 + 16LL * v48);
    v88 = (v87 & 1) == 0;
    v89 = v87 & 2;
    if ( v89 )
    {
      v91 = v153;
    }
    else
    {
      v90 = v88;
      if ( !v149 )
        goto LABEL_121;
      v91 = v153;
      if ( (*(_BYTE *)(v85 + 16LL * v153) & 2) == 0 )
        goto LABEL_121;
      v48 = v161;
    }
    if ( *((_QWORD *)v158 + 5) <= (unsigned __int64)v160 )
    {
      v92 = v48;
      v90 = v88;
      if ( !v89 )
        v92 = v91;
      v93 = 2LL * v92;
      *(_QWORD *)(v85 + 8 * v93) &= ~2uLL;
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v93) &= ~1uLL;
      --*((_DWORD *)this + 1);
    }
    else
    {
      v151 = VIDMM_PAGE_DIRECTORY::ExpandZeroPte(
               this,
               v79,
               v181,
               v48,
               v91,
               *(unsigned __int64 *)v157,
               v177,
               v174,
               (unsigned __int64)v172,
               a9);
      if ( v151 < 0 )
        goto LABEL_187;
      v90 = 0;
    }
    v150 = 1;
LABEL_121:
    if ( (*(_DWORD *)this & 0x20) == 0 )
    {
      v96 = 8 * v76;
      v11 = a2;
      v62 = (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() == 0;
      v111 = v168;
      v112 = v181;
      v113 = *(_QWORD *)v157;
      v146 = a9;
      v144 = (struct VIDMM_ALLOC **)a7;
      v142 = v160;
      if ( v62 )
      {
        v114 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
                 *(VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 6) + v96),
                 a2,
                 v181,
                 v168,
                 *(_QWORD *)v157 << 12,
                 (unsigned __int64)v160,
                 a7,
                 v90,
                 a9);
      }
      else
      {
        ++*((_DWORD *)this + 1);
        v114 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
                 *(VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 6) + v96),
                 a2,
                 v112,
                 v111,
                 v113 << 12,
                 (unsigned __int64)v142,
                 (unsigned __int64)v144,
                 v90,
                 v146);
        --*((_DWORD *)this + 1);
      }
      v94 = v181;
      v103 = v153;
      v104 = *(_QWORD *)v157;
      v151 = v114;
      goto LABEL_145;
    }
    v94 = v181;
    if ( (*(_BYTE *)v181 & 1) != 0 )
    {
      v95 = *((_BYTE *)v181 + 56);
      *((_BYTE *)v181 + 56) = v73;
      v96 = 8 * v76;
      v97 = a2;
      v62 = (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() == 0;
      v98 = v168;
      v99 = v181;
      v100 = *(_QWORD *)v157;
      v145 = a9;
      v143 = (struct VIDMM_ALLOC **)a7;
      v141 = v160;
      if ( v62 )
      {
        v101 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
                 *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 6) + v96),
                 a2,
                 v181,
                 v168,
                 *(_QWORD *)v157 << 12,
                 v160,
                 a7,
                 v90,
                 a9);
        v94 = v181;
        v151 = v101;
        *((_BYTE *)v181 + 56) = v95;
      }
      else
      {
        ++*((_DWORD *)this + 1);
        v101 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
                 *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 6) + v96),
                 a2,
                 v99,
                 v98,
                 v100 << 12,
                 v141,
                 (unsigned __int64)v143,
                 v90,
                 v145);
        v94 = v181;
        v151 = v101;
        *((_BYTE *)v181 + 56) = v95;
        --*((_DWORD *)this + 1);
      }
    }
    else
    {
      v96 = 8 * v76;
      v97 = a2;
      v102 = *(_QWORD *)(v96 + *((_QWORD *)this + 6));
      if ( v102 && *(_DWORD *)(v102 + 4) )
      {
        v101 = VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
                 (VIDMM_PAGE_TABLE *)v102,
                 a2,
                 v181,
                 *(_QWORD *)v157 << 12,
                 (unsigned __int64)v160);
        v94 = v181;
        v151 = v101;
      }
      else
      {
        v101 = v151;
      }
    }
    if ( !*((_BYTE *)v94 + 58) )
    {
      v103 = v153;
      v104 = *(_QWORD *)v157;
LABEL_144:
      v11 = a2;
LABEL_145:
      v108 = v158;
      goto LABEL_146;
    }
    if ( v101 < 0 )
      break;
    v103 = v153;
    v104 = *(_QWORD *)v157;
    v105 = 2LL * v153;
    v106 = v153;
    if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * v153) & 1) == 0 )
      goto LABEL_144;
    v151 = VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
             *(VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 6) + 8LL * v153),
             v97,
             v94,
             *(_QWORD *)v157 << 12,
             (unsigned __int64)v160);
    if ( v151 < 0 )
      break;
    v104 = *(_QWORD *)v157;
    v103 = v153;
    v102 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v106);
    if ( *(_DWORD *)(v102 + 4) )
    {
      v94 = v181;
      goto LABEL_144;
    }
    v107 = *((_DWORD *)v97 + 36);
    v108 = v158;
    v11 = a2;
    if ( (v107 & 4) == 0 )
    {
      --*((_DWORD *)this + 1);
      LOBYTE(v61) = 1;
      v109 = *((_QWORD *)this + 5);
      v152 = v61;
      *(_QWORD *)(v109 + 8 * v105) = 0LL;
      *(_QWORD *)(v109 + 8 * v105 + 8) = 0LL;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v106) + 40LL) = v162;
      v102 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v106);
      *(_QWORD *)(v102 + 8) = v104 & ~*((_QWORD *)v108 + 4);
      v110 = *((_QWORD *)this + 6);
      v94 = v181;
      v162 = *(VIDMM_PAGE_TABLE **)(v110 + 8 * v106);
      v167 = v162;
      *(_QWORD *)(v110 + 8 * v106) = 0LL;
      goto LABEL_147;
    }
    v94 = v181;
LABEL_146:
    LOBYTE(v61) = v152;
LABEL_147:
    if ( v151 < 0 )
      break;
    if ( (*(_BYTE *)v94 & 1) != 0 )
    {
      if ( (*(_DWORD *)this & 0x20) == 0
        || *((_BYTE *)v94 + 57)
        || (v115 = *((_QWORD *)this + 5),
            ((**(_DWORD **)(v96 + *((_QWORD *)this + 6)) >> 6) & 1) == ((*(_DWORD *)(v115 + 8 * v86) & 0x60000) == 0x20000LL)) )
      {
        v115 = *((_QWORD *)this + 5);
        v116 = 0;
      }
      else
      {
        v116 = 1;
      }
      if ( (*(_QWORD *)(v115 + 8 * v86) & 1) == 0 || v116 || v150 )
      {
        if ( (*(_QWORD *)(v115 + 8 * v86) & 1LL) == 0 )
        {
          *(_QWORD *)(v115 + 8 * v86) |= 1uLL;
          ++*((_DWORD *)this + 1);
          v115 = *((_QWORD *)this + 5);
        }
        *(_QWORD *)(v115 + 8 * v86) &= ~0x400uLL;
        *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v86) &= ~2uLL;
        *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v86) &= ~8uLL;
        if ( v149 )
        {
          v117 = 2LL * v103;
          *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v117) &= ~0x400uLL;
          *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v117) &= ~2uLL;
          *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v117) &= ~8uLL;
        }
        VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, v11, v161);
        goto LABEL_172;
      }
LABEL_170:
      LOBYTE(v61) = v152;
      goto LABEL_171;
    }
    v118 = *((_DWORD *)v11 + 36);
    v61 = (unsigned __int8)v61;
    if ( v150 )
      v61 = 1;
    v152 = v61;
    if ( (v118 & 4) == 0 )
    {
      v119 = v104 & ~*((_QWORD *)v108 + 4);
      v62 = VIDMM_PAGE_DIRECTORY::CheckPageTableInvalid(this, v161, v119, &v166, &v167) == 0;
      v61 = (unsigned __int8)v152;
      if ( !v62 )
        v61 = 1;
      v152 = v61;
      if ( v153 != v161 )
      {
        if ( VIDMM_PAGE_DIRECTORY::CheckPageTableInvalid(this, v153, v119, &v166, &v167) )
        {
          v162 = v167;
          goto LABEL_172;
        }
        v162 = v167;
        goto LABEL_170;
      }
      v162 = v167;
    }
LABEL_171:
    if ( !(_BYTE)v61 )
    {
      v53 = (unsigned __int64)v160;
LABEL_181:
      v123 = v163;
      v120 = v156;
      v122 = v148;
      goto LABEL_182;
    }
LABEL_172:
    v120 = v169;
    v53 = (unsigned __int64)v160;
    v121 = v148;
    if ( !v148 )
      v121 = 1;
    v122 = v121;
    v148 = v121;
    if ( v155 )
      v120 = v170;
    v123 = v163;
    v156 = v120;
    if ( (unsigned int)v163 >= v159 )
    {
      v156 = v120;
      v159 = v163 + 1;
    }
LABEL_182:
    v30 = v177;
    v43 = (unsigned int)(v123 + 1);
    v47 = v177;
    v124 = v53 << 12;
    v40 = v177;
    a7 += v124;
    v168 += v124;
    v39 = *((_QWORD *)v158 + 5);
    v163 = v43;
    *(_QWORD *)v157 = v177;
    v174 = v177;
    v41 = v177 + v39;
    v172 = (void *)(v177 + v39);
    if ( (_BYTE)v165 )
      goto LABEL_187;
    v44 = v177 + v39;
    v10 = v181;
    v170 = v120;
    v46 = v43;
    v169 = v43;
    v155 = v122;
    if ( (unsigned int)v43 >= v154 )
      goto LABEL_189;
  }
  v126 = WdLogNewEntry5_WdWarning(v102, v94);
  WdLogEvent5_WdWarning(v126);
LABEL_187:
  v10 = v181;
LABEL_188:
  v11 = a2;
LABEL_189:
  v12 = (unsigned __int64 *)v166;
  v27 = (unsigned __int64 *)v162;
  v45 = v154;
LABEL_190:
  if ( v148 )
  {
    LODWORD(v181) = 0;
    a9 = 0LL;
    v172 = 0LL;
    if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                this,
                v11,
                (unsigned int *)&v181,
                (unsigned __int64 *)&a9,
                &v172) < 0 )
    {
      v131 = WdLogNewEntry5_WdError(v128, v127, v129, v130);
      *(_QWORD *)(v131 + 24) = 6782LL;
      WdLogEvent5_WdError(v131);
      v132 = -1073741823;
      goto LABEL_204;
    }
    v133 = *(_DWORD *)this;
    v134 = v156 * *((_QWORD *)v158 + 5) + (v173 & ~(*((_QWORD *)v158 + 2) | *((_QWORD *)v158 + 4)));
    if ( *((_BYTE *)v10 + 57) && (v133 & 0x20) != 0 )
    {
      v135 = (struct _DXGK_PTE *)(*((_QWORD *)this + 5) + 16LL * (v156 + v45));
      v136 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    }
    else
    {
      v136 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      v135 = 0LL;
    }
    if ( (*((_BYTE *)v175 + 40936) & 0x10) == 0 )
      v136 = (__int16)v133 >> 13;
    v159 -= v156;
    VIDMM_GLOBAL::UpdatePageTable(
      v175,
      v133 & 7,
      *((struct VIDMM_PROCESS **)v11 + 12),
      *((_QWORD *)v10 + 2),
      v171,
      VidMmGlobalAllocFromOwner,
      v182 + (v134 << 12) - (v173 << 12),
      v156,
      v159,
      (struct _DXGK_PTE *)(*((_QWORD *)this + 5) + 16LL * v156),
      v135,
      (v133 >> 7) & 0x1F,
      (unsigned int)v181,
      (unsigned __int64)a9,
      v136,
      v134,
      v32,
      *((_QWORD *)v10 + 8));
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(this, v11, v137, a9, v172);
    *(_DWORD *)this |= 0x10000u;
  }
  if ( !*((_DWORD *)this + 1) && (*((_DWORD *)v11 + 36) & 4) == 0 )
    VIDMM_PAGE_DIRECTORY::EvictPageDirectory(this, v11, a5 & ~*((_QWORD *)v158 + 4), 1u, 1);
  v132 = v151;
LABEL_204:
  if ( v27 )
  {
    do
    {
      v138 = (unsigned __int64 *)v27[5];
      VIDMM_PAGE_TABLE::DestroyPageTable((VIDMM_PAGE_TABLE *)v27, v11, v27[1]);
      v27 = v138;
    }
    while ( v138 );
  }
  if ( v12 )
  {
    do
    {
      v139 = (unsigned __int64 *)v12[4];
      VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v12, v11, v12[1]);
      v12 = v139;
    }
    while ( v139 );
  }
  return v132;
}
