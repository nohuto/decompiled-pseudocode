/*
 * XREFs of ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0175D10
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAD@Z @ 0x1C01752C0 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0365710 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002C48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00069FC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000A924 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000B970 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x1C001E0AC (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z @ 0x1C002B428 (--0DXGDISPLAYSTATEMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@@Z.c)
 *     ??0CIFlipPresentHistoryTokenRedirectedFlip@@QEAA@PEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C002C7B0 (--0CIFlipPresentHistoryTokenRedirectedFlip@@QEAA@PEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z @ 0x1C004A8A0 (--_EDXGALLOCATIONREFERENCE@@QEAAPEAXI@Z.c)
 *     ??0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z @ 0x1C005452C (--0CIFlipPresentHistoryTokenFlipManager@@QEAA@PEBU_D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0057310 (-GetPostCompositionStretching@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEBVCIFlipPresentHistoryTokenData@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C015B3E8 (-ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEBVCIFlipPresentHistoryTokenData@@PEAPEAVCRefCo.c)
 *     ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1C015EE98 (-IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0179F48 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C017EAE0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C01CE260 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?IsFlipManagerIFlipFeatureEnabled@CIFlipPresentHistoryToken@@SA_NXZ @ 0x1C01D918C (-IsFlipManagerIFlipFeatureEnabled@CIFlipPresentHistoryToken@@SA_NXZ.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C01ED040 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z @ 0x1C01ED3C0 (-UpdateIndependentFlipState@ADAPTER_DISPLAY@@QEAAXIIE@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESENTALLOCATIONINFO@@I@Z @ 0x1C01ED55C (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PRESENTALLOCATIONINFO@@$03@@QEAAPEAU_DXGK_PRESEN.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C0224754 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C0224BB0 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 *     ?GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ @ 0x1C02C0F48 (-GetEnabledPlaneCountUnsafe@DISPLAY_SOURCE@@QEAAIXZ.c)
 *     ??1CIFlipPresentHistoryToken@@QEAA@XZ @ 0x1C0315B48 (--1CIFlipPresentHistoryToken@@QEAA@XZ.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C0319174 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 */

__int64 __fastcall PrepareIndependentFlipToken(
        struct _D3DKMT_PRESENTHISTORYTOKEN *a1,
        struct DXGK_PRESENT_PARAMS *a2,
        struct VIDSCH_SUBMIT_DATA_BASE *a3,
        struct DXGCONTEXT *a4,
        struct _PRESENT_REDIRECTED_PARAMS *a5,
        struct CRefCountedBuffer *a6)
{
  struct VIDSCH_SUBMIT_DATA_BASE *v7; // rbx
  DXGADAPTER *v10; // rcx
  __int64 v12; // rdi
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  ADAPTER_RENDER *v17; // rsi
  struct DXGK_PRESENT_PARAMS *v18; // rax
  unsigned int v19; // eax
  struct _EX_RUNDOWN_REF *v20; // rax
  ULONG_PTR Count; // rdx
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdi
  UINT64 CompositionBindingId; // rsi
  __int64 v27; // rax
  struct _LUID *v28; // rax
  unsigned int v29; // ecx
  struct DXGK_PRESENT_PARAMS *v30; // rdx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  DXGADAPTER *v34; // rdi
  int v35; // eax
  ADAPTER_RENDER *v36; // rsi
  int v37; // eax
  int *v38; // r8
  enum _D3DDDI_HDR_METADATA_TYPE v39; // eax
  __int64 v40; // rdx
  struct DXGTHREAD *DxgThread; // rax
  char v42; // al
  ADAPTER_DISPLAY *v43; // rsi
  __int64 v44; // rax
  _DWORD *v45; // rdx
  __int64 v46; // r9
  unsigned int v47; // esi
  unsigned __int64 v48; // r8
  __int64 v49; // rcx
  DXGALLOCATIONREFERENCE *v50; // rdx
  unsigned int v51; // r8d
  struct _EX_RUNDOWN_REF *v52; // rsi
  _QWORD *v53; // rcx
  unsigned int v54; // r8d
  _QWORD *v55; // rdi
  unsigned int v56; // r8d
  ULONG_PTR v57; // rcx
  UINT64 v58; // r14
  __int64 v59; // rsi
  unsigned int v60; // edi
  __int64 v61; // rax
  __int64 v62; // rcx
  DXGADAPTER *v63; // rax
  UINT v64; // edi
  struct CRefCountedBuffer *v65; // r14
  ADAPTER_RENDER *v66; // rdi
  int v67; // r12d
  DXGADAPTER *v68; // r14
  struct CRefCountedBuffer *v69; // rax
  int v70; // eax
  unsigned int i; // ebx
  struct DXGTHREAD *v72; // rax
  char *pAllocationList; // r9
  int v74; // eax
  unsigned __int8 v75; // bl
  enum _D3DDDI_HDR_METADATA_TYPE v76; // r8d
  ADAPTER_RENDER *v77; // r14
  DXGALLOCATIONREFERENCE *v78; // r15
  __int64 v79; // r10
  __int16 v80; // ax
  __int64 v81; // rdx
  struct _EX_RUNDOWN_REF *v82; // r8
  __int64 v83; // rax
  int v84; // eax
  int v85; // eax
  _QWORD *v86; // rcx
  void *v87; // rdx
  UINT64 FenceValue; // rsi
  CPushLock *v89; // rdi
  __int64 v90; // rsi
  struct DXGTHREAD *Current; // rax
  unsigned int v92; // ebx
  __int64 v93; // rax
  __int64 v94; // rdi
  __int64 v95; // rsi
  __int64 v96; // rax
  __int64 v97; // rdi
  __int64 v98; // rsi
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rdi
  __int64 v102; // rsi
  __int64 v103; // rax
  __int64 v104; // rdi
  unsigned int v105; // eax
  __int64 v106; // rdx
  unsigned __int8 PostCompositionStretching; // al
  bool v108; // r9
  __int128 *v109; // rdx
  char *v110; // rax
  int v111; // eax
  char *v112; // rcx
  __int64 v113; // rax
  __int128 v114; // xmm1
  __int64 v115; // r8
  ADAPTER_RENDER *v116; // r15
  __int64 v117; // rdi
  __int64 v118; // rsi
  __int64 v119; // rax
  __int64 v120; // rdx
  int v121; // eax
  int v122; // eax
  __int64 v123; // rax
  __int64 v124; // rax
  int v125; // ecx
  int v126; // edx
  __int64 v127; // rax
  bool v128; // cf
  unsigned __int64 v129; // rax
  __int64 v130; // rax
  DXGALLOCATIONREFERENCE *v131; // rdi
  __int64 v132; // r9
  _DWORD *v133; // r8
  __int64 *v134; // rsi
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  __int64 v136; // rdi
  __int64 v137; // r10
  _QWORD *v138; // rdx
  _QWORD *v139; // rdx
  __int64 v140; // rdx
  _DWORD *v141; // rax
  _DWORD *v142; // rsi
  __int64 v143; // rdi
  unsigned int v144; // r15d
  unsigned int v145; // r14d
  int *v146; // rbx
  __int64 v147; // r12
  int v148; // ecx
  struct _D3DKMT_PRESENTHISTORYTOKEN *v149; // r15
  UINT64 v150; // r14
  __int64 v151; // rsi
  unsigned int v152; // edi
  __int64 v153; // rax
  __int64 v154; // rdx
  int v155; // [rsp+30h] [rbp-428h]
  int v156; // [rsp+30h] [rbp-428h]
  __int128 v157; // [rsp+80h] [rbp-3D8h] BYREF
  unsigned __int8 v158; // [rsp+90h] [rbp-3C8h]
  unsigned int v159; // [rsp+94h] [rbp-3C4h] BYREF
  struct DXGADAPTER *v160; // [rsp+98h] [rbp-3C0h]
  DXGADAPTER *v161; // [rsp+A0h] [rbp-3B8h]
  ADAPTER_RENDER *v162; // [rsp+A8h] [rbp-3B0h]
  int v163; // [rsp+B0h] [rbp-3A8h]
  enum _D3DDDI_HDR_METADATA_TYPE v164; // [rsp+B4h] [rbp-3A4h] BYREF
  unsigned int v165; // [rsp+B8h] [rbp-3A0h]
  struct _EX_RUNDOWN_REF *v166; // [rsp+C0h] [rbp-398h] BYREF
  unsigned int v167; // [rsp+C8h] [rbp-390h] BYREF
  unsigned int v168; // [rsp+CCh] [rbp-38Ch]
  int v169; // [rsp+D0h] [rbp-388h] BYREF
  int v170; // [rsp+D4h] [rbp-384h]
  int v171; // [rsp+D8h] [rbp-380h] BYREF
  ADAPTER_DISPLAY *v172; // [rsp+E0h] [rbp-378h]
  unsigned int v173; // [rsp+E8h] [rbp-370h] BYREF
  struct DXGTHREAD *v174; // [rsp+F0h] [rbp-368h] BYREF
  int *v175; // [rsp+F8h] [rbp-360h]
  DXGADAPTER *v176; // [rsp+100h] [rbp-358h] BYREF
  struct DXGK_PRESENT_PARAMS *v177; // [rsp+108h] [rbp-350h] BYREF
  char *v178; // [rsp+110h] [rbp-348h]
  __int64 v179; // [rsp+118h] [rbp-340h]
  int v180; // [rsp+120h] [rbp-338h] BYREF
  int v181; // [rsp+124h] [rbp-334h] BYREF
  int v182; // [rsp+128h] [rbp-330h] BYREF
  __int64 v183; // [rsp+130h] [rbp-328h] BYREF
  struct CRefCountedBuffer *v184; // [rsp+138h] [rbp-320h]
  DXGALLOCATIONREFERENCE *v185; // [rsp+140h] [rbp-318h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v186; // [rsp+148h] [rbp-310h]
  struct VIDSCH_SUBMIT_DATA_BASE *v187; // [rsp+150h] [rbp-308h]
  __int128 *v188; // [rsp+158h] [rbp-300h] BYREF
  struct CRefCountedBuffer *v189; // [rsp+160h] [rbp-2F8h]
  int v190; // [rsp+168h] [rbp-2F0h] BYREF
  __int64 v191; // [rsp+170h] [rbp-2E8h]
  struct CRefCountedBuffer *v192; // [rsp+178h] [rbp-2E0h] BYREF
  __int64 v193; // [rsp+180h] [rbp-2D8h] BYREF
  __int64 v194; // [rsp+188h] [rbp-2D0h]
  __int64 v195; // [rsp+190h] [rbp-2C8h]
  _BYTE v196[16]; // [rsp+198h] [rbp-2C0h] BYREF
  PVOID P; // [rsp+1A8h] [rbp-2B0h]
  _BYTE v198[32]; // [rsp+1B0h] [rbp-2A8h] BYREF
  unsigned int v199; // [rsp+1D0h] [rbp-288h]
  __int64 v200; // [rsp+1D8h] [rbp-280h] BYREF
  __int64 v201; // [rsp+1E0h] [rbp-278h] BYREF
  __int64 v202; // [rsp+1E8h] [rbp-270h] BYREF
  char v203[8]; // [rsp+1F0h] [rbp-268h] BYREF
  __int64 *v204; // [rsp+1F8h] [rbp-260h]
  ADAPTER_RENDER *v205; // [rsp+200h] [rbp-258h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v206; // [rsp+208h] [rbp-250h]
  struct VIDSCH_SUBMIT_DATA_BASE *v207; // [rsp+210h] [rbp-248h]
  struct DXGK_PRESENT_PARAMS *v208; // [rsp+218h] [rbp-240h]
  struct DXGCONTEXT *v209; // [rsp+220h] [rbp-238h]
  struct tagRECT v210; // [rsp+230h] [rbp-228h] BYREF
  struct _D3DDDI_HDR_METADATA_HDR10 v211; // [rsp+240h] [rbp-218h] BYREF
  __int64 v212; // [rsp+260h] [rbp-1F8h]
  struct _EX_RUNDOWN_REF *v213; // [rsp+268h] [rbp-1F0h]
  __int64 v214; // [rsp+270h] [rbp-1E8h]
  __int64 v215; // [rsp+278h] [rbp-1E0h]
  _DXGKARG_PRESENT v216; // [rsp+280h] [rbp-1D8h] BYREF
  __int128 v217; // [rsp+330h] [rbp-128h] BYREF
  struct tagRECT v218; // [rsp+340h] [rbp-118h] BYREF
  DXGALLOCATIONREFERENCE *v219; // [rsp+350h] [rbp-108h] BYREF
  _BYTE v220[32]; // [rsp+358h] [rbp-100h] BYREF
  unsigned int v221; // [rsp+378h] [rbp-E0h]
  PVOID v222; // [rsp+380h] [rbp-D8h] BYREF
  _BYTE v223[128]; // [rsp+388h] [rbp-D0h] BYREF
  int v224; // [rsp+408h] [rbp-50h]

  v7 = a3;
  v187 = a3;
  v186 = a1;
  v206 = a1;
  v208 = a2;
  v207 = a3;
  v209 = a4;
  v10 = a5;
  v161 = a5;
  v184 = a6;
  v189 = a6;
  if ( a1->Model != D3DKMT_PM_REDIRECTED_FLIP )
  {
    if ( a1->Model != D3DKMT_PM_FLIPMANAGER )
      return 0LL;
    if ( !a1->Token.Flip.FenceValue )
      return 0LL;
    if ( !CIFlipPresentHistoryToken::IsFlipManagerIFlipFeatureEnabled() )
      return 0LL;
    FenceValue = a1->Token.Flip.FenceValue;
    KeEnterCriticalRegion();
    v89 = (CPushLock *)(FenceValue + 72);
    ExAcquirePushLockSharedEx(FenceValue + 72, 0LL);
    v90 = *(_QWORD *)(FenceValue + 96);
    CPushLock::ReleaseLock(v89);
    if ( !v90 || !*(_DWORD *)(v90 + 28) && !*(_DWORD *)(v90 + 32) )
      return 0LL;
    if ( !*(_QWORD *)(v90 + 40) )
      return 0LL;
    v10 = v161;
  }
  if ( a4 && !a2 )
    return 0LL;
  v157 = 0LL;
  if ( a1->Model == D3DKMT_PM_REDIRECTED_FLIP )
  {
    CIFlipPresentHistoryTokenRedirectedFlip::CIFlipPresentHistoryTokenRedirectedFlip(
      (CIFlipPresentHistoryTokenRedirectedFlip *)&v157,
      &a1->Token.Flip);
LABEL_8:
    v10 = v161;
    goto LABEL_9;
  }
  if ( a1->Model == D3DKMT_PM_FLIPMANAGER )
  {
    CIFlipPresentHistoryTokenFlipManager::CIFlipPresentHistoryTokenFlipManager(
      (CIFlipPresentHistoryTokenFlipManager *)&v157,
      (const struct _D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN *)&a1->Token);
    goto LABEL_8;
  }
LABEL_9:
  v179 = 0LL;
  if ( a4 )
  {
    v10 = (DXGADAPTER *)*((_QWORD *)a4 + 2);
    v176 = v10;
    v12 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL);
  }
  else
  {
    v179 = *(_QWORD *)v10;
    v12 = *((_QWORD *)v10 + 2);
    v176 = (DXGADAPTER *)*((_QWORD *)v10 + 3);
  }
  v195 = v12;
  v161 = (DXGADAPTER *)v12;
  if ( !a4 && !*(_BYTE *)(v12 + 2746) )
    goto LABEL_180;
  *((_QWORD *)v7 + 3) = 0LL;
  CurrentProcess = PsGetCurrentProcess(v10, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v15 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v16 = *((_QWORD *)Current + 3), (v183 = v16) == 0) )
  {
    v16 = v15;
    v183 = v15;
  }
  v17 = *(ADAPTER_RENDER **)(v12 + 2800);
  v162 = v17;
  v205 = v17;
  v172 = 0LL;
  if ( *(_QWORD *)(v12 + 2792) )
    v172 = *(ADAPTER_DISPLAY **)(v12 + 2792);
  if ( a4 )
    v18 = a2;
  else
    v18 = 0LL;
  v177 = v18;
  if ( a4 )
    v19 = *((_DWORD *)v18 + 5);
  else
    v19 = *(_DWORD *)(v179 + 1100);
  v165 = v19;
  DXGPROCESS::GetAllocationSafe(v16, (DXGALLOCATIONREFERENCE *)&v166, v19);
  v20 = v166;
  if ( !v166 || *(_QWORD *)(*(_QWORD *)(v166[1].Count + 16) + 16LL) != *(_QWORD *)(*((_QWORD *)v176 + 2) + 16LL) )
  {
LABEL_179:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v166);
LABEL_180:
    CIFlipPresentHistoryToken::~CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)&v157);
    return 0LL;
  }
  Count = v166[5].Count;
  if ( a6 && Count && (*(_DWORD *)(Count + 4) & 1) != 0 )
  {
    Count = *(_QWORD *)(*(_QWORD *)(Count + 56) + 176LL);
    *((_QWORD *)v7 + 3) = Count;
  }
  v22 = 0LL;
  if ( a4 )
    v23 = *((_QWORD *)a2 + 187);
  else
    v23 = 0LL;
  v191 = v23;
  v179 = v23;
  v167 = (*(_DWORD *)(v20[6].Count + 4) >> 6) & 0xF;
  v180 = 0;
  v171 = 0;
  v181 = 0;
  v182 = 0;
  v159 = 0;
  v193 = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *, ULONG_PTR))(v157 + 24))(&v157, Count);
  v169 = 0;
  v217 = 0LL;
  v218 = 0LL;
  v24 = 760LL;
  if ( !*((_BYTE *)v7 + 356) )
    v24 = 528LL;
  v178 = (char *)v7 + v24;
  v25 = *((_QWORD *)v17 + 78);
  CompositionBindingId = a1->CompositionBindingId;
  v27 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 16))(&v157);
  (*(void (__fastcall **)(_QWORD, unsigned int *, __int64, UINT64, char *, int *, int *, unsigned int *, __int64 *, int *, int *, int *, __int128 *, struct tagRECT *))(*(_QWORD *)(v25 + 8) + 408LL))(
    *((_QWORD *)v162 + 79),
    &v167,
    v27,
    CompositionBindingId,
    v178,
    &v180,
    &v171,
    &v159,
    &v193,
    &v181,
    &v182,
    &v169,
    &v217,
    &v218);
  (*(void (__fastcall **)(__int128 *, __int64))(v157 + 32))(&v157, v193);
  (*(void (__fastcall **)(__int128 *, _QWORD))(v157 + 48))(&v157, v167);
  *((_DWORD *)v7 + 29) = v167;
  v28 = (struct _LUID *)(*(__int64 (__fastcall **)(__int128 *))(v157 + 16))(&v157);
  RtlCopyLuid((PLUID)((char *)v7 + 156), v28);
  *((_QWORD *)v7 + 21) = a1->CompositionBindingId;
  v29 = *(_DWORD *)v7 & 0xFFFEFFFF;
  *(_DWORD *)v7 = v29;
  if ( a4 )
  {
    v30 = v177;
    v31 = (*((_DWORD *)v177 + 22) ^ v29) & 4 ^ v29;
    *(_DWORD *)v7 = v31;
    v32 = (v31 ^ (4 * *((_DWORD *)v30 + 22))) & 0x80000 ^ v31;
    *(_DWORD *)v7 = v32;
    v33 = (v32 ^ (4 * *((_DWORD *)v30 + 22))) & 0x100000 ^ v32;
    *(_DWORD *)v7 = v33;
    *(_DWORD *)v7 = v33 ^ (v33 ^ (4 * *((_DWORD *)v30 + 22))) & 0x200000;
  }
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ (8 * (*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 200))(&v157))) & 8;
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ (16 * (*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 208))(&v157))) & 0x10;
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 216))(&v157) << 28)) & 0x10000000;
  *((_DWORD *)v7 + 1) ^= (*((_DWORD *)v7 + 1) ^ ((*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 224))(&v157) << 6)) & 0x40;
  *((_DWORD *)v7 + 1) ^= (*((_DWORD *)v7 + 1) ^ ((*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 320))(&v157) << 8)) & 0x100;
  v34 = v161;
  (*(void (__fastcall **)(__int128 *, DXGADAPTER *))(v157 + 56))(&v157, v161);
  *((_DWORD *)v7 + 28) = (*(__int64 (__fastcall **)(__int128 *))(v157 + 64))(&v157);
  *((_DWORD *)v7 + 48) = *(_DWORD *)(*(__int64 (__fastcall **)(__int128 *))(v157 + 72))(&v157);
  *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 192))(&v157) << 25)) & 0x2000000;
  *((_DWORD *)v7 + 36) = (*(__int64 (__fastcall **)(__int128 *))(v157 + 80))(&v157);
  *((_DWORD *)v7 + 37) = (*(__int64 (__fastcall **)(__int128 *))(v157 + 88))(&v157);
  if ( a4 )
    v35 = *((_DWORD *)a4 + 99);
  else
    v35 = 1;
  *((_DWORD *)v7 + 34) = v35;
  if ( *((_BYTE *)v7 + 356) )
    *((_DWORD *)v7 + 160) = -1;
  v36 = v162;
  if ( bTracingEnabled )
    *((_QWORD *)v7 + 23) = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v162 + 81) + 8LL) + 352LL))(
                             *((_QWORD *)v162 + 82),
                             v165);
  v37 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 96))(&v157);
  *((_DWORD *)v7 + 31) = v37;
  v175 = (int *)((char *)v7 + 124);
  v190 = 1;
  if ( v37 )
  {
    v38 = (int *)((char *)v7 + 124);
  }
  else if ( (*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 216))(&v157) && (*((_DWORD *)v34 + 537) & 0x40) != 0 )
  {
    v38 = v175;
  }
  else
  {
    v38 = &v190;
  }
  v39 = (*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(*(_QWORD *)(*((_QWORD *)v36 + 78) + 8LL) + 512LL))(
          *((_QWORD *)v176 + 96),
          v167,
          v38);
  v164 = v39;
  *((_DWORD *)v7 + 30) = v39;
  if ( v39 != 5 && *((_DWORD *)v7 + 31) )
  {
    v92 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 64))(&v157);
    v93 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 104))(&v157);
    WdLogSingleEntry4(8LL, a1, v93, v92, v164);
    goto LABEL_179;
  }
  if ( !v180 )
  {
    if ( v181 )
    {
      LODWORD(v183) = 0;
      v200 = 0LL;
      v94 = *((_QWORD *)v36 + 78);
      v95 = *((_QWORD *)v7 + 21);
      v96 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 16))(&v157);
      LOBYTE(v155) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, __int64 *, __int64 *))(*(_QWORD *)(v94 + 8) + 400LL))(
        *((_QWORD *)v162 + 79),
        (unsigned int)(1 << *((_DWORD *)v7 + 29)),
        v96,
        v95,
        &v159,
        0,
        v155,
        &v183,
        &v200);
      ADAPTER_DISPLAY::UpdateIndependentFlipState(v172, *((_DWORD *)v7 + 29), v159, 0);
    }
    else if ( !v182 )
    {
LABEL_42:
      if ( v166 )
        ExReleaseRundownProtection(v166 + 11);
      if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
      {
        v174 = 0LL;
        if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v174) >= 0 )
        {
          DxgThread = v174;
          if ( v174 || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v174 = DxgThread) != 0LL) )
          {
            if ( *((_DWORD *)DxgThread + 12) )
              WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
          }
        }
      }
      (*(void (__fastcall **)(__int128 *, __int64))v157)(&v157, 1LL);
      return 0LL;
    }
    LOBYTE(v40) = 1;
    (*(void (__fastcall **)(__int128 *, __int64))(v157 + 232))(&v157, v40);
    goto LABEL_42;
  }
  *((_QWORD *)v7 + 22) = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *))(v157 + 24))(&v157);
  LODWORD(v160) = 0;
  v170 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 240))(&v157) )
  {
    LODWORD(v176) = 0;
    v201 = 0LL;
    v97 = *((_QWORD *)v36 + 78);
    v98 = *((_QWORD *)v7 + 21);
    v99 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 16))(&v157);
    LOBYTE(v155) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, DXGADAPTER **, __int64 *))(*(_QWORD *)(v97 + 8) + 400LL))(
      *((_QWORD *)v162 + 79),
      (unsigned int)(1 << *((_DWORD *)v7 + 29)),
      v99,
      v98,
      &v159,
      0,
      v155,
      &v176,
      &v201);
    LOBYTE(v100) = 1;
    (*(void (__fastcall **)(__int128 *, __int64))(v157 + 232))(&v157, v100);
    ADAPTER_DISPLAY::UpdateIndependentFlipState(v172, *((_DWORD *)v7 + 29), v159, 0);
    WdLogSingleEntry1(8LL, 2134LL);
    goto LABEL_179;
  }
  if ( v171 || DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*((DXGADAPTER **)v36 + 2)) )
  {
    v42 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 248))(&v157);
    v43 = v172;
    if ( v42 )
    {
      DXGDISPLAYSTATEMUTEX::DXGDISPLAYSTATEMUTEX((DXGDISPLAYSTATEMUTEX *)v196, v172);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v196);
      PostCompositionStretching = ADAPTER_DISPLAY::GetPostCompositionStretching(
                                    (DXGADAPTER **)v43,
                                    *((_DWORD *)v7 + 29));
      v158 = PostCompositionStretching;
      if ( PostCompositionStretching )
      {
        if ( (unsigned int)IsYUVAllocation(*(void **)(v166[6].Count + 16), v162)
          || DISPLAY_SOURCE::GetEnabledPlaneCountUnsafe((DISPLAY_SOURCE *)(*((_QWORD *)v43 + 16)
                                                                         + 4000LL * *((unsigned int *)v7 + 29))) > 1 )
        {
          PostCompositionStretching = 0;
          v158 = 0;
        }
        else
        {
          PostCompositionStretching = v158;
        }
      }
      v210 = 0LL;
      v108 = !v159 && PostCompositionStretching;
      if ( !CheckAndUpdateMultiPlaneOverlayFromInternalState(
              *((_DWORD *)v7 + 29),
              v159,
              (struct CIFlipPresentHistoryTokenData *)&v157,
              v108,
              v162,
              v43,
              &v210) )
      {
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v196);
        v173 = 0;
        v202 = 0LL;
        v116 = v162;
        v117 = *((_QWORD *)v162 + 78);
        v118 = *((_QWORD *)v7 + 21);
        v119 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 16))(&v157);
        LOBYTE(v156) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, unsigned int *, __int64 *))(*(_QWORD *)(v117 + 8) + 400LL))(
          *((_QWORD *)v116 + 79),
          (unsigned int)(1 << *((_DWORD *)v7 + 29)),
          v119,
          v118,
          &v159,
          0,
          v156,
          &v173,
          &v202);
        WdLogSingleEntry1(3LL, v159);
        LOBYTE(v120) = 1;
        (*(void (__fastcall **)(__int128 *, __int64))(v157 + 232))(&v157, v120);
        ADAPTER_DISPLAY::UpdateIndependentFlipState(v172, *((_DWORD *)v7 + 29), v159, 0);
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v196);
        goto LABEL_179;
      }
      v109 = (__int128 *)(*(__int64 (__fastcall **)(__int128 *))(v157 + 8))(&v157);
      v188 = v109;
      v110 = v178;
      *(_WORD *)v178 = *(_WORD *)v109;
      *((_WORD *)v110 + 2) = *((_WORD *)v109 + 2);
      *((_WORD *)v110 + 1) = *((_WORD *)v109 + 4);
      *((_WORD *)v110 + 3) = *((_WORD *)v109 + 6);
      v111 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 112))(&v157);
      v112 = v178;
      *((_DWORD *)v178 + 6) = v111;
      if ( v158 )
      {
        v113 = *(_QWORD *)v112;
        *((_QWORD *)v112 + 1) = *(_QWORD *)v112;
        *((_QWORD *)v112 + 2) = v113;
        v114 = *v188;
        v217 = v114;
        v218 = v210;
        if ( (_DWORD)v114 != v210.left
          || __PAIR64__(DWORD2(v217), DWORD1(v114)) != *(_QWORD *)&v210.top
          || (v115 = 0LL, HIDWORD(v217) != v210.bottom) )
        {
          v115 = 1LL;
        }
        v169 = v115;
        if ( !(_DWORD)v115 )
        {
          v217 = 0LL;
          v218 = 0LL;
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, struct tagRECT *))(*(_QWORD *)(*((_QWORD *)v162 + 78)
                                                                                                  + 8LL)
                                                                                      + 984LL))(
          *((_QWORD *)v162 + 79),
          *((unsigned int *)v7 + 29),
          v115,
          &v217,
          &v218);
        UpdatePostComposition(*((_DWORD *)v7 + 29), v169 != 0, DWORD2(v217) - v217, HIDWORD(v217) - DWORD1(v217), v43);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, char *, _QWORD))(*(_QWORD *)(*((_QWORD *)v162 + 78) + 8LL) + 416LL))(
        *((_QWORD *)v162 + 79),
        *((unsigned int *)v7 + 29),
        v178,
        v159);
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v196);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v196);
    }
    else
    {
      ADAPTER_DISPLAY::UpdateIndependentFlipState(v172, *((_DWORD *)v7 + 29), v159, 1u);
    }
    *(_DWORD *)v7 = (v169 << 31) | (*(_DWORD *)v7 ^ (*(_DWORD *)v7 ^ (v171 << 26)) & 0x4000000) & 0x7FFFFFFF;
    *(_OWORD *)((char *)v7 + 436) = v217;
    *(struct tagRECT *)((char *)v7 + 452) = v218;
  }
  else
  {
    v174 = (struct DXGTHREAD *)(*(__int64 (__fastcall **)(__int128 *))(v157 + 8))(&v157);
    v84 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 120))(&v157);
    if ( *((_DWORD *)v174 + 2) - *(_DWORD *)v174 != v84
      || (v85 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 128))(&v157),
          *((_DWORD *)v174 + 3) - *((_DWORD *)v174 + 1) != v85)
      || (*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 248))(&v157) )
    {
      LODWORD(v177) = 0;
      v188 = 0LL;
      v101 = *((_QWORD *)v36 + 78);
      v102 = *((_QWORD *)v7 + 21);
      v103 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 16))(&v157);
      LOBYTE(v155) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, unsigned int *, _DWORD, int, struct DXGK_PRESENT_PARAMS **, __int128 **))(*(_QWORD *)(v101 + 8) + 400LL))(
        *((_QWORD *)v162 + 79),
        (unsigned int)(1 << *((_DWORD *)v7 + 29)),
        v103,
        v102,
        &v159,
        0,
        v155,
        &v177,
        &v188);
      v104 = (*(unsigned int (__fastcall **)(__int128 *))(v157 + 128))(&v157);
      v105 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 120))(&v157);
      WdLogSingleEntry4(
        8LL,
        *((_DWORD *)v174 + 2) - *(_DWORD *)v174,
        *((_DWORD *)v174 + 3) - *((_DWORD *)v174 + 1),
        v105,
        v104);
      LOBYTE(v106) = 1;
      (*(void (__fastcall **)(__int128 *, __int64))(v157 + 232))(&v157, v106);
      ADAPTER_DISPLAY::UpdateIndependentFlipState(v172, *((_DWORD *)v7 + 29), 0, 0);
      goto LABEL_179;
    }
    v43 = v172;
    ADAPTER_DISPLAY::UpdateIndependentFlipState(v172, *((_DWORD *)v7 + 29), 0, 1u);
  }
  if ( v43 && (*((_DWORD *)v43 + 6) & 0x10) != 0 )
  {
    v44 = v167;
    v173 = v167;
    if ( v167 >= *((_DWORD *)v43 + 24) )
    {
      WdLogSingleEntry1(1LL, 5813LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"VidPnSourceId < m_NumVidPnSources",
        5813LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v44 = v173;
    }
    if ( !*(_BYTE *)(4000 * v44 + *((_QWORD *)v43 + 16) + 764) )
    {
      *((_DWORD *)v7 + 90) = 0;
LABEL_61:
      *(_DWORD *)v7 |= 0x40000000u;
      goto LABEL_62;
    }
    *(_DWORD *)v7 ^= (*(_DWORD *)v7 ^ ((*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 256))(&v157) << 30)) & 0x40000000;
    v121 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 136))(&v157);
    *((_DWORD *)v7 + 90) = v121;
    if ( (*(_DWORD *)v7 & 0x40000000) != 0 )
    {
      if ( v121 )
      {
        v122 = v121 - 1;
        if ( v122 )
        {
          if ( v122 == 1 )
          {
            v123 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 152))(&v157);
            *(_OWORD *)((char *)v7 + 364) = *(_OWORD *)v123;
            *(_OWORD *)((char *)v7 + 380) = *(_OWORD *)(v123 + 16);
            *(_OWORD *)((char *)v7 + 396) = *(_OWORD *)(v123 + 32);
            *(_OWORD *)((char *)v7 + 412) = *(_OWORD *)(v123 + 48);
            *(_QWORD *)((char *)v7 + 428) = *(_QWORD *)(v123 + 64);
          }
          else
          {
            WdLogSingleEntry1(1LL, 2339LL);
            DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"FALSE", 2339LL, 0LL, 0LL, 0LL, 0LL);
            *(_DWORD *)v7 &= ~0x40000000u;
          }
        }
        else
        {
          v124 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 144))(&v157);
          *(_OWORD *)((char *)v7 + 364) = *(_OWORD *)v124;
          *(_QWORD *)((char *)v7 + 380) = *(_QWORD *)(v124 + 16);
          *((_DWORD *)v7 + 97) = *(_DWORD *)(v124 + 24);
        }
      }
      v125 = *((_DWORD *)v7 + 90);
LABEL_222:
      if ( v125 )
        goto LABEL_62;
      v164 = D3DDDI_HDR_METADATA_TYPE_NONE;
      memset(&v211, 0, sizeof(v211));
      if ( (unsigned int)PopulateHDRMetadataFromDisplay(*((_DWORD *)v7 + 29), v43, &v211, &v164) )
        goto LABEL_62;
      *((struct _D3DDDI_HDR_METADATA_HDR10 *)v7 + 13) = v211;
      *((_DWORD *)v7 + 90) = v164;
      goto LABEL_61;
    }
    v126 = *(_DWORD *)v7;
    v125 = v121;
    if ( v121 != 1 && v121 != 2 && v121 )
    {
      WdLogSingleEntry1(1LL, 2347LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"D3DDDI_HDR_METADATA_TYPE_HDR10 == pVidSchSubmitData->HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_HDR10P"
                  "LUS == pVidSchSubmitData->HDRMetaDataType || D3DDDI_HDR_METADATA_TYPE_NONE == pVidSchSubmitData->HDRMetaDataType",
        2347LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v126 = *(_DWORD *)v7;
      v125 = *((_DWORD *)v7 + 90);
    }
    *(_DWORD *)v7 = v126 | 0x40000000;
    if ( v125 != 1 )
    {
      if ( v125 == 2 )
      {
        v125 = -2147483646;
        *((_DWORD *)v7 + 90) = -2147483646;
      }
      goto LABEL_222;
    }
    *((_DWORD *)v7 + 90) = 134217729;
  }
LABEL_62:
  (*(void (__fastcall **)(__int128 *, _QWORD))(v157 + 160))(&v157, v159);
  if ( *((_BYTE *)v7 + 356) )
    v45 = (_DWORD *)((char *)v7 + 600);
  else
    v45 = (_DWORD *)((char *)v7 + 496);
  v46 = 1LL;
  *v45 ^= (*v45 ^ (1 << v159)) & 0x3FF;
  v47 = 1;
  v163 = 1;
  if ( (*((int *)v34 + 606) >= 0x2000 || *((_BYTE *)v34 + 2724)) && a4 )
  {
    v47 = *((_DWORD *)v177 + 23) + 1;
    v163 = v47;
  }
  v165 = 0;
  P = 0LL;
  v199 = 0;
  if ( v47 <= 4 )
  {
    P = v198;
    if ( v47 )
      memset(v198, 0, 8LL * v47);
    goto LABEL_70;
  }
  v48 = v47;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v47 >= 8 )
  {
    P = (PVOID)ExAllocatePool2(256LL, 8LL * v47, 1265072196LL, 1LL);
LABEL_70:
    v199 = v47;
    v48 = v47;
  }
  v175 = (int *)P;
  if ( !P )
  {
LABEL_241:
    P = 0LL;
    v199 = 0;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v166);
    CIFlipPresentHistoryToken::~CIFlipPresentHistoryToken((CIFlipPresentHistoryToken *)&v157);
    return 3221225495LL;
  }
  v219 = 0LL;
  v221 = 0;
  if ( v47 <= 4 )
  {
    v219 = (DXGALLOCATIONREFERENCE *)v220;
    if ( v47 )
    {
      v49 = 0LL;
      do
      {
        *(_QWORD *)((char *)v219 + v49) = 0LL;
        v49 += 8LL;
        --v48;
      }
      while ( v48 );
    }
LABEL_76:
    v221 = v47;
    goto LABEL_77;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / v48 >= 8 )
  {
    v127 = 8 * v48;
    if ( !is_mul_ok(v48, 8uLL) )
      v127 = -1LL;
    v128 = __CFADD__(v127, 8LL);
    v129 = v127 + 8;
    if ( v128 )
      v129 = -1LL;
    v130 = operator new[](v129, 0x4B677844u, 256LL, v46);
    if ( v130 )
    {
      *(_QWORD *)v130 = v47;
      v131 = (DXGALLOCATIONREFERENCE *)(v130 + 8);
      `vector constructor iterator'(
        (char *)(v130 + 8),
        8LL,
        v47,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
      v219 = v131;
      v34 = v161;
    }
    goto LABEL_76;
  }
LABEL_77:
  v50 = v219;
  v185 = v219;
  if ( !v219 )
  {
    PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(&v219, 0LL, v48);
    if ( P != v198 && P )
      ExFreePoolWithTag(P, 0);
    goto LABEL_241;
  }
  v51 = 0;
  while ( 1 )
  {
    v168 = v51;
    if ( v51 >= v47 )
      goto LABEL_99;
    if ( !v51 )
    {
      v52 = v166;
      if ( *((_BYTE *)v7 + 356) )
        v53 = (_QWORD *)((char *)v7 + *((_DWORD *)v7 + 151) * ((8 * *((_DWORD *)v7 + 152) + 231) & 0xFFFFFFF8) + 624);
      else
        v53 = (_QWORD *)((char *)v7 + 512);
      *v53 = *(_QWORD *)(v166[6].Count + 16);
      if ( !*((_BYTE *)v34 + 2746) )
      {
        if ( *((_BYTE *)v7 + 356) )
          v86 = (_QWORD *)((char *)v7 + *((_DWORD *)v7 + 151) * ((8 * *((_DWORD *)v7 + 152) + 231) & 0xFFFFFFF8) + 616);
        else
          v86 = (_QWORD *)((char *)v7 + 568);
        *v86 = *((_QWORD *)a4 + 23);
      }
      if ( DXGADAPTER::IsDxgmms2(v34) && a4 && (*((_DWORD *)a4 + 101) & 0x10) == 0 )
        *(_QWORD *)((char *)v7 + *((unsigned int *)v7 + 138)) = *((_QWORD *)a4 + 32);
      goto LABEL_88;
    }
    v132 = v51;
    v194 = v51;
    LODWORD(v178) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 187) + 8LL * v51) + 400LL);
    v133 = (_DWORD *)(*((_QWORD *)v177 + 182) + 4LL * (v51 - 1));
    if ( v133 + 1 < v133 || (unsigned __int64)(v133 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    LODWORD(v160) = *v133;
    LODWORD(v172) = (_DWORD)v160;
    v134 = (__int64 *)((char *)v50 + 8 * v132);
    v204 = v134;
    AllocationSafe = DXGPROCESS::GetAllocationSafe(v183, (DXGALLOCATIONREFERENCE *)v203, (unsigned int)v160);
    DXGALLOCATIONREFERENCE::MoveAssign(v134, AllocationSafe);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v203);
    v52 = (struct _EX_RUNDOWN_REF *)*v134;
    if ( !v52 )
    {
      v136 = (unsigned int)v160;
      WdLogSingleEntry3(2LL, (unsigned int)v160, -1073741811LL, 2461LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid allocation handle in present: 0x%I64x. Returning 0x%I64x",
        v136,
        -1073741811LL,
        2461LL,
        0LL,
        0LL);
      v62 = 3221225485LL;
      LODWORD(v160) = -1073741811;
      v170 = -1073741811;
      v65 = v184;
      v64 = v163;
      v63 = v161;
      goto LABEL_100;
    }
    v137 = v194;
    v212 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 187) + 8 * v194) + 16LL);
    v213 = v52;
    v214 = *(_QWORD *)(v52[1].Count + 16);
    v215 = *(_QWORD *)(v212 + 16);
    if ( *(_QWORD *)(v214 + 16) != *(_QWORD *)(v215 + 16) )
      break;
    v54 = v168;
    if ( *((_BYTE *)v7 + 356) )
      v138 = (_QWORD *)((char *)v7
                      + 64 * (unsigned __int64)(v168 * *((_DWORD *)v7 + 151))
                      + *((_DWORD *)v7 + 151) * ((8 * *((_DWORD *)v7 + 152) + 231) & 0xFFFFFFF8)
                      + 624);
    else
      v138 = (_QWORD *)((char *)v7 + 512);
    *v138 = *(_QWORD *)(v52[6].Count + 16);
    if ( !*((_BYTE *)v34 + 2746) )
    {
      if ( *((_BYTE *)v7 + 356) )
        v139 = (_QWORD *)((char *)v7
                        + 64 * (unsigned __int64)(v54 * *((_DWORD *)v7 + 151))
                        + *((_DWORD *)v7 + 151) * ((8 * *((_DWORD *)v7 + 152) + 231) & 0xFFFFFFF8)
                        + 616);
      else
        v139 = (_QWORD *)((char *)v7 + 568);
      *v139 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 187) + 8 * v137) + 184LL);
    }
    *((_DWORD *)v7 + 34) |= 1 << (char)v178;
    v140 = *(_QWORD *)(*((_QWORD *)a2 + 187) + 8 * v137);
    if ( (*(_DWORD *)(v140 + 404) & 0x10) == 0 )
      *(_QWORD *)((char *)v7 + 8 * v137 + *((unsigned int *)v7 + 138)) = *(_QWORD *)(v140 + 256);
LABEL_88:
    if ( *((_BYTE *)v7 + 356) )
      v55 = (_QWORD *)((char *)v7
                     + 64 * (unsigned __int64)(v54 * *((_DWORD *)v7 + 151))
                     + *((_DWORD *)v7 + 151) * ((8 * *((_DWORD *)v7 + 152) + 231) & 0xFFFFFFF8)
                     + 648);
    else
      v55 = (_QWORD *)((char *)v7 + 504);
    LODWORD(v160) = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD *, _QWORD))(*(_QWORD *)(*((_QWORD *)v162 + 81)
                                                                                               + 8LL)
                                                                                   + 432LL))(
                      *((_QWORD *)v176 + 95),
                      v52[3].Count,
                      v55,
                      *((_QWORD *)v162 + 82));
    v170 = (int)v160;
    if ( (int)v160 < 0 )
    {
      WdLogSingleEntry2(2LL, v52, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to reference allocation for submission (0x%I64x). Returning 0x%I64x",
        (__int64)v52,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
LABEL_99:
      v62 = (unsigned int)v160;
      v63 = v161;
      v64 = v163;
      v65 = v184;
      goto LABEL_100;
    }
    v56 = v168;
    *(_QWORD *)&v175[2 * v168] = *v55;
    ++v165;
    v57 = v52[5].Count;
    if ( v57 && (*(_DWORD *)(v57 + 4) & 8) != 0 )
      v22 = *(_QWORD *)(*(_QWORD *)(v57 + 56) + 184LL);
    if ( *((_BYTE *)v7 + 356) )
      *(_QWORD *)((char *)v7
                + 64 * (unsigned __int64)(v56 * *((_DWORD *)v7 + 151))
                + *((_DWORD *)v7 + 151) * ((8 * *((_DWORD *)v7 + 152) + 231) & 0xFFFFFFF8)
                + 656) = v22;
    else
      *((_QWORD *)v7 + 72) = v22;
    *(_DWORD *)v7 |= 0x1000000u;
    v58 = a1->CompositionBindingId;
    v59 = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *))(v157 + 16))(&v157);
    v60 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 64))(&v157);
    v61 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 104))(&v157);
    WdLogSingleEntry5(8LL, a1, v61, v60, v59, v58);
    if ( (*(unsigned __int8 (__fastcall **)(__int128 *))(v157 + 336))(&v157)
      && (*((_DWORD *)v7 + 1) |= 2u,
          *((_QWORD *)v7 + 60) = (*(__int64 (__fastcall **)(__int128 *))(v157 + 344))(&v157),
          v141 = (_DWORD *)(*(__int64 (__fastcall **)(__int128 *))(v157 + 352))(&v157),
          v142 = v141,
          (*((_QWORD *)v7 + 61) = v141) != 0LL)
      && !v141[1] )
    {
      if ( *v141 == 48 )
      {
        v22 = 0LL;
      }
      else
      {
        WdLogSingleEntry1(1LL, 2555LL);
        v22 = 0LL;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pAuxiliaryPresentInfo->size == sizeof(D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO)",
          2555LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v142[6] = *((_DWORD *)v7 + 29);
      v34 = v161;
      *((_QWORD *)v142 + 2) = *(_QWORD *)((char *)v161 + 404);
    }
    else
    {
      v22 = 0LL;
      v34 = v161;
    }
    v51 = v168 + 1;
    v47 = v163;
    v50 = v185;
  }
  _mm_lfence();
  WdLogSingleEntry3(2LL, *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 187) + 8 * v194) + 16LL), v52, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 187) + 8 * v194) + 16LL),
    *v204,
    -1073741811LL,
    0LL,
    0LL);
  v62 = 3221225485LL;
  LODWORD(v160) = -1073741811;
  v170 = -1073741811;
  v65 = v184;
  v64 = v163;
  v63 = v161;
LABEL_100:
  *((_DWORD *)v7 + 35) = v64;
  if ( (int)v62 < 0 || (*((_DWORD *)v63 + 537) & 0x20) == 0 )
  {
    v66 = v162;
    v67 = (int)v160;
    v68 = v161;
    goto LABEL_103;
  }
  memset(&v216, 0, sizeof(v216));
  v216.Flags.Value = 0x2000;
  if ( v65 )
  {
    v216.PrivateDriverDataSize = *((_DWORD *)v65 + 2);
    v216.pPrivateDriverData = (char *)v65 + 16;
  }
  v222 = 0LL;
  v224 = 0;
  PagedPoolZeroedArray<_DXGK_PRESENTALLOCATIONINFO,4>::AllocateElements(&v222);
  pAllocationList = (char *)v222;
  v216.pAllocationList = (DXGK_ALLOCATIONLIST *)v222;
  if ( v222 )
  {
    v74 = *((_DWORD *)v161 + 539);
    v75 = (v74 & 0x80u) != 0 && (v74 & 0x40) == 0;
    v76 = D3DDDI_HDR_METADATA_TYPE_NONE;
    v77 = v162;
    v78 = v185;
    while ( 1 )
    {
      v164 = v76;
      if ( v76 >= v64 )
        break;
      v79 = (unsigned int)v76;
      if ( a4 )
        v80 = *(_WORD *)(*(_QWORD *)(*((_QWORD *)a2 + 187) + 8LL * (unsigned int)v76) + 400LL);
      else
        v80 = 0;
      v81 = 32LL * (unsigned int)v76;
      v189 = (struct CRefCountedBuffer *)v81;
      *(_WORD *)&pAllocationList[v81 + 26] = v80;
      if ( v76 )
        v82 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v78 + (unsigned int)v76);
      else
        v82 = v166;
      if ( a4 )
        v75 = *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a2 + 187) + 8 * v79) + 439LL);
      *((struct _EX_RUNDOWN_REF *)&v216.pAllocationList->hDeviceSpecificAllocation + 4 * v79) = v82[4];
      v83 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v77 + 81) + 8LL)
                                                                         + 256LL))(
              *((_QWORD *)v77 + 82),
              v82[3].Count,
              v75,
              *(unsigned __int16 *)((char *)&v216.pAllocationList[1].hDeviceSpecificAllocation + v81 + 2));
      *(_QWORD *)((char *)&v216.pAllocationList->8 + (unsigned __int64)v189) = v83;
      v76 = v164 + 1;
      pAllocationList = (char *)v216.pAllocationList;
    }
    v7 = v187;
    v216.FlipInterval = *((_DWORD *)v187 + 31);
    v216.Flags.Value ^= (*(_WORD *)&v216.Flags.0 ^ (unsigned __int16)(*(_DWORD *)v187 >> 11)) & 0x1700;
    v216.NumSrcAllocations = v64;
    v68 = v161;
    if ( *((_BYTE *)v161 + 2746) )
      v87 = 0LL;
    else
      v87 = (void *)*((_QWORD *)a4 + 23);
    v66 = v162;
    v67 = ADAPTER_RENDER::DdiPresent(v162, v87, &v216);
    v62 = (__int64)v222;
    if ( v67 < 0 )
    {
      if ( v222 != v223 && v222 )
        ExFreePoolWithTag(v222, 0);
    }
    else
    {
      if ( v222 != v223 && v222 )
        ExFreePoolWithTag(v222, 0);
LABEL_103:
      if ( v171 && (*(_DWORD *)v7 & 0x1000000) != 0 )
      {
        v69 = 0LL;
        v192 = 0LL;
        if ( *((int *)v68 + 673) < 2500 )
          goto LABEL_108;
        v70 = ReadPresentDirtyRectsData(
                (const struct DXGADAPTER *)v62,
                v159,
                (const struct CIFlipPresentHistoryTokenData *)&v157,
                &v192);
        if ( v70 < 0 )
        {
          v143 = v70;
          WdLogSingleEntry1(2LL, v70);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to read dirty rects data. Returning 0x%I64x",
            v143,
            0LL,
            0LL,
            0LL,
            0LL);
          v66 = v162;
        }
        else
        {
          v69 = v192;
LABEL_108:
          *((_QWORD *)v7 + 4) = v69;
        }
      }
    }
  }
  else
  {
    v67 = (int)v160;
    v66 = v162;
  }
  if ( v67 < 0 )
  {
    v144 = 0;
    v145 = v165;
    v146 = v175;
    v147 = v179;
    while ( v144 < v145 )
    {
      if ( a4 )
        v148 = *(_DWORD *)(*(_QWORD *)(v147 + 8LL * v144) + 400LL);
      else
        LOBYTE(v148) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v66 + 81) + 8LL) + 440LL))(
        *((_QWORD *)v66 + 82),
        (unsigned int)(1 << v148),
        *(_QWORD *)&v146[2 * v144++],
        0LL);
    }
    v149 = v186;
    v150 = v186->CompositionBindingId;
    v151 = *(_QWORD *)(*(__int64 (__fastcall **)(__int128 *))(v157 + 16))(&v157);
    v152 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 64))(&v157);
    v153 = (*(__int64 (__fastcall **)(__int128 *))(v157 + 104))(&v157);
    WdLogSingleEntry5(8LL, v149, v153, v152, v151, v150);
    LOBYTE(v154) = 1;
    (*(void (__fastcall **)(__int128 *, __int64))(v157 + 232))(&v157, v154);
    *(_DWORD *)v187 &= ~0x1000000u;
    v67 = 0;
  }
  if ( v219 == (DXGALLOCATIONREFERENCE *)v220 )
  {
    for ( i = 0; i < v221; ++i )
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)((char *)v219 + 8 * i));
  }
  else if ( v219 )
  {
    DXGALLOCATIONREFERENCE::`vector deleting destructor'(v219);
  }
  if ( P != v198 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v199 = 0;
  if ( v166 )
    ExReleaseRundownProtection(v166 + 11);
  if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 347) )
  {
    v72 = DXGTHREAD::GetCurrent();
    if ( v72 )
    {
      if ( *((_DWORD *)v72 + 12) )
        WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v72 + 12), 0LL, 0LL);
    }
  }
  (*(void (__fastcall **)(__int128 *, __int64))v157)(&v157, 1LL);
  return (unsigned int)v67;
}
