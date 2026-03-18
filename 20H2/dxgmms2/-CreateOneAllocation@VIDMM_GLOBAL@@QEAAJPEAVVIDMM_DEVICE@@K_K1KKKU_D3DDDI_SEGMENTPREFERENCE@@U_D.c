/*
 * XREFs of ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E110
 * Callers:
 *     ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C005E008 (-CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXG.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C00805B8 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0089C18 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008AEBC (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00103F4 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0011A64 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0011F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0012638 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C00178A4 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0022AC8 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C0022C54 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0022DF4 (-AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL.c)
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0023200 (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C00235C8 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C0023F00 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     ?VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0026C20 (-VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006F5F8 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0070760 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@IEAAEKK@Z @ 0x1C0078A04 (-CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@IEAAEKK@Z.c)
 *     VidSchDestroySyncObject @ 0x1C007FB60 (VidSchDestroySyncObject.c)
 *     VidSchCreateSyncObject @ 0x1C007FD70 (VidSchCreateSyncObject.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C0084040 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0084520 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z @ 0x1C0084630 (-VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C008468C (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C0084BF0 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C0084D24 (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C008841C (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C008B608 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C00AFDD0 (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateOneAllocation(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        _D3DDDI_SEGMENTPREFERENCE a9,
        struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D a10,
        int a11,
        VIDMM_GLOBAL *a12,
        __int64 a13,
        __int64 a14,
        UINT a15,
        unsigned __int8 a16,
        __int64 a17,
        unsigned __int8 a18,
        volatile signed __int32 *a19,
        _D3DDDI_SEGMENTPREFERENCE **a20)
{
  char v20; // r14
  VIDMM_GLOBAL *v24; // r12
  __int64 v25; // rdx
  signed int v26; // ebx
  VIDMM_GLOBAL *v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // r13d
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  bool v32; // cf
  __int64 v33; // rax
  unsigned int v35; // edi
  __int64 CurrentProcess; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r11d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  unsigned int Value; // ebx
  __int64 v45; // rcx
  int v46; // esi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  char v50; // r9
  int v51; // r13d
  int IsEnabled; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  POOL_TYPE v56; // r9d
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // r8
  int v62; // r9d
  int v63; // r9d
  int v64; // eax
  __int64 v65; // rcx
  unsigned int v66; // eax
  __int64 v67; // rdx
  int v68; // ecx
  unsigned __int8 v69; // al
  __int64 v70; // rcx
  unsigned __int8 v71; // al
  ULONG v72; // edx
  SIZE_T v73; // rcx
  _QWORD *v74; // rax
  __int64 v75; // rcx
  _D3DDDI_SEGMENTPREFERENCE *v76; // r13
  _QWORD *v77; // rax
  __int64 v78; // rax
  _QWORD *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // r8
  int SyncObject; // r12d
  _OWORD *v84; // rax
  __int64 v85; // rcx
  void *v86; // rcx
  __int64 v87; // rax
  __int64 v88; // r8
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rcx
  VIDMM_GLOBAL *v95; // r9
  int v96; // eax
  volatile signed __int32 *v97; // rax
  struct VIDMM_PARTITION *v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rdx
  unsigned __int64 v101; // r12
  _QWORD *v102; // rax
  unsigned __int64 v103; // rcx
  unsigned __int64 v104; // rcx
  int v105; // r8d
  __int64 v106; // rdx
  __int64 v107; // r8
  UINT v108; // eax
  unsigned int *v109; // rax
  int v110; // ecx
  int v111; // ecx
  int v112; // ecx
  int v113; // edi
  int v114; // eax
  __int64 v115; // rcx
  char v116; // al
  __int64 v117; // rax
  __int64 v118; // rax
  VIDMM_GLOBAL *v119; // rdi
  unsigned __int8 v120; // r8
  char v121; // r11
  unsigned int v122; // edx
  __int64 v123; // rax
  _DWORD *v124; // r10
  unsigned int v125; // edx
  unsigned __int64 v126; // rcx
  int v127; // eax
  int v128; // edx
  unsigned int v129; // r12d
  VIDMM_GLOBAL *v130; // rsi
  unsigned int v131; // edx
  unsigned int v132; // ecx
  UINT v133; // edi
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  int v135; // eax
  unsigned int v136; // eax
  struct VIDMM_PARTITION *v137; // rcx
  int v138; // edx
  UINT v139; // ecx
  int v140; // eax
  __int64 v141; // rcx
  bool v142; // zf
  __int64 v143; // rdi
  unsigned int *v144; // rbx
  __int16 v145; // r12
  unsigned int v146; // edx
  __int64 v147; // r8
  unsigned int v148; // r9d
  unsigned int v149; // r10d
  unsigned int v150; // r11d
  unsigned int v151; // eax
  unsigned int v152; // ebx
  __int64 v153; // rbx
  unsigned __int64 v154; // rcx
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // rdx
  __int64 i; // rbx
  __int64 v159; // rax
  KSPIN_LOCK *v160; // rdx
  VIDMM_GLOBAL *v161; // rcx
  int *v162; // rbx
  __int64 v163; // rdi
  _QWORD *v164; // rax
  DXGFASTMUTEX *v165; // rcx
  int v166; // [rsp+50h] [rbp-138h]
  int v167; // [rsp+68h] [rbp-120h]
  char v168; // [rsp+E0h] [rbp-A8h]
  unsigned __int8 v169; // [rsp+108h] [rbp-80h]
  unsigned __int8 v170; // [rsp+109h] [rbp-7Fh]
  unsigned __int8 v171; // [rsp+10Ah] [rbp-7Eh]
  bool v172; // [rsp+10Bh] [rbp-7Dh] BYREF
  _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 v173; // [rsp+10Ch] [rbp-7Ch] BYREF
  unsigned int v174; // [rsp+110h] [rbp-78h]
  int v175; // [rsp+114h] [rbp-74h]
  int v176; // [rsp+118h] [rbp-70h] BYREF
  unsigned int v177[2]; // [rsp+120h] [rbp-68h]
  __int64 Current; // [rsp+128h] [rbp-60h]
  unsigned int v179; // [rsp+130h] [rbp-58h] BYREF
  int v180; // [rsp+134h] [rbp-54h]
  int v181; // [rsp+138h] [rbp-50h] BYREF
  struct VIDMM_PARTITION *v182; // [rsp+140h] [rbp-48h]
  unsigned __int64 v183; // [rsp+148h] [rbp-40h]
  unsigned __int64 v184; // [rsp+150h] [rbp-38h]
  __int64 v185; // [rsp+158h] [rbp-30h]
  int v186; // [rsp+160h] [rbp-28h]
  int v187[20]; // [rsp+168h] [rbp-20h] BYREF
  VIDMM_GLOBAL *v188; // [rsp+208h] [rbp+80h]
  int v190; // [rsp+218h] [rbp+90h]
  unsigned __int8 v191; // [rsp+218h] [rbp+90h]
  unsigned int v192; // [rsp+218h] [rbp+90h]
  int v194; // [rsp+250h] [rbp+C8h]
  unsigned __int8 v195; // [rsp+250h] [rbp+C8h]
  char v196; // [rsp+250h] [rbp+C8h]

  v188 = a1;
  v20 = (char)a10;
  v173.0 = a10;
  v24 = a1;
  Current = (__int64)DXGPROCESS::GetCurrent();
  v26 = (signed int)a10;
  LOBYTE(v27) = *(_BYTE *)(Current + 347);
  if ( ((unsigned __int8)v27 & 0x20) != 0 && ((unsigned __int8)v27 & 0x40) == 0 && !a17 && (*(_BYTE *)&a10 & 1) != 0 )
  {
    v26 = *(_DWORD *)&a10 & 0xFFFF7FFF;
    v173.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(*(_DWORD *)&a10 & 0xFFFF7FFF);
  }
  v182 = *(struct VIDMM_PARTITION **)(*(_QWORD *)(a2 + 8) + 288LL);
  v28 = 0;
  if ( *((_DWORD *)v24 + 1750) != 1 )
    v28 = a3;
  v29 = v28;
  *(_QWORD *)v177 = v28;
  v185 = *((_QWORD *)v24 + 5027) + 1584LL * v28;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v27) + 24) = a2;
    v30 = (_QWORD *)WdLogNewEntry5_WdTrace(a2);
    v30[5] = 0LL;
    v30[4] = a6;
    v30[6] = a7;
    v30[7] = a8;
    v30[3] = a4;
    v31 = (_QWORD *)WdLogNewEntry5_WdTrace(a8);
    v31[4] = (unsigned int)v26;
    v27 = a12;
    v31[5] = a12;
    v31[3] = a9.Value;
  }
  *a20 = 0LL;
  v32 = *((_DWORD *)v24 + 8) < 0x5023u;
  v180 = 0x40000;
  if ( v32 && (v26 & 0x40000) != 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v27, v25, 1LL);
    *(_QWORD *)(v33 + 24) = 2479LL;
LABEL_13:
    WdLogEvent5_WdAssertion(v33);
    return 3221225485LL;
  }
  if ( (v26 & 0x20000) != 0 )
  {
    if ( (v26 & 2) != 0
      || (v26 & 4) != 0
      && (v27 = (VIDMM_GLOBAL *)*(unsigned int *)(*((_QWORD *)v24 + 3) + 348LL), ((unsigned __int8)v27 & 8) == 0)
      || (v26 & 0x100000) != 0
      || (v26 & 0x80000) != 0
      || (v26 & 8) != 0
      || (v26 & 0x10) != 0
      || (v26 & 0x20) != 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v27, 0x20000LL, 1LL);
      *(_QWORD *)(v33 + 24) = 2498LL;
      goto LABEL_13;
    }
    v26 &= 0xFFFBFFFE;
    v173.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v26;
  }
  if ( (v26 & 1) == 0 || (LOBYTE(v175) = 1, (v26 & 0x40000) != 0) )
    LOBYTE(v175) = 0;
  if ( *((_BYTE *)v24 + 40168)
    || (v35 = v26, CurrentProcess = PsGetCurrentProcess(v27, 0x20000LL, 1LL), !PsGetProcessWow64Process(CurrentProcess)) )
  {
    v35 = v26;
    if ( (v26 & 0x20000000) == 0
      && (v26 & 0x40000000) == 0
      && v26 >= 0
      && (v26 & 0x10000000) == 0
      && (v26 & 8) == 0
      && (v26 & 0x400000) == 0
      && (v26 & 0x20000) == 0
      && !a17 )
    {
      v35 = v26 & 0xFFFBFFFF;
      LOBYTE(v175) = 1;
      v173.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(v26 & 0xFFFBFFFF);
    }
  }
  if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(v27, a9, a7) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v38, v37, v39);
    *(_QWORD *)(v33 + 24) = 2556LL;
    goto LABEL_13;
  }
  if ( dword_1C00514B0 && (v35 & 1) == 0 )
  {
    if ( (*(_BYTE *)&a9.0 & 0x1F) != 0 )
    {
      v38 = (*(_BYTE *)&a9.0 & 0x1Fu) - 1;
      v40 = 1 << ((*(_BYTE *)&a9.0 & 0x1F) - 1);
      goto LABEL_47;
    }
    v179 = 0;
    if ( !VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(v24, v29, v40, 0x1001u, &v179) )
    {
      v40 = v179;
LABEL_47:
      a7 = v40;
      goto LABEL_50;
    }
    v40 = a7;
  }
LABEL_50:
  if ( !a4 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v38, v37, v39);
    *(_QWORD *)(v33 + 24) = 2596LL;
    goto LABEL_13;
  }
  if ( ((v35 | (v35 >> 1)) & 0x1000) != 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v38, v37, v39);
    *(_QWORD *)(v33 + 24) = 2604LL;
    goto LABEL_13;
  }
  v181 = 0;
  v176 = 0;
  if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
          v24,
          v29,
          v40,
          &v173,
          a4,
          a5,
          a17 != 0,
          (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v176) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v42, v41, v43);
    *(_QWORD *)(v33 + 24) = 2615LL;
    goto LABEL_13;
  }
  Value = v173.Value;
  v45 = 1LL;
  if ( (v173.Value & 0x40000) != 0 )
  {
    if ( (*(_BYTE *)&v173.0 & 1) == 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(1LL, v41, v43);
      *(_QWORD *)(v33 + 24) = 2630LL;
      goto LABEL_13;
    }
    if ( (*(_BYTE *)&v173.0 & 2) != 0 || (*(_BYTE *)&v173.0 & 0x20) != 0 || (*(_BYTE *)&v173.0 & 0x10) != 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(1LL, v41, v43);
      *(_QWORD *)(v33 + 24) = 2642LL;
      goto LABEL_13;
    }
  }
  v46 = v176;
  v183 = a5 & -(__int64)((v176 & 4) != 0);
  if ( a8 )
  {
    if ( !VIDMM_GLOBAL::VerifySegmentSet(v24, v29, a8, 1u, 0LL) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v48, v47, v49);
      *(_QWORD *)(v33 + 24) = 2674LL;
      goto LABEL_13;
    }
    if ( VIDMM_GLOBAL::VerifySegmentSetAny(v24, v29, a8, 0x20u) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v45, v41, v43);
      *(_QWORD *)(v33 + 24) = 2689LL;
      goto LABEL_13;
    }
  }
  v50 = 1;
  v51 = (Value >> 1) & 1;
  if ( v51 )
  {
    if ( (Value & 1) == 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v45, v41, v43);
      *(_QWORD *)(v33 + 24) = 2707LL;
      goto LABEL_13;
    }
    if ( (Value & 0x20000000) != 0 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v45, v41, v43);
      *(_QWORD *)(v33 + 24) = 2720LL;
      goto LABEL_13;
    }
  }
  v190 = (Value >> 2) & 1;
  if ( v190 && (Value & 0x800000) == 0 )
  {
    if ( *((_BYTE *)v24 + 7081) )
    {
      if ( !VIDMM_GLOBAL::VerifySegmentSet(v24, v177[0], a8, 0x10u, 0LL) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v45, v41, v43);
        *(_QWORD *)(v33 + 24) = 2753LL;
        goto LABEL_13;
      }
      v50 = 1;
    }
    else
    {
      v45 = *(unsigned int *)(*((_QWORD *)v24 + 3) + 348LL);
      if ( (v45 & 8) == 0 && !VIDMM_GLOBAL::VerifySegmentSet(v24, v177[0], a8, 1u, 0LL) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v45, v41, v43);
        *(_QWORD *)(v33 + 24) = 2760LL;
        goto LABEL_13;
      }
    }
  }
  v194 = *(_DWORD *)&v50 & (Value >> 29);
  if ( v194 && (v51 || (Value & 8) != 0 || (Value & 0x20) != 0 || (Value & 0x40000000) != 0) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v45, v41, v43);
    *(_QWORD *)(v33 + 24) = 2780LL;
    goto LABEL_13;
  }
  IsEnabled = Feature_WSL_Device_GPU__private_IsEnabled();
  v56 = PagedPool;
  if ( IsEnabled && (a11 & 1) != 0 )
  {
    if ( (v46 & 1) == 0 || (v57 = v194) == 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v54, v53, v55);
      *(_QWORD *)(v33 + 24) = 2789LL;
      goto LABEL_13;
    }
  }
  else
  {
    v57 = v194;
  }
  if ( (Value & 0x100000) != 0 && (!v57 || !a19 || (v46 & 1) == 0) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v54, v53, v55);
    *(_QWORD *)(v33 + 24) = 2801LL;
    goto LABEL_13;
  }
  if ( a17 && (v51 || (Value & 0x100) != 0 || (Value & 0x200) != 0 || (Value & 0x40000000) != 0) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v54, a17, v55);
    *(_QWORD *)(v33 + 24) = 2821LL;
    goto LABEL_13;
  }
  v58 = (Value >> 26) & 1;
  if ( ((Value >> 26) & 1) != 0 )
  {
    if ( (Value & 8) == 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v58, a17, v55);
      *(_QWORD *)(v33 + 24) = 2837LL;
      goto LABEL_13;
    }
  }
  else if ( (Value & 8) == 0 )
  {
    goto LABEL_121;
  }
  if ( (Value & 1) != 0 && !(_DWORD)v58 && !a17
    || v51
    || v57
    || (Value & 0x10) != 0
    || (Value & 0x20) != 0
    || (v55 = 0x80000000LL, (Value & 0x80000000) != 0)
    || (Value & 0x40000000) != 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v58, a17, v55);
    *(_QWORD *)(v33 + 24) = 2870LL;
    goto LABEL_13;
  }
LABEL_121:
  v59 = (Value >> 4) & 1;
  if ( ((Value >> 4) & 1) != 0 && (v51 || (Value & 0x20) != 0 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v59, a17, 0x80000000LL);
    *(_QWORD *)(v33 + 24) = 2892LL;
    goto LABEL_13;
  }
  v60 = (Value >> 5) & 1;
  if ( ((Value >> 5) & 1) != 0 && (v51 || v57 || (_DWORD)v59 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v59, v60, 0x80000000LL);
    *(_QWORD *)(v33 + 24) = 2916LL;
    goto LABEL_13;
  }
  v61 = Value >> 31;
  if ( (Value & 0x80000000) == 0 )
  {
    if ( (Value & 0x40000000) != 0 )
    {
      if ( v51
        || v190 && (v63 = *(_DWORD *)(*((_QWORD *)v24 + 3) + 348LL), (v63 & 0x10) == 0) && (v63 & 8) == 0
        || (_DWORD)v59
        || (_DWORD)v60 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
        *(_QWORD *)(v33 + 24) = 2964LL;
        goto LABEL_13;
      }
      v56 = PagedPool;
      if ( (*(_DWORD *)(*((_QWORD *)v24 + 3) + 2060LL) & 0x200) == 0 )
        Value |= 1u;
      v64 = (unsigned __int8)v175;
      if ( (Value & 1) != 0 )
        v64 = 1;
      Value |= 0x20000000u;
      v173.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
      v175 = v64;
    }
  }
  else
  {
    if ( v51 )
      goto LABEL_143;
    if ( v190 )
    {
      v62 = *(_DWORD *)(*((_QWORD *)v24 + 3) + 348LL);
      if ( (v62 & 0x10) == 0 && (v62 & 8) == 0 )
        goto LABEL_143;
      v56 = PagedPool;
    }
    if ( (_DWORD)v59 || (_DWORD)v60 || (Value & 0x40000000) != 0 )
    {
LABEL_143:
      v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
      *(_QWORD *)(v33 + 24) = 2940LL;
      goto LABEL_13;
    }
  }
  if ( ((Value >> 28) & 1) != 0 )
  {
    v65 = *((_QWORD *)v24 + 3);
    v66 = Value & 0xEFFF7FBF;
    v67 = *(unsigned int *)(v65 + 348);
    if ( (v67 & 8) != 0 || (v67 & 0x10) != 0 )
      v66 = Value & 0xEFFF7FBB;
    if ( v66 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v65, v67, v61);
      *(_QWORD *)(v33 + 24) = 3006LL;
      goto LABEL_13;
    }
    if ( !VIDMM_GLOBAL::VerifySegmentSet(v24, v177[0], a8, 1u, 0LL) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
      *(_QWORD *)(v33 + 24) = 3016LL;
      goto LABEL_13;
    }
  }
  if ( (Value & 0x400000) != 0 )
  {
    if ( (Value & 0x20000000) == 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
      *(_QWORD *)(v33 + 24) = 3032LL;
      goto LABEL_13;
    }
    if ( !a13 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
      *(_QWORD *)(v33 + 24) = 3042LL;
      goto LABEL_13;
    }
  }
  if ( (Value & 0x4000) != 0 )
  {
    if ( ((unsigned __int8)Value & (unsigned __int8)v56) == 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
      *(_QWORD *)(v33 + 24) = 3054LL;
      goto LABEL_13;
    }
    if ( (Value & 2) != 0
      || (Value & 8) != 0
      || (Value & 0x10) != 0
      || (Value & 0x20) != 0
      || (Value & 0x40) != 0
      || (Value & 0x100) != 0
      || (Value & 0x200) != 0
      || (Value & 0x40000) != 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
      *(_QWORD *)(v33 + 24) = Value;
      goto LABEL_13;
    }
  }
  if ( (VIDMM_GLOBAL::_Config & 2) != 0 )
  {
    if ( DXGPROCESS::GetCurrent() )
      v68 = *((unsigned __int8 *)DXGPROCESS::GetCurrent() + 346);
    else
      v68 = 0;
    if ( !v68 || ((Value >> 28) & 1) != 0 )
    {
      v56 = PagedPool;
    }
    else
    {
      v56 = PagedPool;
      if ( (Value & 0x40000000) == 0 )
      {
        Value |= 0x8000000u;
        v173.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
      }
    }
  }
  v70 = Current;
  LOBYTE(v61) = 0;
  LOBYTE(v60) = 0;
  v191 = 0;
  v69 = 0;
  v170 = 0;
  v171 = 0;
  LOBYTE(v70) = *(_BYTE *)(Current + 347);
  v169 = 0;
  v195 = 0;
  if ( (v70 & 0x20) == 0 || a17 )
  {
    v72 = 825256278;
    v73 = 504LL;
  }
  else
  {
    v170 = v56;
    if ( (Value & 0x10) != 0 )
    {
      LOBYTE(v61) = v56;
      v171 = v56;
    }
    else if ( ((unsigned __int8)Value & (unsigned __int8)v56) != 0 )
    {
      v69 = v56 & ((unsigned __int8)v70 >> 6);
      v195 = v69;
      if ( (Value & 0x8000) != 0 )
      {
        if ( !v69 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v70, v60, v61);
          *(_QWORD *)(v33 + 24) = 3113LL;
          goto LABEL_13;
        }
      }
      else
      {
        v195 = v56 & ((unsigned __int8)v70 >> 6);
      }
      LOBYTE(v60) = v56 ^ v69;
      v169 = v56 ^ v69;
      v191 = v56 ^ v69;
      if ( (Value & 0x20000000) != 0 )
      {
        v191 = v56;
        v169 = v56 ^ v69;
        v195 = v56 & ((unsigned __int8)v70 >> 6);
      }
    }
    v71 = v60 | v69;
    v72 = 1630562646;
    if ( (unsigned __int8)v61 | v71 )
      v73 = 544LL;
    else
      v73 = 512LL;
  }
  v74 = operator new(v73, v72, v61, v56);
  v76 = (_D3DDDI_SEGMENTPREFERENCE *)v74;
  if ( v74 )
  {
    v74[43] = 0LL;
    v74[59] = 0LL;
    v77 = v74 + 23;
    *v77 = v77;
    v77[1] = v77;
  }
  else
  {
    v76 = 0LL;
  }
  if ( !v76 )
  {
    _InterlockedIncrement(&dword_1C0051654);
    v78 = WdLogNewEntry5_WdLowResource(v75);
    *(_QWORD *)(v78 + 24) = 3160LL;
    WdLogEvent5_WdLowResource(v78);
    return 3221225495LL;
  }
  v76[19].Value ^= (v76[19].Value ^ v177[0]) & 0x3F;
  v79 = operator new[](0x28uLL, 0x38326956u, (POOL_TYPE)512);
  if ( v79 )
  {
    *v79 = 0LL;
    v79[1] = 0LL;
    v79[2] = 0LL;
    *((_DWORD *)v79 + 6) = 0;
    *((_DWORD *)v79 + 7) = 13;
    *((_DWORD *)v79 + 8) = 53;
  }
  else
  {
    v79 = 0LL;
  }
  *(_QWORD *)&v76[78].0 = v79;
  if ( !v79 )
  {
    _InterlockedIncrement(&dword_1C0051704);
    v80 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v80 + 24) = 3174LL;
LABEL_216:
    WdLogEvent5_WdLowResource(v80);
    SyncObject = -1073741801;
LABEL_323:
    v119 = v188;
LABEL_324:
    if ( (v76[21].Value & 0x40) != 0 )
      VIDMM_GLOBAL::UncommitGlobalBackingStore(v119, (struct _VIDMM_GLOBAL_ALLOC *)v76, 1);
    v156 = *(_QWORD *)&v76[124].0;
    if ( v156 )
    {
      if ( *(_QWORD *)(v156 + 24) )
      {
        v157 = *(_QWORD *)&v76[124].0;
        for ( i = 0LL; i < 16; i += 8LL )
        {
          v159 = *(_QWORD *)(v156 + 24);
          if ( *(_QWORD *)(i + v159) )
          {
            VidSchDestroySyncObject(*(PVOID *)(i + v159));
            v156 = *(_QWORD *)&v76[124].0;
            v157 = v156;
          }
        }
        operator delete(*(void **)(v157 + 24));
        v156 = *(_QWORD *)&v76[124].0;
      }
      if ( *(_QWORD *)(v156 + 16) )
      {
        VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(*(int **)(v156 + 16), v81);
        v156 = *(_QWORD *)&v76[124].0;
      }
      operator delete((void *)v156);
    }
    v160 = *(KSPIN_LOCK **)&v76[122].0;
    if ( v160 )
    {
      VIDMM_GLOBAL::FreeCrossAdapterDataDpc((VIDMM_GLOBAL *)v156, v160, (struct _VIDMM_GLOBAL_ALLOC *)v76);
      v161 = (VIDMM_GLOBAL *)(unsigned int)_InterlockedDecrement(*(volatile signed __int32 **)&v76[122].0);
      if ( (_DWORD)v161 )
      {
        if ( (int)v161 < 0 )
        {
          v162 = *(int **)&v76[122].0;
          v163 = *v162;
          v164 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v161, v160);
          v164[7] = 0LL;
          v164[3] = 270LL;
          v164[4] = 66LL;
          v164[5] = v162;
          v164[6] = v163;
          WdLogEvent5_WdCriticalError(v164);
        }
      }
      else
      {
        VIDMM_GLOBAL::DestroyCrossAdapterAllocation(v161, *(struct _VIDMM_CROSSADAPTER_ALLOC **)&v76[122].0);
        *(_QWORD *)a19 = 0LL;
      }
    }
    v165 = *(DXGFASTMUTEX **)&v76[78].0;
    if ( v165 )
      DXGFASTMUTEX::`scalar deleting destructor'(v165, (__int64)v160, v82);
    _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v76);
    return (unsigned int)SyncObject;
  }
  v84 = operator new[](0x28uLL, 0x32346956u, (POOL_TYPE)512);
  *(_QWORD *)&v76[124].0 = v84;
  if ( !v84 )
  {
    _InterlockedIncrement(&dword_1C0051760);
    v80 = WdLogNewEntry5_WdLowResource(v85);
    *(_QWORD *)(v80 + 24) = 3187LL;
    goto LABEL_216;
  }
  *v84 = 0LL;
  v84[1] = 0LL;
  *((_QWORD *)v84 + 4) = 0LL;
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 624LL) + 57LL) )
  {
    if ( (Value & 0x40000000) != 0 || (Value & 0x80000000) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)&v76[124].0 + 24LL) = operator new[](0xA8uLL, 0x33306956u, (POOL_TYPE)512);
      v86 = *(void **)(*(_QWORD *)&v76[124].0 + 24LL);
      if ( v86 )
      {
        memset(v86, 0, 0xA8uLL);
        v174 = 0;
        Current = 16LL;
        LODWORD(v184) = 1000 * (v177[0] + 1);
        while ( 1 )
        {
          memset(v187, 0, sizeof(v187));
          v87 = *(_QWORD *)&v76[124].0;
          v88 = (int)v174;
          v187[1] |= 0x80u;
          v89 = *(_QWORD *)(v87 + 24);
          v187[0] = 5;
          v90 = v174 * (unsigned int)v184 + 100LL;
          *(_QWORD *)(Current + v89) = v90;
          v91 = *((_QWORD *)v24 + 2);
          *(_QWORD *)&v187[2] = v90;
          v92 = *(_QWORD *)(v91 + 624);
          v93 = *(_QWORD *)&v76[124].0;
          v186 = (((_DWORD)v88 != 1) + 7) & 0x7FFFFFFF;
          SyncObject = VidSchCreateSyncObject(
                         v92,
                         0,
                         (int)v187,
                         v186,
                         0LL,
                         0LL,
                         (PVOID)(*(_QWORD *)(v93 + 24) + 8 * v88),
                         0LL);
          if ( SyncObject < 0 )
            goto LABEL_323;
          Current += 8LL;
          v24 = v188;
          if ( (int)++v174 >= 2 )
            goto LABEL_231;
        }
      }
      _InterlockedIncrement(&dword_1C005164C);
      v80 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v80 + 24) = 3204LL;
      goto LABEL_216;
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)&v76[124].0 + 16LL) = operator new[](0xCuLL, 0x33306956u, (POOL_TYPE)512);
    v94 = *(_QWORD *)(*(_QWORD *)&v76[124].0 + 16LL);
    if ( !v94 )
    {
      _InterlockedIncrement(&dword_1C005164C);
      v80 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v80 + 24) = 3258LL;
      goto LABEL_216;
    }
    *(_QWORD *)v94 = 0LL;
    *(_DWORD *)(v94 + 8) = 0;
    _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)&v76[124].0 + 16LL));
    Value = v173.Value;
    v46 = v176;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v76[124].0 + 16LL) + 4LL) = -((v173.Value & 0x100000) == 0);
  }
LABEL_231:
  v95 = a12;
  if ( a12 )
  {
    v96 = *((_DWORD *)a12 + 1);
    if ( (v96 & 0x8000) != 0 )
    {
      v76[19].Value |= 0x800u;
      v96 = *((_DWORD *)a12 + 1);
    }
    if ( (v96 & 0x10000) != 0 )
    {
      v76[20].Value |= 0x400u;
      v76[19].Value |= 0x400000u;
    }
  }
  v97 = a19;
  if ( a19 )
    v97 = *(volatile signed __int32 **)a19;
  *(_QWORD *)&v76[122].0 = v97;
  if ( v97 )
  {
    _InterlockedAdd(v97, 1u);
    SyncObject = VIDMM_GLOBAL::AllocateCrossAdapterDataDpc(
                   v24,
                   *(struct _VIDMM_CROSSADAPTER_ALLOC **)&v76[122].0,
                   (struct _VIDMM_GLOBAL_ALLOC *)v76);
    if ( SyncObject < 0 )
      goto LABEL_323;
    Value = v173.Value;
    v46 = v176;
    v95 = a12;
  }
  v98 = v182;
  *(_QWORD *)&v76->0 = a4;
  v99 = (*((_DWORD *)v98 + 18) & 1) != 0 ? 0xFFFF : 4095;
  v100 = (unsigned int)v99;
  v101 = ~v99 & (v99 + a4);
  Current = v101;
  if ( a4 > v101 )
  {
    v102 = (_QWORD *)WdLogNewEntry5_WdAssertion(v99, (unsigned int)v99, a4);
    v103 = a4;
LABEL_243:
    v102[3] = v103;
LABEL_322:
    WdLogEvent5_WdAssertion(v102);
    SyncObject = -1073741811;
    goto LABEL_323;
  }
  v104 = ~v99 & (v183 + v99);
  v184 = v104;
  if ( v183 > v104 )
  {
    v102 = (_QWORD *)WdLogNewEntry5_WdAssertion(v104, v100, a4);
    v103 = v183;
    goto LABEL_243;
  }
  if ( v101 > 0xFFFF0000 && (v76[20].Value & 0x400) == 0 )
  {
    v102 = (_QWORD *)WdLogNewEntry5_WdAssertion(v104, v100, a4);
    v102[3] = 3349LL;
    goto LABEL_322;
  }
  v105 = v100 + a6;
  v106 = (unsigned int)~(_DWORD)v100;
  v107 = (unsigned int)v106 & v105;
  v174 = v107;
  if ( a6 > (unsigned int)v107 )
  {
    v102 = (_QWORD *)WdLogNewEntry5_WdAssertion(v104, v106, v107);
    v103 = a6;
    goto LABEL_243;
  }
  if ( v107 + v101 < v101 || v107 + v104 < v104 )
  {
    v102 = (_QWORD *)WdLogNewEntry5_WdAssertion(v104, v106, v107);
    v154 = v184;
    v155 = v174;
    v102[3] = v101;
    v102[4] = v154;
    v102[5] = v101;
    v102[6] = v155;
    goto LABEL_322;
  }
  if ( (Value & 0x10000000) != 0 )
  {
    Value |= 8u;
    v173.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
  }
  *(_QWORD *)&v76[88].0 = a13;
  if ( (Value & 0x20000000) == 0 || (Value & 0x10) != 0 )
    v180 = 0;
  v108 = v76[20].Value;
  v76[38].Value = 0;
  v76[20].Value = v180 | v108 & 0xFFFBFFFF;
  v109 = *(unsigned int **)&v76[124].0;
  *(_QWORD *)&v76[6].0 = v104;
  *(_QWORD *)&v76[4].0 = v101;
  *(_QWORD *)&v76[2].0 = v101;
  v76[8].Value = v107;
  *v109 = Value;
  v76[30].Value = 0;
  v76[76].Value = 0;
  v76[16].Value = a8;
  v76[17].Value = a7;
  v110 = (v76[19].Value ^ (v46 << 7)) & 0x80;
  v76[18].0 = a9.0;
  v111 = v76[19].Value ^ v110;
  *(_QWORD *)&v76[10].0 = v95;
  LODWORD(v109) = v111 ^ ((unsigned __int8)v111 ^ (unsigned __int8)(32 * v46)) & 0x40;
  v112 = (unsigned __int8)v175;
  v76[19].Value = (unsigned int)v109;
  v76[20].Value = v76[20].Value & 0xFFFE0F7F | (v112 << 7) & 0xFFFE0FFF | (v191 << 16) | (v170 << 12) & 0xFFFF1FFF | (v171 << 15) | (v169 << 13) & 0xFFFFBFFF | (v195 << 14);
  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
  {
    v113 = v76[20].Value ^ (v76[20].Value ^ (a11 << 21)) & 0x200000;
    v76[20].Value = v113;
    if ( a12 && (*((_DWORD *)a12 + 1) & 0x200000) != 0 )
      v114 = 0x400000;
    else
      v114 = 0;
    v76[20].Value = v114 | v113 & 0xFFBFFFFF;
  }
  if ( v170 )
  {
    v115 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
    v116 = *(_BYTE *)(v115 + 347);
    if ( (v116 & 0x20) != 0 )
      v117 = *(_QWORD *)(v115 + 496);
    else
      v117 = v115 & -(__int64)((v116 & 0x10) != 0);
    v118 = *(_QWORD *)(v117 + 64);
    if ( v118 )
      v118 = *(_QWORD *)(v118 + 8);
    *(_QWORD *)&v76[126].0 = v118;
  }
  v119 = v188;
  v120 = 0;
  v121 = 1;
  if ( (Value & 1) != 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v188 + 3) + 348LL) & 8) != 0
      || VIDMM_GLOBAL::CheckForCpuVisibleMemorySegment(v188, v177[0], a7) )
    {
      v120 = v121;
    }
    else
    {
      v120 = 0;
    }
  }
  v122 = v76[20].Value & 0xFFF7FFFF | (v120 << 19);
  v123 = v76[19].Value & 0x3F;
  v76[20].Value = v122;
  v124 = *(_DWORD **)(1584 * v123 + *((_QWORD *)v188 + 5027) + 440);
  if ( ((unsigned __int8)*((_DWORD *)v182 + 18) & (unsigned __int8)v121) != 0 )
  {
    v125 = v122 | 0x100;
  }
  else
  {
    if ( dword_1C00514B4
      && (**(_DWORD **)(*((_QWORD *)v188 + 3) + 2600LL) & 0x4000) == 0
      && (v46 & 2) != 0
      && v124
      && ((*v124 & 0x200) != 0 || dword_1C00514B4 == 2)
      && ((v126 = *(_QWORD *)&v76[2].0, !(_WORD)v126) || v126 > (unsigned int)dword_1C00514B8)
      && !v120 )
    {
      v127 = 256;
    }
    else
    {
      v127 = 0;
    }
    v125 = v127 | v122 & 0xFFFFFEFF;
  }
  v76[20].Value = v125;
  SyncObject = VIDMM_GLOBAL::CommitGlobalBackingStore(v188, (struct _VIDMM_GLOBAL_ALLOC *)v76);
  if ( SyncObject < 0 )
    goto LABEL_324;
  if ( (Value & 0x4000) != 0 )
    v76[20].Value |= 0x20u;
  if ( (*(_BYTE *)(v185 + 436) & 3) != 0 )
  {
    v128 = 1 << (*(_WORD *)(v185 + 28) - *(_BYTE *)(v185 + 20));
    v76[16].Value |= v128;
    if ( (v46 & 2) != 0 && (Value & 0x8000) == 0 )
      v76[17].Value |= v128;
  }
  v129 = v177[0];
  v130 = v188;
  v131 = v177[0];
  *(_QWORD *)&v76[12].0 = a14;
  *(_QWORD *)&v76[28].0 = a17;
  v132 = v76[19].Value & 0xF7FFFFFF | (a17 != 0 ? 0x8000000 : 0);
  v76[19].Value = v132 ^ (v132 ^ (a16 << 28)) & 0x10000000;
  v76[92].Value = a15;
  *(_QWORD *)&v76[74].0 = v76 + 72;
  *(_QWORD *)&v76[72].0 = v76 + 72;
  v76[116].Value = -1;
  v76[117].Value = -1;
  v133 = v76[19].Value;
  v172 = (v133 & 0x80) != 0;
  MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(v188, v131, a9, &v172);
  v76[19].Value = v133 ^ ((unsigned __int16)v133 ^ (v172 << 10)) & 0x400;
  if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
          v188,
          v129,
          a7,
          MostPreferredSegment,
          (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v181) )
    return 3221225485LL;
  v135 = v76[19].Value ^ (v76[19].Value ^ (v181 << 12)) & 0xF0000 ^ (*(_WORD *)&v76[19].0 ^ (unsigned __int16)((_WORD)v181 << 12)) & 0xF000;
  if ( (Value & 0x10) != 0 || (Value & 0x20) != 0 )
    *((_BYTE *)&v76[22].0 + 1) = 1;
  v76[19].Value = v135 ^ (v135 ^ (a18 << 8)) & 0x100;
  v136 = VIDMM_GLOBAL::AdapterId(v188);
  v137 = v182;
  *(_QWORD *)&v76[120].0 = *((_QWORD *)v182 + 5) + 376LL * v136;
  VidMmiReferencePartition(v137);
  v138 = **(_DWORD **)&v76[124].0;
  if ( (v138 & 0x2003A) != 0
    || (v139 = v76[20].Value, (v139 & 0x2000) != 0)
    || (v76[19].Value & 0x100) != 0
    || (v139 & 0x400) != 0
    || (v138 & 0x40000000) != 0 )
  {
    v139 = v76[20].Value;
    v140 = 0;
  }
  else
  {
    v140 = 0x20000;
  }
  v141 = v140 | v139 & 0xFFFDFFFF;
  v142 = bTracingEnabled == 0;
  v76[20].Value = v141;
  if ( v142 )
    goto LABEL_317;
  v143 = *(_QWORD *)&v76[10].0;
  v144 = v143 ? *(unsigned int **)(v143 + 24) : 0LL;
  v145 = *(_WORD *)&v76[19].0 & 0x3F;
  v182 = *(struct VIDMM_PARTITION **)(a2 + 24);
  v183 = *((_QWORD *)v188 + 3);
  v185 = *(_QWORD *)&v76[88].0;
  *(_QWORD *)v177 = PsGetCurrentProcessId();
  LOBYTE(v188) = 0;
  v141 = 0LL;
  LOBYTE(v192) = 0;
  LOBYTE(v146) = 0;
  v196 = 0;
  v147 = 0LL;
  LOBYTE(v148) = 0;
  LOBYTE(v149) = 0;
  LOBYTE(v150) = 0;
  if ( v144 )
  {
    v141 = *v144;
    v146 = v144[1];
    v147 = v144[2];
    v148 = v144[3];
    v149 = v144[4];
    v150 = v144[5];
    LODWORD(v188) = v144[6];
    v192 = v144[7];
    v151 = v144[8];
    v152 = v144[9];
    v196 = v151;
  }
  else
  {
    LOBYTE(v152) = 0;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) == 0 )
  {
LABEL_317:
    v153 = Current;
  }
  else
  {
    v168 = v152;
    v153 = Current;
    McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
      v141,
      &EventCreateAdapterAllocation,
      v147,
      *(__int64 *)v177,
      (char)v182,
      v183,
      v20,
      Current,
      v174,
      v166,
      a7,
      *(_BYTE *)&a9.0,
      v167,
      a8,
      a15,
      (char)v76,
      v143,
      0,
      v141,
      v146,
      v147,
      v148,
      v149,
      v150,
      (char)v188,
      v192,
      v196,
      v168,
      0,
      v185,
      v145,
      a18);
  }
  ++*((_DWORD *)v130 + 1910);
  *((_QWORD *)v130 + 956) += v153;
  *((_QWORD *)v130 + 5023) += v153;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v141) + 24) = v76;
  *a20 = v76;
  return 0LL;
}
