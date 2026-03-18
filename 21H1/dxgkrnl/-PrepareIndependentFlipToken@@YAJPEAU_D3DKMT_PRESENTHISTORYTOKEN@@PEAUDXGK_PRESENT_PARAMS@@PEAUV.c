/*
 * XREFs of ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C010A300
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01083E0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0236CBC (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A3BC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000D034 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014980 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C0024528 (--0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ?Feature_Servicing_2102c_30071911__private_IsEnabled@@YAHXZ @ 0x1C0025D10 (-Feature_Servicing_2102c_30071911__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C00462F4 (-GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?IsHdrEnabled@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00463F0 (-IsHdrEnabled@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C00D4730 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD6D0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C010183C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C0146A60 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C015DE6C (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C015E398 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C015E938 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x1C015F4F8 (-UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C015F62C (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ @ 0x1C020EFB8 (-GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ.c)
 *     ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1C0250EFC (-IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C027D2D4 (-ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAPEAVCRefCoun.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C029ECF8 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 */

__int64 __fastcall PrepareIndependentFlipToken(
        struct _EX_RUNDOWN_REF *a1,
        struct _EX_RUNDOWN_REF *a2,
        struct _EX_RUNDOWN_REF *a3,
        struct _EX_RUNDOWN_REF *a4,
        struct _PRESENT_REDIRECTED_PARAMS *a5,
        struct CRefCountedBuffer *a6)
{
  struct _EX_RUNDOWN_REF *v7; // rbx
  struct _EX_RUNDOWN_REF *v8; // rdi
  struct CRefCountedBuffer *Count; // rcx
  __int64 v10; // r13
  __int64 v11; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  struct DXGTHREAD *Current; // rax
  __int64 v18; // rcx
  ADAPTER_DISPLAY *v19; // r14
  struct _EX_RUNDOWN_REF *v20; // rax
  unsigned int Ptr_high; // esi
  __int64 v22; // rdx
  struct _EX_RUNDOWN_REF *v23; // rax
  ULONG_PTR v24; // rdx
  ULONG_PTR v25; // rdx
  __int64 v26; // r8
  unsigned int v27; // eax
  unsigned int v28; // edx
  struct _EX_RUNDOWN_REF *v29; // rcx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // ecx
  int v34; // ecx
  DXGADAPTER *v35; // rcx
  int v36; // eax
  int v37; // eax
  _DWORD *v38; // r8
  int v39; // eax
  __int64 v40; // rdx
  _QWORD *v41; // rax
  struct _EX_RUNDOWN_REF *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct DXGTHREAD *v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  struct DXGTHREAD *v49; // rbx
  _QWORD *v50; // rax
  int v51; // esi
  int v52; // edx
  __int64 v53; // rax
  _QWORD *v54; // rax
  unsigned __int8 PostCompositionStretching; // r13
  bool v56; // r9
  __int64 v57; // rdx
  struct _EX_RUNDOWN_REF *v58; // rcx
  ULONG_PTR v59; // rax
  __int128 v60; // xmm1
  __int64 v61; // r8
  ADAPTER_RENDER *v62; // r13
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rax
  __int64 v69; // rdx
  DXGADAPTER *v70; // r13
  __int64 v71; // rdx
  int v72; // eax
  __int64 Count_low; // rcx
  __int64 v74; // rcx
  __int64 v75; // rax
  int v76; // r8d
  int v77; // edx
  __int64 v78; // rax
  int v79; // edx
  char v80; // cl
  __int64 v81; // rax
  unsigned __int64 v82; // rdx
  POOL_TYPE v83; // r9d
  unsigned int v84; // r15d
  struct _EX_RUNDOWN_REF *PoolWithTag; // r13
  struct _EX_RUNDOWN_REF *v86; // r9
  unsigned int i; // r14d
  const struct DXGADAPTER *v88; // rcx
  struct _EX_RUNDOWN_REF *v89; // r15
  struct _EX_RUNDOWN_REF *v90; // rdx
  DXGADAPTER *v91; // rax
  struct _EX_RUNDOWN_REF *v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  ULONG_PTR v95; // rax
  unsigned int *v96; // rdx
  __int64 v97; // rsi
  struct _EX_RUNDOWN_REF **v98; // r13
  struct _EX_RUNDOWN_REF **AllocationSafe; // rax
  __int64 v100; // rdx
  __int64 v101; // rdx
  __int64 v102; // rcx
  _QWORD *v103; // rax
  DXGADAPTER *v104; // r14
  struct _EX_RUNDOWN_REF *v105; // r9
  __int64 v106; // rdx
  __int64 v107; // rcx
  _QWORD *v108; // rax
  struct _EX_RUNDOWN_REF *v109; // rdx
  struct _EX_RUNDOWN_REF *v110; // rdx
  __int64 v111; // r8
  struct _EX_RUNDOWN_REF *v112; // r13
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rax
  ULONG_PTR v116; // rax
  ULONG_PTR v117; // rcx
  ULONG_PTR v118; // r8
  _QWORD *v119; // rax
  char *pAllocationList; // rdx
  int v121; // eax
  UINT v122; // r15d
  __int64 v123; // r14
  __int64 v124; // rsi
  unsigned __int8 v125; // r13
  struct _EX_RUNDOWN_REF *v126; // rdi
  struct _EX_RUNDOWN_REF *v127; // rbx
  __int16 v128; // ax
  struct _EX_RUNDOWN_REF *v129; // rdx
  __int64 v130; // rax
  PVOID Ptr; // rdx
  struct CRefCountedBuffer *v132; // rax
  int v133; // eax
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r14
  __int64 v137; // rax
  __int64 v138; // rsi
  ULONG_PTR v139; // r14
  char *v140; // r13
  ADAPTER_RENDER *v141; // rbx
  ADAPTER_RENDER *v142; // rdi
  _QWORD *v143; // rax
  __int64 v144; // rdx
  int v145; // [rsp+30h] [rbp-418h]
  int v146; // [rsp+30h] [rbp-418h]
  bool v147; // [rsp+80h] [rbp-3C8h]
  unsigned int v148; // [rsp+84h] [rbp-3C4h] BYREF
  UINT v149; // [rsp+88h] [rbp-3C0h]
  ADAPTER_RENDER *v150; // [rsp+90h] [rbp-3B8h]
  DXGADAPTER *v151; // [rsp+98h] [rbp-3B0h]
  struct _EX_RUNDOWN_REF *v152; // [rsp+A0h] [rbp-3A8h] BYREF
  int v153; // [rsp+A8h] [rbp-3A0h] BYREF
  unsigned int v154; // [rsp+ACh] [rbp-39Ch] BYREF
  int v155; // [rsp+B0h] [rbp-398h]
  int v156; // [rsp+B4h] [rbp-394h] BYREF
  unsigned int v157; // [rsp+B8h] [rbp-390h]
  struct _EX_RUNDOWN_REF *v158; // [rsp+C0h] [rbp-388h]
  struct _EX_RUNDOWN_REF *v159; // [rsp+C8h] [rbp-380h]
  struct _EX_RUNDOWN_REF *v160; // [rsp+D0h] [rbp-378h]
  struct _EX_RUNDOWN_REF *v161; // [rsp+D8h] [rbp-370h]
  int v162; // [rsp+E0h] [rbp-368h] BYREF
  int v163; // [rsp+E4h] [rbp-364h] BYREF
  enum _D3DDDI_HDR_METADATA_TYPE v164; // [rsp+E8h] [rbp-360h] BYREF
  unsigned int v165; // [rsp+ECh] [rbp-35Ch]
  int v166; // [rsp+F0h] [rbp-358h] BYREF
  struct _EX_RUNDOWN_REF *v167; // [rsp+F8h] [rbp-350h]
  struct CRefCountedBuffer *v168; // [rsp+100h] [rbp-348h]
  struct _EX_RUNDOWN_REF *v169; // [rsp+108h] [rbp-340h]
  int v170; // [rsp+110h] [rbp-338h] BYREF
  int v171; // [rsp+114h] [rbp-334h] BYREF
  int v172; // [rsp+118h] [rbp-330h] BYREF
  int v173; // [rsp+11Ch] [rbp-32Ch] BYREF
  _DWORD v174[2]; // [rsp+120h] [rbp-328h] BYREF
  int v175; // [rsp+128h] [rbp-320h]
  struct _EX_RUNDOWN_REF *v176; // [rsp+130h] [rbp-318h]
  struct CRefCountedBuffer *v177; // [rsp+138h] [rbp-310h]
  ULONG_PTR v178; // [rsp+140h] [rbp-308h]
  ADAPTER_RENDER *v179; // [rsp+148h] [rbp-300h]
  __int64 v180; // [rsp+150h] [rbp-2F8h]
  __int64 v181; // [rsp+158h] [rbp-2F0h]
  ULONG_PTR v182; // [rsp+160h] [rbp-2E8h]
  struct CRefCountedBuffer *v183; // [rsp+168h] [rbp-2E0h] BYREF
  _BYTE v184[16]; // [rsp+170h] [rbp-2D8h] BYREF
  PVOID P; // [rsp+180h] [rbp-2C8h]
  _BYTE v186[32]; // [rsp+188h] [rbp-2C0h] BYREF
  unsigned int v187; // [rsp+1A8h] [rbp-2A0h]
  __int64 v188; // [rsp+1B0h] [rbp-298h] BYREF
  __int64 v189; // [rsp+1B8h] [rbp-290h] BYREF
  __int64 v190; // [rsp+1C0h] [rbp-288h] BYREF
  struct _EX_RUNDOWN_REF *v191[7]; // [rsp+1C8h] [rbp-280h] BYREF
  struct tagRECT v192; // [rsp+200h] [rbp-248h] BYREF
  int v193; // [rsp+210h] [rbp-238h]
  struct _D3DDDI_HDR_METADATA_HDR10 v194; // [rsp+218h] [rbp-230h] BYREF
  _QWORD v195[2]; // [rsp+238h] [rbp-210h] BYREF
  __int64 v196; // [rsp+248h] [rbp-200h]
  __int64 v197; // [rsp+250h] [rbp-1F8h]
  __int64 v198; // [rsp+258h] [rbp-1F0h]
  __int64 v199; // [rsp+260h] [rbp-1E8h]
  _DXGKARG_PRESENT v200; // [rsp+270h] [rbp-1D8h] BYREF
  __int128 v201; // [rsp+320h] [rbp-128h] BYREF
  struct tagRECT v202; // [rsp+330h] [rbp-118h] BYREF
  _QWORD v203[6]; // [rsp+340h] [rbp-108h] BYREF
  PVOID v204; // [rsp+370h] [rbp-D8h] BYREF
  _BYTE v205[128]; // [rsp+378h] [rbp-D0h] BYREF
  int v206; // [rsp+3F8h] [rbp-50h]

  v160 = a4;
  v7 = a3;
  v169 = a3;
  v159 = a2;
  v8 = a1;
  v167 = a1;
  v191[4] = a1;
  v191[5] = a2;
  v191[3] = a3;
  v191[6] = a4;
  Count = a6;
  v177 = a6;
  if ( LODWORD(v8->Count) != 2 || a4 && !a2 )
    return 0LL;
  v10 = 0LL;
  if ( a4 )
  {
    Count = (struct CRefCountedBuffer *)a4[2].Count;
    v168 = Count;
    v11 = *(_QWORD *)(*((_QWORD *)Count + 2) + 16LL);
  }
  else
  {
    v10 = *(_QWORD *)a5;
    v11 = *((_QWORD *)a5 + 2);
    v168 = (struct CRefCountedBuffer *)*((_QWORD *)a5 + 3);
  }
  v181 = v11;
  v151 = (DXGADAPTER *)v11;
  if ( !a4 && !*(_BYTE *)(v11 + 2626) )
    return 0LL;
  a3[3].Count = 0LL;
  CurrentProcess = PsGetCurrentProcess(Count, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v16 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v15, v14)) == 0LL
    || (v18 = *((_QWORD *)Current + 1), (v180 = v18) == 0) )
  {
    v18 = v16;
    v180 = v16;
  }
  v150 = *(ADAPTER_RENDER **)(v11 + 2680);
  v191[1] = (struct _EX_RUNDOWN_REF *)v150;
  v179 = v150;
  v19 = *(ADAPTER_DISPLAY **)(v11 + 2672);
  v20 = v159;
  if ( !a4 )
    v20 = 0LL;
  v176 = v20;
  if ( a4 )
    Ptr_high = HIDWORD(v20[2].Ptr);
  else
    Ptr_high = *(_DWORD *)(v10 + 1100);
  DXGPROCESS::GetAllocationSafe(v18, (DXGALLOCATIONREFERENCE *)&v152, Ptr_high);
  v23 = v152;
  if ( !v152
    || (v22 = *(_QWORD *)(*((_QWORD *)v168 + 2) + 16LL), *(_QWORD *)(*(_QWORD *)(v152[1].Count + 16) + 16LL) != v22) )
  {
LABEL_47:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v152, v22);
    return 0LL;
  }
  v24 = v152[5].Count;
  if ( v177 && v24 && (*(_DWORD *)(v24 + 4) & 1) != 0 )
    v7[3].Count = *(ULONG_PTR *)(*(_QWORD *)(v24 + 56) + 176LL);
  if ( a4 )
    v25 = v159[187].Count;
  else
    v25 = 0LL;
  v182 = v25;
  v178 = v25;
  v154 = (*(_DWORD *)(v23[6].Count + 4) >> 6) & 0xF;
  v166 = 0;
  v156 = 0;
  v162 = 0;
  v163 = 0;
  v148 = 0;
  v153 = 0;
  v201 = 0LL;
  v202 = 0LL;
  v26 = 91LL;
  if ( !BYTE4(v7[43].Ptr) )
    v26 = 64LL;
  v161 = &v7[v26];
  (*(void (__fastcall **)(_QWORD, unsigned int *, struct _EX_RUNDOWN_REF *, ULONG_PTR, struct _EX_RUNDOWN_REF *, int *, int *, unsigned int *, struct _EX_RUNDOWN_REF *, int *, int *, int *, __int128 *, struct tagRECT *))(*(_QWORD *)(*((_QWORD *)v150 + 77) + 8LL) + 408LL))(
    *((_QWORD *)v150 + 78),
    &v154,
    v8 + 9,
    v8[1].Count,
    &v7[v26],
    &v166,
    &v156,
    &v148,
    v8 + 10,
    &v162,
    &v163,
    &v153,
    &v201,
    &v202);
  v27 = v154;
  LODWORD(v8[5].Count) = v154;
  HIDWORD(v7[14].Ptr) = v27;
  RtlCopyLuid((PLUID)&v7[19], (PLUID)&v8[9]);
  v7[20].Count = v8[1].Count;
  v28 = v7->Count & 0xFFFEFFFF;
  LODWORD(v7->Count) = v28;
  if ( a4 )
  {
    v29 = v176;
    v30 = ((unsigned __int8)v28 ^ (unsigned __int8)LODWORD(v176[11].Count)) & 4 ^ v28;
    LODWORD(v7->Count) = v30;
    v31 = (v30 ^ (4 * LODWORD(v29[11].Count))) & 0x80000 ^ v30;
    LODWORD(v7->Count) = v31;
    v32 = (v31 ^ (4 * LODWORD(v29[11].Count))) & 0x100000 ^ v31;
    LODWORD(v7->Count) = v32;
    v28 = v32 ^ (v32 ^ (4 * LODWORD(v29[11].Count))) & 0x200000;
    LODWORD(v7->Count) = v28;
  }
  v33 = v28 ^ ((unsigned __int8)v28 ^ (unsigned __int8)(HIDWORD(v8[7].Ptr) >> 23)) & 8;
  LODWORD(v7->Count) = v33;
  v34 = ((unsigned __int8)v33 ^ (unsigned __int8)(HIDWORD(v8[7].Ptr) >> 1)) & 0x10 ^ v33;
  LODWORD(v7->Count) = v34;
  LODWORD(v7->Count) = v34 ^ (v34 ^ (32 * HIDWORD(v8[7].Ptr))) & 0x10000000;
  HIDWORD(v7->Ptr) ^= (HIDWORD(v7->Ptr) ^ (HIDWORD(v8[7].Ptr) >> 22)) & 0x40;
  v35 = v151;
  v8[4].Count = (ULONG_PTR)v151;
  LODWORD(v7[14].Count) = HIDWORD(v8[15].Ptr);
  LODWORD(v7[23].Count) = HIDWORD(v8[5].Ptr);
  LODWORD(v7->Count) ^= (LODWORD(v7->Count) ^ (HIDWORD(v8[7].Ptr) << 6)) & 0x2000000;
  LODWORD(v7[18].Count) = HIDWORD(v8[100].Ptr);
  HIDWORD(v7[18].Ptr) = v8[101].Count;
  if ( a4 )
    v36 = HIDWORD(a4[51].Ptr);
  else
    v36 = 1;
  LODWORD(v7[17].Count) = v36;
  if ( BYTE4(v7[43].Ptr) )
    LODWORD(v7[76].Count) = -1;
  if ( bTracingEnabled )
  {
    v7[22].Count = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v150 + 80) + 8LL) + 344LL))(
                     *((_QWORD *)v150 + 81),
                     Ptr_high);
    v35 = v151;
  }
  v37 = v8[7].Count;
  HIDWORD(v7[15].Ptr) = v37;
  v38 = (_DWORD *)&v7[15].Ptr + 1;
  v174[0] = 1;
  if ( !v37 && ((HIDWORD(v8[7].Ptr) & 0x800000) == 0 || (*((_DWORD *)v35 + 507) & 0x40) == 0) )
    v38 = v174;
  v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(*((_QWORD *)v150 + 77) + 8LL) + 512LL))(
          *((_QWORD *)v168 + 96),
          v154,
          v38);
  LODWORD(v7[15].Count) = v39;
  if ( v39 != 5 && HIDWORD(v7[15].Ptr) )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v41[3] = v8;
    v41[4] = v8[2].Count;
    v41[5] = HIDWORD(v8[15].Ptr);
    v41[6] = SLODWORD(v7[15].Count);
LABEL_46:
    WdLogEvent5_WdPresentTokenEvent(v41);
    goto LABEL_47;
  }
  if ( !v166 )
  {
    if ( v162 )
    {
      v170 = 0;
      v195[0] = 0LL;
      LOBYTE(v145) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, ULONG_PTR, unsigned int *, _DWORD, int, int *, _QWORD *))(*(_QWORD *)(*((_QWORD *)v150 + 77) + 8LL) + 400LL))(
        *((_QWORD *)v150 + 78),
        (unsigned int)(1 << HIDWORD(v7[14].Ptr)),
        v8 + 9,
        v7[20].Count,
        &v148,
        0,
        v145,
        &v170,
        v195);
      ADAPTER_DISPLAY::UpdateIndependentFlipState(v19, HIDWORD(v7[14].Ptr), v148, 0);
    }
    else if ( !v163 )
    {
LABEL_54:
      v43 = v152;
      if ( v152 )
        ExReleaseRundownProtection(v152 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v43, v40) + 283) )
      {
        v46 = DXGTHREAD::GetCurrent(v45, v44);
        v49 = v46;
        if ( v46 )
        {
          if ( *((_DWORD *)v46 + 8) )
          {
            v50 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v48, v47);
            v50[3] = 275LL;
            v50[4] = 38LL;
            v50[5] = *((int *)v49 + 8);
            v50[6] = 0LL;
            v50[7] = 0LL;
            WdLogEvent5_WdCriticalError(v50);
          }
        }
      }
      return 0LL;
    }
    HIDWORD(v8[7].Ptr) |= 0x1000000u;
    goto LABEL_54;
  }
  v7[21].Count = v8[10].Count;
  v51 = 0;
  v155 = 0;
  v52 = HIDWORD(v8[7].Ptr);
  if ( (v52 & 0x200000) == 0 )
  {
    v171 = 0;
    v188 = 0LL;
    LOBYTE(v145) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, ULONG_PTR, unsigned int *, _DWORD, int, int *, __int64 *))(*(_QWORD *)(*((_QWORD *)v150 + 77) + 8LL) + 400LL))(
      *((_QWORD *)v150 + 78),
      (unsigned int)(1 << HIDWORD(v7[14].Ptr)),
      v8 + 9,
      v7[20].Count,
      &v148,
      0,
      v145,
      &v171,
      &v188);
    HIDWORD(v8[7].Ptr) |= 0x1000000u;
    ADAPTER_DISPLAY::UpdateIndependentFlipState(v19, HIDWORD(v7[14].Ptr), v148, 0);
    v41 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v41[3] = 1945LL;
    goto LABEL_46;
  }
  if ( v156 || (v53 = *((_QWORD *)v150 + 2), *(_QWORD *)(v53 + 928)) && *(_BYTE *)(v53 + 2618) )
  {
    if ( (v52 & 0x400000) != 0 )
    {
      DXGDISPLAYSTATEMUTEX::DXGDISPLAYSTATEMUTEX((DXGDISPLAYSTATEMUTEX *)v184, v19);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v184);
      PostCompositionStretching = ADAPTER_DISPLAY::GetPostCompositionStretching((DXGADAPTER **)v19, HIDWORD(v7[14].Ptr));
      if ( PostCompositionStretching
        && (IsYUVAllocation(*(void **)(v152[6].Count + 16), v150)
         || DISPLAY_SOURCE::GetEnabledPlaneCountUnsafe((DISPLAY_SOURCE *)(*((_QWORD *)v19 + 14)
                                                                        + 3968LL * HIDWORD(v7[14].Ptr))) > 1) )
      {
        PostCompositionStretching = 0;
      }
      v192 = 0LL;
      v56 = !v148 && PostCompositionStretching;
      if ( !CheckAndUpdateMultiPlaneOverlayFromInternalState(
              HIDWORD(v7[14].Ptr),
              v148,
              (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)&v8[2],
              v56,
              v150,
              v19,
              &v192) )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v184, v57);
        v173 = 0;
        v190 = 0LL;
        LOBYTE(v146) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, ULONG_PTR, unsigned int *, _DWORD, int, int *, __int64 *))(*(_QWORD *)(*((_QWORD *)v150 + 77) + 8LL) + 400LL))(
          *((_QWORD *)v150 + 78),
          (unsigned int)(1 << HIDWORD(v7[14].Ptr)),
          v8 + 9,
          v7[20].Count,
          &v148,
          0,
          v146,
          &v173,
          &v190);
        v68 = WdLogNewEntry5_WdWarning(v66, v65, v67);
        *(_QWORD *)(v68 + 24) = v148;
        WdLogEvent5_WdWarning(v68);
        HIDWORD(v8[7].Ptr) |= 0x1000000u;
        ADAPTER_DISPLAY::UpdateIndependentFlipState(v19, HIDWORD(v7[14].Ptr), v148, 0);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v184, v69);
        goto LABEL_47;
      }
      v58 = v161;
      LOWORD(v161->Count) = WORD2(v8[92].Ptr);
      WORD2(v58->Ptr) = v8[93].Count;
      WORD1(v58->Ptr) = WORD2(v8[93].Ptr);
      HIWORD(v58->Ptr) = v8[94].Count;
      LODWORD(v58[3].Count) = v8[102].Count;
      if ( PostCompositionStretching )
      {
        v59 = v58->Count;
        v58[1].Count = v58->Count;
        v58[2].Count = v59;
        v60 = *(_OWORD *)((char *)&v8[92].Ptr + 4);
        v201 = v60;
        v202 = v192;
        if ( (_DWORD)v60 != v192.left
          || __PAIR64__(DWORD2(v201), DWORD1(v60)) != *(_QWORD *)&v192.top
          || (v61 = 0LL, HIDWORD(v201) != v192.bottom) )
        {
          v61 = 1LL;
        }
        v153 = v61;
        if ( !(_DWORD)v61 )
        {
          v201 = 0LL;
          v202 = 0LL;
        }
        v62 = v150;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, struct tagRECT *))(*(_QWORD *)(*((_QWORD *)v150 + 77)
                                                                                                  + 8LL)
                                                                                      + 984LL))(
          *((_QWORD *)v150 + 78),
          HIDWORD(v7[14].Ptr),
          v61,
          &v201,
          &v202);
        UpdatePostComposition(HIDWORD(v7[14].Ptr), v153 != 0, DWORD2(v201) - v201, HIDWORD(v201) - DWORD1(v201), v19);
      }
      else
      {
        v62 = v150;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, _QWORD))(*(_QWORD *)(*((_QWORD *)v62 + 77) + 8LL)
                                                                               + 416LL))(
        *((_QWORD *)v62 + 78),
        HIDWORD(v7[14].Ptr),
        v161,
        v148);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v184, v63);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v184, v64);
    }
    else
    {
      ADAPTER_DISPLAY::UpdateIndependentFlipState(v19, HIDWORD(v7[14].Ptr), v148, 1u);
    }
    LODWORD(v7->Count) = (v153 << 31) | (LODWORD(v7->Count) ^ (LODWORD(v7->Count) ^ (v156 << 26)) & 0x4000000) & 0x7FFFFFFF;
    *(_OWORD *)((char *)&v7[53].Ptr + 4) = v201;
    *(struct tagRECT *)((char *)&v7[55].Ptr + 4) = v202;
  }
  else
  {
    if ( HIDWORD(v8[93].Ptr) - HIDWORD(v8[92].Ptr) != HIDWORD(v8[94].Ptr)
      || LODWORD(v8[94].Count) - LODWORD(v8[93].Count) != LODWORD(v8[95].Count)
      || (v52 & 0x400000) != 0 )
    {
      v172 = 0;
      v189 = 0LL;
      LOBYTE(v145) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, ULONG_PTR, unsigned int *, _DWORD, int, int *, __int64 *))(*(_QWORD *)(*((_QWORD *)v150 + 77) + 8LL) + 400LL))(
        *((_QWORD *)v150 + 78),
        (unsigned int)(1 << HIDWORD(v7[14].Ptr)),
        v8 + 9,
        v7[20].Count,
        &v148,
        0,
        v145,
        &v172,
        &v189);
      v54 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
      v54[3] = HIDWORD(v8[93].Ptr) - HIDWORD(v8[92].Ptr);
      v54[4] = LODWORD(v8[94].Count) - LODWORD(v8[93].Count);
      v54[5] = HIDWORD(v8[94].Ptr);
      v54[6] = LODWORD(v8[95].Count);
      WdLogEvent5_WdPresentTokenEvent(v54);
      HIDWORD(v8[7].Ptr) |= 0x1000000u;
      ADAPTER_DISPLAY::UpdateIndependentFlipState(v19, HIDWORD(v7[14].Ptr), 0, 0);
      goto LABEL_47;
    }
    ADAPTER_DISPLAY::UpdateIndependentFlipState(v19, HIDWORD(v7[14].Ptr), 0, 1u);
  }
  v70 = v151;
  if ( (*((_DWORD *)v151 + 638) & 0x10) != 0 )
  {
    if ( !v19 || !ADAPTER_DISPLAY::IsHdrEnabled(v19, v154) )
    {
      LODWORD(v7[44].Count) = 0;
      goto LABEL_116;
    }
    v72 = LODWORD(v7->Count) ^ (LODWORD(v7->Count) ^ (HIDWORD(v8[7].Ptr) << 24)) & 0x40000000;
    LODWORD(v7->Count) = v72;
    Count_low = LODWORD(v8[20].Count);
    LODWORD(v7[44].Count) = Count_low;
    if ( (v72 & 0x40000000) != 0 )
    {
      if ( (_DWORD)Count_low )
      {
        v74 = (unsigned int)(Count_low - 1);
        if ( (_DWORD)v74 )
        {
          if ( (_DWORD)v74 == 1 )
          {
            *(_OWORD *)((char *)&v7[44].Ptr + 4) = *(_OWORD *)((char *)&v8[20].Ptr + 4);
            *(_OWORD *)((char *)&v7[46].Ptr + 4) = *(_OWORD *)((char *)&v8[22].Ptr + 4);
            *(_OWORD *)((char *)&v7[48].Ptr + 4) = *(_OWORD *)((char *)&v8[24].Ptr + 4);
            *(_OWORD *)((char *)&v7[50].Ptr + 4) = *(_OWORD *)((char *)&v8[26].Ptr + 4);
            *(struct _EX_RUNDOWN_REF *)((char *)v7 + 420) = *(struct _EX_RUNDOWN_REF *)((char *)v8 + 228);
          }
          else
          {
            v75 = WdLogNewEntry5_WdAssertion(v74, v71);
            *(_QWORD *)(v75 + 24) = 2151LL;
            WdLogEvent5_WdAssertion(v75);
            LODWORD(v7->Count) &= ~0x40000000u;
          }
        }
        else
        {
          *(_OWORD *)((char *)&v7[44].Ptr + 4) = *(_OWORD *)((char *)&v8[20].Ptr + 4);
          *(struct _EX_RUNDOWN_REF *)((char *)v7 + 372) = *(struct _EX_RUNDOWN_REF *)((char *)v8 + 180);
          HIDWORD(v7[47].Ptr) = HIDWORD(v8[23].Ptr);
        }
      }
    }
    else
    {
      v76 = v72;
      v77 = Count_low;
      if ( (_DWORD)Count_low != 1 && (_DWORD)Count_low != 2 && (_DWORD)Count_low )
      {
        v78 = WdLogNewEntry5_WdAssertion(Count_low, (unsigned int)Count_low);
        *(_QWORD *)(v78 + 24) = 2159LL;
        WdLogEvent5_WdAssertion(v78);
        v76 = v7->Count;
        v77 = v7[44].Count;
      }
      LODWORD(v7->Count) = v76 | 0x40000000;
      v79 = v77 - 1;
      if ( v79 )
      {
        if ( v79 == 1 )
          LODWORD(v7[44].Count) = -2147483646;
      }
      else
      {
        LODWORD(v7[44].Count) = 134217729;
      }
    }
    if ( (unsigned int)Feature_Servicing_2102c_30071911__private_IsEnabled() )
    {
      if ( !LODWORD(v7[44].Count) )
      {
        v164 = D3DDDI_HDR_METADATA_TYPE_NONE;
        memset(&v194, 0, sizeof(v194));
        if ( !(unsigned int)PopulateHDRMetadataFromDisplay(HIDWORD(v7[14].Ptr), v19, &v194, &v164) )
        {
          *(struct _D3DDDI_HDR_METADATA_HDR10 *)((char *)&v7[44].Ptr + 4) = v194;
          LODWORD(v7[44].Count) = v164;
LABEL_116:
          LODWORD(v7->Count) |= 0x40000000u;
        }
      }
    }
  }
  v80 = v148;
  HIDWORD(v8[101].Ptr) = v148;
  v81 = 71LL;
  if ( !BYTE4(v7[43].Ptr) )
    v81 = 60LL;
  LODWORD(v7[v81].Count) ^= (LODWORD(v7[v81].Count) ^ (1 << v80)) & 0x3FF;
  v149 = 1;
  if ( DXGADAPTER::IsDxgmms2(v70) && a4 )
  {
    v84 = HIDWORD(v176[11].Ptr) + 1;
    v149 = v84;
  }
  else
  {
    v84 = v83;
  }
  v157 = 0;
  PoolWithTag = 0LL;
  v158 = 0LL;
  P = 0LL;
  v187 = 0;
  if ( v84 <= 4 )
  {
    PoolWithTag = (struct _EX_RUNDOWN_REF *)v186;
LABEL_127:
    P = PoolWithTag;
    v158 = PoolWithTag;
    v187 = v84;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v84);
      PoolWithTag = (struct _EX_RUNDOWN_REF *)P;
      v158 = (struct _EX_RUNDOWN_REF *)P;
    }
    goto LABEL_129;
  }
  v82 = 0xFFFFFFFFFFFFFFFFuLL % v84;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v84 >= 8 )
  {
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(v83, 8LL * v84, 0x4B677844u);
    goto LABEL_127;
  }
LABEL_129:
  v191[2] = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_134:
    P = 0LL;
    v187 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v152, v82);
    return 3221225495LL;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v203, v84);
  v86 = (struct _EX_RUNDOWN_REF *)v203[0];
  v161 = (struct _EX_RUNDOWN_REF *)v203[0];
  if ( !v203[0] )
  {
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v203);
    if ( P != v186 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_134;
  }
  for ( i = 0; ; ++i )
  {
    v88 = (const struct DXGADAPTER *)v157;
    v165 = v157;
    v174[1] = v157;
    if ( i >= v84 )
      break;
    if ( i )
    {
      v175 = *(_DWORD *)(*(_QWORD *)(v159[187].Count + 8LL * i) + 416LL);
      v96 = (unsigned int *)(v176[182].Count + 4LL * (i - 1));
      if ( v96 + 1 < v96 || (unsigned __int64)(v96 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v97 = *v96;
      v193 = v97;
      v98 = (struct _EX_RUNDOWN_REF **)&v86[i];
      AllocationSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationSafe(
                                                    v180,
                                                    (DXGALLOCATIONREFERENCE *)v191,
                                                    v97);
      DXGALLOCATIONREFERENCE::MoveAssign(v98, AllocationSafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v191, v100);
      v89 = *v98;
      if ( !*v98 )
      {
        v103 = (_QWORD *)WdLogNewEntry5_WdError(v102, v101);
        v103[3] = v97;
        v103[4] = -1073741811LL;
        v103[5] = 2275LL;
        WdLogEvent5_WdError(v103);
        v51 = -1073741811;
        v155 = -1073741811;
        PoolWithTag = v158;
        v84 = v149;
        v104 = v151;
        goto LABEL_185;
      }
      v105 = v159;
      v199 = *(_QWORD *)(*(_QWORD *)(v159[187].Count + 8LL * i) + 16LL);
      v196 = *(_QWORD *)(v89[1].Count + 16);
      v106 = *(_QWORD *)(v196 + 16);
      v198 = v106;
      v197 = *(_QWORD *)(v199 + 16);
      v107 = *(_QWORD *)(v197 + 16);
      v195[1] = v107;
      if ( v106 != v107 )
      {
        _mm_lfence();
        v108 = (_QWORD *)WdLogNewEntry5_WdError(v107, v106);
        v108[3] = *(_QWORD *)(*(_QWORD *)(v159[187].Count + 8LL * i) + 16LL);
        v108[4] = *v98;
        v108[5] = -1073741811LL;
        WdLogEvent5_WdError(v108);
        v51 = -1073741811;
        v155 = -1073741811;
        PoolWithTag = v158;
        v84 = v149;
        v104 = v151;
        goto LABEL_185;
      }
      if ( BYTE4(v7[43].Ptr) )
        v109 = (struct _EX_RUNDOWN_REF *)((char *)&v7[8 * (unsigned __int64)(i * HIDWORD(v7[71].Ptr)) + 74]
                                        + HIDWORD(v7[71].Ptr) * ((8 * LODWORD(v7[72].Count) + 199) & 0xFFFFFFF8));
      else
        v109 = v7 + 62;
      v109->Count = *(ULONG_PTR *)(v89[6].Count + 16);
      if ( !*((_BYTE *)v151 + 2626) )
      {
        if ( BYTE4(v7[43].Ptr) )
          v110 = (struct _EX_RUNDOWN_REF *)((char *)&v7[8 * (unsigned __int64)(i * HIDWORD(v7[71].Ptr)) + 73]
                                          + HIDWORD(v7[71].Ptr) * ((8 * LODWORD(v7[72].Count) + 199) & 0xFFFFFFF8));
        else
          v110 = v7 + 69;
        v110->Count = *(ULONG_PTR *)(*(_QWORD *)(v105[187].Count + 8LL * i) + 184LL);
      }
      LODWORD(v7[17].Count) |= 1 << v175;
      v111 = *(_QWORD *)(8LL * i + v105[187].Count);
      if ( (*(_DWORD *)(v111 + 420) & 0x10) == 0 )
      {
        v94 = 8LL * i + LODWORD(v7[67].Count);
        v95 = *(_QWORD *)(v111 + 272);
        goto LABEL_167;
      }
    }
    else
    {
      v89 = v152;
      if ( BYTE4(v7[43].Ptr) )
        v90 = (struct _EX_RUNDOWN_REF *)((char *)v7
                                       + HIDWORD(v7[71].Ptr) * ((8 * LODWORD(v7[72].Count) + 199) & 0xFFFFFFF8)
                                       + 592);
      else
        v90 = v7 + 62;
      v90->Count = *(ULONG_PTR *)(v152[6].Count + 16);
      v91 = v151;
      if ( !*((_BYTE *)v151 + 2626) )
      {
        if ( BYTE4(v7[43].Ptr) )
        {
          v92 = (struct _EX_RUNDOWN_REF *)((char *)v7
                                         + HIDWORD(v7[71].Ptr) * ((8 * LODWORD(v7[72].Count) + 199) & 0xFFFFFFF8)
                                         + 584);
          v91 = v151;
        }
        else
        {
          v92 = v7 + 69;
        }
        v92->Count = v160[23].Count;
      }
      if ( DXGADAPTER::IsDxgmms2(v91) && v93 && (*(_DWORD *)(v93 + 420) & 0x10) == 0 )
      {
        v94 = LODWORD(v7[67].Count);
        v95 = *(_QWORD *)(v93 + 272);
LABEL_167:
        *(ULONG_PTR *)((char *)&v7->Count + v94) = v95;
      }
    }
    if ( BYTE4(v7[43].Ptr) )
      v112 = (struct _EX_RUNDOWN_REF *)((char *)&v7[8 * (unsigned __int64)(i * HIDWORD(v7[71].Ptr)) + 77]
                                      + HIDWORD(v7[71].Ptr) * ((8 * LODWORD(v7[72].Count) + 199) & 0xFFFFFFF8));
    else
      v112 = v7 + 61;
    v51 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, struct _EX_RUNDOWN_REF *, _QWORD))(*(_QWORD *)(*((_QWORD *)v150 + 80) + 8LL)
                                                                                         + 424LL))(
            *((_QWORD *)v168 + 95),
            v89[3].Count,
            v112,
            *((_QWORD *)v150 + 81));
    v155 = v51;
    if ( v51 < 0 )
    {
      v115 = WdLogNewEntry5_WdError(v114, v113);
      *(_QWORD *)(v115 + 24) = v89;
      *(_QWORD *)(v115 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v115);
      PoolWithTag = v158;
      v84 = v149;
      break;
    }
    v116 = v112->Count;
    PoolWithTag = v158;
    v158[i].Count = v116;
    ++v157;
    v117 = v89[5].Count;
    if ( v117 && (*(_DWORD *)(v117 + 4) & 8) != 0 )
      v118 = *(_QWORD *)(*(_QWORD *)(v117 + 56) + 184LL);
    else
      v118 = 0LL;
    if ( BYTE4(v7[43].Ptr) )
      *(ULONG_PTR *)((char *)&v7[8 * (unsigned __int64)(i * HIDWORD(v7[71].Ptr)) + 78].Count
                   + HIDWORD(v7[71].Ptr) * ((8 * LODWORD(v7[72].Count) + 199) & 0xFFFFFFF8)) = v118;
    else
      v7[70].Count = v118;
    LODWORD(v7->Count) |= 0x1000000u;
    v119 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v119[3] = v8;
    v119[4] = v8[2].Count;
    v119[5] = HIDWORD(v8[15].Ptr);
    v119[6] = v8[9].Count;
    v119[7] = v8[1].Count;
    WdLogEvent5_WdPresentTokenEvent(v119);
    if ( !v160 && (v8[4].Count & 2) != 0 )
    {
      HIDWORD(v7->Ptr) |= 2u;
      v7[59].Count = v8[3].Count;
    }
    v84 = v149;
    v86 = v161;
  }
  v104 = v151;
LABEL_185:
  HIDWORD(v7[17].Ptr) = v84;
  if ( v51 < 0 || (*((_DWORD *)v104 + 507) & 0x20) == 0 )
    goto LABEL_217;
  memset(&v200, 0, sizeof(v200));
  v200.Flags.Value = 0x2000;
  if ( v177 )
  {
    v200.PrivateDriverDataSize = *((_DWORD *)v177 + 2);
    v200.pPrivateDriverData = (char *)v177 + 16;
  }
  v204 = 0LL;
  v206 = 0;
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&v204, v84);
  pAllocationList = (char *)v204;
  v200.pAllocationList = (DXGK_ALLOCATIONLIST *)v204;
  if ( v204 )
  {
    v121 = *((_DWORD *)v104 + 509);
    v147 = (v121 & 0x80u) != 0 && (v121 & 0x40) == 0;
    v122 = 0;
    if ( v149 )
    {
      v123 = 0LL;
      v124 = 0LL;
      v125 = v147;
      v126 = v160;
      v127 = v159;
      while ( 1 )
      {
        if ( v126 )
          v128 = *(_WORD *)(*(_QWORD *)(v127[187].Count + v124 * 8) + 416LL);
        else
          v128 = 0;
        *(_WORD *)&pAllocationList[v123 + 26] = v128;
        if ( v122 )
          v129 = (struct _EX_RUNDOWN_REF *)v161[v124].Count;
        else
          v129 = v152;
        if ( v126 )
          v125 = *(_BYTE *)(*(_QWORD *)(v127[187].Count + v124 * 8) + 455LL);
        *(struct _EX_RUNDOWN_REF *)((char *)&v200.pAllocationList->hDeviceSpecificAllocation + v123) = v129[4];
        v130 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v150 + 80) + 8LL)
                                                                            + 256LL))(
                 *((_QWORD *)v150 + 81),
                 v129[3].Count,
                 v125,
                 *(unsigned __int16 *)((char *)&v200.pAllocationList[1].hDeviceSpecificAllocation + v123 + 2));
        *(_QWORD *)((char *)&v200.pAllocationList->8 + v123) = v130;
        ++v122;
        ++v124;
        v123 += 32LL;
        if ( v122 >= v149 )
          break;
        pAllocationList = (char *)v200.pAllocationList;
      }
      v7 = v169;
      v8 = v167;
      PoolWithTag = v158;
      v104 = v151;
    }
    v200.FlipInterval = HIDWORD(v7[15].Ptr);
    v200.Flags.Value ^= (*(_WORD *)&v200.Flags.0 ^ (unsigned __int16)(LODWORD(v7->Count) >> 11)) & 0x1700;
    v200.NumSrcAllocations = v149;
    if ( *((_BYTE *)v104 + 2626) )
      Ptr = 0LL;
    else
      Ptr = v160[23].Ptr;
    v51 = ADAPTER_RENDER::DdiPresent(v150, Ptr, &v200);
    v88 = (const struct DXGADAPTER *)v204;
    if ( v51 < 0 )
    {
      if ( v204 != v205 && v204 )
        ExFreePoolWithTag(v204, 0);
      goto LABEL_224;
    }
    if ( v204 != v205 && v204 )
      ExFreePoolWithTag(v204, 0);
LABEL_217:
    if ( v156 && (v7->Count & 0x1000000) != 0 )
    {
      v132 = 0LL;
      v183 = 0LL;
      if ( *((int *)v104 + 643) >= 2500 )
      {
        v133 = ReadPresentDirtyRectsData(v88, v148, (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v8, &v183);
        v136 = v133;
        if ( v133 < 0 )
        {
          v137 = WdLogNewEntry5_WdError(v135, v134);
          *(_QWORD *)(v137 + 24) = v136;
          WdLogEvent5_WdError(v137);
          goto LABEL_224;
        }
        v132 = v183;
      }
      v7[4].Count = (ULONG_PTR)v132;
    }
  }
LABEL_224:
  if ( v51 < 0 )
  {
    if ( v157 )
    {
      v138 = v165;
      if ( v160 )
      {
        v139 = v178;
        v140 = (char *)PoolWithTag - v178;
        v141 = v179;
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v141 + 80) + 8LL) + 432LL))(
            *((_QWORD *)v141 + 81),
            (unsigned int)(1 << *(_DWORD *)(*(_QWORD *)v139 + 416LL)),
            *(_QWORD *)&v140[v139],
            0LL);
          v139 += 8LL;
          --v138;
        }
        while ( v138 );
      }
      else
      {
        v142 = v179;
        do
        {
          (*(void (__fastcall **)(_QWORD, __int64, ULONG_PTR, _QWORD))(*(_QWORD *)(*((_QWORD *)v142 + 80) + 8LL) + 432LL))(
            *((_QWORD *)v142 + 81),
            1LL,
            PoolWithTag->Count,
            0LL);
          ++PoolWithTag;
          --v138;
        }
        while ( v138 );
      }
      v8 = v167;
      v7 = v169;
    }
    v143 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v143[3] = v8;
    v143[4] = v8[2].Count;
    v143[5] = HIDWORD(v8[15].Ptr);
    v143[6] = v8[9].Count;
    v143[7] = v8[1].Count;
    WdLogEvent5_WdPresentTokenEvent(v143);
    HIDWORD(v8[7].Ptr) |= 0x1000000u;
    LODWORD(v7->Count) &= ~0x1000000u;
    v51 = 0;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v203);
  if ( P != v186 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v187 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v152, v144);
  return (unsigned int)v51;
}
