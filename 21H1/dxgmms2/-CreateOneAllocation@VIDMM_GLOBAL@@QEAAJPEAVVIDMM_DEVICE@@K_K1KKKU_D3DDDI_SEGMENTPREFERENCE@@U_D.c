/*
 * XREFs of ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006BDB0
 * Callers:
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C005FB34 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 *     ?CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@KPEAVDXGADAPTERALLOCATION@@PEAXPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0069344 (-CreateAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXG.c)
 *     ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAU_VIDMM_CONTEXT_ALLOC@@@Z @ 0x1C0089BB8 (-CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@.c)
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C008AE4C (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001990 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0001A10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001A34 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0001A68 (-VidMmiReferencePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0001AA4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C0016604 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0023048 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C00231D4 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0023374 (-AllocateCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL.c)
 *     ?FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0023780 (-FreeCrossAdapterDataDpc@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAU_VIDMM_GLOBAL_ALL.c)
 *     ?ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z @ 0x1C0023B48 (-ReleaseReference@VIDMM_FLIP_QUEUE_REFERENCES@@QEAAXI@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C0064418 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006E0D4 (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C006E470 (-VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM.c)
 *     VidSchDestroySyncObject @ 0x1C0081DF0 (VidSchDestroySyncObject.c)
 *     VidSchCreateSyncObject @ 0x1C0082000 (VidSchCreateSyncObject.c)
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C0086D08 (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 *     ?VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z @ 0x1C0086F30 (-VerifySegmentSetAny@VIDMM_GLOBAL@@IEAAEKKK@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00883AC (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z @ 0x1C00B00B0 (-DestroyCrossAdapterAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_CROSSADAPTER_ALLOC@@@Z.c)
 *     ?VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C00B73A0 (-VerifySegmentSetAtLeastOneInMask@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        int a7,
        unsigned int a8,
        struct _D3DDDI_SEGMENTPREFERENCE a9,
        struct _DXGK_ALLOCATIONINFOFLAGS a10,
        struct DXGADAPTERALLOCATION *a11,
        void *a12,
        void *a13,
        unsigned int a14,
        unsigned __int8 a15,
        void *a16,
        char a17,
        struct _VIDMM_CROSSADAPTER_ALLOC **a18,
        struct _D3DDDI_SEGMENTPREFERENCE **a19)
{
  char v19; // r14
  UINT Value; // ebx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // r8
  struct DXGADAPTERALLOCATION *v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned int v30; // r15d
  _QWORD *v31; // rax
  bool v32; // cf
  __int64 v33; // rax
  __int64 CurrentProcess; // rax
  __int64 v36; // r8
  int v37; // eax
  unsigned int v38; // edi
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  char v42; // cl
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  unsigned int v49; // ebx
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // edi
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  unsigned int v55; // r15d
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  int v62; // r15d
  __int64 v63; // rax
  __int64 v64; // rax
  int v65; // r9d
  unsigned int v66; // r11d
  __int64 v67; // rdx
  int v68; // r10d
  unsigned int v69; // r9d
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // r8
  __int64 v82; // rax
  __int64 v83; // rdx
  int v84; // r9d
  __int64 v85; // rax
  int v86; // r9d
  int v87; // eax
  __int64 v88; // rcx
  unsigned int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  bool v98; // al
  __int64 v99; // rcx
  __int64 v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rcx
  struct _D3DDDI_SEGMENTPREFERENCE *v103; // r12
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  _QWORD *v106; // rax
  unsigned int v107; // r15d
  _DWORD *v108; // rax
  __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rdx
  int SyncObject; // r15d
  _OWORD *v113; // rax
  __int64 v114; // rcx
  __int64 v115; // r8
  void *v116; // rcx
  int v117; // ecx
  __int64 v118; // r9
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rcx
  int v123; // edx
  struct DXGADAPTERALLOCATION *v124; // r9
  int v125; // eax
  volatile signed __int32 *v126; // rax
  struct VIDMM_PARTITION *v127; // rax
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rax
  unsigned __int64 v131; // rdx
  _QWORD *v132; // rax
  unsigned __int64 v133; // r15
  int v134; // r8d
  __int64 v135; // rcx
  __int64 v136; // r8
  unsigned int *v137; // rax
  int v138; // ecx
  int v139; // r10d
  unsigned int v140; // r9d
  __int64 v141; // rcx
  char v142; // al
  __int64 v143; // rax
  __int64 v144; // rax
  __int64 v145; // rax
  unsigned __int8 v146; // r8
  unsigned int v147; // edx
  __int64 v148; // rcx
  unsigned int v149; // r8d
  int v150; // eax
  unsigned int v151; // edx
  _DWORD *v152; // r10
  unsigned int v153; // edx
  unsigned __int64 v154; // rcx
  int v155; // eax
  int v156; // r15d
  int v157; // edx
  __int64 v158; // rdi
  unsigned int v159; // ecx
  unsigned __int8 v160; // r8
  unsigned int v161; // edx
  __int64 v162; // rax
  int v163; // r11d
  __int64 v164; // rax
  unsigned int v165; // r9d
  unsigned int v166; // r8d
  unsigned __int8 v167; // r8
  unsigned int v168; // edx
  unsigned __int8 v169; // dl
  int v170; // eax
  bool v171; // zf
  int v172; // edi
  __int64 v173; // rdx
  int v174; // edx
  unsigned int v175; // eax
  struct VIDMM_PARTITION *v176; // rcx
  int v177; // edx
  UINT v178; // ecx
  int v179; // eax
  int v180; // r10d
  __int64 v181; // rcx
  __int64 v182; // r8
  unsigned int v183; // r9d
  __int64 v184; // rax
  __int64 v185; // rcx
  __int64 v186; // rdi
  unsigned int *v187; // rbx
  __int16 v188; // r15
  unsigned int v189; // edx
  __int64 v190; // r8
  unsigned int v191; // r9d
  unsigned int v192; // r10d
  unsigned int v193; // r11d
  unsigned int v194; // eax
  unsigned int v195; // ebx
  unsigned __int64 v196; // rbx
  unsigned __int64 v197; // rbx
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  __int64 i; // rbx
  __int64 v202; // rax
  KSPIN_LOCK *v203; // rdx
  __int64 v204; // rdx
  VIDMM_GLOBAL *v205; // rcx
  int *v206; // rbx
  __int64 v207; // rdi
  _QWORD *v208; // rax
  DXGFASTMUTEX *v209; // rcx
  __int64 v210; // rax
  int v211; // [rsp+48h] [rbp-138h]
  int v212; // [rsp+60h] [rbp-120h]
  char v213; // [rsp+D8h] [rbp-A8h]
  unsigned __int8 v214; // [rsp+100h] [rbp-80h]
  unsigned __int8 v215; // [rsp+101h] [rbp-7Fh]
  _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 v216; // [rsp+104h] [rbp-7Ch] BYREF
  unsigned int v217[2]; // [rsp+108h] [rbp-78h]
  int v218; // [rsp+110h] [rbp-70h]
  unsigned int v219; // [rsp+114h] [rbp-6Ch]
  int v220; // [rsp+118h] [rbp-68h] BYREF
  unsigned __int64 v221; // [rsp+120h] [rbp-60h]
  __int64 Current; // [rsp+128h] [rbp-58h]
  unsigned int v223; // [rsp+130h] [rbp-50h] BYREF
  int v224; // [rsp+134h] [rbp-4Ch]
  struct VIDMM_PARTITION *CurrentProcessId; // [rsp+138h] [rbp-48h]
  __int64 v226; // [rsp+140h] [rbp-40h]
  unsigned __int64 v227; // [rsp+148h] [rbp-38h]
  int v228; // [rsp+150h] [rbp-30h]
  int v229[2]; // [rsp+160h] [rbp-20h] BYREF
  __int64 v230; // [rsp+168h] [rbp-18h]
  __int128 v231; // [rsp+170h] [rbp-10h]
  __int128 v232; // [rsp+180h] [rbp+0h]
  __int128 v233; // [rsp+190h] [rbp+10h]
  __int128 v234; // [rsp+1A0h] [rbp+20h]
  bool v235; // [rsp+200h] [rbp+80h]
  __int64 v236; // [rsp+200h] [rbp+80h]
  unsigned __int8 v238; // [rsp+210h] [rbp+90h]
  unsigned int v239; // [rsp+210h] [rbp+90h]
  struct _DXGK_ALLOCATIONINFOFLAGS v241; // [rsp+248h] [rbp+C8h]
  bool v242; // [rsp+248h] [rbp+C8h]
  char v243; // [rsp+248h] [rbp+C8h]

  v19 = (char)a10.0;
  Value = a10.Value;
  v216.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)a10.0;
  v24 = a10.Value;
  Current = (__int64)DXGPROCESS::GetCurrent();
  v27 = (struct DXGADAPTERALLOCATION *)*(unsigned __int8 *)(Current + 347);
  if ( ((unsigned __int8)v27 & 0x20) != 0 && ((unsigned __int8)v27 & 0x40) == 0 && !a16 && (*(_BYTE *)&a10.0 & 1) != 0 )
  {
    Value = a10.Value & 0xFFFF7FFF;
    v216.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(a10.Value & 0xFFFF7FFF);
    v24 = a10.Value & 0xFFFF7FFF;
  }
  CurrentProcessId = *(struct VIDMM_PARTITION **)(*((_QWORD *)a2 + 1) + 288LL);
  v28 = 0LL;
  if ( *((_DWORD *)this + 1750) != 1 )
    v28 = a3;
  *(_QWORD *)v217 = v28;
  v226 = *((_QWORD *)this + 5027) + 1584 * v28;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v27) + 24) = a2;
    v29 = (_QWORD *)WdLogNewEntry5_WdTrace(a2);
    v29[3] = a4;
    v30 = a7;
    v29[4] = a6;
    v29[6] = (unsigned int)a7;
    v29[7] = a8;
    v29[5] = 0LL;
    v31 = (_QWORD *)WdLogNewEntry5_WdTrace(a8);
    v31[4] = (unsigned int)v24;
    v27 = a11;
    v31[5] = a11;
    v31[3] = a9.Value;
  }
  else
  {
    v30 = a7;
  }
  *a19 = 0LL;
  v32 = *((_DWORD *)this + 8) < 0x5023u;
  v224 = 0x40000;
  if ( v32 && (v24 & 0x40000) != 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v27, v25, v26);
    *(_QWORD *)(v33 + 24) = 2464LL;
    WdLogEvent5_WdAssertion(v33);
    return 3221225485LL;
  }
  if ( (v24 & 0x20000) != 0 )
  {
    if ( (v24 & 2) != 0
      || (v24 & 4) != 0
      && (v27 = (struct DXGADAPTERALLOCATION *)*(unsigned int *)(*((_QWORD *)this + 3) + 348LL),
          ((unsigned __int8)v27 & 8) == 0)
      || (v24 & 0x100000) != 0
      || (v24 & 0x80000) != 0
      || (v24 & 8) != 0
      || (v24 & 0x10) != 0
      || (v24 & 0x20) != 0 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v27, 0x20000LL, v26);
      *(_QWORD *)(v40 + 24) = 2483LL;
      WdLogEvent5_WdAssertion(v40);
      return 3221225485LL;
    }
    Value = v24 & 0xFFFBFFFE;
    v216.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(v24 & 0xFFFBFFFE);
    v24 &= 0xFFFBFFFE;
  }
  if ( (v24 & 1) == 0 || (LOBYTE(v218) = 1, (v24 & 0x40000) != 0) )
    LOBYTE(v218) = 0;
  if ( *((_BYTE *)this + 40168)
    || (CurrentProcess = PsGetCurrentProcess(v27), !PsGetProcessWow64Process(CurrentProcess)) )
  {
    if ( (v24 & 0x20000000) == 0
      && (v24 & 0x40000000) == 0
      && v24 >= 0
      && (v24 & 0x10000000) == 0
      && (v24 & 8) == 0
      && (v24 & 0x400000) == 0
      && (v24 & 0x20000) == 0
      && !a16 )
    {
      LOBYTE(v218) = 1;
      Value = v24 & 0xFFFBFFFF;
      v216.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)(v24 & 0xFFFBFFFF);
    }
  }
  v36 = 0LL;
  do
  {
    if ( ((a9.Value >> v36) & 0x1F) != 0 )
    {
      v37 = ~v30;
      if ( _bittest(&v37, (unsigned __int8)(((a9.Value >> v36) & 0x1F) - 1)) )
      {
        v41 = WdLogNewEntry5_WdAssertion(
                ((a9.Value >> v36) & 0x1F) - 1,
                (unsigned __int8)(((a9.Value >> v36) & 0x1F) - 1),
                v36);
        *(_QWORD *)(v41 + 24) = 2541LL;
        WdLogEvent5_WdAssertion(v41);
        return 3221225485LL;
      }
    }
    v36 = (unsigned int)(v36 + 6);
  }
  while ( (unsigned int)v36 < 0x1E );
  if ( !dword_1C00514B0 || (Value & 1) != 0 )
  {
    v38 = v217[0];
  }
  else
  {
    v38 = v217[0];
    if ( (*(_BYTE *)&a9.0 & 0x1F) != 0 )
    {
      v42 = (*(_BYTE *)&a9.0 & 0x1F) - 1;
      v39 = (unsigned int)(1 << v42);
      a7 = 1 << v42;
      goto LABEL_52;
    }
    v223 = 0;
    if ( !VIDMM_GLOBAL::VerifySegmentSetAtLeastOneInMask(this, v217[0], v30, 0x1001u, &v223) )
    {
      v39 = v223;
      a7 = v223;
      goto LABEL_52;
    }
  }
  v39 = (unsigned int)a7;
LABEL_52:
  if ( !a4 )
  {
    v43 = WdLogNewEntry5_WdAssertion(0LL, v39, v36);
    *(_QWORD *)(v43 + 24) = 2581LL;
    WdLogEvent5_WdAssertion(v43);
    return 3221225485LL;
  }
  if ( ((Value | (Value >> 1)) & 0x1000) != 0 )
  {
    v44 = WdLogNewEntry5_WdAssertion(a4, v39, v36);
    *(_QWORD *)(v44 + 24) = 2589LL;
    WdLogEvent5_WdAssertion(v44);
    return 3221225485LL;
  }
  v220 = 0;
  if ( !VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
          this,
          v38,
          v39,
          &v216,
          a4,
          a5,
          a16 != 0LL,
          (struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *)&v220) )
  {
    v48 = WdLogNewEntry5_WdAssertion(v46, v45, v47);
    *(_QWORD *)(v48 + 24) = 2600LL;
    WdLogEvent5_WdAssertion(v48);
    return 3221225485LL;
  }
  v49 = v216.Value;
  if ( (v216.Value & 0x40000) != 0 )
  {
    if ( (*(_BYTE *)&v216.0 & 1) == 0 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v46, v45, v47);
      *(_QWORD *)(v50 + 24) = 2615LL;
      WdLogEvent5_WdAssertion(v50);
      return 3221225485LL;
    }
    if ( (*(_BYTE *)&v216.0 & 2) != 0 || (*(_BYTE *)&v216.0 & 0x20) != 0 || (*(_BYTE *)&v216.0 & 0x10) != 0 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v46, v45, v47);
      *(_QWORD *)(v51 + 24) = 2627LL;
      WdLogEvent5_WdAssertion(v51);
      return 3221225485LL;
    }
  }
  v52 = v220;
  v53 = 0LL;
  v54 = a8;
  if ( (v220 & 4) != 0 )
    v53 = a5;
  v227 = v53;
  if ( a8 )
  {
    v55 = v217[0];
    if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v217[0], a8, 1u, 0LL) )
    {
      v59 = WdLogNewEntry5_WdAssertion(v57, v56, v58);
      *(_QWORD *)(v59 + 24) = 2659LL;
      WdLogEvent5_WdAssertion(v59);
      return 3221225485LL;
    }
    if ( VIDMM_GLOBAL::VerifySegmentSetAny(this, v55, a8, 0x20u) )
    {
      v61 = WdLogNewEntry5_WdAssertion(v46, v60, v47);
      *(_QWORD *)(v61 + 24) = 2674LL;
      WdLogEvent5_WdAssertion(v61);
      return 3221225485LL;
    }
    v54 = a8;
  }
  v62 = (v49 >> 1) & 1;
  if ( v62 )
  {
    if ( (v49 & 1) == 0 )
    {
      v63 = WdLogNewEntry5_WdAssertion(v46, v54, v47);
      *(_QWORD *)(v63 + 24) = 2692LL;
      WdLogEvent5_WdAssertion(v63);
      return 3221225485LL;
    }
    if ( (v49 & 0x20000000) != 0 || (v49 & 0x80000000) != 0 || (v49 & 0x40000000) != 0 )
    {
      v64 = WdLogNewEntry5_WdAssertion(v46, v54, v47);
      *(_QWORD *)(v64 + 24) = 2705LL;
      WdLogEvent5_WdAssertion(v64);
      return 3221225485LL;
    }
  }
  v65 = (v49 >> 2) & 1;
  v241.0 = (struct _DXGK_ALLOCATIONINFOFLAGS::$40A47C449A349A58A7C5834230A0E536::$A7A7060B19326E67B1E22F9FC616157D)v65;
  if ( !v65 || (v49 & 0x800000) != 0 )
  {
LABEL_97:
    v66 = v217[0];
    goto LABEL_98;
  }
  if ( !*((_BYTE *)this + 7081) )
  {
    v46 = *(unsigned int *)(*((_QWORD *)this + 3) + 348LL);
    if ( (v46 & 8) == 0 )
    {
      if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v217[0], v54, 1u, 0LL) )
      {
        v72 = WdLogNewEntry5_WdAssertion(v46, v71, v47);
        *(_QWORD *)(v72 + 24) = 2745LL;
        WdLogEvent5_WdAssertion(v72);
        return 3221225485LL;
      }
      v65 = v241.Value;
    }
    goto LABEL_97;
  }
  v66 = v217[0];
  v47 = (unsigned int)v54;
  v67 = *((_QWORD *)this + 5027);
  v68 = 0;
  v69 = *(_DWORD *)(1584LL * v217[0] + v67 + 20);
  v46 = a8;
  if ( (~*(_DWORD *)(v67 + 16) & a8) != 0 )
    goto LABEL_91;
  if ( a8 )
  {
    LODWORD(v67) = 1;
    do
    {
      if ( (v47 & 1) != 0 )
      {
        v46 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v69);
        if ( (*(_DWORD *)(v46 + 80) & 0x10) == 0 )
          v68 |= v67;
      }
      v67 = (unsigned int)__ROL4__(v67, 1);
      ++v69;
      v47 = (unsigned int)v47 >> 1;
    }
    while ( (_DWORD)v47 );
    if ( v68 )
    {
LABEL_91:
      v70 = WdLogNewEntry5_WdAssertion(v46, v67, v47);
      *(_QWORD *)(v70 + 24) = 2738LL;
      WdLogEvent5_WdAssertion(v70);
      return 3221225485LL;
    }
  }
  v65 = v241.Value;
LABEL_98:
  v73 = (v49 >> 29) & 1;
  if ( ((v49 >> 29) & 1) != 0 && (v62 || (v49 & 8) != 0 || (v49 & 0x20) != 0 || (v49 & 0x40000000) != 0) )
  {
    v74 = WdLogNewEntry5_WdAssertion(v46, v73, v47);
    *(_QWORD *)(v74 + 24) = 2765LL;
    WdLogEvent5_WdAssertion(v74);
    return 3221225485LL;
  }
  if ( (v49 & 0x100000) != 0 && (!(_DWORD)v73 || !a18 || (v52 & 1) == 0) )
  {
    v75 = WdLogNewEntry5_WdAssertion(v46, v73, v47);
    *(_QWORD *)(v75 + 24) = 2777LL;
    WdLogEvent5_WdAssertion(v75);
    return 3221225485LL;
  }
  if ( a16 && (v62 || (v49 & 0x100) != 0 || (v49 & 0x200) != 0 || (v49 & 0x40000000) != 0) )
  {
    v76 = WdLogNewEntry5_WdAssertion(a16, v73, v47);
    *(_QWORD *)(v76 + 24) = 2797LL;
    WdLogEvent5_WdAssertion(v76);
    return 3221225485LL;
  }
  if ( ((v49 >> 26) & 1) != 0 )
  {
    if ( (v49 & 8) == 0 )
    {
      v77 = WdLogNewEntry5_WdAssertion(a16, v73, v47);
      *(_QWORD *)(v77 + 24) = 2813LL;
      WdLogEvent5_WdAssertion(v77);
      return 3221225485LL;
    }
  }
  else if ( (v49 & 8) == 0 )
  {
    goto LABEL_129;
  }
  if ( (v49 & 1) != 0 && ((v49 >> 26) & 1) == 0 && !a16
    || v62
    || (_DWORD)v73
    || (v49 & 0x10) != 0
    || (v49 & 0x20) != 0
    || (v49 & 0x80000000) != 0
    || (v49 & 0x40000000) != 0 )
  {
    v78 = WdLogNewEntry5_WdAssertion(a16, v73, v47);
    *(_QWORD *)(v78 + 24) = 2846LL;
    WdLogEvent5_WdAssertion(v78);
    return 3221225485LL;
  }
LABEL_129:
  v79 = (v49 >> 4) & 1;
  if ( ((v49 >> 4) & 1) != 0 && (v62 || (v49 & 0x20) != 0 || (v49 & 0x80000000) != 0 || (v49 & 0x40000000) != 0) )
  {
    v80 = WdLogNewEntry5_WdAssertion(v79, v73, v47);
    *(_QWORD *)(v80 + 24) = 2868LL;
    WdLogEvent5_WdAssertion(v80);
    return 3221225485LL;
  }
  v81 = (v49 >> 5) & 1;
  if ( ((v49 >> 5) & 1) != 0
    && (v62 || (_DWORD)v73 || (_DWORD)v79 || (v49 & 0x80000000) != 0 || (v49 & 0x40000000) != 0) )
  {
    v82 = WdLogNewEntry5_WdAssertion(v79, v73, v81);
    *(_QWORD *)(v82 + 24) = 2892LL;
    WdLogEvent5_WdAssertion(v82);
    return 3221225485LL;
  }
  v83 = v49 >> 31;
  if ( (v49 & 0x80000000) == 0 )
  {
    if ( (v49 & 0x40000000) != 0 )
    {
      if ( v62
        || v65 && (v86 = *(_DWORD *)(*((_QWORD *)this + 3) + 348LL), (v86 & 0x10) == 0) && (v86 & 8) == 0
        || (_DWORD)v79
        || (_DWORD)v81 )
      {
        v92 = WdLogNewEntry5_WdAssertion(v79, v83, v81);
        *(_QWORD *)(v92 + 24) = 2940LL;
        WdLogEvent5_WdAssertion(v92);
        return 3221225485LL;
      }
      if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 2036LL) & 0x200) == 0 )
        v49 |= 1u;
      v87 = (unsigned __int8)v218;
      if ( (v49 & 1) != 0 )
        v87 = 1;
      v49 |= 0x20000000u;
      v216.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v49;
      v218 = v87;
    }
  }
  else if ( v62
         || v65 && (v84 = *(_DWORD *)(*((_QWORD *)this + 3) + 348LL), (v84 & 0x10) == 0) && (v84 & 8) == 0
         || (_DWORD)v79
         || (_DWORD)v81
         || (v49 & 0x40000000) != 0 )
  {
    v85 = WdLogNewEntry5_WdAssertion(v79, v83, v81);
    *(_QWORD *)(v85 + 24) = 2916LL;
    WdLogEvent5_WdAssertion(v85);
    return 3221225485LL;
  }
  if ( ((v49 >> 28) & 1) != 0 )
  {
    v88 = *((_QWORD *)this + 3);
    v89 = v49 & 0xEFFF7FBF;
    v90 = *(unsigned int *)(v88 + 348);
    if ( (v90 & 8) != 0 || (v90 & 0x10) != 0 )
      v89 = v49 & 0xEFFF7FBB;
    if ( v89 )
    {
      v91 = WdLogNewEntry5_WdAssertion(v88, v90, v81);
      *(_QWORD *)(v91 + 24) = 2982LL;
      WdLogEvent5_WdAssertion(v91);
      return 3221225485LL;
    }
    if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v66, a8, 1u, 0LL) )
    {
      v93 = WdLogNewEntry5_WdAssertion(v79, v83, v81);
      *(_QWORD *)(v93 + 24) = 2992LL;
      WdLogEvent5_WdAssertion(v93);
      return 3221225485LL;
    }
  }
  if ( (v49 & 0x400000) != 0 )
  {
    if ( (v49 & 0x20000000) == 0 )
    {
      v94 = WdLogNewEntry5_WdAssertion(v79, v83, v81);
      *(_QWORD *)(v94 + 24) = 3008LL;
      WdLogEvent5_WdAssertion(v94);
      return 3221225485LL;
    }
    if ( !a12 )
    {
      v95 = WdLogNewEntry5_WdAssertion(v79, v83, v81);
      *(_QWORD *)(v95 + 24) = 3018LL;
      WdLogEvent5_WdAssertion(v95);
      return 3221225485LL;
    }
  }
  if ( (v49 & 0x4000) != 0 )
  {
    if ( (v49 & 1) == 0 )
    {
      v96 = WdLogNewEntry5_WdAssertion(v79, v83, v81);
      *(_QWORD *)(v96 + 24) = 3030LL;
      WdLogEvent5_WdAssertion(v96);
      return 3221225485LL;
    }
    if ( (v49 & 2) != 0
      || (v49 & 8) != 0
      || (v49 & 0x10) != 0
      || (v49 & 0x20) != 0
      || (v49 & 0x40) != 0
      || (v49 & 0x100) != 0
      || (v49 & 0x200) != 0
      || (v49 & 0x40000) != 0 )
    {
      v97 = WdLogNewEntry5_WdAssertion(v79, v83, v81);
      *(_QWORD *)(v97 + 24) = v49;
      WdLogEvent5_WdAssertion(v97);
      return 3221225485LL;
    }
  }
  if ( (VIDMM_GLOBAL::_Config & 2) != 0
    && DXGPROCESS::GetCurrent()
    && *((_BYTE *)DXGPROCESS::GetCurrent() + 346)
    && ((v49 >> 28) & 1) == 0
    && (v49 & 0x40000000) == 0 )
  {
    v49 |= 0x8000000u;
    v216.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v49;
  }
  LOBYTE(v81) = 0;
  LOBYTE(v83) = 0;
  v238 = 0;
  v98 = 0;
  v214 = 0;
  v215 = 0;
  v99 = *(unsigned __int8 *)(Current + 347);
  v235 = 0;
  v242 = 0;
  if ( (v99 & 0x20) == 0 || a16 )
  {
    v106 = operator new(0x1F8uLL, 0x31306956u, v81, PagedPool);
    v103 = (struct _D3DDDI_SEGMENTPREFERENCE *)v106;
    if ( !v106 )
      goto LABEL_384;
    v106[43] = 0LL;
    v106[59] = 0LL;
    v104 = v106 + 23;
  }
  else
  {
    v214 = 1;
    if ( (v49 & 0x10) != 0 )
    {
      v81 = 1LL;
      v215 = 1;
    }
    else if ( (v49 & 1) != 0 )
    {
      v98 = (v99 & 0x40) != 0;
      v242 = v98;
      if ( (v49 & 0x8000) != 0 )
      {
        if ( (v99 & 0x40) == 0 )
        {
          v100 = WdLogNewEntry5_WdAssertion(v99, v83, v81);
          *(_QWORD *)(v100 + 24) = 3089LL;
          WdLogEvent5_WdAssertion(v100);
          return 3221225485LL;
        }
      }
      else
      {
        v242 = (v99 & 0x40) != 0;
      }
      LOBYTE(v83) = (v99 & 0x40) == 0;
      v235 = v83;
      v238 = v83;
      if ( (v49 & 0x20000000) != 0 )
      {
        v238 = 1;
        v235 = (v99 & 0x40) == 0;
        v242 = (v99 & 0x40) != 0;
      }
    }
    if ( (unsigned __int8)v81 | (unsigned __int8)(v83 | v98) )
    {
      v101 = operator new(0x220uLL, 0x61306956u, v81, PagedPool);
      v103 = (struct _D3DDDI_SEGMENTPREFERENCE *)v101;
      if ( v101 )
      {
        v102 = 0LL;
        v101[43] = 0LL;
        v101[59] = 0LL;
        v104 = v101 + 23;
        goto LABEL_213;
      }
LABEL_384:
      _InterlockedIncrement(&dword_1C0051684);
      v210 = WdLogNewEntry5_WdLowResource(v102);
      *(_QWORD *)(v210 + 24) = 3136LL;
      WdLogEvent5_WdLowResource(v210);
      return 3221225495LL;
    }
    v105 = operator new(0x200uLL, 0x61306956u, v81, PagedPool);
    v103 = (struct _D3DDDI_SEGMENTPREFERENCE *)v105;
    if ( !v105 )
      goto LABEL_384;
    v102 = 0LL;
    v105[43] = 0LL;
    v105[59] = 0LL;
    v104 = v105 + 23;
  }
LABEL_213:
  *v104 = v104;
  v104[1] = v104;
  if ( !v103 )
    goto LABEL_384;
  v107 = v217[0];
  v103[19].Value ^= (v103[19].Value ^ v217[0]) & 0x3F;
  v108 = operator new[](0x28uLL, 0x38326956u, (POOL_TYPE)512);
  if ( v108 )
  {
    v109 = 0LL;
    v108[7] = 13;
    *(_QWORD *)v108 = 0LL;
    *((_QWORD *)v108 + 1) = 0LL;
    *((_QWORD *)v108 + 2) = 0LL;
    v108[6] = 0;
    v108[8] = 53;
  }
  *(_QWORD *)&v103[78].0 = v108;
  if ( !v108 )
  {
    _InterlockedIncrement(&dword_1C0051734);
    v110 = WdLogNewEntry5_WdLowResource(v109);
    *(_QWORD *)(v110 + 24) = 3150LL;
LABEL_218:
    WdLogEvent5_WdLowResource(v110);
    SyncObject = -1073741801;
LABEL_364:
    if ( (v103[21].Value & 0x40) != 0 )
      VIDMM_GLOBAL::UncommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v103, 1);
    v199 = *(_QWORD *)&v103[124].0;
    if ( v199 )
    {
      if ( *(_QWORD *)(v199 + 24) )
      {
        v200 = *(_QWORD *)&v103[124].0;
        for ( i = 0LL; i < 16; i += 8LL )
        {
          v202 = *(_QWORD *)(v199 + 24);
          if ( *(_QWORD *)(i + v202) )
          {
            VidSchDestroySyncObject(*(PVOID *)(i + v202));
            v199 = *(_QWORD *)&v103[124].0;
            v200 = v199;
          }
        }
        operator delete(*(void **)(v200 + 24));
        v199 = *(_QWORD *)&v103[124].0;
      }
      if ( *(_QWORD *)(v199 + 16) )
      {
        VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(*(int **)(v199 + 16), v111);
        v199 = *(_QWORD *)&v103[124].0;
      }
      operator delete((void *)v199);
    }
    v203 = *(KSPIN_LOCK **)&v103[122].0;
    if ( v203 )
    {
      VIDMM_GLOBAL::FreeCrossAdapterDataDpc((VIDMM_GLOBAL *)v199, v203, (struct _VIDMM_GLOBAL_ALLOC *)v103);
      v205 = (VIDMM_GLOBAL *)(unsigned int)_InterlockedDecrement(*(volatile signed __int32 **)&v103[122].0);
      if ( (_DWORD)v205 )
      {
        if ( (int)v205 < 0 )
        {
          v206 = *(int **)&v103[122].0;
          v207 = *v206;
          v208 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v205, v204);
          v208[3] = 270LL;
          v208[4] = 66LL;
          v208[5] = v206;
          v208[6] = v207;
          v208[7] = 0LL;
          WdLogEvent5_WdCriticalError(v208);
        }
      }
      else
      {
        VIDMM_GLOBAL::DestroyCrossAdapterAllocation(v205, *(struct _VIDMM_CROSSADAPTER_ALLOC **)&v103[122].0);
        *a18 = 0LL;
      }
    }
    v209 = *(DXGFASTMUTEX **)&v103[78].0;
    if ( v209 )
      DXGFASTMUTEX::`scalar deleting destructor'(v209);
    _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'((_VIDMM_GLOBAL_ALLOC *)v103);
    return (unsigned int)SyncObject;
  }
  v113 = operator new[](0x28uLL, 0x32346956u, (POOL_TYPE)512);
  *(_QWORD *)&v103[124].0 = v113;
  if ( !v113 )
  {
    _InterlockedIncrement(&dword_1C0051790);
    v110 = WdLogNewEntry5_WdLowResource(v114);
    *(_QWORD *)(v110 + 24) = 3163LL;
    goto LABEL_218;
  }
  *v113 = 0LL;
  v113[1] = 0LL;
  *((_QWORD *)v113 + 4) = 0LL;
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL) + 57LL) )
  {
    if ( (v49 & 0x40000000) != 0 || (v49 & 0x80000000) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)&v103[124].0 + 24LL) = operator new[](0xA8uLL, 0x33306956u, (POOL_TYPE)512);
      v116 = *(void **)(*(_QWORD *)&v103[124].0 + 24LL);
      if ( v116 )
      {
        memset(v116, 0, 0xA8uLL);
        v117 = 1000 * (v107 + 1);
        v118 = 16LL;
        LODWORD(v115) = 0;
        v219 = 0;
        Current = 16LL;
        LODWORD(v221) = v117;
        while ( 1 )
        {
          v229[0] = 5;
          v229[1] = 128;
          v119 = *(_QWORD *)&v103[124].0;
          v231 = 0LL;
          v232 = 0LL;
          v230 = (unsigned int)(v115 * v117) + 100LL;
          v120 = *(_QWORD *)(v119 + 24);
          v233 = 0LL;
          v234 = 0LL;
          *(_QWORD *)(v118 + v120) = v230;
          v121 = *((_QWORD *)this + 2);
          v228 = (((_DWORD)v115 != 1) + 7) & 0x7FFFFFFF;
          SyncObject = VidSchCreateSyncObject(
                         *(_QWORD *)(v121 + 624),
                         0,
                         (int)v229,
                         v228,
                         0LL,
                         0LL,
                         (PVOID)(*(_QWORD *)(*(_QWORD *)&v103[124].0 + 24LL) + 8LL * (int)v115),
                         0LL);
          if ( SyncObject < 0 )
            goto LABEL_364;
          v115 = v219 + 1;
          v117 = v221;
          v118 = Current + 8;
          v219 = v115;
          Current += 8LL;
          if ( (int)v115 >= 2 )
            goto LABEL_235;
        }
      }
      _InterlockedIncrement(&dword_1C005167C);
      v110 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v110 + 24) = 3180LL;
      goto LABEL_218;
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)&v103[124].0 + 16LL) = operator new[](0xCuLL, 0x33306956u, (POOL_TYPE)512);
    v122 = *(_QWORD *)(*(_QWORD *)&v103[124].0 + 16LL);
    if ( !v122 )
    {
      _InterlockedIncrement(&dword_1C005167C);
      v110 = WdLogNewEntry5_WdLowResource(0LL);
      *(_QWORD *)(v110 + 24) = 3234LL;
      goto LABEL_218;
    }
    *(_QWORD *)v122 = 0LL;
    *(_DWORD *)(v122 + 8) = 0;
    _InterlockedIncrement(*(volatile signed __int32 **)(*(_QWORD *)&v103[124].0 + 16LL));
    v49 = v216.Value;
    v52 = v220;
    v123 = 0;
    if ( (v216.Value & 0x100000) == 0 )
      v123 = -1;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v103[124].0 + 16LL) + 4LL) = v123;
  }
LABEL_235:
  v124 = a11;
  if ( a11 )
  {
    v125 = *((_DWORD *)a11 + 1);
    if ( (v125 & 0x8000) != 0 )
    {
      v103[19].Value |= 0x800u;
      v125 = *((_DWORD *)a11 + 1);
    }
    if ( (v125 & 0x10000) != 0 )
    {
      v103[20].Value |= 0x400u;
      v103[19].Value |= 0x400000u;
    }
  }
  v126 = (volatile signed __int32 *)a18;
  if ( a18 )
    v126 = (volatile signed __int32 *)*a18;
  *(_QWORD *)&v103[122].0 = v126;
  if ( v126 )
  {
    _InterlockedIncrement(v126);
    SyncObject = VIDMM_GLOBAL::AllocateCrossAdapterDataDpc(
                   this,
                   *(struct _VIDMM_CROSSADAPTER_ALLOC **)&v103[122].0,
                   (struct _VIDMM_GLOBAL_ALLOC *)v103);
    if ( SyncObject < 0 )
      goto LABEL_364;
    v49 = v216.Value;
    v52 = v220;
    v124 = a11;
  }
  v127 = CurrentProcessId;
  *(_QWORD *)&v103->0 = a4;
  v171 = (*((_DWORD *)v127 + 18) & 1) == 0;
  v128 = 0xFFFFLL;
  if ( v171 )
    v128 = 4095LL;
  v129 = (unsigned int)v128;
  v130 = ~v128;
  v131 = v130 & (v129 + a4);
  v221 = v131;
  if ( a4 > v131 )
  {
    v132 = (_QWORD *)WdLogNewEntry5_WdAssertion(v129, v131, v115);
    v132[3] = a4;
LABEL_363:
    WdLogEvent5_WdAssertion(v132);
    SyncObject = -1073741811;
    goto LABEL_364;
  }
  v133 = v130 & (v129 + v227);
  if ( v227 > v133 )
  {
    v132 = (_QWORD *)WdLogNewEntry5_WdAssertion(v129, v131, v227);
    v132[3] = v227;
    goto LABEL_363;
  }
  if ( v131 > 0xFFFF0000 && (v103[20].Value & 0x400) == 0 )
  {
    v132 = (_QWORD *)WdLogNewEntry5_WdAssertion(v129, v131, v227);
    v132[3] = 3325LL;
    goto LABEL_363;
  }
  v134 = v129 + a6;
  v135 = (unsigned int)~(_DWORD)v129;
  v136 = (unsigned int)v135 & v134;
  v219 = v136;
  if ( a6 > (unsigned int)v136 )
  {
    v132 = (_QWORD *)WdLogNewEntry5_WdAssertion(v135, v131, v136);
    v132[3] = a6;
    goto LABEL_363;
  }
  if ( v136 + v131 < v131 || v136 + v133 < v133 )
  {
    v132 = (_QWORD *)WdLogNewEntry5_WdAssertion(v135, v131, v136);
    v197 = v221;
    v198 = v219;
    v132[3] = v221;
    v132[4] = v133;
    v132[5] = v197;
    v132[6] = v198;
    goto LABEL_363;
  }
  if ( (v49 & 0x10000000) != 0 )
  {
    v49 |= 8u;
    v216.0 = (struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0::$5068715F5D8591D41DA1228877FDA04B::$63766B29C143116E9EC685C38896947D)v49;
  }
  *(_QWORD *)&v103[88].0 = a12;
  if ( (v49 & 0x20000000) == 0 || (v49 & 0x10) != 0 )
    v224 = 0;
  v103[20].Value = v224 | v103[20].Value & 0xFFFBFFFF;
  v137 = *(unsigned int **)&v103[124].0;
  *(_QWORD *)&v103[4].0 = v131;
  *(_QWORD *)&v103[6].0 = v133;
  *(_QWORD *)&v103[2].0 = v131;
  v103[38].Value = 0;
  v103[8].Value = v136;
  *v137 = v49;
  v138 = v103[19].Value ^ (v103[19].Value ^ (v52 << 7)) & 0x80;
  v103[16].Value = a8;
  LODWORD(v137) = v103[20];
  v139 = v138 ^ ((unsigned __int8)v138 ^ (unsigned __int8)(32 * v52)) & 0x40;
  *(_QWORD *)&v103[10].0 = v124;
  LODWORD(v137) = (unsigned int)v137 & 0xFFFEFF7F | ((unsigned __int8)v218 << 7) | (v238 << 16);
  v103[17].Value = a7;
  v103[18].0 = a9.0;
  v103[19].Value = v139;
  v103[30].Value = 0;
  v103[76].Value = 0;
  v140 = (unsigned int)v137 & 0xFFFF0FFF | (v214 << 12) & 0xFFFF1FFF | (v215 << 15) | (v235 << 13) & 0xFFFFBFFF | (v242 << 14);
  v103[20].Value = v140;
  if ( v214 )
  {
    v141 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL);
    v142 = *(_BYTE *)(v141 + 347);
    if ( (v142 & 0x20) != 0 )
    {
      v143 = *(_QWORD *)(v141 + 496);
    }
    else
    {
      v171 = (v142 & 0x10) == 0;
      v143 = 0LL;
      if ( !v171 )
        v143 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL);
    }
    v144 = *(_QWORD *)(v143 + 64);
    if ( v144 )
      v145 = *(_QWORD *)(v144 + 8);
    else
      v145 = 0LL;
    *(_QWORD *)&v103[126].0 = v145;
  }
  v146 = 0;
  if ( (v49 & 1) != 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 348LL) & 8) == 0 )
    {
      v147 = a7;
      v148 = *((_QWORD *)this + 5027) + 1584LL * v217[0];
      v149 = *(_DWORD *)(v148 + 20);
      if ( (~*(_DWORD *)(v148 + 16) & a7) != 0 || !a7 )
      {
LABEL_280:
        v146 = 0;
        goto LABEL_282;
      }
      while ( 1 )
      {
        if ( (v147 & 1) != 0 )
        {
          v150 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v149) + 80LL);
          if ( (v150 & 0x1001) == 0 && (v150 & 0x6004) != 0 )
            break;
        }
        ++v149;
        v147 >>= 1;
        if ( !v147 )
          goto LABEL_280;
      }
    }
    v146 = 1;
  }
LABEL_282:
  v151 = v140 & 0xFFF7FFFF | (v146 << 19);
  v103[20].Value = v151;
  v152 = *(_DWORD **)(1584LL * (v139 & 0x3F) + *((_QWORD *)this + 5027) + 440);
  if ( (*((_DWORD *)CurrentProcessId + 18) & 1) != 0 )
  {
    v153 = v151 | 0x100;
  }
  else
  {
    if ( !dword_1C00514B4
      || (**(_DWORD **)(*((_QWORD *)this + 3) + 2576LL) & 0x4000) != 0
      || (v52 & 2) == 0
      || !v152
      || (*v152 & 0x200) == 0 && dword_1C00514B4 != 2
      || (v154 = *(_QWORD *)&v103[2].0, (_WORD)v154) && v154 <= (unsigned int)dword_1C00514B8
      || (v155 = 256, v146) )
    {
      v155 = 0;
    }
    v153 = v155 | v140 & 0xFFF7FEFF | (v146 << 19);
  }
  v103[20].Value = v153;
  SyncObject = VIDMM_GLOBAL::CommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)v103);
  if ( SyncObject < 0 )
    goto LABEL_364;
  if ( (v49 & 0x4000) != 0 )
    v103[20].Value |= 0x20u;
  v156 = 1;
  if ( (*(_BYTE *)(v226 + 436) & 3) != 0 )
  {
    v157 = 1 << (*(_WORD *)(v226 + 28) - *(_BYTE *)(v226 + 20));
    v103[16].Value |= v157;
    if ( (v52 & 2) != 0 && (v49 & 0x8000) == 0 )
      v103[17].Value |= v157;
  }
  *(_QWORD *)&v103[12].0 = a13;
  *(_QWORD *)&v103[28].0 = a16;
  v158 = 0LL;
  v159 = v103[19].Value & 0xF7FFFFFF | (a16 != 0LL ? 0x8000000 : 0);
  v103[19].Value = v159 ^ (v159 ^ (a15 << 28)) & 0x10000000;
  v103[92].Value = a14;
  *(_QWORD *)&v103[74].0 = v103 + 72;
  *(_QWORD *)&v103[72].0 = v103 + 72;
  *(_QWORD *)&v103[116].0 = -1LL;
  v160 = (v103[19].Value & 0x80) != 0;
  if ( a9.0 )
  {
    if ( (*(_BYTE *)&a9.0 & 0x1F) != 0 )
    {
      v158 = *(_QWORD *)(*((_QWORD *)this + 464)
                       + 8LL
                       * ((*(_BYTE *)&a9.0 & 0x1Fu) + *(_DWORD *)(1584LL * v217[0] + *((_QWORD *)this + 5027) + 20) - 1));
      v160 = *(_BYTE *)(v158 + 80);
    }
    else if ( ((a9.Value >> 6) & 0x1F) != 0 )
    {
      v158 = *(_QWORD *)(*((_QWORD *)this + 464)
                       + 8LL
                       * (((a9.Value >> 6) & 0x1F) + *(_DWORD *)(1584LL * v217[0] + *((_QWORD *)this + 5027) + 20) - 1));
    }
  }
  v161 = a7;
  v162 = 1584LL * v217[0];
  v163 = v103[19].Value ^ ((unsigned __int16)*(_DWORD *)&v103[19].0 ^ (unsigned __int16)(v160 << 10)) & 0x400;
  v103[19].Value = v163;
  v164 = *((_QWORD *)this + 5027) + v162;
  v226 = *((_QWORD *)this + 5027);
  v236 = v164;
  v165 = *(_DWORD *)(v164 + 20);
  v166 = v165;
  if ( (a7 & ~*(_DWORD *)(v164 + 16)) != 0 || !a7 )
  {
LABEL_312:
    v167 = 0;
    if ( (a7 & ~*(_DWORD *)(v164 + 16)) != 0 )
    {
LABEL_318:
      v169 = 0;
      goto LABEL_319;
    }
  }
  else
  {
    while ( (v161 & 1) == 0 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v166) + 80LL) & 0x80000) == 0 )
    {
      ++v166;
      v161 >>= 1;
      if ( !v161 )
        goto LABEL_312;
    }
    v167 = 1;
  }
  if ( !a7 )
    goto LABEL_318;
  v168 = a7;
  while ( (v168 & 1) == 0 || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v165) + 80LL) & 0x100000) == 0 )
  {
    ++v165;
    v168 >>= 1;
    if ( !v168 )
      goto LABEL_318;
  }
  v169 = 1;
LABEL_319:
  if ( v158 )
  {
    v170 = *(_DWORD *)(v158 + 80);
    if ( (v170 & 0x80000) == 0 )
    {
      v171 = (v170 & 0x100000) == 0;
      goto LABEL_326;
    }
LABEL_338:
    v172 = 0;
    v173 = 2 * (unsigned int)v169;
    goto LABEL_339;
  }
  if ( v167 )
    goto LABEL_338;
  v171 = v169 == 0;
LABEL_326:
  if ( !v171 )
  {
    v172 = 1;
    v173 = (unsigned int)v167 + 1;
LABEL_339:
    if ( (_DWORD)v173 != 3 )
    {
      v180 = 0;
      v181 = (unsigned int)a7;
      v182 = (unsigned int)a7;
      v183 = *(_DWORD *)(v236 + 20);
      if ( (~*(_DWORD *)(v226 + 16) & a7) != 0 )
        goto LABEL_347;
      if ( a7 )
      {
        do
        {
          if ( (v182 & 1) != 0 )
          {
            v181 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v183);
            if ( (*(_DWORD *)(v181 + 80) & 0x180000) == 0 )
              v180 |= v156;
          }
          v156 = __ROL4__(v156, 1);
          ++v183;
          v182 = (unsigned int)v182 >> 1;
        }
        while ( (_DWORD)v182 );
        if ( v180 )
        {
LABEL_347:
          v184 = WdLogNewEntry5_WdAssertion(v181, v173, v182);
          *(_QWORD *)(v184 + 24) = 12490LL;
          WdLogEvent5_WdAssertion(v184);
          return 3221225485LL;
        }
      }
    }
    goto LABEL_329;
  }
  v172 = 2;
  LODWORD(v173) = 3;
LABEL_329:
  v174 = v163 ^ (v163 ^ ((v172 | (16 * (_DWORD)v173)) << 12)) & 0xF0000 ^ ((unsigned __int16)v163 ^ (unsigned __int16)(((unsigned __int16)v172 | (unsigned __int16)(16 * v173)) << 12)) & 0xF000;
  if ( (v49 & 0x10) != 0 || (v49 & 0x20) != 0 )
    *((_BYTE *)&v103[22].0 + 1) = 1;
  v103[19].Value = v174 ^ ((unsigned __int16)v174 ^ (unsigned __int16)((unsigned __int8)a17 << 8)) & 0x100;
  v175 = VIDMM_GLOBAL::AdapterId(this);
  v176 = CurrentProcessId;
  *(_QWORD *)&v103[120].0 = *((_QWORD *)CurrentProcessId + 5) + 376LL * v175;
  VidMmiReferencePartition(v176);
  v177 = **(_DWORD **)&v103[124].0;
  if ( (v177 & 0x2003A) != 0
    || (v178 = v103[20].Value, (v178 & 0x2000) != 0)
    || (v103[19].Value & 0x100) != 0
    || (v178 & 0x400) != 0
    || (v177 & 0x40000000) != 0 )
  {
    v178 = v103[20].Value;
    v179 = 0;
  }
  else
  {
    v179 = 0x20000;
  }
  v185 = v179 | v178 & 0xFFFDFFFF;
  v171 = bTracingEnabled == 0;
  v103[20].Value = v185;
  if ( v171 )
    goto LABEL_358;
  v186 = *(_QWORD *)&v103[10].0;
  v187 = v186 ? *(unsigned int **)(v186 + 24) : 0LL;
  v188 = *(_WORD *)&v103[19].0 & 0x3F;
  Current = *((_QWORD *)a2 + 3);
  v227 = *((_QWORD *)this + 3);
  v226 = *(_QWORD *)&v103[88].0;
  CurrentProcessId = (struct VIDMM_PARTITION *)PsGetCurrentProcessId();
  LOBYTE(a2) = 0;
  v185 = 0LL;
  LOBYTE(v239) = 0;
  LOBYTE(v189) = 0;
  v243 = 0;
  v190 = 0LL;
  LOBYTE(v191) = 0;
  LOBYTE(v192) = 0;
  LOBYTE(v193) = 0;
  if ( v187 )
  {
    v185 = *v187;
    v189 = v187[1];
    v190 = v187[2];
    v191 = v187[3];
    v192 = v187[4];
    v193 = v187[5];
    LODWORD(a2) = v187[6];
    v239 = v187[7];
    v194 = v187[8];
    v195 = v187[9];
    v243 = v194;
  }
  else
  {
    LOBYTE(v195) = 0;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) == 0 )
  {
LABEL_358:
    v196 = v221;
  }
  else
  {
    v213 = v195;
    v196 = v221;
    McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
      v185,
      (__int64)&EventCreateAdapterAllocation,
      v190,
      (__int64)CurrentProcessId,
      Current,
      v227,
      v19,
      v221,
      v219,
      v211,
      a7,
      *(_BYTE *)&a9.0,
      v212,
      a8,
      a14,
      (char)v103,
      v186,
      0,
      v185,
      v189,
      v190,
      v191,
      v192,
      v193,
      (char)a2,
      v239,
      v243,
      v213,
      0,
      v226,
      v188,
      a17);
  }
  ++*((_DWORD *)this + 1910);
  *((_QWORD *)this + 956) += v196;
  *((_QWORD *)this + 5023) += v196;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v185) + 24) = v103;
  *a19 = v103;
  return 0LL;
}
