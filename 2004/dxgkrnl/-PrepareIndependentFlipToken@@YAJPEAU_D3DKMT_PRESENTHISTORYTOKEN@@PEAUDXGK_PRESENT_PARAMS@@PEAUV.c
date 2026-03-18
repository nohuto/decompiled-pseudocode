/*
 * XREFs of ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0106090
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C0104170 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C023AF74 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002B94 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007264 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C00142F0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ??0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C0024578 (--0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C004727C (-GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?IsHdrEnabled@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0047378 (-IsHdrEnabled@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C00DB840 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00FD140 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C014FC8C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C0154360 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C016D8CC (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C016DDF8 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C016E398 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x1C016EF58 (-UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C016F088 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ?GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ @ 0x1C0213208 (-GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ.c)
 *     ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1C02551FC (-IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C0281750 (-ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAPEAVCRefCoun.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C02A31E8 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
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
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rax
  DXGADAPTER *v68; // r13
  __int64 v69; // rdx
  int v70; // eax
  __int64 Count_low; // rcx
  __int64 v72; // rcx
  __int64 v73; // rax
  int v74; // ecx
  int v75; // r8d
  int v76; // edx
  __int64 v77; // rax
  int v78; // edx
  char v79; // cl
  __int64 v80; // rax
  unsigned __int64 v81; // rdx
  POOL_TYPE v82; // r9d
  unsigned int v83; // r15d
  struct _EX_RUNDOWN_REF *PoolWithTag; // r13
  struct _EX_RUNDOWN_REF *v85; // r9
  unsigned int i; // r14d
  const struct DXGADAPTER *v87; // rcx
  struct _EX_RUNDOWN_REF *v88; // r15
  struct _EX_RUNDOWN_REF *v89; // rdx
  DXGADAPTER *v90; // rax
  struct _EX_RUNDOWN_REF *v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  ULONG_PTR v94; // rax
  unsigned int *v95; // rdx
  __int64 v96; // rsi
  struct _EX_RUNDOWN_REF **v97; // r13
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rcx
  _QWORD *v102; // rax
  DXGADAPTER *v103; // r14
  struct _EX_RUNDOWN_REF *v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rcx
  _QWORD *v107; // rax
  struct _EX_RUNDOWN_REF *v108; // rdx
  struct _EX_RUNDOWN_REF *v109; // rdx
  __int64 v110; // r8
  struct _EX_RUNDOWN_REF *v111; // r13
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // rax
  ULONG_PTR v115; // rax
  ULONG_PTR v116; // rcx
  ULONG_PTR v117; // r8
  _QWORD *v118; // rax
  char *pAllocationList; // rdx
  int v120; // eax
  UINT v121; // r15d
  __int64 v122; // r14
  __int64 v123; // rsi
  unsigned __int8 v124; // r13
  struct _EX_RUNDOWN_REF *v125; // rdi
  struct _EX_RUNDOWN_REF *v126; // rbx
  __int16 v127; // ax
  struct _EX_RUNDOWN_REF *v128; // rdx
  __int64 v129; // rax
  PVOID Ptr; // rdx
  struct CRefCountedBuffer *v131; // rax
  int v132; // eax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r14
  __int64 v136; // rax
  __int64 v137; // rsi
  ULONG_PTR v138; // r14
  char *v139; // r13
  ADAPTER_RENDER *v140; // rbx
  ADAPTER_RENDER *v141; // rdi
  _QWORD *v142; // rax
  __int64 v143; // rdx
  int v144; // [rsp+30h] [rbp-418h]
  int v145; // [rsp+30h] [rbp-418h]
  bool v146; // [rsp+80h] [rbp-3C8h]
  unsigned int v147; // [rsp+84h] [rbp-3C4h] BYREF
  UINT v148; // [rsp+88h] [rbp-3C0h]
  ADAPTER_RENDER *v149; // [rsp+90h] [rbp-3B8h]
  DXGADAPTER *v150; // [rsp+98h] [rbp-3B0h]
  struct _EX_RUNDOWN_REF *v151; // [rsp+A0h] [rbp-3A8h] BYREF
  int v152; // [rsp+A8h] [rbp-3A0h] BYREF
  unsigned int v153; // [rsp+ACh] [rbp-39Ch] BYREF
  int v154; // [rsp+B0h] [rbp-398h]
  int v155; // [rsp+B4h] [rbp-394h] BYREF
  unsigned int v156; // [rsp+B8h] [rbp-390h]
  struct _EX_RUNDOWN_REF *v157; // [rsp+C0h] [rbp-388h]
  struct _EX_RUNDOWN_REF *v158; // [rsp+C8h] [rbp-380h]
  struct _EX_RUNDOWN_REF *v159; // [rsp+D0h] [rbp-378h]
  struct _EX_RUNDOWN_REF *v160; // [rsp+D8h] [rbp-370h]
  int v161; // [rsp+E0h] [rbp-368h] BYREF
  int v162; // [rsp+E4h] [rbp-364h] BYREF
  enum _D3DDDI_HDR_METADATA_TYPE v163; // [rsp+E8h] [rbp-360h] BYREF
  unsigned int v164; // [rsp+ECh] [rbp-35Ch]
  int v165; // [rsp+F0h] [rbp-358h] BYREF
  struct _EX_RUNDOWN_REF *v166; // [rsp+F8h] [rbp-350h]
  struct CRefCountedBuffer *v167; // [rsp+100h] [rbp-348h]
  struct _EX_RUNDOWN_REF *v168; // [rsp+108h] [rbp-340h]
  int v169; // [rsp+110h] [rbp-338h] BYREF
  int v170; // [rsp+114h] [rbp-334h] BYREF
  int v171; // [rsp+118h] [rbp-330h] BYREF
  int v172; // [rsp+11Ch] [rbp-32Ch] BYREF
  _DWORD v173[2]; // [rsp+120h] [rbp-328h] BYREF
  int v174; // [rsp+128h] [rbp-320h]
  struct _EX_RUNDOWN_REF *v175; // [rsp+130h] [rbp-318h]
  struct CRefCountedBuffer *v176; // [rsp+138h] [rbp-310h]
  ULONG_PTR v177; // [rsp+140h] [rbp-308h]
  ADAPTER_RENDER *v178; // [rsp+148h] [rbp-300h]
  __int64 v179; // [rsp+150h] [rbp-2F8h]
  __int64 v180; // [rsp+158h] [rbp-2F0h]
  ULONG_PTR v181; // [rsp+160h] [rbp-2E8h]
  struct CRefCountedBuffer *v182; // [rsp+168h] [rbp-2E0h] BYREF
  _BYTE v183[16]; // [rsp+170h] [rbp-2D8h] BYREF
  PVOID P; // [rsp+180h] [rbp-2C8h]
  _BYTE v185[32]; // [rsp+188h] [rbp-2C0h] BYREF
  unsigned int v186; // [rsp+1A8h] [rbp-2A0h]
  __int64 v187; // [rsp+1B0h] [rbp-298h] BYREF
  __int64 v188; // [rsp+1B8h] [rbp-290h] BYREF
  __int64 v189; // [rsp+1C0h] [rbp-288h] BYREF
  struct _EX_RUNDOWN_REF *v190[7]; // [rsp+1C8h] [rbp-280h] BYREF
  struct tagRECT v191; // [rsp+200h] [rbp-248h] BYREF
  int v192; // [rsp+210h] [rbp-238h]
  struct _D3DDDI_HDR_METADATA_HDR10 v193; // [rsp+218h] [rbp-230h] BYREF
  _QWORD v194[2]; // [rsp+238h] [rbp-210h] BYREF
  __int64 v195; // [rsp+248h] [rbp-200h]
  __int64 v196; // [rsp+250h] [rbp-1F8h]
  __int64 v197; // [rsp+258h] [rbp-1F0h]
  __int64 v198; // [rsp+260h] [rbp-1E8h]
  _DXGKARG_PRESENT v199; // [rsp+270h] [rbp-1D8h] BYREF
  __int128 v200; // [rsp+320h] [rbp-128h] BYREF
  struct tagRECT v201; // [rsp+330h] [rbp-118h] BYREF
  _QWORD v202[6]; // [rsp+340h] [rbp-108h] BYREF
  PVOID v203; // [rsp+370h] [rbp-D8h] BYREF
  _BYTE v204[128]; // [rsp+378h] [rbp-D0h] BYREF
  int v205; // [rsp+3F8h] [rbp-50h]

  v159 = a4;
  v7 = a3;
  v168 = a3;
  v158 = a2;
  v8 = a1;
  v166 = a1;
  v190[4] = a1;
  v190[5] = a2;
  v190[3] = a3;
  v190[6] = a4;
  Count = a6;
  v176 = a6;
  if ( LODWORD(v8->Count) != 2 || a4 && !a2 )
    return 0LL;
  v10 = 0LL;
  if ( a4 )
  {
    Count = (struct CRefCountedBuffer *)a4[2].Count;
    v167 = Count;
    v11 = *(_QWORD *)(*((_QWORD *)Count + 2) + 16LL);
  }
  else
  {
    v10 = *(_QWORD *)a5;
    v11 = *((_QWORD *)a5 + 2);
    v167 = (struct CRefCountedBuffer *)*((_QWORD *)a5 + 3);
  }
  v180 = v11;
  v150 = (DXGADAPTER *)v11;
  if ( !a4 && !*(_BYTE *)(v11 + 2650) )
    return 0LL;
  a3[3].Count = 0LL;
  CurrentProcess = PsGetCurrentProcess(Count, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v16 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v15, v14)) == 0LL
    || (v18 = *((_QWORD *)Current + 1), (v179 = v18) == 0) )
  {
    v18 = v16;
    v179 = v16;
  }
  v149 = *(ADAPTER_RENDER **)(v11 + 2704);
  v190[1] = (struct _EX_RUNDOWN_REF *)v149;
  v178 = v149;
  v19 = *(ADAPTER_DISPLAY **)(v11 + 2696);
  v20 = v158;
  if ( !a4 )
    v20 = 0LL;
  v175 = v20;
  if ( a4 )
    Ptr_high = HIDWORD(v20[2].Ptr);
  else
    Ptr_high = *(_DWORD *)(v10 + 1100);
  DXGPROCESS::GetAllocationSafe(v18, (DXGALLOCATIONREFERENCE *)&v151, Ptr_high);
  v23 = v151;
  if ( !v151
    || (v22 = *(_QWORD *)(*((_QWORD *)v167 + 2) + 16LL), *(_QWORD *)(*(_QWORD *)(v151[1].Count + 16) + 16LL) != v22) )
  {
LABEL_47:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v151, v22);
    return 0LL;
  }
  v24 = v151[5].Count;
  if ( v176 && v24 && (*(_DWORD *)(v24 + 4) & 1) != 0 )
    v7[3].Count = *(ULONG_PTR *)(*(_QWORD *)(v24 + 56) + 176LL);
  if ( a4 )
    v25 = v158[187].Count;
  else
    v25 = 0LL;
  v181 = v25;
  v177 = v25;
  v153 = (*(_DWORD *)(v23[6].Count + 4) >> 6) & 0xF;
  v165 = 0;
  v155 = 0;
  v161 = 0;
  v162 = 0;
  v147 = 0;
  v152 = 0;
  v200 = 0LL;
  v201 = 0LL;
  v26 = 91LL;
  if ( !BYTE4(v7[43].Ptr) )
    v26 = 64LL;
  v160 = &v7[v26];
  (*(void (__fastcall **)(_QWORD, unsigned int *, struct _EX_RUNDOWN_REF *, ULONG_PTR, struct _EX_RUNDOWN_REF *, int *, int *, unsigned int *, struct _EX_RUNDOWN_REF *, int *, int *, int *, __int128 *, struct tagRECT *))(*(_QWORD *)(*((_QWORD *)v149 + 77) + 8LL) + 408LL))(
    *((_QWORD *)v149 + 78),
    &v153,
    v8 + 9,
    v8[1].Count,
    &v7[v26],
    &v165,
    &v155,
    &v147,
    v8 + 10,
    &v161,
    &v162,
    &v152,
    &v200,
    &v201);
  v27 = v153;
  LODWORD(v8[5].Count) = v153;
  HIDWORD(v7[14].Ptr) = v27;
  RtlCopyLuid((PLUID)&v7[19], (PLUID)&v8[9]);
  v7[20].Count = v8[1].Count;
  v28 = v7->Count & 0xFFFEFFFF;
  LODWORD(v7->Count) = v28;
  if ( a4 )
  {
    v29 = v175;
    v30 = ((unsigned __int8)v28 ^ (unsigned __int8)LODWORD(v175[11].Count)) & 4 ^ v28;
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
  v35 = v150;
  v8[4].Count = (ULONG_PTR)v150;
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
    v7[22].Count = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v149 + 80) + 8LL) + 344LL))(
                     *((_QWORD *)v149 + 81),
                     Ptr_high);
    v35 = v150;
  }
  v37 = v8[7].Count;
  HIDWORD(v7[15].Ptr) = v37;
  v38 = (_DWORD *)&v7[15].Ptr + 1;
  v173[0] = 1;
  if ( !v37 && ((HIDWORD(v8[7].Ptr) & 0x800000) == 0 || (*((_DWORD *)v35 + 513) & 0x40) == 0) )
    v38 = v173;
  v39 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(*((_QWORD *)v149 + 77) + 8LL) + 512LL))(
          *((_QWORD *)v167 + 96),
          v153,
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
  if ( !v165 )
  {
    if ( v161 )
    {
      v169 = 0;
      v194[0] = 0LL;
      LOBYTE(v144) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, ULONG_PTR, unsigned int *, _DWORD, int, int *, _QWORD *))(*(_QWORD *)(*((_QWORD *)v149 + 77) + 8LL) + 400LL))(
        *((_QWORD *)v149 + 78),
        (unsigned int)(1 << HIDWORD(v7[14].Ptr)),
        v8 + 9,
        v7[20].Count,
        &v147,
        0,
        v144,
        &v169,
        v194);
      ADAPTER_DISPLAY::UpdateIndependentFlipState(v19, HIDWORD(v7[14].Ptr), v147, 0);
    }
    else if ( !v162 )
    {
LABEL_54:
      v43 = v151;
      if ( v151 )
        ExReleaseRundownProtection(v151 + 11);
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v43, v40) + 311) )
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
  v154 = 0;
  v52 = HIDWORD(v8[7].Ptr);
  if ( (v52 & 0x200000) == 0 )
  {
    v170 = 0;
    v187 = 0LL;
    LOBYTE(v144) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, ULONG_PTR, unsigned int *, _DWORD, int, int *, __int64 *))(*(_QWORD *)(*((_QWORD *)v149 + 77) + 8LL) + 400LL))(
      *((_QWORD *)v149 + 78),
      (unsigned int)(1 << HIDWORD(v7[14].Ptr)),
      v8 + 9,
      v7[20].Count,
      &v147,
      0,
      v144,
      &v170,
      &v187);
    HIDWORD(v8[7].Ptr) |= 0x1000000u;
    ADAPTER_DISPLAY::UpdateIndependentFlipState(v19, HIDWORD(v7[14].Ptr), v147, 0);
    v41 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v41[3] = 1945LL;
    goto LABEL_46;
  }
  if ( v155 || (v53 = *((_QWORD *)v149 + 2), *(_QWORD *)(v53 + 928)) && *(_BYTE *)(v53 + 2642) )
  {
    if ( (v52 & 0x400000) != 0 )
    {
      DXGDISPLAYSTATEMUTEX::DXGDISPLAYSTATEMUTEX((DXGDISPLAYSTATEMUTEX *)v183, v19);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v183);
      PostCompositionStretching = ADAPTER_DISPLAY::GetPostCompositionStretching((DXGADAPTER **)v19, HIDWORD(v7[14].Ptr));
      if ( PostCompositionStretching
        && (IsYUVAllocation(*(void **)(v151[6].Count + 16), v149)
         || DISPLAY_SOURCE::GetEnabledPlaneCountUnsafe((DISPLAY_SOURCE *)(*((_QWORD *)v19 + 14)
                                                                        + 3968LL * HIDWORD(v7[14].Ptr))) > 1) )
      {
        PostCompositionStretching = 0;
      }
      v191 = 0LL;
      v56 = !v147 && PostCompositionStretching;
      if ( !CheckAndUpdateMultiPlaneOverlayFromInternalState(
              HIDWORD(v7[14].Ptr),
              v147,
              (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *)&v8[2],
              v56,
              v149,
              v19,
              &v191) )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v183, v57);
        v172 = 0;
        v189 = 0LL;
        LOBYTE(v145) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, ULONG_PTR, unsigned int *, _DWORD, int, int *, __int64 *))(*(_QWORD *)(*((_QWORD *)v149 + 77) + 8LL) + 400LL))(
          *((_QWORD *)v149 + 78),
          (unsigned int)(1 << HIDWORD(v7[14].Ptr)),
          v8 + 9,
          v7[20].Count,
          &v147,
          0,
          v145,
          &v172,
          &v189);
        v67 = WdLogNewEntry5_WdWarning(v65, v64, v66);
        *(_QWORD *)(v67 + 24) = v147;
        WdLogEvent5_WdWarning(v67);
        HIDWORD(v8[7].Ptr) |= 0x1000000u;
        ADAPTER_DISPLAY::UpdateIndependentFlipState(v19, HIDWORD(v7[14].Ptr), v147, 0);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v183);
        goto LABEL_47;
      }
      v58 = v160;
      LOWORD(v160->Count) = WORD2(v8[92].Ptr);
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
        v200 = v60;
        v201 = v191;
        if ( (_DWORD)v60 != v191.left
          || __PAIR64__(DWORD2(v200), DWORD1(v60)) != *(_QWORD *)&v191.top
          || (v61 = 0LL, HIDWORD(v200) != v191.bottom) )
        {
          v61 = 1LL;
        }
        v152 = v61;
        if ( !(_DWORD)v61 )
        {
          v200 = 0LL;
          v201 = 0LL;
        }
        v62 = v149;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, struct tagRECT *))(*(_QWORD *)(*((_QWORD *)v149 + 77)
                                                                                                  + 8LL)
                                                                                      + 984LL))(
          *((_QWORD *)v149 + 78),
          HIDWORD(v7[14].Ptr),
          v61,
          &v200,
          &v201);
        UpdatePostComposition(HIDWORD(v7[14].Ptr), v152 != 0, DWORD2(v200) - v200, HIDWORD(v200) - DWORD1(v200), v19);
      }
      else
      {
        v62 = v149;
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, _QWORD))(*(_QWORD *)(*((_QWORD *)v62 + 77) + 8LL)
                                                                               + 416LL))(
        *((_QWORD *)v62 + 78),
        HIDWORD(v7[14].Ptr),
        v160,
        v147);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v183, v63);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v183);
    }
    else
    {
      ADAPTER_DISPLAY::UpdateIndependentFlipState(v19, HIDWORD(v7[14].Ptr), v147, 1u);
    }
    LODWORD(v7->Count) = (v152 << 31) | (LODWORD(v7->Count) ^ (LODWORD(v7->Count) ^ (v155 << 26)) & 0x4000000) & 0x7FFFFFFF;
    *(_OWORD *)((char *)&v7[53].Ptr + 4) = v200;
    *(struct tagRECT *)((char *)&v7[55].Ptr + 4) = v201;
  }
  else
  {
    if ( HIDWORD(v8[93].Ptr) - HIDWORD(v8[92].Ptr) != HIDWORD(v8[94].Ptr)
      || LODWORD(v8[94].Count) - LODWORD(v8[93].Count) != LODWORD(v8[95].Count)
      || (v52 & 0x400000) != 0 )
    {
      v171 = 0;
      v188 = 0LL;
      LOBYTE(v144) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, struct _EX_RUNDOWN_REF *, ULONG_PTR, unsigned int *, _DWORD, int, int *, __int64 *))(*(_QWORD *)(*((_QWORD *)v149 + 77) + 8LL) + 400LL))(
        *((_QWORD *)v149 + 78),
        (unsigned int)(1 << HIDWORD(v7[14].Ptr)),
        v8 + 9,
        v7[20].Count,
        &v147,
        0,
        v144,
        &v171,
        &v188);
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
  v68 = v150;
  if ( (*((_DWORD *)v150 + 644) & 0x10) != 0 )
  {
    if ( !v19 || !ADAPTER_DISPLAY::IsHdrEnabled(v19, v153) )
    {
      LODWORD(v7[44].Count) = 0;
LABEL_115:
      LODWORD(v7->Count) |= 0x40000000u;
      goto LABEL_116;
    }
    v70 = LODWORD(v7->Count) ^ (LODWORD(v7->Count) ^ (HIDWORD(v8[7].Ptr) << 24)) & 0x40000000;
    LODWORD(v7->Count) = v70;
    Count_low = LODWORD(v8[20].Count);
    LODWORD(v7[44].Count) = Count_low;
    if ( (v70 & 0x40000000) != 0 )
    {
      if ( !(_DWORD)Count_low )
      {
LABEL_111:
        v163 = D3DDDI_HDR_METADATA_TYPE_NONE;
        memset(&v193, 0, sizeof(v193));
        if ( (unsigned int)PopulateHDRMetadataFromDisplay(HIDWORD(v7[14].Ptr), v19, &v193, &v163) )
          goto LABEL_116;
        *(struct _D3DDDI_HDR_METADATA_HDR10 *)((char *)&v7[44].Ptr + 4) = v193;
        LODWORD(v7[44].Count) = v163;
        goto LABEL_115;
      }
      v72 = (unsigned int)(Count_low - 1);
      if ( (_DWORD)v72 )
      {
        if ( (_DWORD)v72 == 1 )
        {
          *(_OWORD *)((char *)&v7[44].Ptr + 4) = *(_OWORD *)((char *)&v8[20].Ptr + 4);
          *(_OWORD *)((char *)&v7[46].Ptr + 4) = *(_OWORD *)((char *)&v8[22].Ptr + 4);
          *(_OWORD *)((char *)&v7[48].Ptr + 4) = *(_OWORD *)((char *)&v8[24].Ptr + 4);
          *(_OWORD *)((char *)&v7[50].Ptr + 4) = *(_OWORD *)((char *)&v8[26].Ptr + 4);
          *(struct _EX_RUNDOWN_REF *)((char *)v7 + 420) = *(struct _EX_RUNDOWN_REF *)((char *)v8 + 228);
          v74 = 2;
        }
        else
        {
          v73 = WdLogNewEntry5_WdAssertion(v72, v69);
          *(_QWORD *)(v73 + 24) = 2151LL;
          WdLogEvent5_WdAssertion(v73);
          LODWORD(v7->Count) &= ~0x40000000u;
          v74 = v7[44].Count;
        }
      }
      else
      {
        *(_OWORD *)((char *)&v7[44].Ptr + 4) = *(_OWORD *)((char *)&v8[20].Ptr + 4);
        *(struct _EX_RUNDOWN_REF *)((char *)v7 + 372) = *(struct _EX_RUNDOWN_REF *)((char *)v8 + 180);
        HIDWORD(v7[47].Ptr) = HIDWORD(v8[23].Ptr);
        v74 = 1;
      }
    }
    else
    {
      v75 = v70;
      v76 = Count_low;
      if ( (_DWORD)Count_low != 1 && (_DWORD)Count_low != 2 && (_DWORD)Count_low )
      {
        v77 = WdLogNewEntry5_WdAssertion(Count_low, (unsigned int)Count_low);
        *(_QWORD *)(v77 + 24) = 2159LL;
        WdLogEvent5_WdAssertion(v77);
        v75 = v7->Count;
        v76 = v7[44].Count;
      }
      LODWORD(v7->Count) = v75 | 0x40000000;
      v74 = v76;
      v78 = v76 - 1;
      if ( !v78 )
      {
        LODWORD(v7[44].Count) = 134217729;
        goto LABEL_116;
      }
      if ( v78 == 1 )
      {
        v74 = -2147483646;
        LODWORD(v7[44].Count) = -2147483646;
      }
    }
    if ( v74 )
      goto LABEL_116;
    goto LABEL_111;
  }
LABEL_116:
  v79 = v147;
  HIDWORD(v8[101].Ptr) = v147;
  v80 = 71LL;
  if ( !BYTE4(v7[43].Ptr) )
    v80 = 60LL;
  LODWORD(v7[v80].Count) ^= (LODWORD(v7[v80].Count) ^ (1 << v79)) & 0x3FF;
  v148 = 1;
  if ( DXGADAPTER::IsDxgmms2(v68) && a4 )
  {
    v83 = HIDWORD(v175[11].Ptr) + 1;
    v148 = v83;
  }
  else
  {
    v83 = v82;
  }
  v156 = 0;
  PoolWithTag = 0LL;
  v157 = 0LL;
  P = 0LL;
  v186 = 0;
  if ( v83 <= 4 )
  {
    PoolWithTag = (struct _EX_RUNDOWN_REF *)v185;
LABEL_126:
    P = PoolWithTag;
    v157 = PoolWithTag;
    v186 = v83;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * v83);
      PoolWithTag = (struct _EX_RUNDOWN_REF *)P;
      v157 = (struct _EX_RUNDOWN_REF *)P;
    }
    goto LABEL_128;
  }
  v81 = 0xFFFFFFFFFFFFFFFFuLL % v83;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v83 >= 8 )
  {
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(v82, 8LL * v83, 0x4B677844u);
    goto LABEL_126;
  }
LABEL_128:
  v190[2] = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_133:
    P = 0LL;
    v186 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v151, v81);
    return 3221225495LL;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v202, v83);
  v85 = (struct _EX_RUNDOWN_REF *)v202[0];
  v160 = (struct _EX_RUNDOWN_REF *)v202[0];
  if ( !v202[0] )
  {
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v202);
    if ( P != v185 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_133;
  }
  for ( i = 0; ; ++i )
  {
    v87 = (const struct DXGADAPTER *)v156;
    v164 = v156;
    v173[1] = v156;
    if ( i >= v83 )
      break;
    if ( i )
    {
      v174 = *(_DWORD *)(*(_QWORD *)(v158[187].Count + 8LL * i) + 416LL);
      v95 = (unsigned int *)(v175[182].Count + 4LL * (i - 1));
      if ( v95 + 1 < v95 || (unsigned __int64)(v95 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v96 = *v95;
      v192 = v96;
      v97 = (struct _EX_RUNDOWN_REF **)&v85[i];
      AllocationSafe = DXGPROCESS::GetAllocationSafe(v179, (DXGALLOCATIONREFERENCE *)v190, v96);
      DXGALLOCATIONREFERENCE::MoveAssign(v97, AllocationSafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v190, v99);
      v88 = *v97;
      if ( !*v97 )
      {
        v102 = (_QWORD *)WdLogNewEntry5_WdError(v101, v100);
        v102[3] = v96;
        v102[4] = -1073741811LL;
        v102[5] = 2272LL;
        WdLogEvent5_WdError(v102);
        v51 = -1073741811;
        v154 = -1073741811;
        PoolWithTag = v157;
        v83 = v148;
        v103 = v150;
        goto LABEL_184;
      }
      v104 = v158;
      v198 = *(_QWORD *)(*(_QWORD *)(v158[187].Count + 8LL * i) + 16LL);
      v195 = *(_QWORD *)(v88[1].Count + 16);
      v105 = *(_QWORD *)(v195 + 16);
      v197 = v105;
      v196 = *(_QWORD *)(v198 + 16);
      v106 = *(_QWORD *)(v196 + 16);
      v194[1] = v106;
      if ( v105 != v106 )
      {
        _mm_lfence();
        v107 = (_QWORD *)WdLogNewEntry5_WdError(v106, v105);
        v107[3] = *(_QWORD *)(*(_QWORD *)(v158[187].Count + 8LL * i) + 16LL);
        v107[4] = *v97;
        v107[5] = -1073741811LL;
        WdLogEvent5_WdError(v107);
        v51 = -1073741811;
        v154 = -1073741811;
        PoolWithTag = v157;
        v83 = v148;
        v103 = v150;
        goto LABEL_184;
      }
      if ( BYTE4(v7[43].Ptr) )
        v108 = (struct _EX_RUNDOWN_REF *)((char *)&v7[8 * (unsigned __int64)(i * HIDWORD(v7[71].Ptr)) + 74]
                                        + HIDWORD(v7[71].Ptr) * ((8 * LODWORD(v7[72].Count) + 199) & 0xFFFFFFF8));
      else
        v108 = v7 + 62;
      v108->Count = *(ULONG_PTR *)(v88[6].Count + 16);
      if ( !*((_BYTE *)v150 + 2650) )
      {
        if ( BYTE4(v7[43].Ptr) )
          v109 = (struct _EX_RUNDOWN_REF *)((char *)&v7[8 * (unsigned __int64)(i * HIDWORD(v7[71].Ptr)) + 73]
                                          + HIDWORD(v7[71].Ptr) * ((8 * LODWORD(v7[72].Count) + 199) & 0xFFFFFFF8));
        else
          v109 = v7 + 69;
        v109->Count = *(ULONG_PTR *)(*(_QWORD *)(v104[187].Count + 8LL * i) + 184LL);
      }
      LODWORD(v7[17].Count) |= 1 << v174;
      v110 = *(_QWORD *)(8LL * i + v104[187].Count);
      if ( (*(_DWORD *)(v110 + 420) & 0x10) == 0 )
      {
        v93 = 8LL * i + LODWORD(v7[67].Count);
        v94 = *(_QWORD *)(v110 + 272);
        goto LABEL_166;
      }
    }
    else
    {
      v88 = v151;
      if ( BYTE4(v7[43].Ptr) )
        v89 = (struct _EX_RUNDOWN_REF *)((char *)v7
                                       + HIDWORD(v7[71].Ptr) * ((8 * LODWORD(v7[72].Count) + 199) & 0xFFFFFFF8)
                                       + 592);
      else
        v89 = v7 + 62;
      v89->Count = *(ULONG_PTR *)(v151[6].Count + 16);
      v90 = v150;
      if ( !*((_BYTE *)v150 + 2650) )
      {
        if ( BYTE4(v7[43].Ptr) )
        {
          v91 = (struct _EX_RUNDOWN_REF *)((char *)v7
                                         + HIDWORD(v7[71].Ptr) * ((8 * LODWORD(v7[72].Count) + 199) & 0xFFFFFFF8)
                                         + 584);
          v90 = v150;
        }
        else
        {
          v91 = v7 + 69;
        }
        v91->Count = v159[23].Count;
      }
      if ( DXGADAPTER::IsDxgmms2(v90) && v92 && (*(_DWORD *)(v92 + 420) & 0x10) == 0 )
      {
        v93 = LODWORD(v7[67].Count);
        v94 = *(_QWORD *)(v92 + 272);
LABEL_166:
        *(ULONG_PTR *)((char *)&v7->Count + v93) = v94;
      }
    }
    if ( BYTE4(v7[43].Ptr) )
      v111 = (struct _EX_RUNDOWN_REF *)((char *)&v7[8 * (unsigned __int64)(i * HIDWORD(v7[71].Ptr)) + 77]
                                      + HIDWORD(v7[71].Ptr) * ((8 * LODWORD(v7[72].Count) + 199) & 0xFFFFFFF8));
    else
      v111 = v7 + 61;
    v51 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, struct _EX_RUNDOWN_REF *, _QWORD))(*(_QWORD *)(*((_QWORD *)v149 + 80) + 8LL)
                                                                                         + 424LL))(
            *((_QWORD *)v167 + 95),
            v88[3].Count,
            v111,
            *((_QWORD *)v149 + 81));
    v154 = v51;
    if ( v51 < 0 )
    {
      v114 = WdLogNewEntry5_WdError(v113, v112);
      *(_QWORD *)(v114 + 24) = v88;
      *(_QWORD *)(v114 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v114);
      PoolWithTag = v157;
      v83 = v148;
      break;
    }
    v115 = v111->Count;
    PoolWithTag = v157;
    v157[i].Count = v115;
    ++v156;
    v116 = v88[5].Count;
    if ( v116 && (*(_DWORD *)(v116 + 4) & 8) != 0 )
      v117 = *(_QWORD *)(*(_QWORD *)(v116 + 56) + 184LL);
    else
      v117 = 0LL;
    if ( BYTE4(v7[43].Ptr) )
      *(ULONG_PTR *)((char *)&v7[8 * (unsigned __int64)(i * HIDWORD(v7[71].Ptr)) + 78].Count
                   + HIDWORD(v7[71].Ptr) * ((8 * LODWORD(v7[72].Count) + 199) & 0xFFFFFFF8)) = v117;
    else
      v7[70].Count = v117;
    LODWORD(v7->Count) |= 0x1000000u;
    v118 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v118[3] = v8;
    v118[4] = v8[2].Count;
    v118[5] = HIDWORD(v8[15].Ptr);
    v118[6] = v8[9].Count;
    v118[7] = v8[1].Count;
    WdLogEvent5_WdPresentTokenEvent(v118);
    if ( !v159 && (v8[4].Count & 2) != 0 )
    {
      HIDWORD(v7->Ptr) |= 2u;
      v7[59].Count = v8[3].Count;
    }
    v83 = v148;
    v85 = v160;
  }
  v103 = v150;
LABEL_184:
  HIDWORD(v7[17].Ptr) = v83;
  if ( v51 < 0 || (*((_DWORD *)v103 + 513) & 0x20) == 0 )
    goto LABEL_216;
  memset(&v199, 0, sizeof(v199));
  v199.Flags.Value = 0x2000;
  if ( v176 )
  {
    v199.PrivateDriverDataSize = *((_DWORD *)v176 + 2);
    v199.pPrivateDriverData = (char *)v176 + 16;
  }
  v203 = 0LL;
  v205 = 0;
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&v203, v83);
  pAllocationList = (char *)v203;
  v199.pAllocationList = (DXGK_ALLOCATIONLIST *)v203;
  if ( v203 )
  {
    v120 = *((_DWORD *)v103 + 515);
    v146 = (v120 & 0x80u) != 0 && (v120 & 0x40) == 0;
    v121 = 0;
    if ( v148 )
    {
      v122 = 0LL;
      v123 = 0LL;
      v124 = v146;
      v125 = v159;
      v126 = v158;
      while ( 1 )
      {
        if ( v125 )
          v127 = *(_WORD *)(*(_QWORD *)(v126[187].Count + v123 * 8) + 416LL);
        else
          v127 = 0;
        *(_WORD *)&pAllocationList[v122 + 26] = v127;
        if ( v121 )
          v128 = (struct _EX_RUNDOWN_REF *)v160[v123].Count;
        else
          v128 = v151;
        if ( v125 )
          v124 = *(_BYTE *)(*(_QWORD *)(v126[187].Count + v123 * 8) + 455LL);
        *(struct _EX_RUNDOWN_REF *)((char *)&v199.pAllocationList->hDeviceSpecificAllocation + v122) = v128[4];
        v129 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v149 + 80) + 8LL)
                                                                            + 256LL))(
                 *((_QWORD *)v149 + 81),
                 v128[3].Count,
                 v124,
                 *(unsigned __int16 *)((char *)&v199.pAllocationList[1].hDeviceSpecificAllocation + v122 + 2));
        *(_QWORD *)((char *)&v199.pAllocationList->8 + v122) = v129;
        ++v121;
        ++v123;
        v122 += 32LL;
        if ( v121 >= v148 )
          break;
        pAllocationList = (char *)v199.pAllocationList;
      }
      v7 = v168;
      v8 = v166;
      PoolWithTag = v157;
      v103 = v150;
    }
    v199.FlipInterval = HIDWORD(v7[15].Ptr);
    v199.Flags.Value ^= (*(_WORD *)&v199.Flags.0 ^ (unsigned __int16)(LODWORD(v7->Count) >> 11)) & 0x1700;
    v199.NumSrcAllocations = v148;
    if ( *((_BYTE *)v103 + 2650) )
      Ptr = 0LL;
    else
      Ptr = v159[23].Ptr;
    v51 = ADAPTER_RENDER::DdiPresent(v149, Ptr, &v199);
    v87 = (const struct DXGADAPTER *)v203;
    if ( v51 < 0 )
    {
      if ( v203 != v204 && v203 )
        ExFreePoolWithTag(v203, 0);
      goto LABEL_223;
    }
    if ( v203 != v204 && v203 )
      ExFreePoolWithTag(v203, 0);
LABEL_216:
    if ( v155 && (v7->Count & 0x1000000) != 0 )
    {
      v131 = 0LL;
      v182 = 0LL;
      if ( *((int *)v103 + 649) >= 2500 )
      {
        v132 = ReadPresentDirtyRectsData(v87, v147, (const struct _D3DKMT_PRESENTHISTORYTOKEN *)v8, &v182);
        v135 = v132;
        if ( v132 < 0 )
        {
          v136 = WdLogNewEntry5_WdError(v134, v133);
          *(_QWORD *)(v136 + 24) = v135;
          WdLogEvent5_WdError(v136);
          goto LABEL_223;
        }
        v131 = v182;
      }
      v7[4].Count = (ULONG_PTR)v131;
    }
  }
LABEL_223:
  if ( v51 < 0 )
  {
    if ( v156 )
    {
      v137 = v164;
      if ( v159 )
      {
        v138 = v177;
        v139 = (char *)PoolWithTag - v177;
        v140 = v178;
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v140 + 80) + 8LL) + 432LL))(
            *((_QWORD *)v140 + 81),
            (unsigned int)(1 << *(_DWORD *)(*(_QWORD *)v138 + 416LL)),
            *(_QWORD *)&v139[v138],
            0LL);
          v138 += 8LL;
          --v137;
        }
        while ( v137 );
      }
      else
      {
        v141 = v178;
        do
        {
          (*(void (__fastcall **)(_QWORD, __int64, ULONG_PTR, _QWORD))(*(_QWORD *)(*((_QWORD *)v141 + 80) + 8LL) + 432LL))(
            *((_QWORD *)v141 + 81),
            1LL,
            PoolWithTag->Count,
            0LL);
          ++PoolWithTag;
          --v137;
        }
        while ( v137 );
      }
      v8 = v166;
      v7 = v168;
    }
    v142 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent();
    v142[3] = v8;
    v142[4] = v8[2].Count;
    v142[5] = HIDWORD(v8[15].Ptr);
    v142[6] = v8[9].Count;
    v142[7] = v8[1].Count;
    WdLogEvent5_WdPresentTokenEvent(v142);
    HIDWORD(v8[7].Ptr) |= 0x1000000u;
    LODWORD(v7->Count) &= ~0x1000000u;
    v51 = 0;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v202);
  if ( P != v185 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v186 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v151, v143);
  return (unsigned int)v51;
}
