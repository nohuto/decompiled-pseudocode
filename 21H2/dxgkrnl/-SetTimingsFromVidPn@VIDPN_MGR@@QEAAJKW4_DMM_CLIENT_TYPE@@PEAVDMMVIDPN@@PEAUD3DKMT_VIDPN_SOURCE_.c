/*
 * XREFs of ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0
 * Callers:
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x1C0157474 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01BB9EC (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E8324 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F1820 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C039CA5C (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C03A478C (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001D3C (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000F16C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000FBD8 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C0013194 (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C00131CC (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0013A70 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C0013E30 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C0014310 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C0014430 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C0014BD4 (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00190E4 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C001DF68 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C001E350 (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONIT.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C001E530 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C001E980 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C001F014 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C001F210 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001F5D4 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?IsRequestFromModeChange@@YA_NW4_DMM_CLIENT_TYPE@@@Z @ 0x1C001F708 (-IsRequestFromModeChange@@YA_NW4_DMM_CLIENT_TYPE@@@Z.c)
 *     ?SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C001F788 (-SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z @ 0x1C001F884 (-SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??1?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ @ 0x1C002FA24 (--1-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ??1?$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ @ 0x1C004D3C0 (--1-$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0179C10 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C019F49C (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C01A0358 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C01A80EC (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C01A8214 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C01B9F4C (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C01BAD80 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C01BB920 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01BC9FC (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01BE8BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C01C02FC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C01C26A0 (DxgkStatusChangeNotify.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C01C3758 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C01C4B58 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C01C69E4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01C6EB4 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01C70A8 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01C7600 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C01C77B4 (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1C01C79D8 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C01C8F5C (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C01C8FF4 (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01DB83C (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     MonitorSendAdjustedColorimetryToDriver @ 0x1C01E52F4 (MonitorSendAdjustedColorimetryToDriver.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C01E5500 (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 *     LogSetTimingSourceMask @ 0x1C01E6720 (LogSetTimingSourceMask.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C01E6D3C (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C01E7604 (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C01E84CC (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z @ 0x1C01E8BE4 (-CheckDdiSetTimingsViolationOnPathInfo@VIDPN_MGR@@AEAAEAEAU_DXGK_SET_TIMING_PATH_INFO@@0@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C01E9B14 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C01E9EEC (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0206168 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BFF14 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C03A07E8 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03A3518 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03A5824 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::SetTimingsFromVidPn(
        VIDPN_MGR *a1,
        unsigned int a2,
        unsigned int a3,
        struct DMMVIDPN *a4,
        struct D3DKMT_VIDPN_SOURCE_MASKS *a5,
        _BYTE *a6,
        unsigned __int8 a7,
        struct DXGDEVICE *a8,
        __int64 a9)
{
  unsigned int v9; // esi
  __int64 v10; // r15
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // r9
  int v17; // edi
  __int64 v18; // r8
  struct DMMVIDPN *v19; // rdx
  __int64 v20; // rcx
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // kr00_8
  __int64 v27; // rbx
  ADAPTER_RENDER *v28; // r8
  unsigned __int8 IsLegacyDisplayStateSynchronization; // al
  __int64 v30; // r8
  int v31; // r12d
  int v32; // ecx
  unsigned int v33; // r11d
  unsigned int v34; // r10d
  unsigned int v35; // r12d
  unsigned int v36; // r13d
  unsigned int v37; // ecx
  unsigned int v38; // r9d
  unsigned int v39; // eax
  int v40; // edx
  ADAPTER_DISPLAY *v41; // r10
  unsigned int v42; // r12d
  int v43; // ebx
  int v44; // edi
  int v45; // r13d
  ADAPTER_DISPLAY *v46; // r9
  __int64 v47; // rcx
  struct DXGDEVICE *v48; // rdx
  unsigned __int8 v49; // r9
  struct DMMVIDPN *v50; // r12
  VIDPN_MGR *v51; // r13
  int v52; // r13d
  unsigned int v53; // r12d
  _BYTE *v54; // rbx
  VIDPN_MGR *v55; // r15
  __int64 v56; // rdi
  bool v57; // zf
  char *v58; // rax
  char *v59; // rcx
  char v60; // al
  int v61; // eax
  char *v62; // r13
  ADAPTER_DISPLAY *v63; // rcx
  int v64; // eax
  DMMVIDEOPRESENTTARGET *TargetById; // rax
  _OWORD *v66; // r8
  int v67; // edx
  char v68; // r12
  _OWORD *v69; // rax
  ADAPTER_DISPLAY *v70; // rcx
  int v71; // eax
  unsigned __int64 v72; // rdx
  _BYTE *v73; // rdi
  unsigned int v74; // r10d
  char *v75; // r15
  __int64 v76; // rax
  __int64 v77; // rdx
  char *v78; // rax
  bool v79; // al
  unsigned int v80; // eax
  __int64 v81; // rdi
  unsigned int v82; // eax
  int v83; // r12d
  struct DMMVIDEOPRESENTTARGET *v84; // rax
  struct DMMVIDEOPRESENTTARGET *v85; // r13
  _BYTE *v86; // r10
  struct HDXGMONITOR__ *v87; // rdx
  unsigned int v88; // r12d
  __int64 v89; // r9
  int TargetLinkTrainingStatus; // eax
  unsigned int v91; // r9d
  __int64 v92; // r10
  __int64 v93; // rcx
  struct DXGGLOBAL *Global; // rax
  int v95; // eax
  int v96; // eax
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  ADAPTER_DISPLAY *v98; // rdi
  unsigned int v99; // r12d
  VIDPN_MGR *v100; // rbx
  int v101; // r13d
  const struct _DXGK_DISPLAYMODE_INFO *v102; // rax
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // rcx
  bool v107; // al
  DMMVIDPNTOPOLOGY *v108; // rdi
  int MostImportantVidPnPathTargetsFromSource; // eax
  unsigned int v110; // r9d
  bool v111; // r13
  unsigned int v112; // edi
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v114; // r8
  struct DXGADAPTERALLOCATION *v115; // rdi
  void *v116; // rcx
  int v117; // eax
  unsigned int v118; // edx
  __int64 v119; // rcx
  int v120; // eax
  int v121; // r13d
  __int64 v122; // rdi
  int v123; // r13d
  int v124; // edi
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  unsigned int v127; // eax
  __int64 v128; // r12
  __int64 v129; // rdi
  DMMVIDEOPRESENTTARGET *v130; // rax
  DMMVIDEOPRESENTTARGET *v131; // r13
  _BYTE *v132; // rdx
  unsigned int *v133; // r9
  int v134; // r8d
  int v135; // eax
  __int64 v136; // rcx
  __int64 v137; // r8
  ADAPTER_DISPLAY *v138; // r10
  unsigned int v139; // r12d
  struct DXGDEVICE *v140; // rdi
  int v141; // r13d
  ADAPTER_DISPLAY *v142; // rcx
  ADAPTER_DISPLAY *v143; // rdi
  const struct _D3DKMT_DISPLAYMODE *DisplayModeInfo; // rax
  int v145; // eax
  int v146; // r13d
  int v147; // eax
  __int64 v148; // r9
  DMMVIDPNTOPOLOGY *v149; // rdi
  int v150; // eax
  __int64 v151; // rdx
  __int64 v152; // r10
  unsigned int k; // r9d
  __int64 v154; // r8
  unsigned int v155; // ecx
  struct DXGGLOBAL *v156; // rax
  unsigned int *v157; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v158; // [rsp+70h] [rbp-90h]
  char v159; // [rsp+70h] [rbp-90h]
  char v160; // [rsp+71h] [rbp-8Fh]
  unsigned int v161; // [rsp+74h] [rbp-8Ch] BYREF
  void *Src; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v163; // [rsp+80h] [rbp-80h]
  int j; // [rsp+84h] [rbp-7Ch]
  unsigned int v165; // [rsp+88h] [rbp-78h] BYREF
  unsigned int i; // [rsp+8Ch] [rbp-74h]
  unsigned int *v167; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v168; // [rsp+98h] [rbp-68h] BYREF
  int v169; // [rsp+9Ch] [rbp-64h] BYREF
  struct DXGDEVICE *v170; // [rsp+A0h] [rbp-60h]
  _BYTE *v171; // [rsp+A8h] [rbp-58h]
  __int64 v172; // [rsp+B0h] [rbp-50h] BYREF
  VIDPN_MGR *v173; // [rsp+B8h] [rbp-48h]
  __int64 v174; // [rsp+C0h] [rbp-40h]
  void *v175; // [rsp+C8h] [rbp-38h]
  DMMVIDPNTOPOLOGY *v176; // [rsp+D0h] [rbp-30h]
  unsigned int v177; // [rsp+D8h] [rbp-28h] BYREF
  struct DMMVIDPN *v178; // [rsp+E0h] [rbp-20h]
  __int64 v179; // [rsp+E8h] [rbp-18h]
  unsigned int *v180; // [rsp+F0h] [rbp-10h] BYREF
  ADAPTER_RENDER *v181[2]; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v182; // [rsp+108h] [rbp+8h] BYREF
  struct DMMVIDPN *v183; // [rsp+110h] [rbp+10h]
  _DXGKARG_SETTIMINGSFROMVIDPN v184; // [rsp+118h] [rbp+18h] BYREF
  __int64 v185; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v186[2]; // [rsp+148h] [rbp+48h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v187; // [rsp+158h] [rbp+58h] BYREF
  _BYTE v188[24]; // [rsp+188h] [rbp+88h] BYREF
  _OWORD v189[5]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v190; // [rsp+1F0h] [rbp+F0h] BYREF
  GUID ActivityId; // [rsp+200h] [rbp+100h] BYREF

  v9 = 0;
  v10 = *((_QWORD *)a1 + 1);
  v170 = a8;
  v179 = a9;
  v183 = a4;
  v163 = a3;
  v168 = a2;
  v173 = a1;
  v171 = a6;
  v165 = 0;
  if ( !v10 )
  {
    WdLogSingleEntry0(1LL);
    v10 = *((_QWORD *)a1 + 1);
  }
  v14 = *(_QWORD *)(v10 + 16);
  v172 = v14;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v14) )
    WdLogSingleEntry0(1LL);
  v177 = 0;
  *a6 = 0;
  v161 = 0;
  Src = 0LL;
  v167 = 0LL;
  v180 = 0LL;
  v15 = VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
          a1,
          a2,
          a4,
          &v177,
          &v161,
          (struct _DXGK_SET_TIMING_PATH_INFO **)&Src,
          &v167,
          a5,
          &v180);
  v17 = v15;
  j = v15;
  if ( v15 < 0 )
  {
    v18 = v15;
    v19 = a4;
    v20 = 2LL;
LABEL_7:
    WdLogSingleEntry2(v20, v19, v18);
    return (unsigned int)v17;
  }
  v22 = v161;
  if ( !v161 )
  {
    v18 = *(unsigned int *)(v14 + 404);
    v20 = 3LL;
    v19 = (struct DMMVIDPN *)*(int *)(v14 + 408);
    goto LABEL_7;
  }
  if ( *((_DWORD *)a5 + 2) || *((_DWORD *)a5 + 3) || *((_DWORD *)a5 + 6) )
  {
    v160 = 1;
  }
  else
  {
    v160 = 0;
    if ( !*((_DWORD *)a5 + 10) && !*((_DWORD *)a5 + 8) && !*((_DWORD *)a5 + 13) )
    {
      DisplayScenarioJournalSetSetTimingPathInfo(0LL, 56 * v161, v161, Src);
      return 0LL;
    }
  }
  v23 = *((_QWORD *)a1 + 16);
  v169 = 0;
  if ( v23 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 32));
    v24 = *((_QWORD *)a1 + 16);
    v22 = v161;
  }
  else
  {
    v24 = 0LL;
  }
  v185 = v24;
  if ( a4 )
    v24 = (__int64)a4;
  v178 = (struct DMMVIDPN *)v24;
  v176 = (DMMVIDPNTOPOLOGY *)(v24 + 96);
  v26 = v22;
  v25 = 56LL * v22;
  if ( !is_mul_ok(v26, 0x38uLL) )
    v25 = -1LL;
  v175 = (void *)operator new[](v25, 0x4E506456u, 256LL, v16);
  if ( v175 )
  {
    memmove(v175, Src, 56LL * v161);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 15) + 72LL));
    v27 = *((_QWORD *)a1 + 15);
    v28 = *(ADAPTER_RENDER **)(v14 + 2800);
    v174 = v27;
    v181[1] = v28;
    LODWORD(v181[0]) = 0;
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v14);
    v31 = *(_DWORD *)(v14 + 2692);
    v158 = IsLegacyDisplayStateSynchronization;
    i = v31;
    if ( !v30 )
      goto LABEL_47;
    v32 = *(_DWORD *)(v30 + 644);
    if ( a7 )
    {
      if ( v32 )
        goto LABEL_33;
    }
    else if ( !v32 )
    {
      goto LABEL_33;
    }
    WdLogSingleEntry1(1LL, 2714LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(i_DoNotSuspend && pDisplayAdapter->GetRenderCore()->GetSchedulerSuspendSourceMask()) || (!i_DoNotSuspend"
                " && !pDisplayAdapter->GetRenderCore()->GetSchedulerSuspendSourceMask())",
      2714LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_33:
    if ( v31 >= 2200 )
    {
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v37 = 0;
      v38 = *(_DWORD *)(*(_QWORD *)(v14 + 2792) + 96LL);
      if ( v38 )
      {
        do
        {
          v39 = v35;
          v40 = 1 << v37;
          if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & (1 << v37)) != 0 )
          {
            v35 |= v40;
            v33 |= v40;
            if ( v158 )
              v35 = v39;
          }
          else if ( (v40 & *(_DWORD *)a5) != 0 )
          {
            v34 |= v40;
            if ( !a7 )
              v36 |= v40;
          }
          ++v37;
        }
        while ( v37 < v38 );
        v27 = v174;
        v17 = j;
      }
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v14 + 2800), v33, v34, v35, v36);
      *((_DWORD *)a5 + 16) |= v35;
      if ( v36 )
        CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v181, v36);
    }
    else
    {
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v14 + 2800), 8LL, 0xFFFFFFFFLL);
    }
LABEL_47:
    v41 = *(ADAPTER_DISPLAY **)(v14 + 2792);
    v42 = 0;
    if ( *((_DWORD *)v41 + 24) )
    {
      v43 = (int)v181[0];
      v44 = i;
      do
      {
        v45 = 1 << v42;
        v46 = v41;
        if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3)) & (1 << v42)) != 0 )
        {
          v47 = *(_QWORD *)(v14 + 2800);
          if ( v47 && v44 < 2200 )
          {
            ADAPTER_RENDER::FlushScheduler(v47, 8LL, v42);
            v41 = *(ADAPTER_DISPLAY **)(v14 + 2792);
          }
          v46 = v41;
          if ( v170 )
          {
            if ( v179 )
            {
              v48 = *(struct DXGDEVICE **)(4000LL * v42 + *((_QWORD *)v41 + 16) + 728);
              if ( v48 )
              {
                if ( *((_QWORD *)v48 + 231) == *(_QWORD *)(*((_QWORD *)v48 + 2) + 16LL) )
                {
                  if ( v43 || (v49 = 0, a7) )
                    v49 = 1;
                  ADAPTER_DISPLAY::DisablePrimaryOnDevice(v41, v48, v42, v49);
                  v46 = *(ADAPTER_DISPLAY **)(v14 + 2792);
                }
              }
            }
          }
        }
        v41 = v46;
        if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & v45) != 0
          && *(_QWORD *)(v14 + 2800)
          && *(_BYTE *)(v14 + 2738)
          && v158 )
        {
          ADAPTER_DISPLAY::DisableMPOPlanes(v46, v42, 0);
          *((_DWORD *)a5 + 16) |= v45;
          v41 = *(ADAPTER_DISPLAY **)(v14 + 2792);
        }
        ++v42;
      }
      while ( v42 < *((_DWORD *)v41 + 24) );
      v27 = v174;
      v17 = j;
    }
    v50 = v178;
    v51 = v173;
    if ( *((_DWORD *)a5 + 5) )
      VIDPN_MGR::RequestPowerStateForTargets(v173, v178);
    if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v14) )
    {
      v159 = 0;
      if ( v160 )
      {
        v190 = 0LL;
        *(_QWORD *)&v184.SetFlags.Reserved = 0LL;
        *(&v184.PathCount + 1) = 0;
        if ( v163 == 4 )
          DisplayLogSetMonitorPowerStage(0LL, 16LL, 0LL, &v190);
        v62 = (char *)v50 + 88;
        v184.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v165;
        v184.PathCount = v161;
        v184.hFunctionalVidPn = (D3DKMDT_HVIDPN)((unsigned __int64)v50 & -(__int64)((struct DMMVIDPN *)((char *)v50 + 88) != 0LL));
        v63 = *(ADAPTER_DISPLAY **)(v14 + 2792);
        v184.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
        v64 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v63, &v184);
        v17 = v64;
        if ( v64 < 0 )
          WdLogSingleEntry3(2LL, *(int *)(v14 + 408), *(unsigned int *)(v14 + 404), v64);
        if ( v161 == 1
          && IsRequestFromModeChange(v163)
          && (v17 < 0 || (*((_DWORD *)Src + 8) & 0xF000000) == 0xD000000)
          && (*((_DWORD *)Src + 3) & 4) != 0
          && ((v165 & 1) != 0 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 216) + 64LL) + 3516LL) & 3) != 0) )
        {
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v27, *(_DWORD *)Src);
          if ( !DMMVIDEOPRESENTTARGET::IsTargetForceable(TargetById) )
          {
            DisplayScenarioJournalSetSetTimingPathInfo((unsigned int)v17, 56 * v161, v161, Src);
            v66 = v175;
            *((_DWORD *)v175 + 3) = *((_DWORD *)v175 + 3) & 0xFFFFFFF0 | 9;
            v67 = *((_DWORD *)a5 + 1);
            *((_DWORD *)a5 + 6) = v67 & (*((_DWORD *)a5 + 5) ^ *((_DWORD *)a5 + 6));
            *((_DWORD *)a5 + 5) = 0;
            *((_DWORD *)a5 + 20) = v67;
            if ( v17 < 0 )
              v68 = 0;
            else
              v68 = v165 & 1;
            v69 = Src;
            v165 = 0;
            *(_OWORD *)Src = *v66;
            v69[1] = v66[1];
            v69[2] = v66[2];
            *((_QWORD *)v69 + 6) = *((_QWORD *)v66 + 6);
            v70 = *(ADAPTER_DISPLAY **)(v14 + 2792);
            v184.hFunctionalVidPn = (D3DKMDT_HVIDPN)((unsigned __int64)v178 & -(__int64)(v62 != 0LL));
            v184.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v165;
            v184.PathCount = v161;
            v184.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
            *(_QWORD *)&v184.SetFlags.Reserved = 0LL;
            *(&v184.PathCount + 1) = 0;
            v71 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v70, &v184);
            v17 = v71;
            if ( v71 < 0 )
              WdLogSingleEntry4(2LL, *(unsigned int *)Src, *(int *)(v14 + 408), *(unsigned int *)(v14 + 404), v71);
            DxgkLogCodePointPacket(0x68u, *(_DWORD *)Src, v17, *((_BYTE *)Src + 35) & 0xF, *(_QWORD *)(v14 + 404));
            v165 ^= ((unsigned __int8)v165 ^ (unsigned __int8)(v165 | v68)) & 1;
          }
        }
        v52 = v163;
        if ( v163 == 4 )
          DisplayLogSetMonitorPowerStage(0LL, 2147483664LL, (unsigned int)v17, &v190);
        goto LABEL_75;
      }
    }
    else
    {
      v159 = 1;
      if ( v160 || *((_DWORD *)a5 + 10) )
      {
        v160 = 1;
        if ( a7 || (v60 = 0, LODWORD(v181[0])) )
          v60 = 1;
        v61 = VIDPN_MGR::CommitVidPnOnAdapter(
                v51,
                v168,
                v163,
                v50,
                v161,
                Src,
                v167,
                a5,
                &v169,
                v180,
                &v165,
                v170,
                v179,
                v60);
        v17 = v61;
        if ( v61 < 0 )
          WdLogSingleEntry3(2LL, *(int *)(v14 + 408), *(unsigned int *)(v14 + 404), v61);
      }
      else
      {
        v160 = 0;
      }
    }
    v52 = v163;
LABEL_75:
    DisplayScenarioJournalSetSetTimingPathInfo((unsigned int)v17, 56 * v161, v161, Src);
    LogSetTimingSourceMask(v14, a5);
    if ( v160 )
    {
      if ( v17 < 0 )
      {
        *((_DWORD *)a5 + 21) = -1;
        FillFailedStatus(a5, v17);
        v74 = 0;
        if ( v161 )
        {
          v75 = (char *)v175;
          do
          {
            v76 = v74++;
            v77 = 56 * v76;
            v78 = (char *)Src;
            *(_OWORD *)((char *)Src + v77) = *(_OWORD *)&v75[v77];
            *(_OWORD *)&v78[v77 + 16] = *(_OWORD *)&v75[v77 + 16];
            *(_OWORD *)&v78[v77 + 32] = *(_OWORD *)&v75[v77 + 32];
            *(_QWORD *)&v78[v77 + 48] = *(_QWORD *)&v75[v77 + 48];
            *(_DWORD *)((char *)Src + v77 + 32) = *(_DWORD *)((_BYTE *)Src + v77 + 32) & 0xF0FFFFFF | 0xD000000;
            *(_DWORD *)((char *)Src + v77 + 16) |= 1u;
          }
          while ( v74 < v161 );
          v14 = v172;
        }
        v165 = 1;
        v79 = IsRequestFromModeChange(v52);
        v73 = v171;
        *v171 = *v171 & 0xFD | (2 * !v79);
      }
      else
      {
        v53 = 0;
        if ( v161 )
        {
          v54 = v171;
          v55 = v173;
          do
          {
            v56 = 56LL * v53;
            v57 = VIDPN_MGR::CheckDdiSetTimingsViolationOnPathInfo(
                    v55,
                    (struct _DXGK_SET_TIMING_PATH_INFO *)((char *)v175 + v56),
                    (struct _DXGK_SET_TIMING_PATH_INFO *)((char *)Src + v56)) == 0;
            v58 = (char *)Src;
            if ( v57 )
            {
              v59 = (char *)v175 + v56;
              *(_OWORD *)((char *)Src + v56) = *(_OWORD *)((char *)v175 + v56);
              *(_OWORD *)&v58[v56 + 16] = *((_OWORD *)v59 + 1);
              *(_OWORD *)&v58[v56 + 32] = *((_OWORD *)v59 + 2);
              *(_QWORD *)&v58[v56 + 48] = *((_QWORD *)v59 + 6);
              *(_DWORD *)((char *)Src + v56 + 32) = *(_DWORD *)((_BYTE *)Src + v56 + 32) & 0xF0FFFFFF | 0xD000000;
              *((_DWORD *)a5 + v167[v53] + 22) = -1073741437;
              *((_DWORD *)a5 + 21) |= 1 << v167[v53];
            }
            else if ( (*(_DWORD *)((_BYTE *)Src + v56 + 32) & 0xF000000) == 0xD000000 )
            {
              *((_DWORD *)a5 + v167[v53] + 22) = -1073741506;
              *((_DWORD *)a5 + 21) |= 1 << v167[v53];
              *v54 = *v54 & 0xFD | (2 * !IsRequestFromModeChange(v163));
            }
            ++v53;
          }
          while ( v53 < v161 );
          v27 = v174;
          v14 = v172;
        }
        v72 = v165;
        v73 = v171;
      }
      if ( (v72 & 0xFFFFFFFE) != 0 )
      {
        WdLogSingleEntry1(1LL, v72 >> 1);
        LOBYTE(v72) = v165;
      }
      if ( (v72 & 1) != 0 )
        *v73 |= 1u;
    }
    ActivityId = 0LL;
    EtwActivityIdControl(3u, &ActivityId);
    v80 = 0;
    for ( i = 0; v80 < v161; i = v80 )
    {
      v81 = 56LL * v80;
      v82 = v167[v80];
      v83 = 1 << v82;
      LODWORD(v171) = v82;
      j = 1 << v82;
      v84 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v27, *(_DWORD *)((char *)Src + v81));
      v85 = v84;
      if ( v84 )
      {
        if ( v160 )
        {
          v86 = Src;
          v87 = (struct HDXGMONITOR__ *)*((_QWORD *)v84 + 14);
          v88 = (*(_DWORD *)((char *)Src + v81 + 12) >> 2) & 1;
          if ( v87 )
          {
            MONITOR_MGR::AcquireMonitorExclusive(&v172, v87);
            if ( v172 )
            {
              LOBYTE(v89) = 1;
              DXGMONITOR::LogMonitorObjectOnOffState(v172, &ActivityId, v88, v89);
            }
            else
            {
              WdLogSingleEntry1(2LL, 5913LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"LogMonitorOnOffState failed _GetMonitorFromHandle",
                5913LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            RESOURCE_LOCK_ACCESSOR<DXGMONITOR>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR>(&v172);
            v86 = Src;
          }
          if ( !v159 )
          {
            DxgkLogCodePointPacket(
              0x58u,
              *(_DWORD *)&v86[v81],
              v86[v81 + 35] & 0xF | 0x80000000,
              *(_DWORD *)&v86[v81 + 24],
              *(_QWORD *)(v14 + 404));
            DxgkLogCodePointPacket(
              0x59u,
              *(_DWORD *)((char *)Src + v81),
              *(_DWORD *)((char *)Src + v81 + 48),
              0,
              *(_QWORD *)(v14 + 404));
          }
          TargetLinkTrainingStatus = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v85, 0LL);
          v83 = j;
          if ( TargetLinkTrainingStatus != (HIBYTE(v91) & 0xF) )
          {
            *((_DWORD *)a5 + 9) |= j;
            v91 = *(_DWORD *)(v81 + v92 + 32);
          }
          v93 = *(_QWORD *)(v81 + v92 + 24);
          *(_BYTE *)(*((_QWORD *)v85 + 67) + 168LL) = HIBYTE(v91) & 0xF;
          *(_QWORD *)(*((_QWORD *)v85 + 67) + 160LL) = v93;
          Global = DXGGLOBAL_GetGlobal();
          QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 191), 0);
          if ( (*(_DWORD *)((_BYTE *)Src + v81 + 32) & 0xF000000) == 0xC000000 )
            DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(v85, 1u);
          else
            DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(v85);
          *((_BYTE *)v85 + 414) = 0;
        }
        else
        {
          v95 = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus(v84, 0LL);
          *(_DWORD *)((char *)Src + v81 + 32) ^= (*(_DWORD *)((char *)Src + v81 + 32) ^ (v95 << 24)) & 0xF000000;
        }
        if ( (*(_DWORD *)((_BYTE *)Src + v81 + 12) & 4) != 0 && (v83 & *((_DWORD *)a5 + 18)) == 0 )
        {
          v96 = v169 | *((_DWORD *)a5 + 21);
          if ( !_bittest(&v96, (unsigned int)v171) )
          {
            DMMVIDEOPRESENTTARGET::SetTargetActivated(v85, 1u, 1u);
            if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v83) != 0
              && (*(_DWORD *)((_BYTE *)Src + v81 + 32) & 0xF000000) == 0xE000000 )
            {
              PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v176, *(_DWORD *)((char *)Src + v81));
              DMMVIDPNPRESENTPATH::SetDriverGammaRamp(PathFromTarget, 0LL);
            }
          }
        }
        if ( (*(_DWORD *)((_BYTE *)Src + v81 + 32) & 0xF000000) != 0xD000000
          && ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 4)) & v83) != 0 )
        {
          MonitorSendAdjustedColorimetryToDriver(*((_QWORD *)v85 + 14), *(unsigned int *)((char *)Src + v81 + 4));
        }
      }
      v80 = i + 1;
    }
    CVidSchSuspendResume::Resume(v181);
    v98 = *(ADAPTER_DISPLAY **)(v14 + 2792);
    v99 = 0;
    if ( !*((_DWORD *)v98 + 24) )
    {
LABEL_217:
      v127 = 0;
      for ( j = 0; v127 < v161; j = v127 )
      {
        v128 = v127;
        v129 = 56LL * v127;
        v130 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v27, *(_DWORD *)((char *)Src + v129));
        v131 = v130;
        if ( v130 )
        {
          v132 = Src;
          if ( (*(_DWORD *)((_BYTE *)Src + v129 + 12) & 4) == 0
            || (v133 = v167, v134 = 1 << v167[v128], (v134 & *((_DWORD *)a5 + 18)) != 0)
            || (v134 & *((_DWORD *)a5 + 21)) != 0 )
          {
            DMMVIDEOPRESENTTARGET::SetTargetActivated(
              v130,
              0,
              (*(_DWORD *)((_BYTE *)Src + v129 + 32) & 0xF000000) == 201326592);
            v132 = Src;
            v133 = v167;
          }
          if ( !v159
            && *((_BYTE *)v131 + 416)
            && ((*(_DWORD *)&v132[v129 + 32] & 0xF000000) != 0xE000000 || v132[v129 + 48] != 0xFF) )
          {
            v135 = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                     *(ADAPTER_DISPLAY **)(v14 + 2792),
                     v133[v128],
                     0,
                     0x800u,
                     a7);
            if ( v135 < 0 )
              WdLogSingleEntry3(2LL, v14, v167[v128], v135);
            if ( (*(_DWORD *)((_BYTE *)Src + v129 + 32) & 0xF000000) == 0xE000000 )
            {
              v136 = *(_QWORD *)(v14 + 2800);
              if ( v136 )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v136 + 624) + 8LL) + 888LL))(
                  *(_QWORD *)(v136 + 632),
                  v167[v128]);
              }
              else
              {
                v137 = *(_QWORD *)(*(_QWORD *)(v14 + 2792) + 448LL);
                if ( v137 )
                  _InterlockedExchange((volatile __int32 *)(2920LL * v167[v128] + *(_QWORD *)(v137 + 8) + 960), 1);
              }
            }
          }
          *((_BYTE *)v131 + 416) = 0;
        }
        else if ( (*(_DWORD *)((_BYTE *)Src + v129 + 12) & 4) != 0 )
        {
          WdLogSingleEntry0(1LL);
        }
        if ( (*(_DWORD *)((_BYTE *)Src + v129 + 16) & 1) != 0 )
          *((_DWORD *)a5 + 16) |= 1 << v167[v128];
        v127 = j + 1;
      }
      auto_rc<DMMVIDPN>::reset((__int64 *)v173 + 40, 0LL);
      CVidSchSuspendResume::Resume(v181);
      v138 = *(ADAPTER_DISPLAY **)(v14 + 2792);
      v139 = 0;
      if ( *((_DWORD *)v138 + 24) )
      {
        v140 = v170;
        do
        {
          v141 = 1 << v139;
          if ( ((1 << v139) & *((_DWORD *)a5 + 15)) != 0 )
            ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(v138, v139);
          if ( (v141 & *((_DWORD *)a5 + 16)) != 0 )
            DXGADAPTER::NotifyMultiPlaneOverlayDisable((DXGADAPTER *)v14, v139);
          if ( v140 && !v159 )
          {
            if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v14 + 2792), v139, 0)
              && ADAPTER_DISPLAY::IsCddPrimaryStale(*(ADAPTER_DISPLAY **)(v14 + 2792), v139) )
            {
              ADAPTER_DISPLAY::DestroyCddAllocations(v142, v140, v139);
            }
            v143 = *(ADAPTER_DISPLAY **)(v14 + 2792);
            DisplayModeInfo = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(v143, v139);
            ADAPTER_DISPLAY::SetCddDisplayMode((PERESOURCE **)v143, v139, DisplayModeInfo);
            v140 = v170;
          }
          if ( (v141 & *((_DWORD *)a5 + 21)) != 0 )
          {
            v145 = *((_DWORD *)a5 + v139 + 40);
            if ( (v145 & 7) != 0 )
            {
              *((_DWORD *)a5 + 4 * (v145 & 7) + 56) = 0;
              DxgkLogCodePointPacket(0x65u, v139, *((_DWORD *)a5 + v139 + 40) & 7, 2u, *(_QWORD *)(v14 + 404));
            }
            v146 = v163;
            v147 = ADAPTER_DISPLAY::SetVidPnSourceActive(
                     *(ADAPTER_DISPLAY **)(v14 + 2792),
                     v139,
                     0,
                     0LL,
                     v163 == 4,
                     a7 != 0);
            if ( v147 < 0 )
              WdLogSingleEntry3(2LL, v14, v139, v147);
            if ( v183 )
            {
              v149 = (struct DMMVIDPN *)((char *)v183 + 96);
              ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                (__int64)v188,
                (__int64)v183 + 152,
                2u,
                v148,
                (__int64)v157,
                *((_QWORD *)v183 + 17));
              v150 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v149, v139);
              v151 = 0x80000000LL;
              if ( (int)(v150 + 0x80000000) >= 0 && v150 != -1071774919 )
                WdLogSingleEntry0(1LL);
              ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                (ApplyPermissionWithinThisScope *)v188,
                v151);
            }
            v140 = v170;
            if ( v170 )
              ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v14 + 2792), v170, v139);
            if ( IsRequestFromModeChange(v146) )
            {
              ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v14 + 2792), v139, 0);
              ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v14 + 2792), v139, &stru_1C0130EC0);
              ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v14 + 2792), v139, 0LL);
            }
            ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*(ADAPTER_DISPLAY **)(v14 + 2792), v139, -1);
            ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v14 + 2792), v139, 1);
            ADAPTER_DISPLAY::SetHdrEnabled(*(PERESOURCE ***)(v14 + 2792), v139, 0);
          }
          v138 = *(ADAPTER_DISPLAY **)(v14 + 2792);
          ++v139;
        }
        while ( v139 < *((_DWORD *)v138 + 24) );
        v27 = v174;
      }
      if ( v183 )
      {
        ADAPTER_DISPLAY::SetSyncLockGroup(
          (__int64)v138,
          1u,
          *((_DWORD *)a5 + 60),
          *((unsigned int *)a5 + 61),
          *((_DWORD *)a5 + 62),
          *((_DWORD *)a5 + 63));
        v152 = *(_QWORD *)(v14 + 2792);
        for ( k = 0; k < *(_DWORD *)(v152 + 96); v152 = *(_QWORD *)(v14 + 2792) )
        {
          v154 = k;
          v155 = *((_DWORD *)a5 + k++ + 40) & 7;
          *(_DWORD *)(*(_QWORD *)(v152 + 128) + 4000 * v154 + 3780) = *((_DWORD *)a5 + 4 * v155 + 56) != 0 ? v155 : 0;
        }
      }
      v156 = DXGGLOBAL_GetGlobal();
      QDC_CACHE::InvalidateCache(*((QDC_CACHE **)v156 + 191), 0);
      if ( Src )
        operator delete[](Src);
      operator delete[](v175);
      if ( v167 )
        operator delete[](v167);
      if ( v180 )
        operator delete[](v180);
      CVidSchSuspendResume::Resume(v181);
      if ( v27 )
        ReferenceCounted::Release((ReferenceCounted *)(v27 + 64));
      goto LABEL_280;
    }
    v100 = v173;
    while ( 1 )
    {
      j = 0;
      memset(v189, 0, sizeof(v189));
      v101 = 1 << v99;
      i = 1 << v99;
      if ( ((1 << v99) & *((_DWORD *)a5 + 3)) != 0 )
      {
        j = 2;
      }
      else if ( (v101 & *((_DWORD *)a5 + 10)) != 0 )
      {
        j = 4;
      }
      else if ( (*((_DWORD *)a5 + 2) & ~*((_DWORD *)a5 + 8) & v101) != 0 )
      {
        j = (v101 & *(_DWORD *)a5) != 0 ? 3 : 1;
      }
      v102 = ADAPTER_DISPLAY::GetDisplayModeInfo(v98, v99);
      v106 = *((_DWORD *)a5 + 2) | (unsigned int)(*((_DWORD *)a5 + 10) | *((_DWORD *)a5 + 13));
      v189[0] = *(_OWORD *)v102;
      v189[1] = *((_OWORD *)v102 + 1);
      v189[2] = *((_OWORD *)v102 + 2);
      v189[3] = *((_OWORD *)v102 + 3);
      v189[4] = *((_OWORD *)v102 + 4);
      if ( ((unsigned int)v106 & v101) != 0 )
      {
        v107 = IsRequestFromModeChange(v163);
        v108 = v176;
        DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(v176, v107, v99, (struct _DXGK_DISPLAYMODE_INFO *)v189);
      }
      else
      {
        v108 = v176;
      }
      if ( (v101 & *((_DWORD *)a5 + 21)) != 0 )
        goto LABEL_213;
      if ( (v101 & v169) == 0 )
        break;
LABEL_215:
      v98 = *(ADAPTER_DISPLAY **)(v14 + 2792);
      if ( ++v99 >= *((_DWORD *)v98 + 24) )
      {
        v27 = v174;
        goto LABEL_217;
      }
    }
    if ( (v101 & *((_DWORD *)a5 + 10)) != 0 )
    {
      ADAPTER_DISPLAY::SetDisplayModeInfo(
        *(PERESOURCE ***)(v14 + 2792),
        v99,
        (const struct _DXGK_DISPLAYMODE_INFO *const)v189);
      OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
        *(struct _KTHREAD ***)(*(_QWORD *)(v14 + 2792) + 120LL),
        v99,
        0LL,
        0,
        0,
        1);
      v186[0] = 11LL;
      v186[1] = 0LL;
      if ( (int)DxgkStatusChangeNotify(v186) < 0 )
      {
        WdLogSingleEntry1(1LL, 3408LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"NT_SUCCESS(NotificationStatus)",
          3408LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    v106 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 13) | *((_DWORD *)a5 + 6) | (unsigned int)(*((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9));
    if ( ((unsigned int)v106 & v101) == 0 )
    {
LABEL_213:
      v124 = j;
      if ( j )
      {
        CurrentProcess = PsGetCurrentProcess(v106, v103, v104, v105);
        ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
        VIDPN_MGR::CacheDisplayModeChangeRequest(
          (__int64)v100,
          v99,
          (__int64)v189,
          1LL,
          *((_DWORD *)a5 + v99 + 22),
          v124,
          *(_DWORD *)(*(_QWORD *)(v14 + 2792) + 416LL),
          ProcessImageFileName);
      }
      goto LABEL_215;
    }
    v168 = 0;
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v108, v99, &v168);
    if ( MostImportantVidPnPathTargetsFromSource >= 0 )
    {
      v110 = v168;
      if ( v168 != -1 )
      {
        v118 = 0;
        if ( v161 )
        {
          while ( 1 )
          {
            if ( v99 == v167[v118] )
            {
              v119 = 56LL * v118;
              if ( v168 == *(_DWORD *)((char *)Src + v119)
                && (*(_DWORD *)((_BYTE *)Src + v119 + 32) & 0xF000000) == 0xE000000
                && (*(_DWORD *)((_BYTE *)Src + v119 + 12) & 4) != 0
                && (v101 & *((_DWORD *)a5 + 18)) == 0 )
              {
                break;
              }
            }
            if ( ++v118 >= v161 )
              goto LABEL_168;
          }
          *((_DWORD *)a5 + 19) |= v101;
          v111 = 1;
          goto LABEL_169;
        }
      }
    }
    else if ( MostImportantVidPnPathTargetsFromSource != -1071774919 )
    {
      WdLogSingleEntry0(1LL);
    }
LABEL_168:
    v110 = -1;
    v111 = 0;
LABEL_169:
    ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*(ADAPTER_DISPLAY **)(v14 + 2792), v99, v110);
    v112 = i;
    if ( (i & *((_DWORD *)a5 + 2)) != 0 )
    {
      HIDWORD(v189[2]) = 1;
      *(_QWORD *)&v189[3] = 1LL;
      if ( *(_QWORD *)(v14 + 2800) )
      {
        DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                       *(ADAPTER_DISPLAY **)(v14 + 2792),
                                       v99);
        v115 = DisplayedPrimaryAllocation;
        if ( DisplayedPrimaryAllocation && (*((_DWORD *)DisplayedPrimaryAllocation + 1) & 0x10) == 0 )
        {
          v116 = (void *)*((_QWORD *)DisplayedPrimaryAllocation + 2);
          memset(&v187.Width, 0, 40);
          v187.hAllocation = v116;
          v117 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(v14 + 2800), &v187, v114);
          if ( v117 < 0 )
          {
            WdLogSingleEntry3(3LL, v115, v99, v117);
          }
          else if ( v187.Width == LODWORD(v189[0])
                 && *(_QWORD *)&v187.Height == *(_QWORD *)((char *)v189 + 4)
                 && *(_QWORD *)&v187.RefreshRate == *(_QWORD *)&v189[1]
                 && (((unsigned __int8)~(DWORD2(v189[2]) >> 4) ^ (unsigned __int8)~(*((_DWORD *)v115 + 1) >> 12)) & 1) == 0 )
          {
            *(D3DDDI_MULTISAMPLINGMETHOD *)((char *)&v189[2] + 12) = v187.MultisampleMethod;
            DWORD1(v189[3]) = v187.PrivateDriverFormatAttribute;
          }
          else if ( v159 || (*((_DWORD *)v115 + 1) & 2) == 0 )
          {
            WdLogSingleEntry0(1LL);
          }
        }
        v112 = i;
      }
    }
    v120 = ADAPTER_DISPLAY::SetVidPnSourceActive(
             *(ADAPTER_DISPLAY **)(v14 + 2792),
             v99,
             v111,
             (const struct _DXGK_DISPLAYMODE_INFO *)v189,
             v163 == 4,
             a7 != 0);
    v121 = v120;
    if ( v120 >= 0 )
    {
      ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(PERESOURCE ***)(v14 + 2792), v99, 0);
      if ( (v112 & *((_DWORD *)a5 + 3)) != 0 )
      {
        if ( !IsRequestFromModeChange(v163) )
          WdLogSingleEntry0(1LL);
        ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v14 + 2792), v99, 0);
        ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v14 + 2792), v99, &stru_1C0130EC0);
        ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v14 + 2792), v99, 0LL);
        ADAPTER_DISPLAY::SetHdrEnabled(*(PERESOURCE ***)(v14 + 2792), v99, 0);
      }
      else
      {
        v182 = 0LL;
        if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v176, v99, &v182) < 0 || !v182 )
          WdLogSingleEntry0(1LL);
        v106 = (unsigned int)(*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 13));
        if ( ((unsigned int)v106 & v112) != 0 )
        {
          if ( IsRequestFromModeChange(v163) )
            ADAPTER_DISPLAY::SetPartOfDesktop(*(ADAPTER_DISPLAY **)(v14 + 2792), v99, 1u);
          ADAPTER_DISPLAY::SetDisplayModeInfo(
            *(PERESOURCE ***)(v14 + 2792),
            v99,
            (const struct _DXGK_DISPLAYMODE_INFO *const)v189);
          v122 = *(_QWORD *)(v14 + 2792);
          v123 = HIDWORD(v189[0]);
          if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)v122) )
          {
            WdLogSingleEntry1(1LL, 6274LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"IsCoreResourceSharedOwner()",
              6274LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          if ( v99 >= *(_DWORD *)(v122 + 96) )
          {
            WdLogSingleEntry1(1LL, 6275LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"VidPnSourceId < m_NumVidPnSources",
              6275LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(4000LL * v99 + *(_QWORD *)(v122 + 128) + 1092) = v123;
          ADAPTER_DISPLAY::DetermineScalingCapabilities(*(ADAPTER_DISPLAY **)(v14 + 2792), v99);
          ADAPTER_DISPLAY::SetHdrEnabled(*(PERESOURCE ***)(v14 + 2792), v99, (*((_DWORD *)a5 + 64) & i) != 0);
          if ( v170 && v179 )
            ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
              *(ADAPTER_DISPLAY **)(v14 + 2792),
              v99,
              *(struct DXGADAPTER **)(*((_QWORD *)v170 + 2) + 16LL));
        }
      }
    }
    else
    {
      WdLogSingleEntry3(2LL, v14, v99, v120);
      v106 = i;
      *((_DWORD *)a5 + v99 + 22) = v121;
      *((_DWORD *)a5 + 21) |= v106;
    }
    goto LABEL_213;
  }
  WdLogSingleEntry1(6LL, v161);
  v9 = -1073741801;
LABEL_280:
  auto_rc<DMMVIDPN const>::~auto_rc<DMMVIDPN const>(&v185);
  return v9;
}
