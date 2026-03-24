/*
 * XREFs of ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005D34C
 * Callers:
 *     ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C005D244 (-CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXG.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C00892DC (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C008CCF8 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008DF9C (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001618 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001690 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001AD0 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002230 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C0017B4C (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     memset @ 0x1C0018EC0 (memset.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C00233C8 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C0023430 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00235D0 (-AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL.c)
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00239D0 (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C0023D98 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C002415C (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     ?VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0026E80 (-VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0064960 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0065AC0 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@IEAAEKK@Z @ 0x1C006FCC4 (-CheckForCpuVisibleMemorySegment@VIDMM_GLOBAL@@IEAAEKK@Z.c)
 *     VidSchDestroySyncObject @ 0x1C0083750 (VidSchDestroySyncObject.c)
 *     VidSchCreateSyncObject @ 0x1C0083960 (VidSchCreateSyncObject.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C00863A0 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     ?VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z @ 0x1C0086880 (-VerifyBudgetGroups@VIDMM_GLOBAL@@IEAAEKKPEAVVIDMM_SEGMENT@@PEAU_VIDMM_VERIFY_BUDGET_GROUPS@@@Z.c)
 *     ?VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z @ 0x1C0086990 (-VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00869EC (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z @ 0x1C0086F50 (-VerifyPreferredSegmentIsSubset@VIDMM_GLOBAL@@IEAAEU_D3DDDI_SEGMENTPREFERENCE@@K@Z.c)
 *     ?GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N@Z @ 0x1C00871AC (-GetMostPreferredSegment@VIDMM_GLOBAL@@IEAAPEAVVIDMM_SEGMENT@@KU_D3DDDI_SEGMENTPREFERENCE@@PEA_N.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C008B4E4 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C008EA44 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C00AEF0C (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
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
  int IsEnabledDeviceUsage; // eax
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
  _D3DDDI_SEGMENTPREFERENCE *v75; // r13
  _QWORD *v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  int SyncObject; // r12d
  _OWORD *v82; // rax
  __int64 v83; // rcx
  void *v84; // rcx
  __int64 v85; // rax
  __int64 v86; // r8
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rcx
  VIDMM_GLOBAL *v93; // r9
  int v94; // eax
  volatile signed __int32 *v95; // rax
  struct VIDMM_PARTITION *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rdx
  unsigned __int64 v99; // r12
  _QWORD *v100; // rax
  unsigned __int64 v101; // rcx
  unsigned __int64 v102; // rcx
  int v103; // r8d
  __int64 v104; // rdx
  __int64 v105; // r8
  UINT v106; // eax
  unsigned int *v107; // rax
  int v108; // ecx
  int v109; // ecx
  int v110; // ecx
  int v111; // edi
  int v112; // eax
  __int64 v113; // rcx
  char v114; // al
  __int64 v115; // rax
  __int64 v116; // rax
  VIDMM_GLOBAL *v117; // rdi
  unsigned __int8 v118; // r8
  char v119; // r11
  unsigned int v120; // edx
  __int64 v121; // rax
  _DWORD *v122; // r10
  unsigned int v123; // edx
  unsigned __int64 v124; // rcx
  int v125; // eax
  int v126; // edx
  unsigned int v127; // r12d
  VIDMM_GLOBAL *v128; // rsi
  unsigned int v129; // edx
  unsigned int v130; // ecx
  UINT v131; // edi
  struct VIDMM_SEGMENT *MostPreferredSegment; // rax
  int v133; // eax
  unsigned int v134; // eax
  struct VIDMM_PARTITION *v135; // rcx
  int v136; // edx
  UINT v137; // ecx
  int v138; // eax
  __int64 v139; // rcx
  bool v140; // zf
  __int64 v141; // rdi
  unsigned int *v142; // rbx
  __int16 v143; // r12
  unsigned int v144; // edx
  __int64 v145; // r8
  unsigned int v146; // r9d
  unsigned int v147; // r10d
  unsigned int v148; // r11d
  unsigned int v149; // eax
  unsigned int v150; // ebx
  __int64 v151; // rbx
  unsigned __int64 v152; // rcx
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // rdx
  __int64 i; // rbx
  __int64 v157; // rax
  KSPIN_LOCK *v158; // rdx
  __int64 v159; // rdx
  VIDMM_GLOBAL *v160; // rcx
  int *v161; // rbx
  __int64 v162; // rdi
  _QWORD *v163; // rax
  DXGFASTMUTEX *v164; // rcx
  int v165; // [rsp+50h] [rbp-138h]
  int v166; // [rsp+68h] [rbp-120h]
  char v167; // [rsp+E0h] [rbp-A8h]
  unsigned __int8 v168; // [rsp+108h] [rbp-80h]
  unsigned __int8 v169; // [rsp+109h] [rbp-7Fh]
  unsigned __int8 v170; // [rsp+10Ah] [rbp-7Eh]
  bool v171; // [rsp+10Bh] [rbp-7Dh] BYREF
  _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 v172; // [rsp+10Ch] [rbp-7Ch] BYREF
  unsigned int v173; // [rsp+110h] [rbp-78h]
  int v174; // [rsp+114h] [rbp-74h]
  int v175; // [rsp+118h] [rbp-70h] BYREF
  unsigned int v176[2]; // [rsp+120h] [rbp-68h]
  __int64 Current; // [rsp+128h] [rbp-60h]
  unsigned int v178; // [rsp+130h] [rbp-58h] BYREF
  int v179; // [rsp+134h] [rbp-54h]
  int v180; // [rsp+138h] [rbp-50h] BYREF
  struct VIDMM_PARTITION *v181; // [rsp+140h] [rbp-48h]
  unsigned __int64 v182; // [rsp+148h] [rbp-40h]
  unsigned __int64 v183; // [rsp+150h] [rbp-38h]
  __int64 v184; // [rsp+158h] [rbp-30h]
  int v185; // [rsp+160h] [rbp-28h]
  int v186[20]; // [rsp+168h] [rbp-20h] BYREF
  VIDMM_GLOBAL *v187; // [rsp+208h] [rbp+80h]
  int v189; // [rsp+218h] [rbp+90h]
  unsigned __int8 v190; // [rsp+218h] [rbp+90h]
  unsigned int v191; // [rsp+218h] [rbp+90h]
  int v193; // [rsp+250h] [rbp+C8h]
  unsigned __int8 v194; // [rsp+250h] [rbp+C8h]
  char v195; // [rsp+250h] [rbp+C8h]

  v187 = a1;
  v20 = (char)a10;
  v172.0 = a10;
  v24 = a1;
  Current = (__int64)DXGPROCESS::GetCurrent();
  v26 = (signed int)a10;
  LOBYTE(v27) = *(_BYTE *)(Current + 347);
  if ( ((unsigned __int8)v27 & 0x20) != 0 && ((unsigned __int8)v27 & 0x40) == 0 && !a17 && (*(_BYTE *)&a10 & 1) != 0 )
  {
    v26 = *(_DWORD *)&a10 & 0xFFFF7FFF;
    v172.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(*(_DWORD *)&a10 & 0xFFFF7FFF);
  }
  v181 = *(struct VIDMM_PARTITION **)(*(_QWORD *)(a2 + 8) + 288LL);
  v28 = 0;
  if ( *((_DWORD *)v24 + 1750) != 1 )
    v28 = a3;
  v29 = v28;
  *(_QWORD *)v176 = v28;
  v184 = *((_QWORD *)v24 + 5027) + 1584LL * v28;
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
  v179 = 0x40000;
  if ( v32 && (v26 & 0x40000) != 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v27, v25, 1LL);
    *(_QWORD *)(v33 + 24) = 2489LL;
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
      *(_QWORD *)(v33 + 24) = 2508LL;
      goto LABEL_13;
    }
    v26 &= 0xFFFBFFFE;
    v172.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v26;
  }
  if ( (v26 & 1) == 0 || (LOBYTE(v174) = 1, (v26 & 0x40000) != 0) )
    LOBYTE(v174) = 0;
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
      LOBYTE(v174) = 1;
      v172.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(v26 & 0xFFFBFFFF);
    }
  }
  if ( !VIDMM_GLOBAL::VerifyPreferredSegmentIsSubset(v27, a9, a7) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v38, v37, v39);
    *(_QWORD *)(v33 + 24) = 2566LL;
    goto LABEL_13;
  }
  if ( dword_1C00504B0 && (v35 & 1) == 0 )
  {
    if ( (*(_BYTE *)&a9.0 & 0x1F) != 0 )
    {
      v38 = (*(_BYTE *)&a9.0 & 0x1Fu) - 1;
      v40 = 1 << ((*(_BYTE *)&a9.0 & 0x1F) - 1);
      goto LABEL_47;
    }
    v178 = 0;
    if ( !VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(v24, v29, v40, 0x1001u, &v178) )
    {
      v40 = v178;
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
    *(_QWORD *)(v33 + 24) = 2606LL;
    goto LABEL_13;
  }
  if ( ((v35 | (v35 >> 1)) & 0x1000) != 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v38, v37, v39);
    *(_QWORD *)(v33 + 24) = 2614LL;
    goto LABEL_13;
  }
  v180 = 0;
  v175 = 0;
  if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
          v24,
          v29,
          v40,
          &v172,
          a4,
          a5,
          a17 != 0,
          (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v175) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v42, v41, v43);
    *(_QWORD *)(v33 + 24) = 2625LL;
    goto LABEL_13;
  }
  Value = v172.Value;
  v45 = 1LL;
  if ( (v172.Value & 0x40000) != 0 )
  {
    if ( (*(_BYTE *)&v172.0 & 1) == 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(1LL, v41, v43);
      *(_QWORD *)(v33 + 24) = 2640LL;
      goto LABEL_13;
    }
    if ( (*(_BYTE *)&v172.0 & 2) != 0 || (*(_BYTE *)&v172.0 & 0x20) != 0 || (*(_BYTE *)&v172.0 & 0x10) != 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(1LL, v41, v43);
      *(_QWORD *)(v33 + 24) = 2652LL;
      goto LABEL_13;
    }
  }
  v46 = v175;
  v182 = a5 & -(__int64)((v175 & 4) != 0);
  if ( a8 )
  {
    if ( !VIDMM_GLOBAL::VerifySegmentSet(v24, v29, a8, 1u, 0LL) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v48, v47, v49);
      *(_QWORD *)(v33 + 24) = 2684LL;
      goto LABEL_13;
    }
    if ( VIDMM_GLOBAL::VerifySegmentSetAny(v24, v29, a8, 0x20u) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v45, v41, v43);
      *(_QWORD *)(v33 + 24) = 2699LL;
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
      *(_QWORD *)(v33 + 24) = 2717LL;
      goto LABEL_13;
    }
    if ( (Value & 0x20000000) != 0 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v45, v41, v43);
      *(_QWORD *)(v33 + 24) = 2730LL;
      goto LABEL_13;
    }
  }
  v189 = (Value >> 2) & 1;
  if ( v189 && (Value & 0x800000) == 0 )
  {
    if ( *((_BYTE *)v24 + 7081) )
    {
      if ( !VIDMM_GLOBAL::VerifySegmentSet(v24, v176[0], a8, 0x10u, 0LL) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v45, v41, v43);
        *(_QWORD *)(v33 + 24) = 2763LL;
        goto LABEL_13;
      }
      v50 = 1;
    }
    else
    {
      v45 = *(unsigned int *)(*((_QWORD *)v24 + 3) + 348LL);
      if ( (v45 & 8) == 0 && !VIDMM_GLOBAL::VerifySegmentSet(v24, v176[0], a8, 1u, 0LL) )
      {
        v33 = WdLogNewEntry5_WdAssertion(v45, v41, v43);
        *(_QWORD *)(v33 + 24) = 2770LL;
        goto LABEL_13;
      }
    }
  }
  v193 = *(_DWORD *)&v50 & (Value >> 29);
  if ( v193 && (v51 || (Value & 8) != 0 || (Value & 0x20) != 0 || (Value & 0x40000000) != 0) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v45, v41, v43);
    *(_QWORD *)(v33 + 24) = 2790LL;
    goto LABEL_13;
  }
  IsEnabledDeviceUsage = Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage();
  v56 = PagedPool;
  if ( IsEnabledDeviceUsage && (a11 & 1) != 0 )
  {
    if ( (v46 & 1) == 0 || (v57 = v193) == 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v54, v53, v55);
      *(_QWORD *)(v33 + 24) = 2799LL;
      goto LABEL_13;
    }
  }
  else
  {
    v57 = v193;
  }
  if ( (Value & 0x100000) != 0 && (!v57 || !a19 || (v46 & 1) == 0) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v54, v53, v55);
    *(_QWORD *)(v33 + 24) = 2811LL;
    goto LABEL_13;
  }
  if ( a17 && (v51 || (Value & 0x100) != 0 || (Value & 0x200) != 0 || (Value & 0x40000000) != 0) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v54, a17, v55);
    *(_QWORD *)(v33 + 24) = 2831LL;
    goto LABEL_13;
  }
  v58 = (Value >> 26) & 1;
  if ( ((Value >> 26) & 1) != 0 )
  {
    if ( (Value & 8) == 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v58, a17, v55);
      *(_QWORD *)(v33 + 24) = 2847LL;
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
    *(_QWORD *)(v33 + 24) = 2880LL;
    goto LABEL_13;
  }
LABEL_121:
  v59 = (Value >> 4) & 1;
  if ( ((Value >> 4) & 1) != 0 && (v51 || (Value & 0x20) != 0 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v59, a17, 0x80000000LL);
    *(_QWORD *)(v33 + 24) = 2902LL;
    goto LABEL_13;
  }
  v60 = (Value >> 5) & 1;
  if ( ((Value >> 5) & 1) != 0 && (v51 || v57 || (_DWORD)v59 || (Value & 0x80000000) != 0 || (Value & 0x40000000) != 0) )
  {
    v33 = WdLogNewEntry5_WdAssertion(v59, v60, 0x80000000LL);
    *(_QWORD *)(v33 + 24) = 2926LL;
    goto LABEL_13;
  }
  v61 = Value >> 31;
  if ( (Value & 0x80000000) == 0 )
  {
    if ( (Value & 0x40000000) != 0 )
    {
      if ( v51
        || v189 && (v63 = *(_DWORD *)(*((_QWORD *)v24 + 3) + 348LL), (v63 & 0x10) == 0) && (v63 & 8) == 0
        || (_DWORD)v59
        || (_DWORD)v60 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
        *(_QWORD *)(v33 + 24) = 2974LL;
        goto LABEL_13;
      }
      v56 = PagedPool;
      if ( (*(_DWORD *)(*((_QWORD *)v24 + 3) + 2060LL) & 0x200) == 0 )
        Value |= 1u;
      v64 = (unsigned __int8)v174;
      if ( (Value & 1) != 0 )
        v64 = 1;
      Value |= 0x20000000u;
      v172.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
      v174 = v64;
    }
  }
  else
  {
    if ( v51 )
      goto LABEL_143;
    if ( v189 )
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
      *(_QWORD *)(v33 + 24) = 2950LL;
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
      *(_QWORD *)(v33 + 24) = 3016LL;
      goto LABEL_13;
    }
    if ( !VIDMM_GLOBAL::VerifySegmentSet(v24, v176[0], a8, 1u, 0LL) )
    {
      v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
      *(_QWORD *)(v33 + 24) = 3026LL;
      goto LABEL_13;
    }
  }
  if ( (Value & 0x400000) != 0 )
  {
    if ( (Value & 0x20000000) == 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
      *(_QWORD *)(v33 + 24) = 3042LL;
      goto LABEL_13;
    }
    if ( !a13 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
      *(_QWORD *)(v33 + 24) = 3052LL;
      goto LABEL_13;
    }
  }
  if ( (Value & 0x4000) != 0 )
  {
    if ( ((unsigned __int8)Value & (unsigned __int8)v56) == 0 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v59, v60, v61);
      *(_QWORD *)(v33 + 24) = 3064LL;
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
        v172.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
      }
    }
  }
  v70 = Current;
  LOBYTE(v61) = 0;
  LOBYTE(v60) = 0;
  v190 = 0;
  v69 = 0;
  v169 = 0;
  v170 = 0;
  LOBYTE(v70) = *(_BYTE *)(Current + 347);
  v168 = 0;
  v194 = 0;
  if ( (v70 & 0x20) == 0 || a17 )
  {
    v72 = 825256278;
    v73 = 520LL;
  }
  else
  {
    v169 = v56;
    if ( (Value & 0x10) != 0 )
    {
      LOBYTE(v61) = v56;
      v170 = v56;
    }
    else if ( ((unsigned __int8)Value & (unsigned __int8)v56) != 0 )
    {
      v69 = v56 & ((unsigned __int8)v70 >> 6);
      v194 = v69;
      if ( (Value & 0x8000) != 0 )
      {
        if ( !v69 )
        {
          v33 = WdLogNewEntry5_WdAssertion(v70, v60, v61);
          *(_QWORD *)(v33 + 24) = 3123LL;
          goto LABEL_13;
        }
      }
      else
      {
        v194 = v56 & ((unsigned __int8)v70 >> 6);
      }
      LOBYTE(v60) = v56 ^ v69;
      v168 = v56 ^ v69;
      v190 = v56 ^ v69;
      if ( (Value & 0x20000000) != 0 )
      {
        v190 = v56;
        v168 = v56 ^ v69;
        v194 = v56 & ((unsigned __int8)v70 >> 6);
      }
    }
    v71 = v60 | v69;
    v72 = 1630562646;
    if ( (unsigned __int8)v61 | v71 )
      v73 = 560LL;
    else
      v73 = 528LL;
  }
  v74 = operator new(v73, v72, v61, v56);
  v75 = (_D3DDDI_SEGMENTPREFERENCE *)v74;
  if ( v74 )
  {
    v74[43] = 0LL;
    v74[44] = 0LL;
    *((_DWORD *)v74 + 90) = 0;
    *((_DWORD *)v74 + 91) = 53;
    v74[61] = 0LL;
    v76 = v74 + 23;
    *v76 = v76;
    v76[1] = v76;
  }
  else
  {
    v75 = 0LL;
  }
  if ( !v75 )
  {
    _InterlockedIncrement(&dword_1C0050684);
    v77 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v77 + 24) = 3170LL;
    WdLogEvent5_WdLowResource(v77);
    return 3221225495LL;
  }
  v75[19].Value ^= (v75[19].Value ^ v176[0]) & 0x3F;
  v78 = operator new[](0x28uLL, 0x38326956u, (POOL_TYPE)512);
  if ( v78 )
  {
    *v78 = 0LL;
    v78[1] = 0LL;
    v78[2] = 0LL;
    *((_DWORD *)v78 + 6) = 0;
    *((_DWORD *)v78 + 7) = 13;
    *((_DWORD *)v78 + 8) = 53;
  }
  else
  {
    v78 = 0LL;
  }
  *(_QWORD *)&v75[78].0 = v78;
  if ( !v78 )
  {
    _InterlockedIncrement(&dword_1C0050734);
    v79 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v79 + 24) = 3184LL;
LABEL_216:
    WdLogEvent5_WdLowResource(v79);
    SyncObject = -1073741801;
LABEL_324:
    v117 = v187;
LABEL_325:
    if ( (v75[21].Value & 0x40) != 0 )
      VIDMM_GLOBAL::UncommitGlobalBackingStore(v117, (struct _VIDMM_GLOBAL_ALLOC *)v75, 1);
    v154 = *(_QWORD *)&v75[128].0;
    if ( v154 )
    {
      if ( *(_QWORD *)(v154 + 24) )
      {
        v155 = *(_QWORD *)&v75[128].0;
        for ( i = 0LL; i < 16; i += 8LL )
        {
          v157 = *(_QWORD *)(v154 + 24);
          if ( *(_QWORD *)(i + v157) )
          {
            VidSchDestroySyncObject(*(PVOID *)(i + v157));
            v154 = *(_QWORD *)&v75[128].0;
            v155 = v154;
          }
        }
        operator delete(*(void **)(v155 + 24));
        v154 = *(_QWORD *)&v75[128].0;
      }
      if ( *(_QWORD *)(v154 + 16) )
      {
        VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(*(int **)(v154 + 16), v80);
        v154 = *(_QWORD *)&v75[128].0;
      }
      operator delete((void *)v154);
    }
    v158 = *(KSPIN_LOCK **)&v75[126].0;
    if ( v158 )
    {
      VIDMM_GLOBAL::FreeCrossAdapterDataDpc((VIDMM_GLOBAL *)v154, v158, (struct _VIDMM_GLOBAL_ALLOC *)v75);
      v160 = (VIDMM_GLOBAL *)(unsigned int)_InterlockedDecrement(*(volatile signed __int32 **)&v75[126].0);
      if ( (_DWORD)v160 )
      {
        if ( (int)v160 < 0 )
        {
          v161 = *(int **)&v75[126].0;
          v162 = *v161;
          v163 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v160, v159);
          v163[7] = 0LL;
          v163[3] = 270LL;
          v163[4] = 66LL;
          v163[5] = v161;
          v163[6] = v162;
          WdLogEvent5_WdCriticalError(v163);
        }
      }
      else
      {
        VIDMM_GLOBAL::DestroyCrossAdapterAllocation(v160, *(struct _VIDMM_CROSSADAPTER_ALLOC **)&v75[126].0);
        *(_QWORD *)a19 = 0LL;
      }
    }
    v164 = *(DXGFASTMUTEX **)&v75[78].0;
    if ( v164 )
      DXGFASTMUTEX::`scalar deleting destructor'(v164);
    _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v75);
    return (unsigned int)SyncObject;
  }
  v82 = operator new[](0x28uLL, 0x32346956u, (POOL_TYPE)512);
  *(_QWORD *)&v75[128].0 = v82;
  if ( !v82 )
  {
    _InterlockedIncrement(&dword_1C0050790);
    v79 = WdLogNewEntry5_WdLowResource(v83);
    *(_QWORD *)(v79 + 24) = 3197LL;
    goto LABEL_216;
  }
  *v82 = 0LL;
  v82[1] = 0LL;
  *((_QWORD *)v82 + 4) = 0LL;
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v24 + 2) + 624LL) + 57LL) )
  {
    if ( (Value & 0x40000000) != 0 || (Value & 0x80000000) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)&v75[128].0 + 24LL) = operator new[](0xA8uLL, 0x33306956u, (POOL_TYPE)512);
      v84 = *(void **)(*(_QWORD *)&v75[128].0 + 24LL);
      if ( v84 )
      {
        memset(v84, 0, 0xA8uLL);
        v173 = 0;
        Current = 16LL;
        LODWORD(v183) = 1000 * (v176[0] + 1);
        while ( 1 )
        {
          memset(v186, 0, sizeof(v186));
          v85 = *(_QWORD *)&v75[128].0;
          v86 = (int)v173;
          v186[1] |= 0x80u;
          v87 = *(_QWORD *)(v85 + 24);
          v186[0] = 5;
          v88 = v173 * (unsigned int)v183 + 100LL;
          *(_QWORD *)(Current + v87) = v88;
          v89 = *((_QWORD *)v24 + 2);
          *(_QWORD *)&v186[2] = v88;
          v90 = *(_QWORD *)(v89 + 624);
          v91 = *(_QWORD *)&v75[128].0;
          v185 = (((_DWORD)v86 != 1) + 7) & 0x7FFFFFFF;
          SyncObject = VidSchCreateSyncObject(
                         v90,
                         0,
                         (int)v186,
                         v185,
                         0LL,
                         0LL,
                         (PVOID)(*(_QWORD *)(v91 + 24) + 8 * v86),
                         0LL);
          if ( SyncObject < 0 )
            goto LABEL_324;
          Current += 8LL;
          v24 = v187;
          if ( (int)++v173 >= 2 )
            goto LABEL_231;
        }
      }
      _InterlockedIncrement(&dword_1C005067C);
      v79 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v79 + 24) = 3214LL;
      goto LABEL_216;
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)&v75[128].0 + 16LL) = operator new[](0xCuLL, 0x33306956u, (POOL_TYPE)512);
    v92 = *(_QWORD *)(*(_QWORD *)&v75[128].0 + 16LL);
    if ( !v92 )
    {
      _InterlockedIncrement(&dword_1C005067C);
      v79 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v79 + 24) = 3268LL;
      goto LABEL_216;
    }
    *(_QWORD *)v92 = 0LL;
    *(_DWORD *)(v92 + 8) = 0;
    _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)&v75[128].0 + 16LL));
    Value = v172.Value;
    v46 = v175;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v75[128].0 + 16LL) + 4LL) = -((v172.Value & 0x100000) == 0);
  }
LABEL_231:
  v93 = a12;
  if ( a12 )
  {
    v94 = *((_DWORD *)a12 + 1);
    if ( (v94 & 0x8000) != 0 )
    {
      v75[19].Value |= 0x800u;
      v94 = *((_DWORD *)a12 + 1);
    }
    if ( (v94 & 0x10000) != 0 )
    {
      v75[20].Value |= 0x400u;
      v75[19].Value |= 0x400000u;
    }
  }
  v95 = a19;
  if ( a19 )
    v95 = *(volatile signed __int32 **)a19;
  *(_QWORD *)&v75[126].0 = v95;
  if ( v95 )
  {
    _InterlockedAdd(v95, 1u);
    SyncObject = VIDMM_GLOBAL::AllocateCrossAdapterDataDpc(
                   v24,
                   *(struct _VIDMM_CROSSADAPTER_ALLOC **)&v75[126].0,
                   (struct _VIDMM_GLOBAL_ALLOC *)v75);
    if ( SyncObject < 0 )
      goto LABEL_324;
    Value = v172.Value;
    v46 = v175;
    v93 = a12;
  }
  v96 = v181;
  *(_QWORD *)&v75->0 = a4;
  v97 = (*((_DWORD *)v96 + 18) & 1) != 0 ? 0xFFFF : 4095;
  v98 = (unsigned int)v97;
  v99 = ~v97 & (v97 + a4);
  Current = v99;
  if ( a4 > v99 )
  {
    v100 = (_QWORD *)WdLogNewEntry5_WdAssertion(v97, (unsigned int)v97, a4);
    v101 = a4;
LABEL_243:
    v100[3] = v101;
LABEL_323:
    WdLogEvent5_WdAssertion(v100);
    SyncObject = -1073741811;
    goto LABEL_324;
  }
  v102 = ~v97 & (v182 + v97);
  v183 = v102;
  if ( v182 > v102 )
  {
    v100 = (_QWORD *)WdLogNewEntry5_WdAssertion(v102, v98, a4);
    v101 = v182;
    goto LABEL_243;
  }
  if ( v99 > 0xFFFF0000 && (v75[20].Value & 0x400) == 0 )
  {
    v100 = (_QWORD *)WdLogNewEntry5_WdAssertion(v102, v98, a4);
    v100[3] = 3359LL;
    goto LABEL_323;
  }
  v103 = v98 + a6;
  v104 = (unsigned int)~(_DWORD)v98;
  v105 = (unsigned int)v104 & v103;
  v173 = v105;
  if ( a6 > (unsigned int)v105 )
  {
    v100 = (_QWORD *)WdLogNewEntry5_WdAssertion(v102, v104, v105);
    v101 = a6;
    goto LABEL_243;
  }
  if ( v105 + v99 < v99 || v105 + v102 < v102 )
  {
    v100 = (_QWORD *)WdLogNewEntry5_WdAssertion(v102, v104, v105);
    v152 = v183;
    v153 = v173;
    v100[3] = v99;
    v100[4] = v152;
    v100[5] = v99;
    v100[6] = v153;
    goto LABEL_323;
  }
  if ( (Value & 0x10000000) != 0 )
  {
    Value |= 8u;
    v172.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)Value;
  }
  *(_QWORD *)&v75[92].0 = a13;
  if ( (Value & 0x20000000) == 0 || (Value & 0x10) != 0 )
    v179 = 0;
  v106 = v75[20].Value;
  v75[38].Value = 0;
  v75[20].Value = v179 | v106 & 0xFFFBFFFF;
  v107 = *(unsigned int **)&v75[128].0;
  *(_QWORD *)&v75[6].0 = v102;
  *(_QWORD *)&v75[4].0 = v99;
  *(_QWORD *)&v75[2].0 = v99;
  v75[8].Value = v105;
  *v107 = Value;
  v75[30].Value = 0;
  v75[76].Value = 0;
  v75[16].Value = a8;
  v75[17].Value = a7;
  v108 = (v75[19].Value ^ (v46 << 7)) & 0x80;
  v75[18].0 = a9.0;
  v109 = v75[19].Value ^ v108;
  *(_QWORD *)&v75[10].0 = v93;
  LODWORD(v107) = v109 ^ ((unsigned __int8)v109 ^ (unsigned __int8)(32 * v46)) & 0x40;
  v110 = (unsigned __int8)v174;
  v75[19].Value = (unsigned int)v107;
  v75[20].Value = v75[20].Value & 0xFFFE0F7F | (v110 << 7) & 0xFFFE0FFF | (v190 << 16) | (v169 << 12) & 0xFFFF1FFF | (v170 << 15) | (v168 << 13) & 0xFFFFBFFF | (v194 << 14);
  if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
  {
    v111 = v75[20].Value ^ (v75[20].Value ^ (a11 << 21)) & 0x200000;
    v75[20].Value = v111;
    if ( a12 && (*((_DWORD *)a12 + 1) & 0x200000) != 0 )
      v112 = 0x400000;
    else
      v112 = 0;
    v75[20].Value = v112 | v111 & 0xFFBFFFFF;
  }
  if ( v169 )
  {
    v113 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 32LL);
    v114 = *(_BYTE *)(v113 + 347);
    if ( (v114 & 0x20) != 0 )
      v115 = *(_QWORD *)(v113 + 496);
    else
      v115 = v113 & -(__int64)((v114 & 0x10) != 0);
    v116 = *(_QWORD *)(v115 + 64);
    if ( v116 )
      v116 = *(_QWORD *)(v116 + 8);
    *(_QWORD *)&v75[130].0 = v116;
  }
  v117 = v187;
  v118 = 0;
  v119 = 1;
  if ( (Value & 1) != 0 )
  {
    if ( ((*(_DWORD *)(*((_QWORD *)v187 + 3) + 348LL) & 8) != 0
       || VIDMM_GLOBAL::CheckForCpuVisibleMemorySegment(v187, v176[0], a7))
      && !a18 )
    {
      v118 = v119;
    }
    else
    {
      v118 = 0;
    }
  }
  v120 = v75[20].Value & 0xFFF7FFFF | (v118 << 19);
  v121 = v75[19].Value & 0x3F;
  v75[20].Value = v120;
  v122 = *(_DWORD **)(1584 * v121 + *((_QWORD *)v187 + 5027) + 440);
  if ( ((unsigned __int8)*((_DWORD *)v181 + 18) & (unsigned __int8)v119) != 0 )
  {
    v123 = v120 | 0x100;
  }
  else
  {
    if ( dword_1C00504B4
      && (**(_DWORD **)(*((_QWORD *)v187 + 3) + 2600LL) & 0x4000) == 0
      && (v46 & 2) != 0
      && v122
      && ((*v122 & 0x200) != 0 || dword_1C00504B4 == 2)
      && ((v124 = *(_QWORD *)&v75[2].0, !(_WORD)v124) || v124 > (unsigned int)dword_1C00504B8)
      && !v118 )
    {
      v125 = 256;
    }
    else
    {
      v125 = 0;
    }
    v123 = v125 | v120 & 0xFFFFFEFF;
  }
  v75[20].Value = v123;
  SyncObject = VIDMM_GLOBAL::CommitGlobalBackingStore(v187, (struct _VIDMM_GLOBAL_ALLOC *)v75);
  if ( SyncObject < 0 )
    goto LABEL_325;
  if ( (Value & 0x4000) != 0 )
    v75[20].Value |= 0x20u;
  if ( (*(_BYTE *)(v184 + 436) & 3) != 0 )
  {
    v126 = 1 << (*(_WORD *)(v184 + 28) - *(_BYTE *)(v184 + 20));
    v75[16].Value |= v126;
    if ( (v46 & 2) != 0 && (Value & 0x8000) == 0 )
      v75[17].Value |= v126;
  }
  v127 = v176[0];
  v128 = v187;
  v129 = v176[0];
  *(_QWORD *)&v75[12].0 = a14;
  *(_QWORD *)&v75[28].0 = a17;
  v130 = v75[19].Value & 0xF7FFFFFF | (a17 != 0 ? 0x8000000 : 0);
  v75[19].Value = v130 ^ (v130 ^ (a16 << 28)) & 0x10000000;
  v75[96].Value = a15;
  *(_QWORD *)&v75[74].0 = v75 + 72;
  *(_QWORD *)&v75[72].0 = v75 + 72;
  v75[120].Value = -1;
  v75[121].Value = -1;
  v131 = v75[19].Value;
  v171 = (v131 & 0x80) != 0;
  MostPreferredSegment = VIDMM_GLOBAL::GetMostPreferredSegment(v187, v129, a9, &v171);
  v75[19].Value = v131 ^ ((unsigned __int16)v131 ^ (v171 << 10)) & 0x400;
  if ( !VIDMM_GLOBAL::VerifyBudgetGroups(
          v187,
          v127,
          a7,
          MostPreferredSegment,
          (struct _VIDMM_VERIFY_BUDGET_GROUPS *)&v180) )
    return 3221225485LL;
  v133 = v75[19].Value ^ (v75[19].Value ^ (v180 << 12)) & 0xF0000 ^ (*(_WORD *)&v75[19].0 ^ (unsigned __int16)((_WORD)v180 << 12)) & 0xF000;
  if ( (Value & 0x10) != 0 || (Value & 0x20) != 0 )
    *((_BYTE *)&v75[22].0 + 1) = 1;
  v75[19].Value = v133 ^ (v133 ^ (a18 << 8)) & 0x100;
  v134 = VIDMM_GLOBAL::AdapterId(v187);
  v135 = v181;
  *(_QWORD *)&v75[124].0 = *((_QWORD *)v181 + 5) + 376LL * v134;
  VidMmiReferencePartition(v135);
  v136 = **(_DWORD **)&v75[128].0;
  if ( (v136 & 0x2003A) != 0
    || (v137 = v75[20].Value, (v137 & 0x2000) != 0)
    || (v75[19].Value & 0x100) != 0
    || (v137 & 0x400) != 0
    || (v136 & 0x40000000) != 0 )
  {
    v137 = v75[20].Value;
    v138 = 0;
  }
  else
  {
    v138 = 0x20000;
  }
  v139 = v138 | v137 & 0xFFFDFFFF;
  v140 = bTracingEnabled == 0;
  v75[20].Value = v139;
  if ( v140 )
    goto LABEL_318;
  v141 = *(_QWORD *)&v75[10].0;
  v142 = v141 ? *(unsigned int **)(v141 + 24) : 0LL;
  v143 = *(_WORD *)&v75[19].0 & 0x3F;
  v181 = *(struct VIDMM_PARTITION **)(a2 + 24);
  v182 = *((_QWORD *)v187 + 3);
  v184 = *(_QWORD *)&v75[92].0;
  *(_QWORD *)v176 = PsGetCurrentProcessId();
  LOBYTE(v187) = 0;
  v139 = 0LL;
  LOBYTE(v191) = 0;
  LOBYTE(v144) = 0;
  v195 = 0;
  v145 = 0LL;
  LOBYTE(v146) = 0;
  LOBYTE(v147) = 0;
  LOBYTE(v148) = 0;
  if ( v142 )
  {
    v139 = *v142;
    v144 = v142[1];
    v145 = v142[2];
    v146 = v142[3];
    v147 = v142[4];
    v148 = v142[5];
    LODWORD(v187) = v142[6];
    v191 = v142[7];
    v149 = v142[8];
    v150 = v142[9];
    v195 = v149;
  }
  else
  {
    LOBYTE(v150) = 0;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) == 0 )
  {
LABEL_318:
    v151 = Current;
  }
  else
  {
    v167 = v150;
    v151 = Current;
    McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
      v139,
      &EventCreateAdapterAllocation,
      v145,
      *(__int64 *)v176,
      (char)v181,
      v182,
      v20,
      Current,
      v173,
      v165,
      a7,
      *(_BYTE *)&a9.0,
      v166,
      a8,
      a15,
      (char)v75,
      v141,
      0,
      v139,
      v144,
      v145,
      v146,
      v147,
      v148,
      (char)v187,
      v191,
      v195,
      v167,
      0,
      v184,
      v143,
      a18);
  }
  ++*((_DWORD *)v128 + 1910);
  *((_QWORD *)v128 + 956) += v151;
  *((_QWORD *)v128 + 5023) += v151;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v139) + 24) = v75;
  *a20 = v75;
  return 0LL;
}
