/*
 * XREFs of ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C012C4A8
 * Callers:
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C00D525C (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C012F7C0 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013D338 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z @ 0x1C01405F8 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0163744 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02D9EA4 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0008E58 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000BDF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F32C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000F8C0 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C001168C (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C00116C4 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C0011824 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001188C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0011C70 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C001370C (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0013790 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0013964 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C0016E28 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0019928 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0019E80 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C001A664 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C001A710 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001A814 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C001A900 (-SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z @ 0x1C001A95C (-SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C0026114 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsRequestFromModeChange@@YA_NW4_DMM_CLIENT_TYPE@@@Z @ 0x1C0026158 (-IsRequestFromModeChange@@YA_NW4_DMM_CLIENT_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C0035DCC (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C0039258 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ??1?$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ @ 0x1C0047B50 (--1-$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ.c)
 *     McTemplateK0pqqqqqqqqqqqqqqqq_EtwWriteTransfer @ 0x1C005AF94 (McTemplateK0pqqqqqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C00DEF38 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00E2390 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C00E8A90 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00ED80C (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C011D4B0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C011D5D8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C012B788 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C012B9C0 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C012BF80 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C012DF78 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C012EDA4 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C0130D00 (DxgkStatusChangeNotify.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C0132B5C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0133664 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C01340CC (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01344BC (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C013D614 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C013E3E8 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C013EAAC (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C013EEC4 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C013F574 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C013F768 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0140940 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C014A244 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C014BFF0 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01576CC (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C015807C (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C0158110 (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     LogMonitorHandleOnOffState @ 0x1C015850C (LogMonitorHandleOnOffState.c)
 *     MonitorSendAdjustedColorimetryToDriver @ 0x1C0158FFC (MonitorSendAdjustedColorimetryToDriver.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C015A4AC (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C020D6E0 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C020D908 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C02120C8 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C021AC20 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02E1FDC (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

__int64 __fastcall VIDPN_MGR::SetTimingsFromVidPn(
        VIDPN_MGR *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        struct D3DKMT_VIDPN_SOURCE_MASKS *a5,
        _BYTE *a6,
        unsigned __int8 a7,
        struct DXGDEVICE *a8,
        __int64 a9)
{
  unsigned int v9; // esi
  __int64 v10; // r13
  __int64 v11; // r12
  unsigned int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  SIZE_T v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  ADAPTER_RENDER *v34; // r8
  ADAPTER_RENDER *v35; // rax
  __int64 v36; // rbx
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  __int64 v38; // rdx
  __int64 v39; // r8
  int v40; // edi
  __int64 v41; // rcx
  __int64 v42; // rax
  unsigned int v43; // r11d
  unsigned int v44; // r10d
  unsigned int v45; // edi
  unsigned int v46; // r15d
  unsigned int v47; // ecx
  unsigned int v48; // r9d
  unsigned int v49; // r8d
  int v50; // eax
  ADAPTER_DISPLAY *v51; // r10
  unsigned int v52; // edi
  int v53; // ebx
  int v54; // r12d
  int v55; // r15d
  ADAPTER_DISPLAY *v56; // r9
  __int64 v57; // rcx
  struct DXGDEVICE *v58; // rdx
  unsigned __int8 v59; // r9
  VIDPN_MGR *v60; // rdi
  char v61; // al
  int v62; // eax
  __int64 v63; // rdx
  _DWORD *v64; // rcx
  __int64 v65; // rdi
  _QWORD *v66; // rax
  int v67; // r15d
  __int64 v68; // r12
  ADAPTER_DISPLAY *v69; // rcx
  unsigned int v70; // eax
  _QWORD *v71; // rax
  DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v73; // rdx
  _OWORD *v74; // r8
  int v75; // edx
  char v76; // r15
  _OWORD *v77; // rax
  ADAPTER_DISPLAY *v78; // rcx
  unsigned int v79; // eax
  __int64 v80; // rdx
  __int64 v81; // rcx
  _QWORD *v82; // rax
  unsigned int v83; // r12d
  _BYTE *v84; // rbx
  VIDPN_MGR *v85; // r13
  _BYTE *v86; // r15
  __int64 v87; // rdi
  DXGADAPTER *ContainingAdapter; // rax
  unsigned __int8 v89; // al
  __int64 v90; // rcx
  char v91; // al
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rcx
  bool v96; // zf
  char *v97; // rax
  bool v98; // al
  unsigned int v99; // r10d
  char *v100; // r13
  __int64 v101; // rax
  char *v102; // rax
  __int64 v103; // rax
  unsigned int v104; // eax
  __int64 v105; // rdi
  int v106; // r12d
  struct DMMVIDEOPRESENTTARGET *v107; // rax
  __int64 v108; // r15
  int TargetLinkTrainingStatus; // eax
  __int64 v110; // rdx
  unsigned int v111; // r9d
  __int64 v112; // r10
  __int64 v113; // rcx
  struct DXGGLOBAL *Global; // rax
  int v115; // eax
  int v116; // eax
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  __int64 v118; // rdx
  ADAPTER_DISPLAY *v119; // r9
  unsigned int v120; // r15d
  VIDPN_MGR *v121; // rbx
  int v122; // r12d
  unsigned int v123; // ecx
  __int64 v124; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *v125; // rax
  DMMVIDPNTOPOLOGY *v126; // rdi
  __int128 v127; // xmm1
  __int128 v128; // xmm0
  __int64 v129; // rcx
  __int64 v130; // rax
  __int64 v131; // rdx
  int MostImportantVidPnPathTargetsFromSource; // edi
  __int64 v133; // rcx
  __int64 v134; // rax
  unsigned int v135; // r9d
  unsigned int v136; // edx
  __int64 v137; // rcx
  int v138; // edi
  __int64 v139; // rdx
  __int64 v140; // rcx
  _QWORD *v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rax
  __int64 v145; // rax
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  struct DXGADAPTERALLOCATION *v147; // rdi
  void *v148; // rax
  ADAPTER_RENDER *v149; // rcx
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  int v153; // eax
  __int64 v154; // rax
  _QWORD *v155; // rax
  __int64 v156; // rdi
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rax
  __int64 v160; // rax
  int v161; // r12d
  int v162; // edi
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  unsigned int v165; // eax
  __int64 v166; // r15
  __int64 v167; // rdi
  DMMVIDEOPRESENTTARGET *v168; // rax
  __int64 v169; // rdx
  DMMVIDEOPRESENTTARGET *v170; // r12
  _BYTE *v171; // rdx
  unsigned int *v172; // r10
  int v173; // r8d
  __int64 v174; // rdx
  __int64 v175; // rcx
  _QWORD *v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // rcx
  __int64 v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  ADAPTER_DISPLAY *v184; // r10
  unsigned int v185; // r15d
  struct DXGDEVICE *v186; // rdi
  int v187; // r12d
  ADAPTER_DISPLAY *v188; // rcx
  ADAPTER_DISPLAY *v189; // rdi
  const struct _D3DKMT_DISPLAYMODE *DisplayModeInfo; // rax
  int v191; // eax
  int v192; // eax
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // r9
  __int64 v196; // r12
  _QWORD *v197; // rax
  DMMVIDPNTOPOLOGY *v198; // rdi
  int v199; // eax
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // rax
  __int64 v203; // r10
  unsigned int k; // r9d
  __int64 v205; // r8
  unsigned int v206; // ecx
  struct DXGGLOBAL *v207; // rax
  __int64 v208; // rdx
  unsigned int *v209; // [rsp+20h] [rbp-100h]
  unsigned int *v210; // [rsp+20h] [rbp-100h]
  struct _DXGK_SET_TIMING_PATH_INFO **v211; // [rsp+28h] [rbp-F8h]
  unsigned int **v212; // [rsp+30h] [rbp-F0h]
  struct D3DKMT_VIDPN_SOURCE_MASKS *v213; // [rsp+38h] [rbp-E8h]
  unsigned int **v214; // [rsp+40h] [rbp-E0h]
  int v215; // [rsp+68h] [rbp-B8h]
  unsigned __int8 v216; // [rsp+A0h] [rbp-80h]
  unsigned __int8 v217; // [rsp+A0h] [rbp-80h]
  unsigned __int8 v218; // [rsp+A1h] [rbp-7Fh]
  char v219; // [rsp+A1h] [rbp-7Fh]
  unsigned int v220; // [rsp+A4h] [rbp-7Ch] BYREF
  void *Src; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v222; // [rsp+B0h] [rbp-70h] BYREF
  int i; // [rsp+B4h] [rbp-6Ch]
  signed int j; // [rsp+B8h] [rbp-68h]
  unsigned int v225; // [rsp+BCh] [rbp-64h]
  unsigned int *v226; // [rsp+C0h] [rbp-60h] BYREF
  void *v227; // [rsp+C8h] [rbp-58h]
  int v228; // [rsp+D0h] [rbp-50h] BYREF
  struct DXGDEVICE *v229; // [rsp+D8h] [rbp-48h]
  unsigned int v230; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v231; // [rsp+E8h] [rbp-38h]
  VIDPN_MGR *v232; // [rsp+F0h] [rbp-30h]
  DMMVIDPNTOPOLOGY *v233; // [rsp+F8h] [rbp-28h]
  unsigned int v234; // [rsp+100h] [rbp-20h] BYREF
  __int64 v235; // [rsp+108h] [rbp-18h]
  __int64 v236; // [rsp+110h] [rbp-10h]
  unsigned int *v237; // [rsp+118h] [rbp-8h] BYREF
  ADAPTER_RENDER *v238[2]; // [rsp+120h] [rbp+0h] BYREF
  __int128 v239; // [rsp+130h] [rbp+10h] BYREF
  __int128 v240; // [rsp+140h] [rbp+20h]
  _BYTE v241[24]; // [rsp+150h] [rbp+30h] BYREF
  _DXGKARG_SETTIMINGSFROMVIDPN v242; // [rsp+168h] [rbp+48h] BYREF
  __int64 v243; // [rsp+190h] [rbp+70h]
  __int64 v244; // [rsp+198h] [rbp+78h]
  _BYTE *v245; // [rsp+1A0h] [rbp+80h]
  unsigned __int64 v246; // [rsp+1A8h] [rbp+88h] BYREF
  __int64 v247; // [rsp+1B0h] [rbp+90h] BYREF
  _QWORD v248[2]; // [rsp+1B8h] [rbp+98h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v249; // [rsp+1C8h] [rbp+A8h] BYREF
  _BYTE v250[24]; // [rsp+1F8h] [rbp+D8h] BYREF
  __int128 v251; // [rsp+210h] [rbp+F0h] BYREF
  GUID ActivityId; // [rsp+220h] [rbp+100h] BYREF

  v9 = 0;
  v10 = *((_QWORD *)a1 + 1);
  v11 = a4;
  v12 = a2;
  v229 = a8;
  v235 = a9;
  v236 = a4;
  v225 = a3;
  i = a2;
  v232 = a1;
  v245 = a6;
  v222 = 0;
  if ( !v10 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v14);
    v10 = *((_QWORD *)a1 + 1);
  }
  v15 = *(_QWORD *)(v10 + 16);
  v244 = v15;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v15) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v18);
  }
  v234 = 0;
  *a6 = 0;
  v220 = 0;
  Src = 0LL;
  v226 = 0LL;
  v237 = 0LL;
  v19 = VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
          a1,
          v12,
          (struct DMMVIDPN *const)v11,
          &v234,
          &v220,
          (struct _DXGK_SET_TIMING_PATH_INFO **)&Src,
          &v226,
          a5,
          &v237);
  v23 = v19;
  if ( v19 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v24 + 24) = v11;
    *(_QWORD *)(v24 + 32) = v23;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v23;
  }
  if ( !v220 )
  {
    v26 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v26 + 24) = *(int *)(v15 + 320);
    *(_QWORD *)(v26 + 32) = *(unsigned int *)(v15 + 316);
    WdLogEvent5_WdWarning(v26);
    return (unsigned int)v23;
  }
  if ( *((_QWORD *)a5 + 1) || *((_DWORD *)a5 + 6) )
  {
    v216 = 1;
  }
  else
  {
    v216 = 0;
    if ( !*((_DWORD *)a5 + 10) && !*((_DWORD *)a5 + 8) )
      return 0LL;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v214) = *((_DWORD *)a5 + 5);
    LODWORD(v213) = *((_DWORD *)a5 + 3);
    LODWORD(v212) = *((_DWORD *)a5 + 2);
    LODWORD(v211) = *((_DWORD *)a5 + 1);
    LODWORD(v209) = *(_DWORD *)a5;
    McTemplateK0pqqqqqqqqqqqqqqqq_EtwWriteTransfer(
      (unsigned int)v212,
      v20,
      v22,
      v15,
      v209,
      v211,
      v212,
      v213,
      v214,
      *((_DWORD *)a5 + 6),
      *((_DWORD *)a5 + 7),
      *((_DWORD *)a5 + 8),
      *((_DWORD *)a5 + 10),
      *((_DWORD *)a5 + 12),
      *((_DWORD *)a5 + 13),
      *((_DWORD *)a5 + 14),
      *((_DWORD *)a5 + 16),
      *((_DWORD *)a5 + 17),
      *((_DWORD *)a5 + 37),
      *((_DWORD *)a5 + 38));
  }
  v27 = *((_QWORD *)a1 + 11);
  v228 = 0;
  if ( v27 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v27 + 32));
    v28 = *((_QWORD *)a1 + 11);
  }
  else
  {
    v28 = 0LL;
  }
  v247 = v28;
  if ( !v11 )
    v11 = v28;
  v243 = v11;
  v233 = (DMMVIDPNTOPOLOGY *)(v11 + 96);
  v29 = 56LL * v220;
  if ( !is_mul_ok(v220, 0x38uLL) )
    v29 = -1LL;
  v227 = operator new[](v29, 0x4E506456u, PagedPool);
  if ( v227 )
  {
    memmove(v227, Src, 56LL * v220);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 10) + 72LL));
    v34 = *(ADAPTER_RENDER **)(v15 + 2680);
    v35 = 0LL;
    v36 = *((_QWORD *)a1 + 10);
    v231 = v36;
    if ( v34 )
      v35 = v34;
    LODWORD(v238[0]) = 0;
    v238[1] = v35;
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v15);
    v40 = *(_DWORD *)(v15 + 2572);
    v218 = IsLegacyDisplayStateSynchronization;
    j = v40;
    if ( !v39 )
    {
LABEL_49:
      v51 = *(ADAPTER_DISPLAY **)(v15 + 2672);
      v52 = 0;
      if ( *((_DWORD *)v51 + 20) )
      {
        v53 = (int)v238[0];
        v54 = j;
        do
        {
          v55 = 1 << v52;
          v56 = v51;
          if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3)) & (1 << v52)) != 0 )
          {
            v57 = *(_QWORD *)(v15 + 2680);
            if ( v57 && v54 < 2200 )
            {
              ADAPTER_RENDER::FlushScheduler(v57, 8, v52, 0);
              v51 = *(ADAPTER_DISPLAY **)(v15 + 2672);
            }
            v56 = v51;
            if ( v229 )
            {
              if ( v235 )
              {
                v58 = *(struct DXGDEVICE **)(3968LL * v52 + *((_QWORD *)v51 + 14) + 688);
                if ( v58 )
                {
                  if ( *((_QWORD *)v58 + 231) == *(_QWORD *)(*((_QWORD *)v58 + 2) + 16LL) )
                  {
                    if ( v53 || (v59 = 0, a7) )
                      v59 = 1;
                    ADAPTER_DISPLAY::DisablePrimaryOnDevice(v51, v58, v52, v59);
                    v56 = *(ADAPTER_DISPLAY **)(v15 + 2672);
                  }
                }
              }
            }
          }
          v51 = v56;
          if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & v55) != 0
            && *(_QWORD *)(v15 + 2680)
            && *(_BYTE *)(v15 + 2618)
            && v218 )
          {
            ADAPTER_DISPLAY::DisableMPOPlanes(v56, v52, 0);
            *((_DWORD *)a5 + 15) |= v55;
            v51 = *(ADAPTER_DISPLAY **)(v15 + 2672);
          }
          ++v52;
        }
        while ( v52 < *((_DWORD *)v51 + 20) );
        v36 = v231;
        v11 = v243;
      }
      v60 = v232;
      if ( *((_DWORD *)a5 + 5) )
        VIDPN_MGR::RequestPowerStateForTargets(v232, (const struct DMMVIDPN *)v11);
      if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v15) )
      {
        v219 = 0;
        if ( !v216 )
          goto LABEL_146;
        v67 = v225;
        *(_QWORD *)&v242.SetFlags.Reserved = 0LL;
        *(&v242.PathCount + 1) = 0;
        v251 = 0LL;
        if ( v225 == 4 )
          DisplayLogSetMonitorPowerStage(0LL, 16LL, 0LL, &v251);
        v68 = v11 + 88;
        if ( v68 )
          v242.hFunctionalVidPn = (D3DKMDT_HVIDPN)(v68 - 88);
        else
          v242.hFunctionalVidPn = 0LL;
        v69 = *(ADAPTER_DISPLAY **)(v15 + 2672);
        v242.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v222;
        v242.PathCount = v220;
        v242.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
        v70 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v69, &v242);
        v65 = (int)v70;
        DisplayScenarioJournalSetSetTimingPathInfo(v70, 56 * v220, v220, Src);
        if ( (int)v65 < 0 )
        {
          v71 = (_QWORD *)WdLogNewEntry5_WdError(v64, v63);
          v71[3] = *(int *)(v15 + 320);
          v71[4] = *(unsigned int *)(v15 + 316);
          v71[5] = v65;
          WdLogEvent5_WdError(v71);
        }
        if ( v220 == 1 && IsRequestFromModeChange(v67) )
        {
          if ( (int)v65 < 0 || (v64 = (_DWORD *)(*((_DWORD *)Src + 8) & 0xF000000), (_DWORD)v64 == 218103808) )
          {
            v64 = (_DWORD *)*((unsigned int *)Src + 3);
            if ( ((unsigned __int8)v64 & 4) != 0 )
            {
              if ( (v222 & 1) != 0 || (v64 = *(_DWORD **)(*(_QWORD *)(v15 + 216) + 64LL), (v64[879] & 3) != 0) )
              {
                TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                               (DMMVIDEOPRESENTTARGETSET *)v36,
                               *(unsigned int *)Src);
                if ( !DMMVIDEOPRESENTTARGET::IsTargetForceable(TargetById, v73) )
                {
                  v74 = v227;
                  *((_DWORD *)v227 + 3) = *((_DWORD *)v227 + 3) & 0xFFFFFFF0 | 9;
                  v75 = *((_DWORD *)a5 + 1);
                  *((_DWORD *)a5 + 6) = v75 & (*((_DWORD *)a5 + 5) ^ *((_DWORD *)a5 + 6));
                  *((_DWORD *)a5 + 5) = 0;
                  *((_DWORD *)a5 + 19) = v75;
                  if ( (int)v65 < 0 )
                    v76 = 0;
                  else
                    v76 = v222 & 1;
                  v77 = Src;
                  v222 = 0;
                  *(_OWORD *)Src = *v74;
                  v77[1] = v74[1];
                  v77[2] = v74[2];
                  *((_QWORD *)v77 + 6) = *((_QWORD *)v74 + 6);
                  *(_QWORD *)&v242.SetFlags.Reserved = 0LL;
                  *(&v242.PathCount + 1) = 0;
                  if ( v68 )
                    v242.hFunctionalVidPn = (D3DKMDT_HVIDPN)(v68 - 88);
                  else
                    v242.hFunctionalVidPn = 0LL;
                  v78 = *(ADAPTER_DISPLAY **)(v15 + 2672);
                  v242.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v222;
                  v242.PathCount = v220;
                  v242.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
                  v79 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v78, &v242);
                  v65 = (int)v79;
                  DisplayScenarioJournalSetSetTimingPathInfo(v79, 56 * v220, v220, Src);
                  if ( (int)v65 < 0 )
                  {
                    v82 = (_QWORD *)WdLogNewEntry5_WdError(v81, v80);
                    v82[3] = *(unsigned int *)Src;
                    v82[4] = *(int *)(v15 + 320);
                    v82[5] = *(unsigned int *)(v15 + 316);
                    v82[6] = v65;
                    WdLogEvent5_WdError(v82);
                  }
                  DxgkLogCodePointPacket(0x68u, *(_DWORD *)Src, v65, *((_BYTE *)Src + 35) & 0xF, *(_QWORD *)(v15 + 316));
                  v222 ^= ((unsigned __int8)v222 ^ (unsigned __int8)(v222 | v76)) & 1;
                  v67 = v225;
                }
              }
            }
          }
        }
        if ( v67 == 4 )
          DisplayLogSetMonitorPowerStage(0LL, 2147483664LL, (unsigned int)v65, &v251);
      }
      else
      {
        v219 = 1;
        if ( !v216 && !*((_DWORD *)a5 + 10) )
        {
          v216 = 0;
LABEL_146:
          ActivityId = 0LL;
          EtwActivityIdControl(3u, &ActivityId);
          v104 = 0;
          for ( i = 0; v104 < v220; i = v104 )
          {
            v105 = 56LL * v104;
            j = v226[v104];
            v106 = 1 << j;
            v107 = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                     (DMMVIDEOPRESENTTARGETSET *)v36,
                     *(unsigned int *)((char *)Src + v105));
            v108 = (__int64)v107;
            if ( v107 )
            {
              if ( v216 )
              {
                LogMonitorHandleOnOffState(
                  *((_QWORD *)v107 + 14),
                  &ActivityId,
                  (*(_DWORD *)((char *)Src + v105 + 12) >> 2) & 1);
                if ( !v219 )
                {
                  DxgkLogCodePointPacket(
                    0x58u,
                    *(_DWORD *)((char *)Src + v105),
                    *((_BYTE *)Src + v105 + 35) & 0xF | 0x80000000,
                    *(_DWORD *)((char *)Src + v105 + 24),
                    *(_QWORD *)(v15 + 316));
                  DxgkLogCodePointPacket(
                    0x59u,
                    *(_DWORD *)((char *)Src + v105),
                    *(_DWORD *)((char *)Src + v105 + 48),
                    0,
                    *(_QWORD *)(v15 + 316));
                }
                TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v108, 0LL);
                if ( TargetLinkTrainingStatus != (HIBYTE(v111) & 0xF) )
                {
                  *((_DWORD *)a5 + 9) |= v106;
                  v111 = *(_DWORD *)(v105 + v112 + 32);
                }
                v113 = *(_QWORD *)(v105 + v112 + 24);
                *(_BYTE *)(*(_QWORD *)(v108 + 536) + 168LL) = HIBYTE(v111) & 0xF;
                *(_QWORD *)(*(_QWORD *)(v108 + 536) + 160LL) = v113;
                Global = DXGGLOBAL::GetGlobal(v113, v110);
                QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 158), 0);
                if ( (*(_DWORD *)((_BYTE *)Src + v105 + 32) & 0xF000000) == 0xC000000 )
                  DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer((DMMVIDEOPRESENTTARGET *)v108, 1u);
                else
                  DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer((DMMVIDEOPRESENTTARGET *)v108);
                *(_BYTE *)(v108 + 414) = 0;
              }
              else
              {
                v115 = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)v107, 0LL);
                *(_DWORD *)((char *)Src + v105 + 32) ^= (*(_DWORD *)((char *)Src + v105 + 32) ^ (v115 << 24)) & 0xF000000;
              }
              if ( (*(_DWORD *)((_BYTE *)Src + v105 + 12) & 4) != 0 && (v106 & *((_DWORD *)a5 + 17)) == 0 )
              {
                v116 = v228 | *((_DWORD *)a5 + 20);
                if ( !_bittest(&v116, j) )
                {
                  DMMVIDEOPRESENTTARGET::SetTargetActivated((DMMVIDEOPRESENTTARGET *)v108, 1u, 1u);
                  if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v106) != 0
                    && (*(_DWORD *)((_BYTE *)Src + v105 + 32) & 0xF000000) == 0xE000000 )
                  {
                    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v233, *(_DWORD *)((char *)Src + v105));
                    DMMVIDPNPRESENTPATH::SetDriverGammaRamp(PathFromTarget, 0LL);
                  }
                }
              }
              if ( (*(_DWORD *)((_BYTE *)Src + v105 + 32) & 0xF000000) != 0xD000000
                && ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 4)) & v106) != 0 )
              {
                MonitorSendAdjustedColorimetryToDriver(
                  *(_QWORD *)(v108 + 112),
                  *(unsigned int *)((char *)Src + v105 + 4));
              }
            }
            v104 = i + 1;
          }
          CVidSchSuspendResume::Resume(v238);
          v119 = *(ADAPTER_DISPLAY **)(v15 + 2672);
          v120 = 0;
          if ( !*((_DWORD *)v119 + 20) )
          {
LABEL_237:
            v165 = 0;
            for ( j = 0; v165 < v220; j = v165 )
            {
              v166 = v165;
              v167 = 56LL * v165;
              v168 = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                       (DMMVIDEOPRESENTTARGETSET *)v36,
                       *(unsigned int *)((char *)Src + v167));
              v170 = v168;
              if ( v168 )
              {
                v171 = Src;
                if ( (*(_DWORD *)((_BYTE *)Src + v167 + 12) & 4) == 0
                  || (v172 = v226, v173 = 1 << v226[v166], (v173 & *((_DWORD *)a5 + 17)) != 0)
                  || (v173 & *((_DWORD *)a5 + 20)) != 0 )
                {
                  DMMVIDEOPRESENTTARGET::SetTargetActivated(
                    v168,
                    0,
                    (*(_DWORD *)((_BYTE *)Src + v167 + 32) & 0xF000000) == 201326592);
                  v171 = Src;
                  v172 = v226;
                }
                if ( !v219
                  && *((_BYTE *)v170 + 416)
                  && ((*(_DWORD *)&v171[v167 + 32] & 0xF000000) != 0xE000000 || v171[v167 + 48] != 0xFF) )
                {
                  i = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                        *(ADAPTER_DISPLAY **)(v15 + 2672),
                        v172[v166],
                        0,
                        2048,
                        a7);
                  if ( i < 0 )
                  {
                    v176 = (_QWORD *)WdLogNewEntry5_WdError(v175, v174);
                    v176[3] = v15;
                    v177 = v226[v166];
                    v176[5] = i;
                    v176[4] = v177;
                    WdLogEvent5_WdError(v176);
                  }
                  if ( (*(_DWORD *)((_BYTE *)Src + v167 + 32) & 0xF000000) == 0xE000000 )
                  {
                    v178 = *(_QWORD *)(v15 + 2680);
                    if ( v178 )
                    {
                      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v178 + 616) + 8LL) + 888LL))(
                        *(_QWORD *)(v178 + 624),
                        v226[v166]);
                    }
                    else
                    {
                      v179 = *(_QWORD *)(*(_QWORD *)(v15 + 2672) + 384LL);
                      if ( v179 )
                        _InterlockedExchange((volatile __int32 *)(2904LL * v226[v166] + *(_QWORD *)(v179 + 8) + 944), 1);
                    }
                  }
                }
                *((_BYTE *)v170 + 416) = 0;
              }
              else
              {
                v180 = *(unsigned int *)((char *)Src + v167 + 12);
                if ( (v180 & 4) != 0 )
                {
                  v181 = WdLogNewEntry5_WdAssertion(v180, v169);
                  WdLogEvent5_WdAssertion(v181);
                }
              }
              if ( (*(_DWORD *)((_BYTE *)Src + v167 + 16) & 1) != 0 )
                *((_DWORD *)a5 + 15) |= 1 << v226[v166];
              v165 = j + 1;
            }
            auto_rc<DMMVIDPN>::reset((__int64 *)v232 + 35, 0LL);
            CVidSchSuspendResume::Resume(v238);
            v184 = *(ADAPTER_DISPLAY **)(v15 + 2672);
            v185 = 0;
            if ( *((_DWORD *)v184 + 20) )
            {
              v186 = v229;
              do
              {
                v183 = v185;
                v187 = 1 << v185;
                if ( ((1 << v185) & *((_DWORD *)a5 + 14)) != 0 )
                  ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(v184, v185);
                if ( (v187 & *((_DWORD *)a5 + 15)) != 0 )
                  DXGADAPTER::NotifyMultiPlaneOverlayDisable((DXGADAPTER *)v15, v185);
                if ( v186 && !v219 )
                {
                  if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v15 + 2672), v185, 0)
                    && ADAPTER_DISPLAY::IsCddPrimaryStale(*(ADAPTER_DISPLAY **)(v15 + 2672), v185) )
                  {
                    ADAPTER_DISPLAY::DestroyCddAllocations(v188, v186, v185);
                  }
                  v189 = *(ADAPTER_DISPLAY **)(v15 + 2672);
                  DisplayModeInfo = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(v189, v185);
                  ADAPTER_DISPLAY::SetCddDisplayMode((PERESOURCE **)v189, v185, DisplayModeInfo);
                  v186 = v229;
                }
                if ( (v187 & *((_DWORD *)a5 + 20)) != 0 )
                {
                  v191 = *((_DWORD *)a5 + v185 + 39);
                  if ( (v191 & 7) != 0 )
                  {
                    *((_DWORD *)a5 + 4 * (v191 & 7) + 55) = 0;
                    DxgkLogCodePointPacket(0x65u, v185, *((_DWORD *)a5 + v185 + 39) & 7, 2u, *(_QWORD *)(v15 + 316));
                  }
                  v192 = ADAPTER_DISPLAY::SetVidPnSourceActive(
                           *(ADAPTER_DISPLAY **)(v15 + 2672),
                           v185,
                           0,
                           v225 == 4,
                           a7);
                  v196 = v192;
                  if ( v192 < 0 )
                  {
                    v197 = (_QWORD *)WdLogNewEntry5_WdError(v194, v193);
                    v197[3] = v15;
                    v197[4] = v185;
                    v197[5] = v196;
                    WdLogEvent5_WdError(v197);
                  }
                  if ( v236 )
                  {
                    v198 = (DMMVIDPNTOPOLOGY *)(v236 + 96);
                    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                      (__int64)v250,
                      (v236 + 152) & -(__int64)(v236 != -96),
                      2u,
                      v195,
                      (__int64)v210,
                      *(_QWORD *)(v236 + 136));
                    v199 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v198, v185);
                    v200 = 0x80000000LL;
                    v201 = v199 + 0x80000000;
                    if ( (int)v201 >= 0 && v199 != -1071774919 )
                    {
                      v202 = WdLogNewEntry5_WdAssertion(v201, 0x80000000LL);
                      WdLogEvent5_WdAssertion(v202);
                    }
                    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                      (ApplyPermissionWithinThisScope *)v250,
                      v200);
                  }
                  v186 = v229;
                  if ( v229 )
                    ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v15 + 2672), v229, v185);
                  if ( IsRequestFromModeChange(v225) )
                  {
                    ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v15 + 2672), v185, 0);
                    ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v15 + 2672), v185, &stru_1C00B02C8);
                    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v15 + 2672), v185, 0LL);
                  }
                  ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*(ADAPTER_DISPLAY **)(v15 + 2672), v185, -1);
                  ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v15 + 2672), v185, 1);
                  ADAPTER_DISPLAY::SetHdrEnabled(*(PERESOURCE ***)(v15 + 2672), v185, 0);
                }
                v184 = *(ADAPTER_DISPLAY **)(v15 + 2672);
                ++v185;
              }
              while ( v185 < *((_DWORD *)v184 + 20) );
              v36 = v231;
            }
            if ( v236 )
            {
              ADAPTER_DISPLAY::SetSyncLockGroup(
                (__int64)v184,
                1u,
                *((_DWORD *)a5 + 59),
                *((_DWORD *)a5 + 60),
                *((_DWORD *)a5 + 61),
                *((_DWORD *)a5 + 62));
              v203 = *(_QWORD *)(v15 + 2672);
              for ( k = 0; k < *(_DWORD *)(v203 + 80); v203 = *(_QWORD *)(v15 + 2672) )
              {
                v205 = k;
                v206 = *((_DWORD *)a5 + k++ + 39) & 7;
                v182 = *((_DWORD *)a5 + 4 * v206 + 55) != 0 ? v206 : 0;
                v183 = 3968 * v205;
                *(_DWORD *)(3968 * v205 + *(_QWORD *)(v203 + 112) + 3756) = v182;
              }
            }
            v207 = DXGGLOBAL::GetGlobal(v183, v182);
            QDC_CACHE::InvalidateCache(*((QDC_CACHE **)v207 + 158), 0);
            if ( Src )
              operator delete[](Src);
            operator delete[](v227);
            if ( v226 )
              operator delete[](v226);
            if ( v237 )
              operator delete[](v237);
            CVidSchSuspendResume::Resume(v238);
            if ( v36 )
              ReferenceCounted::Release((ReferenceCounted *)(v36 + 64), v208);
            goto LABEL_300;
          }
          v121 = v232;
          while ( 1 )
          {
            i = 0;
            v239 = 0LL;
            v122 = 1 << v120;
            v123 = *((_DWORD *)a5 + 10);
            v240 = 0LL;
            memset(v241, 0, sizeof(v241));
            if ( ((1 << v120) & *((_DWORD *)a5 + 3)) != 0 )
            {
              i = 2;
            }
            else if ( (v123 & v122) != 0 )
            {
              i = 4;
            }
            else if ( (*((_DWORD *)a5 + 2) & ~*((_DWORD *)a5 + 8) & v122) != 0 )
            {
              v118 = (*(_DWORD *)a5 & v122) != 0 ? 3 : 1;
              i = (*(_DWORD *)a5 & v122) != 0 ? 3 : 1;
            }
            v124 = *((_DWORD *)a5 + 2) | v123;
            if ( ((unsigned int)v124 & v122) != 0 )
            {
              v125 = ADAPTER_DISPLAY::GetDisplayModeInfo(v119, v120);
              v126 = v233;
              v127 = *((_OWORD *)v125 + 1);
              v239 = *(_OWORD *)v125;
              v128 = *((_OWORD *)v125 + 2);
              v240 = v127;
              *(_QWORD *)&v127 = *((_QWORD *)v125 + 6);
              *(_OWORD *)v241 = v128;
              *(_QWORD *)&v241[16] = v127;
              DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(v233, v120, (struct _D3DKMT_DISPLAYMODE *)&v239);
              v119 = *(ADAPTER_DISPLAY **)(v15 + 2672);
            }
            else
            {
              v126 = v233;
            }
            if ( (v122 & *((_DWORD *)a5 + 20)) != 0 )
              goto LABEL_233;
            if ( (v122 & v228) == 0 )
              break;
LABEL_235:
            v119 = *(ADAPTER_DISPLAY **)(v15 + 2672);
            if ( ++v120 >= *((_DWORD *)v119 + 20) )
            {
              v36 = v231;
              goto LABEL_237;
            }
          }
          if ( (v122 & *((_DWORD *)a5 + 10)) != 0 )
          {
            ADAPTER_DISPLAY::SetDisplayModeInfo(
              (PERESOURCE **)v119,
              v120,
              (const struct _DXGK_DISPLAYMODE_INFO *const)&v239);
            OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
              *(_QWORD *)(*(_QWORD *)(v15 + 2672) + 104LL),
              v120,
              0LL,
              0LL,
              0,
              1);
            v248[0] = 11LL;
            v248[1] = 0LL;
            if ( (int)DxgkStatusChangeNotify(v248) < 0 )
            {
              v130 = WdLogNewEntry5_WdAssertion(v129, v118);
              *(_QWORD *)(v130 + 24) = 3310LL;
              WdLogEvent5_WdAssertion(v130);
            }
          }
          v124 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6) | (unsigned int)(*((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9));
          if ( ((unsigned int)v124 & v122) != 0 )
          {
            v230 = 0;
            MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v126, v120, &v230);
            v133 = MostImportantVidPnPathTargetsFromSource + 0x80000000;
            if ( (int)v133 >= 0 && MostImportantVidPnPathTargetsFromSource != -1071774919 )
            {
              v134 = WdLogNewEntry5_WdAssertion(v133, v131);
              WdLogEvent5_WdAssertion(v134);
            }
            v217 = 0;
            if ( MostImportantVidPnPathTargetsFromSource < 0 || (v135 = v230, v230 == -1) || (v136 = 0, !v220) )
            {
LABEL_197:
              v135 = -1;
            }
            else
            {
              while ( 1 )
              {
                if ( v120 == v226[v136] )
                {
                  v137 = 56LL * v136;
                  if ( v230 == *(_DWORD *)((char *)Src + v137)
                    && (*(_DWORD *)((_BYTE *)Src + v137 + 32) & 0xF000000) == 0xE000000
                    && (*(_DWORD *)((_BYTE *)Src + v137 + 12) & 4) != 0
                    && (v122 & *((_DWORD *)a5 + 17)) == 0 )
                  {
                    break;
                  }
                }
                if ( ++v136 >= v220 )
                  goto LABEL_197;
              }
              *((_DWORD *)a5 + 18) |= v122;
              v217 = 1;
            }
            ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*(ADAPTER_DISPLAY **)(v15 + 2672), v120, v135);
            v138 = v225;
            j = ADAPTER_DISPLAY::SetVidPnSourceActive(*(ADAPTER_DISPLAY **)(v15 + 2672), v120, v217, v225 == 4, a7);
            if ( j >= 0 )
            {
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v15 + 2672), v120, 0);
              if ( (v122 & *((_DWORD *)a5 + 3)) != 0 )
              {
                if ( !IsRequestFromModeChange(v138) )
                {
                  v144 = WdLogNewEntry5_WdAssertion(v143, v142);
                  WdLogEvent5_WdAssertion(v144);
                }
                ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v15 + 2672), v120, 0);
                ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v15 + 2672), v120, &stru_1C00B02C8);
                ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v15 + 2672), v120, 0LL);
                ADAPTER_DISPLAY::SetHdrEnabled(*(PERESOURCE ***)(v15 + 2672), v120, 0);
              }
              else
              {
                v246 = 0LL;
                if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v233, v120, &v246) < 0 || !v246 )
                {
                  v145 = WdLogNewEntry5_WdAssertion(v124, v118);
                  WdLogEvent5_WdAssertion(v145);
                }
                if ( (v122 & *((_DWORD *)a5 + 2)) != 0 )
                {
                  *(_DWORD *)&v241[12] = 1;
                  *(_QWORD *)&v241[16] = 1LL;
                  if ( *(_QWORD *)(v15 + 2680) )
                  {
                    DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                                   *(ADAPTER_DISPLAY **)(v15 + 2672),
                                                   v120);
                    v147 = DisplayedPrimaryAllocation;
                    if ( DisplayedPrimaryAllocation )
                    {
                      if ( (*((_BYTE *)DisplayedPrimaryAllocation + 4) & 0x10) != 0 )
                        v147 = 0LL;
                      if ( v147 )
                      {
                        v148 = (void *)*((_QWORD *)v147 + 2);
                        v149 = *(ADAPTER_RENDER **)(v15 + 2680);
                        memset(&v249.Width, 0, 40);
                        v249.hAllocation = v148;
                        j = ADAPTER_RENDER::DdiDescribeAllocation(v149, &v249);
                        if ( j < 0 )
                        {
                          v155 = (_QWORD *)WdLogNewEntry5_WdWarning(v151, v150, v152);
                          v155[4] = v120;
                          v155[5] = j;
                          v155[3] = v147;
                          WdLogEvent5_WdWarning(v155);
                        }
                        else if ( v249.Width == (_DWORD)v239
                               && *(_QWORD *)&v249.Height == *(_QWORD *)((char *)&v239 + 4)
                               && *(_QWORD *)&v249.RefreshRate == (_QWORD)v240
                               && (v153 = ~(*(_DWORD *)&v241[8] >> 4),
                                   v151 = v153 ^ (unsigned int)~(*((_DWORD *)v147 + 1) >> 12),
                                   (((unsigned __int8)v153 ^ (unsigned __int8)~(*((_DWORD *)v147 + 1) >> 12)) & 1) == 0) )
                        {
                          *(D3DDDI_MULTISAMPLINGMETHOD *)&v241[12] = v249.MultisampleMethod;
                          *(_DWORD *)&v241[20] = v249.PrivateDriverFormatAttribute;
                        }
                        else if ( v219 || (*((_DWORD *)v147 + 1) & 2) == 0 )
                        {
                          v154 = WdLogNewEntry5_WdAssertion(v151, v150);
                          WdLogEvent5_WdAssertion(v154);
                        }
                      }
                    }
                  }
                  if ( IsRequestFromModeChange(v225) )
                    ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v15 + 2672), v120, 1u);
                  ADAPTER_DISPLAY::SetDisplayModeInfo(
                    *(PERESOURCE ***)(v15 + 2672),
                    v120,
                    (const struct _DXGK_DISPLAYMODE_INFO *const)&v239);
                  v156 = *(_QWORD *)(v15 + 2672);
                  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)v156) )
                  {
                    v159 = WdLogNewEntry5_WdAssertion(v158, v157);
                    *(_QWORD *)(v159 + 24) = 6195LL;
                    WdLogEvent5_WdAssertion(v159);
                  }
                  if ( v120 >= *(_DWORD *)(v156 + 80) )
                  {
                    v160 = WdLogNewEntry5_WdAssertion(v158, v157);
                    *(_QWORD *)(v160 + 24) = 6196LL;
                    WdLogEvent5_WdAssertion(v160);
                  }
                  *(_DWORD *)(3968LL * v120 + *(_QWORD *)(v156 + 112) + 1072) = HIDWORD(v239);
                  ADAPTER_DISPLAY::DetermineScalingCapabilities(*(ADAPTER_DISPLAY **)(v15 + 2672), v120);
                  ADAPTER_DISPLAY::SetHdrEnabled(
                    *(PERESOURCE ***)(v15 + 2672),
                    v120,
                    (v122 & *((_DWORD *)a5 + 63)) != 0);
                  if ( v229 && v235 )
                    ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
                      *(ADAPTER_DISPLAY **)(v15 + 2672),
                      v120,
                      *(struct DXGADAPTER **)(*((_QWORD *)v229 + 2) + 16LL));
                }
              }
            }
            else
            {
              v141 = (_QWORD *)WdLogNewEntry5_WdError(v140, v139);
              v141[5] = j;
              v141[3] = v15;
              v141[4] = v120;
              WdLogEvent5_WdError(v141);
              *((_DWORD *)a5 + v120 + 21) = j;
              *((_DWORD *)a5 + 20) |= v122;
            }
          }
LABEL_233:
          v161 = i;
          if ( i )
          {
            v162 = *(_DWORD *)(*(_QWORD *)(v15 + 2672) + 360LL);
            CurrentProcess = PsGetCurrentProcess(v124, v118);
            ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
            VIDPN_MGR::CacheDisplayModeChangeRequest(
              (__int64)v121,
              v120,
              (__int64)&v239,
              1u,
              *((_DWORD *)a5 + v120 + 21),
              v161,
              v162,
              ProcessImageFileName);
          }
          goto LABEL_235;
        }
        v216 = 1;
        if ( a7 || (v61 = 0, LODWORD(v238[0])) )
          v61 = 1;
        LOBYTE(v215) = v61;
        v62 = VIDPN_MGR::CommitVidPnOnAdapter(
                v60,
                (unsigned int)i,
                v225,
                v11,
                v220,
                Src,
                v226,
                a5,
                &v228,
                v237,
                &v222,
                v229,
                v235,
                v215);
        v65 = v62;
        if ( v62 >= 0 )
          goto LABEL_109;
        v66 = (_QWORD *)WdLogNewEntry5_WdError(v64, v63);
        v66[3] = *(int *)(v15 + 320);
        v66[4] = *(unsigned int *)(v15 + 316);
        v66[5] = v65;
        WdLogEvent5_WdError(v66);
      }
      if ( (int)v65 < 0 )
      {
        *((_DWORD *)a5 + 20) = -1;
        FillFailedStatus(a5, v65);
        v99 = 0;
        if ( v220 )
        {
          v100 = (char *)v227;
          do
          {
            v101 = v99++;
            v63 = 56 * v101;
            v102 = (char *)Src;
            *(_OWORD *)((char *)Src + v63) = *(_OWORD *)&v100[v63];
            *(_OWORD *)&v102[v63 + 16] = *(_OWORD *)&v100[v63 + 16];
            *(_OWORD *)&v102[v63 + 32] = *(_OWORD *)&v100[v63 + 32];
            *(_QWORD *)&v102[v63 + 48] = *(_QWORD *)&v100[v63 + 48];
            v64 = Src;
            *(_DWORD *)((char *)Src + v63 + 32) = *(_DWORD *)((_BYTE *)Src + v63 + 32) & 0xF0FFFFFF | 0xD000000;
            *(_DWORD *)((char *)Src + v63 + 16) |= 1u;
          }
          while ( v99 < v220 );
          v15 = v244;
        }
        v222 = 1;
LABEL_142:
        if ( (v222 & 0xFFFFFFFE) != 0 )
        {
          v103 = WdLogNewEntry5_WdAssertion(v64, v63);
          *(_QWORD *)(v103 + 24) = (unsigned __int64)v222 >> 1;
          WdLogEvent5_WdAssertion(v103);
        }
        if ( (v222 & 1) != 0 )
          *v245 |= 1u;
        goto LABEL_146;
      }
LABEL_109:
      v83 = 0;
      if ( !v220 )
        goto LABEL_142;
      v84 = v245;
      v85 = v232;
      while ( 1 )
      {
        v86 = Src;
        v87 = 56LL * v83;
        ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v85, v63);
        v89 = DXGADAPTER::UsingSetTimingsFromVidPn(ContainingAdapter);
        v63 = (__int64)v227;
        if ( v89 )
        {
          if ( *(_DWORD *)((char *)v227 + v87) != *(_DWORD *)&v86[v87]
            || *(_DWORD *)((char *)v227 + v87 + 4) != *(_DWORD *)&v86[v87 + 4]
            || *(_DWORD *)((char *)v227 + v87 + 8) != *(_DWORD *)&v86[v87 + 8]
            || *(_DWORD *)((char *)v227 + v87 + 12) != *(_DWORD *)&v86[v87 + 12] )
          {
            v93 = WdLogNewEntry5_WdAssertion(v90, v227);
            v94 = *(unsigned int *)((char *)v227 + v87);
LABEL_129:
            *(_QWORD *)(v93 + 24) = v94;
LABEL_130:
            WdLogEvent5_WdAssertion(v93);
            v63 = (__int64)v227;
            v91 = 0;
            goto LABEL_131;
          }
          if ( *(_DWORD *)&v86[v87 + 16] >= 2u || *(_DWORD *)&v86[v87 + 32] >= 0x10000000u || v86[v87 + 51] )
          {
            v92 = WdLogNewEntry5_WdAssertion(v90, v227);
            *(_QWORD *)(v92 + 24) = *(unsigned int *)&v86[v87];
            WdLogEvent5_WdAssertion(v92);
            v63 = (__int64)v227;
          }
          if ( !*(_QWORD *)&v86[v87 + 24] )
          {
            v93 = WdLogNewEntry5_WdAssertion(v90, v63);
            v94 = *(unsigned int *)&v86[v87];
            goto LABEL_129;
          }
          v95 = *(_DWORD *)&v86[v87 + 32] & 0xF000000;
          if ( (((_DWORD)v95 - 201326592) & 0xFCFFFFFF) != 0
            || (_DWORD)v95 == 251658240
            || (*(_BYTE *)(v87 + v63 + 12) & 3) == 3 && (_DWORD)v95 != 234881024 )
          {
            v93 = WdLogNewEntry5_WdAssertion(v95, v63);
            *(_QWORD *)(v93 + 24) = HIBYTE(*(_DWORD *)&v86[v87 + 32]) & 0xF;
            *(_QWORD *)(v93 + 32) = *(unsigned int *)&v86[v87];
            goto LABEL_130;
          }
        }
        v91 = 1;
LABEL_131:
        v96 = v91 == 0;
        v97 = (char *)Src;
        if ( v96 )
        {
          *(_OWORD *)((char *)Src + v87) = *(_OWORD *)(v87 + v63);
          *(_OWORD *)&v97[v87 + 16] = *(_OWORD *)(v87 + v63 + 16);
          *(_OWORD *)&v97[v87 + 32] = *(_OWORD *)(v87 + v63 + 32);
          *(_QWORD *)&v97[v87 + 48] = *(_QWORD *)(v87 + v63 + 48);
          v63 = v83;
          *(_DWORD *)((char *)Src + v87 + 32) = *(_DWORD *)((_BYTE *)Src + v87 + 32) & 0xF0FFFFFF | 0xD000000;
          *((_DWORD *)a5 + v226[v83] + 21) = -1073741437;
          v64 = (_DWORD *)v226[v83];
          *((_DWORD *)a5 + 20) |= 1 << (char)v64;
        }
        else
        {
          v64 = (_DWORD *)(*(_DWORD *)((_BYTE *)Src + v87 + 32) & 0xF000000);
          if ( (_DWORD)v64 == 218103808 )
          {
            *((_DWORD *)a5 + v226[v83] + 21) = -1073741506;
            *((_DWORD *)a5 + 20) |= 1 << v226[v83];
            v98 = IsRequestFromModeChange(v225);
            LOBYTE(v64) = *v84 & 0xFD;
            *v84 = (unsigned __int8)v64 | (2 * !v98);
          }
        }
        if ( ++v83 >= v220 )
        {
          v36 = v231;
          v15 = v244;
          goto LABEL_142;
        }
      }
    }
    v41 = *(unsigned int *)(v39 + 636);
    if ( a7 )
    {
      if ( (_DWORD)v41 )
        goto LABEL_35;
    }
    else if ( !(_DWORD)v41 )
    {
      goto LABEL_35;
    }
    v42 = WdLogNewEntry5_WdAssertion(v41, v38);
    *(_QWORD *)(v42 + 24) = 2651LL;
    WdLogEvent5_WdAssertion(v42);
LABEL_35:
    if ( v40 >= 2200 )
    {
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v48 = *(_DWORD *)(*(_QWORD *)(v15 + 2672) + 80LL);
      if ( v48 )
      {
        do
        {
          v49 = v45;
          v50 = 1 << v47;
          if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & (1 << v47)) != 0 )
          {
            v43 |= v50;
            v45 |= v50;
            if ( v218 )
              v45 = v49;
          }
          else if ( (v50 & *(_DWORD *)a5) != 0 )
          {
            v44 |= v50;
            if ( !a7 )
              v46 |= v50;
          }
          ++v47;
        }
        while ( v47 < v48 );
        v36 = v231;
        v11 = v243;
      }
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v15 + 2680), v43, v44, v45, v46);
      *((_DWORD *)a5 + 15) |= v45;
      if ( v46 )
        CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v238, v46);
    }
    else
    {
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v15 + 2680), 8, 0xFFFFFFFF, 0);
    }
    goto LABEL_49;
  }
  v33 = WdLogNewEntry5_WdLowResource(0LL, v30, v31, v32);
  *(_QWORD *)(v33 + 24) = v220;
  WdLogEvent5_WdLowResource(v33);
  v9 = -1073741801;
LABEL_300:
  auto_rc<DMMVIDPN const>::~auto_rc<DMMVIDPN const>(&v247);
  return v9;
}
