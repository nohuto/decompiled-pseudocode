/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008AF00
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_N@Z @ 0x1C008A360 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C008A930 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008AF00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00E2768 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x1C0002698 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C0002E2C (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     ?Feature_Servicing_DeferPageTableDestruction__private_IsEnabled@@YAHXZ @ 0x1C001D470 (-Feature_Servicing_DeferPageTableDestruction__private_IsEnabled@@YAHXZ.c)
 *     ExFreeToPagedLookasideList @ 0x1C001E5D2 (ExFreeToPagedLookasideList.c)
 *     ?CheckPageTableInvalid@VIDMM_PAGE_DIRECTORY@@QEAAEI_KPEAPEAV1@PEAPEAVVIDMM_PAGE_TABLE@@@Z @ 0x1C007B444 (-CheckPageTableInvalid@VIDMM_PAGE_DIRECTORY@@QEAAEI_KPEAPEAV1@PEAPEAVVIDMM_PAGE_TABLE@@@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008AF00 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@1IIPEAU_DXGK_PTE@@4II1W4_DXGK_PAGETABLEUPDATEMODE@@1U_DXGK_UPDATEPAGETABLEFLAGS@@1@Z @ 0x1C008C800 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C008CDE0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008CEB0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C009E854 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C009FD00 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C009FF38 (-CommitPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C00A0030 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C00A0644 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1C00A12A8 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C00A1C58 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C00A1CA8 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@II_K1PEAUVIDMM_ALLOC@@@Z @ 0x1C00A3178 (-DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@II_K1PEA.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1C00A606C (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1C00A6D04 (-HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_.c)
 *     ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C00D937C (-RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z.c)
 *     ?CheckContiguousSysMem@@YAEPEAU_MDL@@I_K@Z @ 0x1C00E23DC (-CheckContiguousSysMem@@YAEPEAU_MDL@@I_K@Z.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00E2518 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00E2768 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VAD_OWNER_TYPE@@@Z @ 0x1C00E301C (-RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VA.c)
 *     ?RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z @ 0x1C00E3978 (-RecordVaPagingHistoryUncommit@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@_K1@Z.c)
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
  struct _DXGK_PTE *v9; // r12
  struct CVirtualAddressAllocator *v11; // r15
  VIDMM_PAGE_DIRECTORY *v12; // r14
  unsigned __int64 *v13; // rdi
  __int64 v14; // r11
  int v15; // r11d
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  struct VIDMM_PROCESS *v20; // rsi
  unsigned int v21; // edx
  char v22; // r10
  __int64 v23; // r10
  __int64 v24; // r8
  unsigned int v25; // ebx
  unsigned __int64 v26; // r9
  unsigned int v27; // r13d
  __int64 v28; // rax
  unsigned int v30; // eax
  int v31; // ebx
  unsigned __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rax
  int v36; // edx
  unsigned __int64 v37; // r11
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // r13
  unsigned int v40; // edx
  unsigned __int64 v41; // rcx
  int v42; // eax
  unsigned __int64 v43; // rdx
  unsigned int v44; // r8d
  __int64 v45; // rsi
  const struct COMMIT_VA_STATE *v46; // rdi
  unsigned int v47; // r10d
  int v48; // r8d
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int64 v51; // r8
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rax
  int v55; // ecx
  __int64 v56; // rdx
  int v57; // r8d
  int v58; // r8d
  int v59; // r8d
  unsigned __int8 v60; // r15
  __int64 v61; // rcx
  __int64 v62; // rdx
  unsigned int v63; // r8d
  unsigned int v64; // ecx
  int v65; // eax
  unsigned int v66; // r15d
  unsigned int v67; // r13d
  __int64 v68; // rdi
  unsigned int v69; // r10d
  unsigned __int8 v70; // r15
  int v71; // r11d
  _DWORD *v72; // rcx
  unsigned int v73; // eax
  __int64 v74; // rdi
  unsigned __int8 v75; // r8
  unsigned __int8 v76; // r9
  struct CVirtualAddressAllocator *v77; // rsi
  struct VIDMM_PAGE_DIRECTORY *PageTable; // rax
  __int64 v79; // rcx
  __int64 v80; // r9
  __int64 v81; // rcx
  bool v82; // dl
  int v83; // ecx
  char v84; // r8
  unsigned int v85; // r10d
  unsigned __int64 v86; // r13
  unsigned int v87; // eax
  __int64 v88; // rdi
  const struct COMMIT_VA_STATE *v89; // rsi
  char v90; // di
  unsigned __int64 v91; // r9
  struct VIDMM_ALLOC *v92; // rdx
  __int64 v93; // r15
  struct CVirtualAddressAllocator *v94; // r13
  int v95; // esi
  const struct COMMIT_VA_STATE *v96; // rax
  unsigned int v97; // eax
  __int64 v98; // rcx
  unsigned int *v99; // rdi
  unsigned __int64 v100; // r9
  VIDMM_GLOBAL *v101; // r12
  __int64 v102; // rax
  int v103; // eax
  unsigned int v104; // r13d
  unsigned int v105; // edx
  unsigned int v106; // r13d
  bool v107; // zf
  __int64 v108; // rsi
  __int64 v109; // r15
  __int64 v110; // r8
  unsigned __int64 v111; // rax
  char v112; // r9
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // rdx
  unsigned int v116; // esi
  VIDMM_GLOBAL *v117; // r15
  int v118; // esi
  __int64 v119; // rcx
  enum _DXGK_PAGETABLEUPDATEMODE v120; // eax
  void *v121; // rsi
  VIDMM_GLOBAL *v122; // r10
  int v123; // eax
  __int64 v124; // rax
  __int64 *v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 **v128; // rax
  __int64 v129; // rsi
  __int64 v130; // rax
  __int64 v131; // r15
  __int64 v132; // rdx
  __int64 v133; // rdi
  unsigned int *v134; // rsi
  __int64 v135; // r12
  __int64 v136; // rax
  int v137; // eax
  unsigned int v138; // r13d
  unsigned int v139; // edx
  unsigned int v140; // r13d
  __int64 v141; // rdi
  __int64 v142; // r15
  __int64 v143; // r8
  unsigned __int64 v144; // rax
  char v145; // r9
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // rdx
  unsigned int v149; // edi
  VIDMM_GLOBAL *v150; // r15
  int v151; // edi
  enum _DXGK_PAGETABLEUPDATEMODE v152; // eax
  void *v153; // rdi
  VIDMM_GLOBAL *v154; // r10
  int v155; // eax
  __int64 v156; // rax
  __int64 *v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 **v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // r10
  __int64 v164; // r8
  char v165; // dl
  __int64 v166; // rcx
  int v167; // eax
  unsigned __int64 v168; // rdi
  _QWORD *v169; // rdx
  VIDMM_PAGE_TABLE *v170; // rcx
  unsigned __int8 v171; // al
  _QWORD *v172; // rdx
  VIDMM_PAGE_TABLE *v173; // rcx
  unsigned __int8 v174; // al
  int v175; // esi
  unsigned __int64 v176; // r8
  __int64 v177; // rcx
  unsigned int v178; // ecx
  unsigned __int64 v179; // rsi
  enum _DXGK_PAGETABLEUPDATEMODE v180; // eax
  unsigned int v181; // r15d
  __int64 v182; // r8
  unsigned __int64 v183; // rbx
  unsigned int v184; // r8d
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v185; // rbx
  unsigned int v186; // edx
  unsigned int v187; // r8d
  unsigned __int64 *v188; // rax
  unsigned __int64 *v189; // rbx
  unsigned __int64 *v190; // rbx
  __int64 v191; // rcx
  struct VIDMM_PAGE_TABLE **v192; // [rsp+20h] [rbp-F0h]
  struct VIDMM_ALLOC **v193; // [rsp+30h] [rbp-E0h]
  char v194[8]; // [rsp+38h] [rbp-D8h]
  unsigned __int64 v195; // [rsp+38h] [rbp-D8h]
  unsigned int v196; // [rsp+40h] [rbp-D0h]
  unsigned int v197; // [rsp+40h] [rbp-D0h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v198; // [rsp+80h] [rbp-90h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v199; // [rsp+80h] [rbp-90h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v200; // [rsp+80h] [rbp-90h]
  char v201; // [rsp+90h] [rbp-80h]
  signed int v202; // [rsp+94h] [rbp-7Ch]
  unsigned int v203; // [rsp+94h] [rbp-7Ch]
  unsigned int v204; // [rsp+94h] [rbp-7Ch]
  char v205; // [rsp+98h] [rbp-78h]
  char v206; // [rsp+99h] [rbp-77h]
  unsigned int v207; // [rsp+9Ch] [rbp-74h]
  unsigned __int8 v208[4]; // [rsp+A0h] [rbp-70h] BYREF
  unsigned int v209; // [rsp+A4h] [rbp-6Ch] BYREF
  char v210; // [rsp+A8h] [rbp-68h]
  unsigned int v211; // [rsp+ACh] [rbp-64h]
  unsigned int v212; // [rsp+B0h] [rbp-60h]
  int v213; // [rsp+B4h] [rbp-5Ch]
  unsigned __int64 v214; // [rsp+B8h] [rbp-58h]
  unsigned int v215; // [rsp+C0h] [rbp-50h]
  unsigned int v216; // [rsp+C4h] [rbp-4Ch]
  struct VIDMM_PAGE_TABLE_LEVEL_DESC *v217; // [rsp+C8h] [rbp-48h]
  void *v218; // [rsp+D0h] [rbp-40h] BYREF
  unsigned __int64 v219; // [rsp+D8h] [rbp-38h]
  struct VIDMM_ALLOC *v220; // [rsp+E0h] [rbp-30h]
  __int64 v221; // [rsp+E8h] [rbp-28h]
  int v222; // [rsp+F0h] [rbp-20h]
  struct VIDMM_PAGE_TABLE *v223; // [rsp+F8h] [rbp-18h] BYREF
  struct VIDMM_PAGE_DIRECTORY *v224; // [rsp+100h] [rbp-10h] BYREF
  VIDMM_PAGE_TABLE *v225; // [rsp+108h] [rbp-8h]
  struct VIDMM_ALLOC *v226; // [rsp+110h] [rbp+0h]
  void *v227; // [rsp+118h] [rbp+8h] BYREF
  void *v228; // [rsp+120h] [rbp+10h] BYREF
  unsigned int v229; // [rsp+128h] [rbp+18h]
  unsigned __int64 v230; // [rsp+130h] [rbp+20h] BYREF
  __int64 v231; // [rsp+138h] [rbp+28h]
  unsigned __int64 v232; // [rsp+140h] [rbp+30h]
  unsigned __int64 v233; // [rsp+148h] [rbp+38h]
  VIDMM_GLOBAL *v234; // [rsp+150h] [rbp+40h]
  unsigned __int64 v235; // [rsp+158h] [rbp+48h]
  struct _VIDMM_GLOBAL_ALLOC *VidMmGlobalAllocFromOwner; // [rsp+160h] [rbp+50h]
  __int64 v237; // [rsp+168h] [rbp+58h]
  __int64 v238; // [rsp+170h] [rbp+60h]
  __int64 v239; // [rsp+178h] [rbp+68h]

  v9 = 0LL;
  v232 = a4;
  v11 = (struct CVirtualAddressAllocator *)a2;
  v224 = 0LL;
  v12 = this;
  v13 = 0LL;
  *a9 = 0LL;
  v14 = *(_QWORD *)a3;
  v225 = 0LL;
  v223 = 0LL;
  v15 = v14 & 1;
  if ( !v15 )
  {
    v16 = *((_QWORD *)this + 2);
    if ( !v16 || !*(_QWORD *)(v16 + 120) || !*((_DWORD *)this + 1) )
      return 0LL;
  }
  if ( ((a7 | a5) & 0xFFF) != 0 )
  {
    WdLogSingleEntry1(1LL, 5637LL);
    DxgkLogInternalTriageEvent(v191, 0x40000LL);
    return 3221225485LL;
  }
  v233 = a5 >> 12;
  v235 = (a5 >> 12) + a6;
  if ( v235 <= a5 >> 12 )
  {
    WdLogSingleEntry1(1LL, 5654LL);
    DxgkLogInternalTriageEvent(v18, 0x40000LL);
    return 3221225485LL;
  }
  v234 = a2[11];
  v19 = *((_QWORD *)v234 + 5028);
  v20 = a2[12];
  v21 = *(_DWORD *)this;
  v22 = *(_DWORD *)this;
  VidMmGlobalAllocFromOwner = 0LL;
  v23 = v22 & 7;
  v226 = 0LL;
  v24 = (v21 >> 7) & 0x1F;
  v237 = v19 + 1584 * v24;
  v217 = (struct VIDMM_PAGE_TABLE_LEVEL_DESC *)(48 * v23 + 88 + v237);
  v219 = (*((_QWORD *)v217 + 2) & v233) >> *((_QWORD *)v217 + 3);
  if ( (v21 & 0x10) != 0 )
  {
    v25 = *(_DWORD *)(32 * v24 + *((_QWORD *)v11 + 15) + 16);
    v207 = v25;
    if ( *((_QWORD *)v234 + 5123) )
    {
      v26 = a6 << 12;
      if ( v15 )
      {
        *(_QWORD *)v194 = *((_QWORD *)a3 + 6);
        v193 = (struct VIDMM_ALLOC **)*((_QWORD *)a3 + 4);
        VIDMM_GLOBAL::RecordVaPagingHistoryCommit(v234, v20, a5, v26, *((_DWORD *)a3 + 15), a7);
      }
      else
      {
        VIDMM_GLOBAL::RecordVaPagingHistoryUncommit(v234, v20, a5, v26);
      }
      v207 = v25;
    }
    v27 = v25;
  }
  else
  {
    v27 = *(_DWORD *)(v19 + 48 * (v23 + 33 * v24) + 88);
    v207 = v27;
  }
  v28 = *((_QWORD *)v12 + 2);
  v215 = 0;
  v216 = 0;
  v206 = 0;
  if ( !v28 || !*(_QWORD *)(v28 + 120) )
  {
    result = VIDMM_PAGE_DIRECTORY::CommitPageDirectory(v12, v11, a9);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)v12 &= ~0x10000u;
    a8 = 1;
  }
  v30 = *(_DWORD *)v12;
  if ( (*(_DWORD *)v12 & 0x10000) != 0 )
  {
    v31 = 0;
    if ( !a8 )
    {
      LODWORD(v32) = v219;
      goto LABEL_31;
    }
  }
  else
  {
    v31 = 2;
  }
  LODWORD(v32) = v219;
  if ( (_DWORD)v219 )
  {
    v33 = 0LL;
    v34 = (unsigned int)v219;
    do
    {
      v35 = *((_QWORD *)v12 + 5);
      v33 += 16LL;
      *(_QWORD *)(v33 + v35 - 16) = 0LL;
      *(_QWORD *)(v33 + v35 - 8) = 0LL;
      --v34;
    }
    while ( v34 );
    v30 = *(_DWORD *)v12;
  }
  v216 = v27;
  v206 = 1;
LABEL_31:
  v36 = v233;
  v37 = v233;
  v214 = v233;
  v210 = 0;
  v38 = *((_QWORD *)v217 + 5);
  v39 = v233 & ~*((_QWORD *)v217 + 4);
  LOBYTE(v36) = 0;
  v222 = v36;
  v40 = 0;
  v229 = 0;
  v218 = (void *)(v38 + v39);
  v41 = v38 + v39;
  if ( (v30 & 0x20) != 0 && *((_BYTE *)a3 + 65) )
  {
    if ( *((_BYTE *)a3 + 64) )
      v40 = v207;
    v229 = v40;
  }
  v42 = 0;
  v43 = v38 + v39;
  v44 = v32;
  v202 = 0;
  if ( (unsigned int)v32 < v207 )
  {
    while ( 1 )
    {
      v45 = v229 + (unsigned int)v32;
      LOBYTE(v42) = 0;
      v46 = a3;
      v47 = v45;
      v213 = v42;
      v208[0] = 0;
      v205 = 0;
      v201 = 0;
      v212 = v45;
      v211 = v45;
      if ( *((_BYTE *)a3 + 66) && (*(_DWORD *)v12 & 0x20) != 0 )
      {
        v47 = v45 + v207;
        v201 = 1;
        if ( (_DWORD)v45 != (_DWORD)v219 )
          v47 = v44;
        v211 = v47;
      }
      v48 = (unsigned __int8)v222;
      if ( v41 >= v235 )
        v48 = 1;
      v49 = v235;
      v222 = v48;
      if ( v43 < v235 )
        v49 = v43;
      v50 = *(_QWORD *)a3;
      v230 = v49;
      v51 = v49 - v37;
      v220 = (struct VIDMM_ALLOC *)(v49 - v37);
      if ( (v50 & 1) == 0 )
      {
        v52 = *((_QWORD *)v12 + 5);
        if ( (*(_BYTE *)(v52 + 16LL * (unsigned int)v45) & 1) == 0 && (*(_BYTE *)(v52 + 16LL * v47) & 1) == 0 )
          goto LABEL_271;
      }
      if ( (v50 & 2) != 0 )
      {
        v53 = *((_QWORD *)v12 + 5);
        if ( (*(_BYTE *)(v53 + 16LL * (unsigned int)v45) & 2) != 0 )
        {
          v54 = (unsigned int)v45;
        }
        else
        {
          if ( !v201 || (*(_BYTE *)(v53 + 16LL * v47) & 2) == 0 )
            goto LABEL_57;
          v54 = v47;
        }
        if ( (_DWORD)v54 != -1 && (((unsigned __int8)v50 ^ *(_BYTE *)(v53 + 16 * v54)) & 8) == 0 )
          goto LABEL_271;
      }
LABEL_57:
      if ( v38 <= v51 && (*((_DWORD *)v11 + 36) & 4) == 0 )
      {
        if ( VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
               v12,
               v11,
               *(const struct _DXGK_GPUMMUCAPS **)(v237 + 440),
               a3,
               v217,
               v45,
               v47,
               *(unsigned int *)v194,
               a7,
               v208,
               (unsigned __int8 *)a3 + 69) )
        {
          if ( (*(_DWORD *)(*((_QWORD *)v12 + 5) + 16LL * (unsigned int)v45) & 0x400LL) == 0 )
            goto LABEL_68;
          v55 = *((_DWORD *)a3 + 14);
          v226 = (struct VIDMM_ALLOC *)*((_QWORD *)a3 + 6);
          VidMmGlobalAllocFromOwner = (struct _VIDMM_GLOBAL_ALLOC *)GetVidMmGlobalAllocFromOwner(v55, (__int64)v226);
          v58 = v57 - 1;
          if ( !v58 )
            goto LABEL_68;
          v59 = v58 - 3;
          if ( !v59 )
          {
            v226 = *(struct VIDMM_ALLOC **)(v56 + 64);
LABEL_68:
            v60 = v208[0];
            v210 = 1;
            goto LABEL_265;
          }
          v60 = v208[0];
          if ( v59 == 1 )
            v226 = *(struct VIDMM_ALLOC **)(v56 + 24);
          else
            v226 = 0LL;
          v210 = 1;
          goto LABEL_265;
        }
        v213 = v208[0];
      }
      v61 = *((_QWORD *)v12 + 5);
      v62 = *(_QWORD *)(v61 + 16 * v45) & 0x400LL;
      if ( (*(_QWORD *)(v61 + 16 * v45) & 0x400) != 0 )
      {
        v63 = v211;
      }
      else
      {
        if ( !v201 )
          goto LABEL_82;
        v63 = v211;
        if ( (*(_DWORD *)(v61 + 16LL * v211) & 0x400LL) == 0 )
          goto LABEL_82;
      }
      v64 = v45;
      if ( !v62 )
        v64 = v63;
      if ( *((_QWORD *)v217 + 5) <= (unsigned __int64)v220 )
      {
        v68 = v64;
        ExFreeToPagedLookasideList(
          (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)v11 + 11) + 40256LL),
          *(PVOID *)(*((_QWORD *)v12 + 6) + 8LL * v64));
        *(_QWORD *)(*((_QWORD *)v12 + 6) + 8 * v68) = 0LL;
        v68 *= 2LL;
        *(_QWORD *)(*((_QWORD *)v12 + 5) + 8 * v68) &= ~0x400uLL;
        *(_QWORD *)(*((_QWORD *)v12 + 5) + 8 * v68) &= ~1uLL;
        --*((_DWORD *)v12 + 1);
        v46 = a3;
      }
      else
      {
        v65 = VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(v12, v11, v217, *((_BYTE *)a3 + 65), v39 << 12, v64, a9);
        v66 = v65;
        v202 = v65;
        if ( v65 < 0 )
        {
          WdLogSingleEntry1(3LL, v65);
          v13 = (unsigned __int64 *)v224;
          v67 = v66;
          v11 = (struct CVirtualAddressAllocator *)a2;
          goto LABEL_280;
        }
      }
      v205 = 1;
LABEL_82:
      v69 = *(_DWORD *)v12;
      v70 = *((_BYTE *)v46 + 64);
      v71 = *(_DWORD *)v12 & 0x20;
      if ( !v71 || *((_DWORD *)v46 + 15) || !v70 )
      {
LABEL_95:
        v73 = v45;
        goto LABEL_96;
      }
      if ( *((_BYTE *)v46 + 65)
        || (v72 = *(_DWORD **)(*((_QWORD *)v12 + 6) + 8 * v45)) == 0LL
        || !v72[1]
        || (*v72 & 0x40) != 0 )
      {
        if ( ((unsigned __int8)v220 & 0xF) != 0 )
        {
          v70 = 0;
        }
        else
        {
          v70 = CheckContiguousSysMem(*((struct _MDL **)v46 + 4), (unsigned int)v220, a7 >> 12);
          if ( v70 )
            goto LABEL_95;
        }
      }
      else
      {
        v70 = 0;
      }
      v73 = v219;
      v212 = v219;
      if ( v201 )
        v211 = v219 + v207;
LABEL_96:
      v74 = v73;
      if ( (*(_BYTE *)a3 & 1) == 0 && (*(_BYTE *)(*((_QWORD *)v12 + 5) + 16LL * v73) & 2) == 0
        || *(_QWORD *)(*((_QWORD *)v12 + 6) + 8LL * v73) )
      {
        v77 = (struct CVirtualAddressAllocator *)a2;
        goto LABEL_112;
      }
      if ( v71 )
      {
        if ( *((_BYTE *)a3 + 65) && v70 || *((_DWORD *)a3 + 15) == -3 )
        {
          v75 = 1;
        }
        else
        {
          v75 = 0;
          if ( v70 )
          {
            v76 = 1;
LABEL_107:
            v77 = (struct CVirtualAddressAllocator *)a2;
            PageTable = CreatePageTable((struct CVirtualAddressAllocator *)a2, (v69 >> 7) & 0x1F, v75, v76);
            goto LABEL_109;
          }
        }
        v76 = 0;
        goto LABEL_107;
      }
      v77 = (struct CVirtualAddressAllocator *)a2;
      PageTable = CreatePageDirectory((struct CVirtualAddressAllocator *)a2, (v69 >> 7) & 0x1F, (v69 & 7) - 1);
LABEL_109:
      *(_QWORD *)(*((_QWORD *)v12 + 6) + 8 * v74) = PageTable;
      if ( !*(_QWORD *)(*((_QWORD *)v12 + 6) + 8 * v74) )
      {
        WdLogSingleEntry1(1LL, 6002LL);
        DxgkLogInternalTriageEvent(v79, 0x40000LL);
        v13 = (unsigned __int64 *)v224;
        v67 = -1073741801;
        v11 = (struct CVirtualAddressAllocator *)a2;
        goto LABEL_280;
      }
LABEL_112:
      v80 = *((_QWORD *)v12 + 5);
      v231 = 16 * v74;
      v81 = *(_QWORD *)(v80 + 16 * v74);
      v82 = (v81 & 1) == 0;
      v83 = v81 & 2;
      if ( v83 )
      {
        v85 = v211;
      }
      else
      {
        v84 = v82;
        if ( !v201 || (v85 = v211, (*(_BYTE *)(v80 + 16LL * v211) & 2) == 0) )
        {
          v86 = v214;
          goto LABEL_116;
        }
      }
      if ( *((_QWORD *)v217 + 5) <= (unsigned __int64)v220 )
      {
        v86 = v214;
        v97 = v85;
        v205 = 1;
        if ( v83 )
          v97 = v212;
        v84 = v82;
        v98 = 2LL * v97;
        *(_QWORD *)(v80 + 8 * v98) &= ~2uLL;
        *(_QWORD *)(*((_QWORD *)v12 + 5) + 8 * v98) &= ~1uLL;
        --*((_DWORD *)v12 + 1);
      }
      else
      {
        v195 = v39;
        v86 = v214;
        v202 = VIDMM_PAGE_DIRECTORY::ExpandZeroPte(
                 v12,
                 v77,
                 a3,
                 v212,
                 v85,
                 v214,
                 v230,
                 v195,
                 (unsigned __int64)v218,
                 a9);
        if ( v202 < 0 )
          goto LABEL_278;
        v84 = 0;
        v205 = 1;
      }
LABEL_116:
      v87 = *(_DWORD *)v12;
      v88 = 8 * v74;
      v221 = v88;
      if ( (v87 & 0x20) == 0 )
      {
        v93 = v88;
        v94 = (struct CVirtualAddressAllocator *)a2;
        v95 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
                *(VIDMM_PAGE_DIRECTORY **)(v88 + *((_QWORD *)v12 + 6)),
                (struct CVirtualAddressAllocator *)a2,
                a3,
                v232,
                v214 << 12,
                (unsigned __int64)v220,
                a7,
                v84,
                a9);
        v202 = v95;
LABEL_227:
        if ( v95 < 0 )
        {
LABEL_228:
          v67 = v202;
LABEL_229:
          WdLogSingleEntry0(3LL);
          v13 = (unsigned __int64 *)v224;
          v11 = (struct CVirtualAddressAllocator *)a2;
          goto LABEL_280;
        }
        goto LABEL_220;
      }
      v89 = a3;
      if ( (*(_BYTE *)a3 & 1) == 0 )
      {
        v93 = v88;
        v99 = *(unsigned int **)(v88 + *((_QWORD *)v12 + 6));
        if ( v99 )
        {
          v100 = v214;
          v94 = (struct CVirtualAddressAllocator *)a2;
          if ( !v99[1] )
          {
            v95 = v202;
            v96 = a3;
            goto LABEL_172;
          }
          v227 = (void *)(v214 << 12);
          if ( (unsigned __int64)v220 + (v214 & 0xFFFFFFFFFFFFFLL) <= (v214 & 0xFFFFFFFFFFFFFLL) )
          {
            v96 = a3;
            v95 = -1073741811;
            v202 = -1073741811;
            goto LABEL_172;
          }
          v101 = a2[11];
          v102 = *((_QWORD *)v99 + 2);
          if ( v102 && *(_QWORD *)(v102 + 120) )
          {
            v103 = *(_DWORD *)(*((_QWORD *)v101 + 5028) + 1584LL * ((*v99 >> 7) & 0x1F) + 72);
            v104 = v103 & (v214 + (_DWORD)v220 - 1);
            v105 = v214 & v103;
            v203 = v214 & v103;
            if ( (*v99 & 0x40) != 0 )
            {
              v105 >>= 4;
              v104 >>= 4;
              v203 = v105;
              v227 = (void *)((v214 << 12) & 0xFFFFFFFFFFFF0000uLL);
            }
            v106 = v104 - v105 + 1;
            v107 = *((_QWORD *)v101 + 5128) == 0LL;
            v209 = v106;
            if ( v107 || v105 >= v105 + v106 )
            {
              if ( v105 < v105 + v106 )
                goto LABEL_142;
            }
            else
            {
              v108 = 16LL * v105;
              v109 = v106;
              do
              {
                v110 = *((_QWORD *)v99 + 4);
                v111 = *(_QWORD *)(v110 + v108);
                if ( (v111 & 1) != 0 )
                  VIDMM_GLOBAL::RecordPageMappingHistory(
                    v101,
                    (v111 >> 5) & 0x1F,
                    *(_QWORD *)(v110 + v108 + 8),
                    1LL,
                    1,
                    0LL,
                    v193);
                v108 += 16LL;
                --v109;
              }
              while ( v109 );
              v106 = v209;
              v105 = v203;
              v89 = a3;
LABEL_142:
              v112 = 0;
              v113 = 16LL * v105;
              v114 = v106;
              do
              {
                v115 = *((_QWORD *)v99 + 4);
                if ( (*(_BYTE *)(v115 + v113) & 1) != 0 )
                {
                  --v99[1];
                  v112 = 1;
                  *(_QWORD *)(v115 + v113) = 0LL;
                  *(_QWORD *)(v113 + *((_QWORD *)v99 + 4) + 8) = 0LL;
                }
                v113 += 16LL;
                --v114;
              }
              while ( v114 );
              v12 = this;
              if ( v112 )
                *((_BYTE *)v89 + 69) = 1;
            }
            if ( !v99[1] && ((_DWORD)a2[18] & 4) == 0 )
            {
              v94 = (struct CVirtualAddressAllocator *)a2;
              v9 = 0LL;
              goto LABEL_165;
            }
            v116 = *v99;
            v9 = 0LL;
            v117 = a2[11];
            v209 = 0;
            v118 = (v116 >> 3) & 8;
            v228 = 0LL;
            v218 = 0LL;
            if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                        (VIDMM_PAGE_TABLE_BASE *)v99,
                        (struct CVirtualAddressAllocator *)a2,
                        &v209,
                        (unsigned __int64 *)&v228,
                        &v218) < 0 )
            {
              WdLogSingleEntry1(2LL, 3883LL);
              WdLogSingleEntry1(1LL, 6490LL);
              *(_DWORD *)v194 = 0;
              v193 = 0LL;
              DxgkLogInternalTriageEvent(v119, 0x40000LL);
              v93 = v221;
              v95 = -1073741823;
              v202 = -1073741823;
              goto LABEL_169;
            }
            if ( (*((_BYTE *)v117 + 40936) & 0x10) != 0 )
              v120 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
            else
              v120 = (__int16)*v99 >> 13;
            v198 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v118;
            v121 = v228;
            v196 = v106;
            v94 = (struct CVirtualAddressAllocator *)a2;
            VIDMM_GLOBAL::UpdatePageTable(
              v117,
              *v99 & 7,
              a2[12],
              0LL,
              0LL,
              0LL,
              0LL,
              v203,
              v196,
              0LL,
              0LL,
              (*v99 >> 7) & 0x1F,
              v209,
              (unsigned __int64)v228,
              v120,
              (unsigned __int64)v227 >> 12,
              v198,
              0LL);
            v122 = a2[11];
            if ( (*((_BYTE *)v122 + 40936) & 0x10) != 0 || (v123 = (int)(*v99 << 16) >> 29) == 0 )
            {
              VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress((VIDMM_PAGE_TABLE_BASE *)v99, a2[11], v121, v218);
              v93 = v221;
              v95 = 0;
              v202 = 0;
            }
            else
            {
              if ( v123 == 1 && *((VIDMM_GLOBAL ***)v122 + (((unsigned __int64)*v99 >> 7) & 0x1F) + 5052) != a2 )
              {
                v124 = *((_QWORD *)v99 + 3) + 128LL;
                v125 = *(__int64 **)v124;
                if ( *(_QWORD *)(*(_QWORD *)v124 + 8LL) != v124
                  || (v126 = *v125, *(__int64 **)(*v125 + 8) != v125)
                  || (*(_QWORD *)v124 = v126,
                      *(_QWORD *)(v126 + 8) = v124,
                      v125[2] = *((_QWORD *)v122 + ((*v99 >> 7) & 0x1F) + 621),
                      v127 = 1584LL * ((*v99 >> 7) & 0x1F) + *((_QWORD *)v122 + 5028) + 464LL,
                      v128 = *(__int64 ***)(v127 + 8),
                      *v128 != (__int64 *)v127) )
                {
LABEL_275:
                  __fastfail(3u);
                }
                v93 = v221;
                v95 = 0;
                *v125 = v127;
                v125[1] = (__int64)v128;
                *v128 = v125;
                *(_QWORD *)(v127 + 8) = v125;
                v202 = 0;
                goto LABEL_170;
              }
LABEL_165:
              v93 = v221;
              v95 = 0;
              v202 = 0;
            }
          }
          else
          {
            v9 = 0LL;
            v95 = 0;
            v202 = 0;
          }
        }
        else
        {
          v95 = v202;
LABEL_169:
          v94 = (struct CVirtualAddressAllocator *)a2;
        }
LABEL_170:
        v96 = a3;
        goto LABEL_171;
      }
      v90 = *((_BYTE *)a3 + 64);
      v91 = v232;
      v92 = v220;
      *((_BYTE *)a3 + 64) = v70;
      v93 = v221;
      v192 = (struct VIDMM_PAGE_TABLE **)(v86 << 12);
      v94 = (struct CVirtualAddressAllocator *)a2;
      v95 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
              *(VIDMM_PAGE_TABLE **)(v221 + *((_QWORD *)v12 + 6)),
              (struct CVirtualAddressAllocator *)a2,
              a3,
              v91,
              (unsigned __int64)v192,
              v92,
              a7,
              v84,
              a9);
      v202 = v95;
      v96 = a3;
      *((_BYTE *)a3 + 64) = v90;
LABEL_171:
      v100 = v214;
LABEL_172:
      if ( !*((_BYTE *)v96 + 66) )
        goto LABEL_227;
      if ( v95 < 0 )
        goto LABEL_228;
      v129 = v211;
      v130 = *((_QWORD *)v12 + 5);
      v131 = 16LL * v211;
      v239 = v131;
      if ( (*(_BYTE *)(v131 + v130) & 1) == 0 )
      {
        v93 = v221;
        goto LABEL_221;
      }
      v132 = *((_QWORD *)v12 + 6);
      v133 = 8LL * v211;
      v238 = v133;
      v134 = *(unsigned int **)(v132 + v133);
      v218 = (void *)(v100 << 12);
      if ( (unsigned __int64)v220 + (v100 & 0xFFFFFFFFFFFFFLL) <= (v100 & 0xFFFFFFFFFFFFFLL) )
      {
        v67 = -1073741811;
        goto LABEL_229;
      }
      v135 = *((_QWORD *)v94 + 11);
      v136 = *((_QWORD *)v134 + 2);
      if ( !v136 || !*(_QWORD *)(v136 + 120) )
      {
        v9 = 0LL;
        goto LABEL_212;
      }
      v137 = *(_DWORD *)(*(_QWORD *)(v135 + 40224) + 1584LL * ((*v134 >> 7) & 0x1F) + 72);
      v138 = v137 & (v100 + (_DWORD)v220 - 1);
      v139 = v100 & v137;
      v204 = v100 & v137;
      if ( (*v134 & 0x40) != 0 )
      {
        v139 >>= 4;
        v138 >>= 4;
        v204 = v139;
        v218 = (void *)((v100 << 12) & 0xFFFFFFFFFFFF0000uLL);
      }
      v140 = v138 - v139 + 1;
      v107 = *(_QWORD *)(v135 + 41024) == 0LL;
      v209 = v140;
      if ( v107 || v139 >= v139 + v140 )
      {
        if ( v139 >= v139 + v140 )
          goto LABEL_194;
      }
      else
      {
        v141 = 16LL * v139;
        v142 = v140;
        do
        {
          v143 = *((_QWORD *)v134 + 4);
          v144 = *(_QWORD *)(v143 + v141);
          if ( (v144 & 1) != 0 )
            VIDMM_GLOBAL::RecordPageMappingHistory(
              v135,
              (v144 >> 5) & 0x1F,
              *(_QWORD *)(v143 + v141 + 8),
              1LL,
              1,
              0LL,
              v193);
          v141 += 16LL;
          --v142;
        }
        while ( v142 );
        v140 = v209;
        v139 = v204;
      }
      v145 = 0;
      v146 = 16LL * v139;
      v147 = v140;
      do
      {
        v148 = *((_QWORD *)v134 + 4);
        if ( (*(_BYTE *)(v148 + v146) & 1) != 0 )
        {
          --v134[1];
          v145 = 1;
          *(_QWORD *)(v148 + v146) = 0LL;
          *(_QWORD *)(*((_QWORD *)v134 + 4) + v146 + 8) = 0LL;
        }
        v146 += 16LL;
        --v147;
      }
      while ( v147 );
      v12 = this;
      if ( v145 )
        *((_BYTE *)a3 + 69) = 1;
LABEL_194:
      if ( !v134[1] && ((_DWORD)a2[18] & 4) == 0 )
      {
        v94 = (struct CVirtualAddressAllocator *)a2;
        v9 = 0LL;
LABEL_210:
        v132 = *((_QWORD *)v12 + 6);
        v133 = v238;
        v131 = v239;
        goto LABEL_212;
      }
      v149 = *v134;
      v9 = 0LL;
      v150 = a2[11];
      v209 = 0;
      v151 = (v149 >> 3) & 8;
      v228 = 0LL;
      v227 = 0LL;
      if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                  (VIDMM_PAGE_TABLE_BASE *)v134,
                  (struct CVirtualAddressAllocator *)a2,
                  &v209,
                  (unsigned __int64 *)&v228,
                  &v227) < 0 )
      {
        WdLogSingleEntry1(2LL, 3883LL);
        WdLogSingleEntry1(1LL, 6490LL);
        DxgkLogInternalTriageEvent(v177, 0x40000LL);
        v67 = -1073741823;
        goto LABEL_229;
      }
      if ( (*((_BYTE *)v150 + 40936) & 0x10) != 0 )
        v152 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      else
        v152 = (__int16)*v134 >> 13;
      v199 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v151;
      v153 = v228;
      v197 = v140;
      v94 = (struct CVirtualAddressAllocator *)a2;
      VIDMM_GLOBAL::UpdatePageTable(
        v150,
        *v134 & 7,
        a2[12],
        0LL,
        0LL,
        0LL,
        0LL,
        v204,
        v197,
        0LL,
        0LL,
        (*v134 >> 7) & 0x1F,
        v209,
        (unsigned __int64)v228,
        v152,
        (unsigned __int64)v218 >> 12,
        v199,
        0LL);
      v154 = a2[11];
      if ( (*((_BYTE *)v154 + 40936) & 0x10) == 0 )
      {
        v155 = (int)(*v134 << 16) >> 29;
        if ( v155 )
        {
          if ( v155 == 1 && *((VIDMM_GLOBAL ***)v154 + (((unsigned __int64)*v134 >> 7) & 0x1F) + 5052) != a2 )
          {
            v156 = *((_QWORD *)v134 + 3) + 128LL;
            v157 = *(__int64 **)v156;
            if ( *(_QWORD *)(*(_QWORD *)v156 + 8LL) != v156 )
              goto LABEL_275;
            v158 = *v157;
            if ( *(__int64 **)(*v157 + 8) != v157 )
              goto LABEL_275;
            *(_QWORD *)v156 = v158;
            *(_QWORD *)(v158 + 8) = v156;
            v157[2] = *((_QWORD *)v154 + ((*v134 >> 7) & 0x1F) + 621);
            v159 = 1584LL * ((*v134 >> 7) & 0x1F) + *((_QWORD *)v154 + 5028) + 464LL;
            v160 = *(__int64 ***)(v159 + 8);
            if ( *v160 != (__int64 *)v159 )
              goto LABEL_275;
            v133 = v238;
            v131 = v239;
            *v157 = v159;
            v157[1] = (__int64)v160;
            *v160 = v157;
            *(_QWORD *)(v159 + 8) = v157;
            v132 = *((_QWORD *)v12 + 6);
            goto LABEL_212;
          }
          goto LABEL_210;
        }
      }
      VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress((VIDMM_PAGE_TABLE_BASE *)v134, a2[11], v153, v227);
      v132 = *((_QWORD *)v12 + 6);
      v133 = v238;
      v131 = v239;
LABEL_212:
      v202 = 0;
      if ( !*(_DWORD *)(*(_QWORD *)(v133 + v132) + 4LL) )
      {
        if ( (*((_DWORD *)v94 + 36) & 4) == 0 )
        {
          v161 = *((_QWORD *)v12 + 5);
          --*((_DWORD *)v12 + 1);
          LOBYTE(v213) = 1;
          *(_QWORD *)(v131 + v161) = 0LL;
          *(_QWORD *)(v131 + v161 + 8) = 0LL;
          if ( (unsigned int)Feature_Servicing_DeferPageTableDestruction__private_IsEnabled() )
          {
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 6) + v133) + 40LL) = v225;
            *(_QWORD *)(*(_QWORD *)(v133 + *((_QWORD *)v12 + 6)) + 8LL) = v214 & ~*((_QWORD *)v217 + 4);
            v162 = *((_QWORD *)v12 + 6);
            v225 = *(VIDMM_PAGE_TABLE **)(v162 + v133);
            v223 = v225;
          }
          else
          {
            VIDMM_PAGE_TABLE::DestroyPageTable(
              *(VIDMM_PAGE_TABLE **)(v133 + *((_QWORD *)v12 + 6)),
              v94,
              v214 & ~*((_QWORD *)v217 + 4));
            v162 = *((_QWORD *)v12 + 6);
          }
          *(_QWORD *)(v133 + v162) = 0LL;
        }
        v202 = 0;
      }
      v93 = v221;
LABEL_220:
      v129 = v211;
LABEL_221:
      if ( (*(_BYTE *)a3 & 1) != 0 )
      {
        v163 = v231;
        if ( (*(_DWORD *)v12 & 0x20) == 0
          || *((_BYTE *)a3 + 65)
          || (v164 = *((_QWORD *)v12 + 5),
              ((**(_DWORD **)(v93 + *((_QWORD *)v12 + 6)) >> 6) & 1) == ((*(_DWORD *)(v164 + v231) & 0x60000) == 0x20000LL)) )
        {
          v164 = *((_QWORD *)v12 + 5);
          v165 = 0;
        }
        else
        {
          v165 = 1;
        }
        if ( (*(_QWORD *)(v164 + v231) & 1) == 0 || v165 || v205 )
        {
          if ( (*(_QWORD *)(v164 + v231) & 1LL) == 0 )
          {
            *(_QWORD *)(v164 + v231) |= 1uLL;
            ++*((_DWORD *)v12 + 1);
            v164 = *((_QWORD *)v12 + 5);
          }
          *(_QWORD *)(v164 + v163) &= ~0x400uLL;
          *(_QWORD *)(v163 + *((_QWORD *)v12 + 5)) &= ~2uLL;
          *(_QWORD *)(v163 + *((_QWORD *)v12 + 5)) &= ~8uLL;
          if ( v201 )
          {
            v166 = 2LL * (unsigned int)v129;
            *(_QWORD *)(*((_QWORD *)v12 + 5) + 8 * v166) &= ~0x400uLL;
            *(_QWORD *)(*((_QWORD *)v12 + 5) + 8 * v166) &= ~2uLL;
            *(_QWORD *)(*((_QWORD *)v12 + 5) + 8 * v166) &= ~8uLL;
          }
          VIDMM_PAGE_DIRECTORY::SetPageTableInPde(v12, v94, v212);
          goto LABEL_266;
        }
LABEL_264:
        v60 = v213;
        goto LABEL_265;
      }
      v167 = (unsigned __int8)v213;
      if ( v205 )
        v167 = 1;
      v213 = v167;
      if ( (*((_DWORD *)v94 + 36) & 4) != 0 )
        goto LABEL_264;
      v168 = v214 & ~*((_QWORD *)v217 + 4);
      if ( (unsigned int)Feature_Servicing_DeferPageTableDestruction__private_IsEnabled() )
      {
        v171 = VIDMM_PAGE_DIRECTORY::CheckPageTableInvalid(v12, v212, v168, &v224, &v223);
        v60 = v213;
        if ( v171 )
          v60 = 1;
        v225 = v223;
      }
      else
      {
        v169 = (_QWORD *)(*((_QWORD *)v12 + 5) + v231);
        if ( (*(_BYTE *)v169 & 1) == 0 || *(_DWORD *)(*(_QWORD *)(v93 + *((_QWORD *)v12 + 6)) + 4LL) )
        {
          v60 = v213;
        }
        else
        {
          --*((_DWORD *)v12 + 1);
          *v169 = 0LL;
          v169[1] = 0LL;
          v170 = *(VIDMM_PAGE_TABLE **)(v93 + *((_QWORD *)v12 + 6));
          if ( (*(_DWORD *)v12 & 0x20) != 0 )
            VIDMM_PAGE_TABLE::DestroyPageTable(v170, v94, v168);
          else
            VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v170, v94, v168);
          *(_QWORD *)(v93 + *((_QWORD *)v12 + 6)) = 0LL;
          v60 = 1;
        }
      }
      if ( (_DWORD)v129 != v212 )
      {
        if ( (unsigned int)Feature_Servicing_DeferPageTableDestruction__private_IsEnabled() )
        {
          v174 = VIDMM_PAGE_DIRECTORY::CheckPageTableInvalid(v12, v129, v168, &v224, &v223);
          v225 = v223;
          if ( v174 )
            goto LABEL_266;
        }
        else
        {
          v172 = (_QWORD *)(*((_QWORD *)v12 + 5) + 16 * v129);
          if ( (*(_BYTE *)v172 & 1) != 0 && !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 6) + 8 * v129) + 4LL) )
          {
            --*((_DWORD *)v12 + 1);
            *v172 = 0LL;
            v172[1] = 0LL;
            v173 = *(VIDMM_PAGE_TABLE **)(*((_QWORD *)v12 + 6) + 8 * v129);
            if ( (*(_DWORD *)v12 & 0x20) != 0 )
              VIDMM_PAGE_TABLE::DestroyPageTable(v173, v94, v168);
            else
              VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v173, v94, v168);
            *(_QWORD *)(*((_QWORD *)v12 + 6) + 8 * v129) = 0LL;
            goto LABEL_266;
          }
        }
      }
LABEL_265:
      if ( !v60 )
      {
        v51 = (unsigned __int64)v220;
LABEL_271:
        v175 = v219;
        goto LABEL_272;
      }
LABEL_266:
      v175 = v219;
      if ( !v206 )
      {
        v206 = 1;
        v215 = v219;
      }
      v51 = (unsigned __int64)v220;
      if ( (unsigned int)v219 >= v216 )
        v216 = v219 + 1;
LABEL_272:
      v32 = (unsigned int)(v175 + 1);
      v42 = (int)v217;
      v37 = v230;
      v176 = v51 << 12;
      v39 = v230;
      a7 += v176;
      v232 += v176;
      v38 = *((_QWORD *)v217 + 5);
      v214 = v230;
      v41 = v38 + v230;
      v219 = v32;
      v218 = (void *)(v38 + v230);
      if ( (_BYTE)v222 || (v43 = v38 + v230, v44 = v32, (unsigned int)v32 >= v207) )
      {
LABEL_278:
        v13 = (unsigned __int64 *)v224;
        v67 = v202;
        v11 = (struct CVirtualAddressAllocator *)a2;
        goto LABEL_280;
      }
      v11 = (struct CVirtualAddressAllocator *)a2;
    }
  }
  v67 = 0;
LABEL_280:
  if ( !v206 )
  {
    v185 = v217;
    goto LABEL_299;
  }
  v209 = 0;
  v230 = 0LL;
  v218 = 0LL;
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(v12, v11, &v209, &v230, &v218) >= 0 )
  {
    v178 = *(_DWORD *)v12;
    v179 = *((_QWORD *)v217 + 5) * v215 + (v233 & ~(*((_QWORD *)v217 + 2) | *((_QWORD *)v217 + 4)));
    if ( (*((_BYTE *)v234 + 40936) & 0x10) != 0 )
      v180 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v180 = (__int16)v178 >> 13;
    if ( *((_BYTE *)a3 + 65) && (v178 & 0x20) != 0 )
    {
      v181 = v215 + v207;
      v182 = *((_QWORD *)v12 + 5);
      v9 = (struct _DXGK_PTE *)(v182 + 16LL * (v215 + v207));
    }
    else
    {
      v182 = *((_QWORD *)v12 + 5);
      v181 = v215 + v207;
      v12 = this;
    }
    v200 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v31;
    v183 = v230;
    VIDMM_GLOBAL::UpdatePageTable(
      v234,
      v178 & 7,
      a2[12],
      *((_QWORD *)a3 + 2),
      v226,
      VidMmGlobalAllocFromOwner,
      a4
    + ((*((_QWORD *)v217 + 5) * v215 + (v233 & ~(*((_QWORD *)v217 + 2) | *((_QWORD *)v217 + 4)))) << 12)
    - (v233 << 12),
      v215,
      v216 - v215,
      (struct _DXGK_PTE *)(v182 + 16LL * v215),
      v9,
      (v178 >> 7) & 0x1F,
      v209,
      v230,
      v180,
      v179,
      v200,
      *((_QWORD *)a3 + 9));
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(v12, (struct CVirtualAddressAllocator *)a2, v184, v183, v218);
    v185 = v217;
    v186 = *(_DWORD *)v12 | 0x10000;
    v107 = v210 == 0;
    *(_DWORD *)v12 = v186;
    if ( !v107
      && (CVirtualAddressAllocator::FlushGpuVaTlb(
            (CVirtualAddressAllocator *)a2,
            (v186 >> 7) & 0x1F,
            v179 << 12,
            (v179 + *((_QWORD *)v185 + 5)) << 12),
          VIDMM_PAGE_DIRECTORY::DestroyDisconnectedPageTables(
            v12,
            (struct CVirtualAddressAllocator *)a2,
            v215,
            v216,
            v179,
            *((_QWORD *)v185 + 5),
            *a9),
          *((_BYTE *)a3 + 65))
      && (*(_DWORD *)v12 & 0x20) != 0 )
    {
      v187 = v181;
      v11 = (struct CVirtualAddressAllocator *)a2;
      VIDMM_PAGE_DIRECTORY::DestroyDisconnectedPageTables(
        v12,
        (struct CVirtualAddressAllocator *)a2,
        v187,
        v207 + v216,
        v179,
        *((_QWORD *)v185 + 5),
        *a9);
    }
    else
    {
      v11 = (struct CVirtualAddressAllocator *)a2;
    }
LABEL_299:
    if ( !*((_DWORD *)v12 + 1) && (*((_DWORD *)v11 + 36) & 4) == 0 )
      VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v12, v11, a5 & ~*((_QWORD *)v185 + 4), 1u, 1);
    goto LABEL_302;
  }
  WdLogSingleEntry1(2LL, 6304LL);
  if ( !(unsigned int)Feature_Servicing_DeferPageTableDestruction__private_IsEnabled() )
    return 3221225473LL;
  v67 = -1073741823;
LABEL_302:
  if ( (unsigned int)Feature_Servicing_DeferPageTableDestruction__private_IsEnabled() )
  {
    v188 = (unsigned __int64 *)v225;
    if ( v225 )
    {
      do
      {
        v189 = (unsigned __int64 *)v188[5];
        VIDMM_PAGE_TABLE::DestroyPageTable((VIDMM_PAGE_TABLE *)v188, v11, v188[1]);
        v188 = v189;
      }
      while ( v189 );
    }
    if ( v13 )
    {
      do
      {
        v190 = (unsigned __int64 *)v13[4];
        VIDMM_PAGE_DIRECTORY::DestroyPageDirectory((VIDMM_PAGE_DIRECTORY *)v13, v11, v13[1]);
        v13 = v190;
      }
      while ( v190 );
    }
  }
  return v67;
}
