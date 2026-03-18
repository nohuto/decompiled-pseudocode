/*
 * XREFs of ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013B32C
 * Callers:
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C00DBBE4 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C013E2E0 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z @ 0x1C0149928 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z.c)
 *     ?DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014AF68 (-DmmEnablePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCEN.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0171FE4 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C02DD464 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1C0001850 (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0001B04 (-MarkCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z @ 0x1C0001D88 (-SetCddInterface@ADAPTER_DISPLAY@@QEAAXIQEBU_CDDDXGK_INTERFACE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C0004254 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B74 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0008344 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A6AC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z @ 0x1C000B7AC (-GetPathFromTarget@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@I@Z.c)
 *     ?FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z @ 0x1C000B7E4 (-FillFailedStatus@@YAXPEAUD3DKMT_VIDPN_SOURCE_MASKS@@J@Z.c)
 *     ?SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C000CE58 (-SetCddDisplayMode@ADAPTER_DISPLAY@@QEAAXIAEBU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C000D088 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000D0F0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@IQEBE@Z @ 0x1C000D130 (-CacheDisplayModeChangeRequest@VIDPN_MGR@@QEAAXIPEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4.c)
 *     ?IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ @ 0x1C000D304 (-IsLegacyDisplayStateSynchronization@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0019AD8 (-IsCddPrimaryStale@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Resume@CVidSchSuspendResume@@QEAAXXZ @ 0x1C001A624 (-Resume@CVidSchSuspendResume@@QEAAXXZ.c)
 *     ?SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x1C001A774 (-SetVidPnPrimaryTarget@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C001A890 (-SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z @ 0x1C001A8EC (-SetSyncLockGroup@ADAPTER_DISPLAY@@QEAAXIKIW4_DXGK_SYNC_LOCK_STYLE@@K@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C0026DA0 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsRequestFromModeChange@@YA_NW4_DMM_CLIENT_TYPE@@@Z @ 0x1C0026DE4 (-IsRequestFromModeChange@@YA_NW4_DMM_CLIENT_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ?NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z @ 0x1C0036B5C (-NotifyMultiPlaneOverlayDisable@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x1C003A028 (-SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z.c)
 *     ??1?$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ @ 0x1C0048AA0 (--1-$auto_rc@$$CBVDMMVIDPN@@@@QEAA@XZ.c)
 *     McTemplateK0pqqqqqqqqqqqqqqqq_EtwWriteTransfer @ 0x1C005BEE4 (McTemplateK0pqqqqqqqqqqqqqqqq_EtwWriteTransfer.c)
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00DECC4 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E0B98 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00F58E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C010EDA0 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C010EEC8 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C0122B60 (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0129A20 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C0131590 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0138B18 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C013A564 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C013AD94 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C013CD80 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C013E214 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C0140680 (DxgkStatusChangeNotify.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0145CCC (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C01466D4 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C01467B0 (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJIAEAU_D3DKMT_DISPLAYMODE@@@Z.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C014750C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z @ 0x1C0147B68 (-GetDisplayedPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@I@Z.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0148430 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z @ 0x1C0148988 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJIEEE@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C014A2A4 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0156994 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0159370 (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0166100 (-InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z @ 0x1C0166BE0 (-RequestPowerStateForTargets@VIDPN_MGR@@AEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z @ 0x1C0166C74 (-SetTargetActivated@DMMVIDEOPRESENTTARGET@@QEAAXEE@Z.c)
 *     LogMonitorHandleOnOffState @ 0x1C0166EEC (LogMonitorHandleOnOffState.c)
 *     MonitorSendAdjustedColorimetryToDriver @ 0x1C01677DC (MonitorSendAdjustedColorimetryToDriver.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1C0168920 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C01689F4 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C0210780 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02109A8 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C0215168 (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 *     ?DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z @ 0x1C021DCC0 (-DdiSetTimingsFromVidPn@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETTIMINGSFROMVIDPN@@@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x1C02E55AC (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
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
  __int64 v115; // r8
  __int64 v116; // r9
  int v117; // eax
  int v118; // eax
  DMMVIDPNPRESENTPATH *PathFromTarget; // rax
  __int64 v120; // rdx
  ADAPTER_DISPLAY *v121; // r9
  unsigned int v122; // r15d
  VIDPN_MGR *v123; // rbx
  int v124; // r12d
  unsigned int v125; // ecx
  __int64 v126; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *v127; // rax
  DMMVIDPNTOPOLOGY *v128; // rdi
  __int128 v129; // xmm1
  __int128 v130; // xmm0
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rdx
  int MostImportantVidPnPathTargetsFromSource; // edi
  __int64 v135; // rcx
  __int64 v136; // rax
  unsigned int v137; // r9d
  unsigned int v138; // edx
  __int64 v139; // rcx
  int v140; // edi
  __int64 v141; // rdx
  __int64 v142; // rcx
  _QWORD *v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // rax
  __int64 v147; // rax
  struct DXGADAPTERALLOCATION *DisplayedPrimaryAllocation; // rax
  __int64 v149; // r8
  struct DXGADAPTERALLOCATION *v150; // rdi
  void *v151; // rax
  ADAPTER_RENDER *v152; // rcx
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  int v156; // eax
  __int64 v157; // rax
  _QWORD *v158; // rax
  __int64 v159; // rdi
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // rax
  __int64 v163; // rax
  int v164; // r12d
  int v165; // edi
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  unsigned int v168; // eax
  __int64 v169; // r15
  __int64 v170; // rdi
  DMMVIDEOPRESENTTARGET *v171; // rax
  __int64 v172; // rdx
  DMMVIDEOPRESENTTARGET *v173; // r12
  _BYTE *v174; // rdx
  unsigned int *v175; // r10
  int v176; // r8d
  __int64 v177; // rdx
  __int64 v178; // rcx
  _QWORD *v179; // rax
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // rcx
  __int64 v184; // rax
  __int64 v185; // rdx
  __int64 v186; // rcx
  ADAPTER_DISPLAY *v187; // r10
  unsigned int v188; // r15d
  struct DXGDEVICE *v189; // rdi
  int v190; // r12d
  ADAPTER_DISPLAY *v191; // rcx
  ADAPTER_DISPLAY *v192; // rdi
  const struct _D3DKMT_DISPLAYMODE *DisplayModeInfo; // rax
  int v194; // eax
  int v195; // eax
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // r9
  __int64 v199; // r12
  _QWORD *v200; // rax
  DMMVIDPNTOPOLOGY *v201; // rdi
  int v202; // eax
  __int64 v203; // r8
  __int64 v204; // r9
  __int64 v205; // rdx
  __int64 v206; // rcx
  __int64 v207; // rax
  __int64 v208; // r10
  unsigned int k; // r9d
  __int64 v210; // r8
  unsigned int v211; // ecx
  struct DXGGLOBAL *v212; // rax
  __int64 v213; // r8
  __int64 v214; // r9
  __int64 v215; // rdx
  unsigned int *v216; // [rsp+20h] [rbp-100h]
  unsigned int *v217; // [rsp+20h] [rbp-100h]
  struct _DXGK_SET_TIMING_PATH_INFO **v218; // [rsp+28h] [rbp-F8h]
  unsigned int **v219; // [rsp+30h] [rbp-F0h]
  struct D3DKMT_VIDPN_SOURCE_MASKS *v220; // [rsp+38h] [rbp-E8h]
  unsigned int **v221; // [rsp+40h] [rbp-E0h]
  int v222; // [rsp+68h] [rbp-B8h]
  unsigned __int8 v223; // [rsp+A0h] [rbp-80h]
  unsigned __int8 v224; // [rsp+A0h] [rbp-80h]
  unsigned __int8 v225; // [rsp+A1h] [rbp-7Fh]
  char v226; // [rsp+A1h] [rbp-7Fh]
  unsigned int v227; // [rsp+A4h] [rbp-7Ch] BYREF
  void *Src; // [rsp+A8h] [rbp-78h] BYREF
  unsigned int v229; // [rsp+B0h] [rbp-70h] BYREF
  int i; // [rsp+B4h] [rbp-6Ch]
  signed int j; // [rsp+B8h] [rbp-68h]
  unsigned int v232; // [rsp+BCh] [rbp-64h]
  unsigned int *v233; // [rsp+C0h] [rbp-60h] BYREF
  void *v234; // [rsp+C8h] [rbp-58h]
  int v235; // [rsp+D0h] [rbp-50h] BYREF
  struct DXGDEVICE *v236; // [rsp+D8h] [rbp-48h]
  unsigned int v237; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v238; // [rsp+E8h] [rbp-38h]
  VIDPN_MGR *v239; // [rsp+F0h] [rbp-30h]
  DMMVIDPNTOPOLOGY *v240; // [rsp+F8h] [rbp-28h]
  unsigned int v241; // [rsp+100h] [rbp-20h] BYREF
  __int64 v242; // [rsp+108h] [rbp-18h]
  __int64 v243; // [rsp+110h] [rbp-10h]
  unsigned int *v244; // [rsp+118h] [rbp-8h] BYREF
  ADAPTER_RENDER *v245[2]; // [rsp+120h] [rbp+0h] BYREF
  __int128 v246; // [rsp+130h] [rbp+10h] BYREF
  __int128 v247; // [rsp+140h] [rbp+20h]
  _BYTE v248[24]; // [rsp+150h] [rbp+30h] BYREF
  _DXGKARG_SETTIMINGSFROMVIDPN v249; // [rsp+168h] [rbp+48h] BYREF
  __int64 v250; // [rsp+190h] [rbp+70h]
  __int64 v251; // [rsp+198h] [rbp+78h]
  _BYTE *v252; // [rsp+1A0h] [rbp+80h]
  unsigned __int64 v253; // [rsp+1A8h] [rbp+88h] BYREF
  __int64 v254; // [rsp+1B0h] [rbp+90h] BYREF
  _QWORD v255[2]; // [rsp+1B8h] [rbp+98h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v256; // [rsp+1C8h] [rbp+A8h] BYREF
  _BYTE v257[24]; // [rsp+1F8h] [rbp+D8h] BYREF
  __int128 v258; // [rsp+210h] [rbp+F0h] BYREF
  GUID ActivityId; // [rsp+220h] [rbp+100h] BYREF

  v9 = 0;
  v10 = *((_QWORD *)a1 + 1);
  v11 = a4;
  v12 = a2;
  v236 = a8;
  v242 = a9;
  v243 = a4;
  v232 = a3;
  i = a2;
  v239 = a1;
  v252 = a6;
  v229 = 0;
  if ( !v10 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v14);
    v10 = *((_QWORD *)a1 + 1);
  }
  v15 = *(_QWORD *)(v10 + 16);
  v251 = v15;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v15) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v18);
  }
  v241 = 0;
  *a6 = 0;
  v227 = 0;
  Src = 0LL;
  v233 = 0LL;
  v244 = 0LL;
  v19 = VIDPN_MGR::BuildSetTimingsPathInfoFromClientVidPn(
          a1,
          v12,
          (struct DMMVIDPN *const)v11,
          &v241,
          &v227,
          (struct _DXGK_SET_TIMING_PATH_INFO **)&Src,
          &v233,
          a5,
          &v244);
  v23 = v19;
  if ( v19 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v24 + 24) = v11;
    *(_QWORD *)(v24 + 32) = v23;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v23;
  }
  if ( !v227 )
  {
    v26 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v26 + 24) = *(int *)(v15 + 320);
    *(_QWORD *)(v26 + 32) = *(unsigned int *)(v15 + 316);
    WdLogEvent5_WdWarning(v26);
    return (unsigned int)v23;
  }
  if ( *((_QWORD *)a5 + 1) || *((_DWORD *)a5 + 6) )
  {
    v223 = 1;
  }
  else
  {
    v223 = 0;
    if ( !*((_DWORD *)a5 + 10) && !*((_DWORD *)a5 + 8) )
      return 0LL;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v221) = *((_DWORD *)a5 + 5);
    LODWORD(v220) = *((_DWORD *)a5 + 3);
    LODWORD(v219) = *((_DWORD *)a5 + 2);
    LODWORD(v218) = *((_DWORD *)a5 + 1);
    LODWORD(v216) = *(_DWORD *)a5;
    McTemplateK0pqqqqqqqqqqqqqqqq_EtwWriteTransfer(
      (unsigned int)v219,
      v20,
      v22,
      v15,
      v216,
      v218,
      v219,
      v220,
      v221,
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
  v235 = 0;
  if ( v27 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v27 + 32));
    v28 = *((_QWORD *)a1 + 11);
  }
  else
  {
    v28 = 0LL;
  }
  v254 = v28;
  if ( !v11 )
    v11 = v28;
  v250 = v11;
  v240 = (DMMVIDPNTOPOLOGY *)(v11 + 96);
  v29 = 56LL * v227;
  if ( !is_mul_ok(v227, 0x38uLL) )
    v29 = -1LL;
  v234 = operator new[](v29, 0x4E506456u, PagedPool);
  if ( v234 )
  {
    memmove(v234, Src, 56LL * v227);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)a1 + 10) + 72LL));
    v34 = *(ADAPTER_RENDER **)(v15 + 2704);
    v35 = 0LL;
    v36 = *((_QWORD *)a1 + 10);
    v238 = v36;
    if ( v34 )
      v35 = v34;
    LODWORD(v245[0]) = 0;
    v245[1] = v35;
    IsLegacyDisplayStateSynchronization = DXGADAPTER::IsLegacyDisplayStateSynchronization((DXGADAPTER *)v15);
    v40 = *(_DWORD *)(v15 + 2596);
    v225 = IsLegacyDisplayStateSynchronization;
    j = v40;
    if ( !v39 )
    {
LABEL_49:
      v51 = *(ADAPTER_DISPLAY **)(v15 + 2696);
      v52 = 0;
      if ( *((_DWORD *)v51 + 20) )
      {
        v53 = (int)v245[0];
        v54 = j;
        do
        {
          v55 = 1 << v52;
          v56 = v51;
          if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3)) & (1 << v52)) != 0 )
          {
            v57 = *(_QWORD *)(v15 + 2704);
            if ( v57 && v54 < 2200 )
            {
              ADAPTER_RENDER::FlushScheduler(v57, 8, v52, 0);
              v51 = *(ADAPTER_DISPLAY **)(v15 + 2696);
            }
            v56 = v51;
            if ( v236 )
            {
              if ( v242 )
              {
                v58 = *(struct DXGDEVICE **)(3968LL * v52 + *((_QWORD *)v51 + 14) + 688);
                if ( v58 )
                {
                  if ( *((_QWORD *)v58 + 231) == *(_QWORD *)(*((_QWORD *)v58 + 2) + 16LL) )
                  {
                    if ( v53 || (v59 = 0, a7) )
                      v59 = 1;
                    ADAPTER_DISPLAY::DisablePrimaryOnDevice(v51, v58, v52, v59);
                    v56 = *(ADAPTER_DISPLAY **)(v15 + 2696);
                  }
                }
              }
            }
          }
          v51 = v56;
          if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6)) & v55) != 0
            && *(_QWORD *)(v15 + 2704)
            && *(_BYTE *)(v15 + 2642)
            && v225 )
          {
            ADAPTER_DISPLAY::DisableMPOPlanes(v56, v52, 0);
            *((_DWORD *)a5 + 15) |= v55;
            v51 = *(ADAPTER_DISPLAY **)(v15 + 2696);
          }
          ++v52;
        }
        while ( v52 < *((_DWORD *)v51 + 20) );
        v36 = v238;
        v11 = v250;
      }
      v60 = v239;
      if ( *((_DWORD *)a5 + 5) )
        VIDPN_MGR::RequestPowerStateForTargets(v239, (const struct DMMVIDPN *)v11);
      if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v15) )
      {
        v226 = 0;
        if ( !v223 )
          goto LABEL_146;
        v67 = v232;
        *(_QWORD *)&v249.SetFlags.Reserved = 0LL;
        *(&v249.PathCount + 1) = 0;
        v258 = 0LL;
        if ( v232 == 4 )
          DisplayLogSetMonitorPowerStage(0LL, 16LL, 0LL, &v258);
        v68 = v11 + 88;
        if ( v68 )
          v249.hFunctionalVidPn = (D3DKMDT_HVIDPN)(v68 - 88);
        else
          v249.hFunctionalVidPn = 0LL;
        v69 = *(ADAPTER_DISPLAY **)(v15 + 2696);
        v249.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v229;
        v249.PathCount = v227;
        v249.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
        v70 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v69, &v249);
        v65 = (int)v70;
        DisplayScenarioJournalSetSetTimingPathInfo(v70, 56 * v227, v227, Src);
        if ( (int)v65 < 0 )
        {
          v71 = (_QWORD *)WdLogNewEntry5_WdError(v64, v63);
          v71[3] = *(int *)(v15 + 320);
          v71[4] = *(unsigned int *)(v15 + 316);
          v71[5] = v65;
          WdLogEvent5_WdError(v71);
        }
        if ( v227 == 1 && IsRequestFromModeChange(v67) )
        {
          if ( (int)v65 < 0 || (v64 = (_DWORD *)(*((_DWORD *)Src + 8) & 0xF000000), (_DWORD)v64 == 218103808) )
          {
            v64 = (_DWORD *)*((unsigned int *)Src + 3);
            if ( ((unsigned __int8)v64 & 4) != 0 )
            {
              if ( (v229 & 1) != 0 || (v64 = *(_DWORD **)(*(_QWORD *)(v15 + 216) + 64LL), (v64[879] & 3) != 0) )
              {
                TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                               (DMMVIDEOPRESENTTARGETSET *)v36,
                               *(unsigned int *)Src);
                if ( !DMMVIDEOPRESENTTARGET::IsTargetForceable(TargetById, v73) )
                {
                  v74 = v234;
                  *((_DWORD *)v234 + 3) = *((_DWORD *)v234 + 3) & 0xFFFFFFF0 | 9;
                  v75 = *((_DWORD *)a5 + 1);
                  *((_DWORD *)a5 + 6) = v75 & (*((_DWORD *)a5 + 5) ^ *((_DWORD *)a5 + 6));
                  *((_DWORD *)a5 + 5) = 0;
                  *((_DWORD *)a5 + 19) = v75;
                  if ( (int)v65 < 0 )
                    v76 = 0;
                  else
                    v76 = v229 & 1;
                  v77 = Src;
                  v229 = 0;
                  *(_OWORD *)Src = *v74;
                  v77[1] = v74[1];
                  v77[2] = v74[2];
                  *((_QWORD *)v77 + 6) = *((_QWORD *)v74 + 6);
                  *(_QWORD *)&v249.SetFlags.Reserved = 0LL;
                  *(&v249.PathCount + 1) = 0;
                  if ( v68 )
                    v249.hFunctionalVidPn = (D3DKMDT_HVIDPN)(v68 - 88);
                  else
                    v249.hFunctionalVidPn = 0LL;
                  v78 = *(ADAPTER_DISPLAY **)(v15 + 2696);
                  v249.pResultsFlags = (PDXGK_SET_TIMING_RESULTS)&v229;
                  v249.PathCount = v227;
                  v249.pSetTimingPathInfo = (DXGK_SET_TIMING_PATH_INFO *)Src;
                  v79 = ADAPTER_DISPLAY::DdiSetTimingsFromVidPn(v78, &v249);
                  v65 = (int)v79;
                  DisplayScenarioJournalSetSetTimingPathInfo(v79, 56 * v227, v227, Src);
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
                  v229 ^= ((unsigned __int8)v229 ^ (unsigned __int8)(v229 | v76)) & 1;
                  v67 = v232;
                }
              }
            }
          }
        }
        if ( v67 == 4 )
          DisplayLogSetMonitorPowerStage(0LL, 2147483664LL, (unsigned int)v65, &v258);
      }
      else
      {
        v226 = 1;
        if ( !v223 && !*((_DWORD *)a5 + 10) )
        {
          v223 = 0;
LABEL_146:
          ActivityId = 0LL;
          EtwActivityIdControl(3u, &ActivityId);
          v104 = 0;
          for ( i = 0; v104 < v227; i = v104 )
          {
            v105 = 56LL * v104;
            j = v233[v104];
            v106 = 1 << j;
            v107 = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                     (DMMVIDEOPRESENTTARGETSET *)v36,
                     *(unsigned int *)((char *)Src + v105));
            v108 = (__int64)v107;
            if ( v107 )
            {
              if ( v223 )
              {
                LogMonitorHandleOnOffState(
                  *((_QWORD *)v107 + 14),
                  &ActivityId,
                  (*(_DWORD *)((char *)Src + v105 + 12) >> 2) & 1);
                if ( !v226 )
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
                QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 172), 0LL, v115, v116);
                if ( (*(_DWORD *)((_BYTE *)Src + v105 + 32) & 0xF000000) == 0xC000000 )
                  DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer((DMMVIDEOPRESENTTARGET *)v108, 1u);
                else
                  DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer((DMMVIDEOPRESENTTARGET *)v108);
                *(_BYTE *)(v108 + 414) = 0;
              }
              else
              {
                v117 = DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)v107, 0LL);
                *(_DWORD *)((char *)Src + v105 + 32) ^= (*(_DWORD *)((char *)Src + v105 + 32) ^ (v117 << 24)) & 0xF000000;
              }
              if ( (*(_DWORD *)((_BYTE *)Src + v105 + 12) & 4) != 0 && (v106 & *((_DWORD *)a5 + 17)) == 0 )
              {
                v118 = v235 | *((_DWORD *)a5 + 20);
                if ( !_bittest(&v118, j) )
                {
                  DMMVIDEOPRESENTTARGET::SetTargetActivated((DMMVIDEOPRESENTTARGET *)v108, 1u, 1u);
                  if ( ((*((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 6) | *((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9)) & v106) != 0
                    && (*(_DWORD *)((_BYTE *)Src + v105 + 32) & 0xF000000) == 0xE000000 )
                  {
                    PathFromTarget = DMMVIDPNTOPOLOGY::GetPathFromTarget(v240, *(_DWORD *)((char *)Src + v105));
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
          CVidSchSuspendResume::Resume(v245);
          v121 = *(ADAPTER_DISPLAY **)(v15 + 2696);
          v122 = 0;
          if ( !*((_DWORD *)v121 + 20) )
          {
LABEL_237:
            v168 = 0;
            for ( j = 0; v168 < v227; j = v168 )
            {
              v169 = v168;
              v170 = 56LL * v168;
              v171 = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                       (DMMVIDEOPRESENTTARGETSET *)v36,
                       *(unsigned int *)((char *)Src + v170));
              v173 = v171;
              if ( v171 )
              {
                v174 = Src;
                if ( (*(_DWORD *)((_BYTE *)Src + v170 + 12) & 4) == 0
                  || (v175 = v233, v176 = 1 << v233[v169], (v176 & *((_DWORD *)a5 + 17)) != 0)
                  || (v176 & *((_DWORD *)a5 + 20)) != 0 )
                {
                  DMMVIDEOPRESENTTARGET::SetTargetActivated(
                    v171,
                    0,
                    (*(_DWORD *)((_BYTE *)Src + v170 + 32) & 0xF000000) == 201326592);
                  v174 = Src;
                  v175 = v233;
                }
                if ( !v226
                  && *((_BYTE *)v173 + 416)
                  && ((*(_DWORD *)&v174[v170 + 32] & 0xF000000) != 0xE000000 || v174[v170 + 48] != 0xFF) )
                {
                  i = ADAPTER_DISPLAY::SetVidPnSourceVisibility(
                        *(ADAPTER_DISPLAY **)(v15 + 2696),
                        v175[v169],
                        0,
                        2048,
                        a7);
                  if ( i < 0 )
                  {
                    v179 = (_QWORD *)WdLogNewEntry5_WdError(v178, v177);
                    v179[3] = v15;
                    v180 = v233[v169];
                    v179[5] = i;
                    v179[4] = v180;
                    WdLogEvent5_WdError(v179);
                  }
                  if ( (*(_DWORD *)((_BYTE *)Src + v170 + 32) & 0xF000000) == 0xE000000 )
                  {
                    v181 = *(_QWORD *)(v15 + 2704);
                    if ( v181 )
                    {
                      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v181 + 616) + 8LL) + 888LL))(
                        *(_QWORD *)(v181 + 624),
                        v233[v169]);
                    }
                    else
                    {
                      v182 = *(_QWORD *)(*(_QWORD *)(v15 + 2696) + 384LL);
                      if ( v182 )
                        _InterlockedExchange((volatile __int32 *)(2904LL * v233[v169] + *(_QWORD *)(v182 + 8) + 944), 1);
                    }
                  }
                }
                *((_BYTE *)v173 + 416) = 0;
              }
              else
              {
                v183 = *(unsigned int *)((char *)Src + v170 + 12);
                if ( (v183 & 4) != 0 )
                {
                  v184 = WdLogNewEntry5_WdAssertion(v183, v172);
                  WdLogEvent5_WdAssertion(v184);
                }
              }
              if ( (*(_DWORD *)((_BYTE *)Src + v170 + 16) & 1) != 0 )
                *((_DWORD *)a5 + 15) |= 1 << v233[v169];
              v168 = j + 1;
            }
            auto_rc<DMMVIDPN>::reset((__int64 *)v239 + 35, 0LL);
            CVidSchSuspendResume::Resume(v245);
            v187 = *(ADAPTER_DISPLAY **)(v15 + 2696);
            v188 = 0;
            if ( *((_DWORD *)v187 + 20) )
            {
              v189 = v236;
              do
              {
                v186 = v188;
                v190 = 1 << v188;
                if ( ((1 << v188) & *((_DWORD *)a5 + 14)) != 0 )
                  ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(v187, v188);
                if ( (v190 & *((_DWORD *)a5 + 15)) != 0 )
                  DXGADAPTER::NotifyMultiPlaneOverlayDisable((DXGADAPTER *)v15, v188);
                if ( v189 && !v226 )
                {
                  if ( ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v15 + 2696), v188, 0)
                    && ADAPTER_DISPLAY::IsCddPrimaryStale(*(ADAPTER_DISPLAY **)(v15 + 2696), v188) )
                  {
                    ADAPTER_DISPLAY::DestroyCddAllocations(v191, v189, v188);
                  }
                  v192 = *(ADAPTER_DISPLAY **)(v15 + 2696);
                  DisplayModeInfo = (const struct _D3DKMT_DISPLAYMODE *)ADAPTER_DISPLAY::GetDisplayModeInfo(v192, v188);
                  ADAPTER_DISPLAY::SetCddDisplayMode((PERESOURCE **)v192, v188, DisplayModeInfo);
                  v189 = v236;
                }
                if ( (v190 & *((_DWORD *)a5 + 20)) != 0 )
                {
                  v194 = *((_DWORD *)a5 + v188 + 39);
                  if ( (v194 & 7) != 0 )
                  {
                    *((_DWORD *)a5 + 4 * (v194 & 7) + 55) = 0;
                    DxgkLogCodePointPacket(0x65u, v188, *((_DWORD *)a5 + v188 + 39) & 7, 2u, *(_QWORD *)(v15 + 316));
                  }
                  v195 = ADAPTER_DISPLAY::SetVidPnSourceActive(
                           *(ADAPTER_DISPLAY **)(v15 + 2696),
                           v188,
                           0,
                           v232 == 4,
                           a7);
                  v199 = v195;
                  if ( v195 < 0 )
                  {
                    v200 = (_QWORD *)WdLogNewEntry5_WdError(v197, v196);
                    v200[3] = v15;
                    v200[4] = v188;
                    v200[5] = v199;
                    WdLogEvent5_WdError(v200);
                  }
                  if ( v243 )
                  {
                    v201 = (DMMVIDPNTOPOLOGY *)(v243 + 96);
                    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
                      (__int64)v257,
                      (v243 + 152) & -(__int64)(v243 != -96),
                      2u,
                      v198,
                      (__int64)v217,
                      *(_QWORD *)(v243 + 136));
                    v202 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v201, v188);
                    v205 = 0x80000000LL;
                    v206 = v202 + 0x80000000;
                    if ( (int)v206 >= 0 && v202 != -1071774919 )
                    {
                      v207 = WdLogNewEntry5_WdAssertion(v206, 0x80000000LL);
                      WdLogEvent5_WdAssertion(v207);
                    }
                    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
                      (ApplyPermissionWithinThisScope *)v257,
                      v205,
                      v203,
                      v204);
                  }
                  v189 = v236;
                  if ( v236 )
                    ADAPTER_DISPLAY::DestroyCddAllocations(*(ADAPTER_DISPLAY **)(v15 + 2696), v236, v188);
                  if ( IsRequestFromModeChange(v232) )
                  {
                    ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v15 + 2696), v188, 0);
                    ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v15 + 2696), v188, &stru_1C00B13B8);
                    ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v15 + 2696), v188, 0LL);
                  }
                  ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*(ADAPTER_DISPLAY **)(v15 + 2696), v188, -1);
                  ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v15 + 2696), v188, 1);
                  ADAPTER_DISPLAY::SetHdrEnabled(*(PERESOURCE ***)(v15 + 2696), v188, 0);
                }
                v187 = *(ADAPTER_DISPLAY **)(v15 + 2696);
                ++v188;
              }
              while ( v188 < *((_DWORD *)v187 + 20) );
              v36 = v238;
            }
            if ( v243 )
            {
              ADAPTER_DISPLAY::SetSyncLockGroup(
                (__int64)v187,
                1u,
                *((_DWORD *)a5 + 59),
                *((_DWORD *)a5 + 60),
                *((_DWORD *)a5 + 61),
                *((_DWORD *)a5 + 62));
              v208 = *(_QWORD *)(v15 + 2696);
              for ( k = 0; k < *(_DWORD *)(v208 + 80); v208 = *(_QWORD *)(v15 + 2696) )
              {
                v210 = k;
                v211 = *((_DWORD *)a5 + k++ + 39) & 7;
                v185 = *((_DWORD *)a5 + 4 * v211 + 55) != 0 ? v211 : 0;
                v186 = 3968 * v210;
                *(_DWORD *)(3968 * v210 + *(_QWORD *)(v208 + 112) + 3756) = v185;
              }
            }
            v212 = DXGGLOBAL::GetGlobal(v186, v185);
            QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)v212 + 172), 0LL, v213, v214);
            if ( Src )
              operator delete[](Src);
            operator delete[](v234);
            if ( v233 )
              operator delete[](v233);
            if ( v244 )
              operator delete[](v244);
            CVidSchSuspendResume::Resume(v245);
            if ( v36 )
              ReferenceCounted::Release((ReferenceCounted *)(v36 + 64), v215);
            goto LABEL_300;
          }
          v123 = v239;
          while ( 1 )
          {
            i = 0;
            v246 = 0LL;
            v124 = 1 << v122;
            v125 = *((_DWORD *)a5 + 10);
            v247 = 0LL;
            memset(v248, 0, sizeof(v248));
            if ( ((1 << v122) & *((_DWORD *)a5 + 3)) != 0 )
            {
              i = 2;
            }
            else if ( (v125 & v124) != 0 )
            {
              i = 4;
            }
            else if ( (*((_DWORD *)a5 + 2) & ~*((_DWORD *)a5 + 8) & v124) != 0 )
            {
              v120 = (*(_DWORD *)a5 & v124) != 0 ? 3 : 1;
              i = (*(_DWORD *)a5 & v124) != 0 ? 3 : 1;
            }
            v126 = *((_DWORD *)a5 + 2) | v125;
            if ( ((unsigned int)v126 & v124) != 0 )
            {
              v127 = ADAPTER_DISPLAY::GetDisplayModeInfo(v121, v122);
              v128 = v240;
              v129 = *((_OWORD *)v127 + 1);
              v246 = *(_OWORD *)v127;
              v130 = *((_OWORD *)v127 + 2);
              v247 = v129;
              *(_QWORD *)&v129 = *((_QWORD *)v127 + 6);
              *(_OWORD *)v248 = v130;
              *(_QWORD *)&v248[16] = v129;
              DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(v240, v122, (struct _D3DKMT_DISPLAYMODE *)&v246);
              v121 = *(ADAPTER_DISPLAY **)(v15 + 2696);
            }
            else
            {
              v128 = v240;
            }
            if ( (v124 & *((_DWORD *)a5 + 20)) != 0 )
              goto LABEL_233;
            if ( (v124 & v235) == 0 )
              break;
LABEL_235:
            v121 = *(ADAPTER_DISPLAY **)(v15 + 2696);
            if ( ++v122 >= *((_DWORD *)v121 + 20) )
            {
              v36 = v238;
              goto LABEL_237;
            }
          }
          if ( (v124 & *((_DWORD *)a5 + 10)) != 0 )
          {
            ADAPTER_DISPLAY::SetDisplayModeInfo(
              (DXGADAPTER **)v121,
              v122,
              (const struct _DXGK_DISPLAYMODE_INFO *const)&v246);
            OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(
              *(_QWORD *)(*(_QWORD *)(v15 + 2696) + 104LL),
              v122,
              0LL,
              0LL,
              0,
              1);
            v255[0] = 11LL;
            v255[1] = 0LL;
            if ( (int)DxgkStatusChangeNotify(v255) < 0 )
            {
              v132 = WdLogNewEntry5_WdAssertion(v131, v120);
              *(_QWORD *)(v132 + 24) = 3311LL;
              WdLogEvent5_WdAssertion(v132);
            }
          }
          v126 = *((_DWORD *)a5 + 2) | *((_DWORD *)a5 + 3) | *((_DWORD *)a5 + 6) | (unsigned int)(*((_DWORD *)a5 + 8) | *((_DWORD *)a5 + 9));
          if ( ((unsigned int)v126 & v124) != 0 )
          {
            v237 = 0;
            MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(v128, v122, &v237);
            v135 = MostImportantVidPnPathTargetsFromSource + 0x80000000;
            if ( (int)v135 >= 0 && MostImportantVidPnPathTargetsFromSource != -1071774919 )
            {
              v136 = WdLogNewEntry5_WdAssertion(v135, v133);
              WdLogEvent5_WdAssertion(v136);
            }
            v224 = 0;
            if ( MostImportantVidPnPathTargetsFromSource < 0 || (v137 = v237, v237 == -1) || (v138 = 0, !v227) )
            {
LABEL_197:
              v137 = -1;
            }
            else
            {
              while ( 1 )
              {
                if ( v122 == v233[v138] )
                {
                  v139 = 56LL * v138;
                  if ( v237 == *(_DWORD *)((char *)Src + v139)
                    && (*(_DWORD *)((_BYTE *)Src + v139 + 32) & 0xF000000) == 0xE000000
                    && (*(_DWORD *)((_BYTE *)Src + v139 + 12) & 4) != 0
                    && (v124 & *((_DWORD *)a5 + 17)) == 0 )
                  {
                    break;
                  }
                }
                if ( ++v138 >= v227 )
                  goto LABEL_197;
              }
              *((_DWORD *)a5 + 18) |= v124;
              v224 = 1;
            }
            ADAPTER_DISPLAY::SetVidPnPrimaryTarget(*(ADAPTER_DISPLAY **)(v15 + 2696), v122, v137);
            v140 = v232;
            j = ADAPTER_DISPLAY::SetVidPnSourceActive(*(ADAPTER_DISPLAY **)(v15 + 2696), v122, v224, v232 == 4, a7);
            if ( j >= 0 )
            {
              ADAPTER_DISPLAY::MarkCommitVidPnOnModeChange(*(DXGADAPTER ***)(v15 + 2696), v122, 0);
              if ( (v124 & *((_DWORD *)a5 + 3)) != 0 )
              {
                if ( !IsRequestFromModeChange(v140) )
                {
                  v146 = WdLogNewEntry5_WdAssertion(v145, v144);
                  WdLogEvent5_WdAssertion(v146);
                }
                ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v15 + 2696), v122, 0);
                ADAPTER_DISPLAY::SetContentRect(*(ADAPTER_DISPLAY **)(v15 + 2696), v122, &stru_1C00B13B8);
                ADAPTER_DISPLAY::SetCddInterface(*(DXGADAPTER ***)(v15 + 2696), v122, 0LL);
                ADAPTER_DISPLAY::SetHdrEnabled(*(PERESOURCE ***)(v15 + 2696), v122, 0);
              }
              else
              {
                v253 = 0LL;
                if ( (int)DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v240, v122, &v253) < 0 || !v253 )
                {
                  v147 = WdLogNewEntry5_WdAssertion(v126, v120);
                  WdLogEvent5_WdAssertion(v147);
                }
                if ( (v124 & *((_DWORD *)a5 + 2)) != 0 )
                {
                  *(_DWORD *)&v248[12] = 1;
                  *(_QWORD *)&v248[16] = 1LL;
                  if ( *(_QWORD *)(v15 + 2704) )
                  {
                    DisplayedPrimaryAllocation = ADAPTER_DISPLAY::GetDisplayedPrimaryAllocation(
                                                   *(ADAPTER_DISPLAY **)(v15 + 2696),
                                                   v122);
                    v150 = DisplayedPrimaryAllocation;
                    if ( DisplayedPrimaryAllocation )
                    {
                      if ( (*((_BYTE *)DisplayedPrimaryAllocation + 4) & 0x10) != 0 )
                        v150 = 0LL;
                      if ( v150 )
                      {
                        v151 = (void *)*((_QWORD *)v150 + 2);
                        v152 = *(ADAPTER_RENDER **)(v15 + 2704);
                        memset(&v256.Width, 0, 40);
                        v256.hAllocation = v151;
                        j = ADAPTER_RENDER::DdiDescribeAllocation(v152, &v256, v149);
                        if ( j < 0 )
                        {
                          v158 = (_QWORD *)WdLogNewEntry5_WdWarning(v154, v153, v155);
                          v158[4] = v122;
                          v158[5] = j;
                          v158[3] = v150;
                          WdLogEvent5_WdWarning(v158);
                        }
                        else if ( v256.Width == (_DWORD)v246
                               && *(_QWORD *)&v256.Height == *(_QWORD *)((char *)&v246 + 4)
                               && *(_QWORD *)&v256.RefreshRate == (_QWORD)v247
                               && (v156 = ~(*(_DWORD *)&v248[8] >> 4),
                                   v154 = v156 ^ (unsigned int)~(*((_DWORD *)v150 + 1) >> 12),
                                   (((unsigned __int8)v156 ^ (unsigned __int8)~(*((_DWORD *)v150 + 1) >> 12)) & 1) == 0) )
                        {
                          *(D3DDDI_MULTISAMPLINGMETHOD *)&v248[12] = v256.MultisampleMethod;
                          *(_DWORD *)&v248[20] = v256.PrivateDriverFormatAttribute;
                        }
                        else if ( v226 || (*((_DWORD *)v150 + 1) & 2) == 0 )
                        {
                          v157 = WdLogNewEntry5_WdAssertion(v154, v153);
                          WdLogEvent5_WdAssertion(v157);
                        }
                      }
                    }
                  }
                  if ( IsRequestFromModeChange(v232) )
                    ADAPTER_DISPLAY::SetPartOfDesktop(*(PERESOURCE ***)(v15 + 2696), v122, 1);
                  ADAPTER_DISPLAY::SetDisplayModeInfo(
                    *(DXGADAPTER ***)(v15 + 2696),
                    v122,
                    (const struct _DXGK_DISPLAYMODE_INFO *const)&v246);
                  v159 = *(_QWORD *)(v15 + 2696);
                  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner((ADAPTER_DISPLAY *)v159) )
                  {
                    v162 = WdLogNewEntry5_WdAssertion(v161, v160);
                    *(_QWORD *)(v162 + 24) = 6215LL;
                    WdLogEvent5_WdAssertion(v162);
                  }
                  if ( v122 >= *(_DWORD *)(v159 + 80) )
                  {
                    v163 = WdLogNewEntry5_WdAssertion(v161, v160);
                    *(_QWORD *)(v163 + 24) = 6216LL;
                    WdLogEvent5_WdAssertion(v163);
                  }
                  *(_DWORD *)(3968LL * v122 + *(_QWORD *)(v159 + 112) + 1072) = HIDWORD(v246);
                  ADAPTER_DISPLAY::DetermineScalingCapabilities(*(ADAPTER_DISPLAY **)(v15 + 2696), v122);
                  ADAPTER_DISPLAY::SetHdrEnabled(
                    *(PERESOURCE ***)(v15 + 2696),
                    v122,
                    (v124 & *((_DWORD *)a5 + 63)) != 0);
                  if ( v236 && v242 )
                    ADAPTER_DISPLAY::UpdateOneCddPrimaryPrivateDriverData(
                      *(ADAPTER_DISPLAY **)(v15 + 2696),
                      v122,
                      *(struct DXGADAPTER **)(*((_QWORD *)v236 + 2) + 16LL));
                }
              }
            }
            else
            {
              v143 = (_QWORD *)WdLogNewEntry5_WdError(v142, v141);
              v143[5] = j;
              v143[3] = v15;
              v143[4] = v122;
              WdLogEvent5_WdError(v143);
              *((_DWORD *)a5 + v122 + 21) = j;
              *((_DWORD *)a5 + 20) |= v124;
            }
          }
LABEL_233:
          v164 = i;
          if ( i )
          {
            v165 = *(_DWORD *)(*(_QWORD *)(v15 + 2696) + 360LL);
            CurrentProcess = PsGetCurrentProcess(v126, v120);
            ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
            VIDPN_MGR::CacheDisplayModeChangeRequest(
              (__int64)v123,
              v122,
              (__int64)&v246,
              1u,
              *((_DWORD *)a5 + v122 + 21),
              v164,
              v165,
              ProcessImageFileName);
          }
          goto LABEL_235;
        }
        v223 = 1;
        if ( a7 || (v61 = 0, LODWORD(v245[0])) )
          v61 = 1;
        LOBYTE(v222) = v61;
        v62 = VIDPN_MGR::CommitVidPnOnAdapter(
                v60,
                (unsigned int)i,
                v232,
                v11,
                v227,
                Src,
                v233,
                a5,
                &v235,
                v244,
                &v229,
                v236,
                v242,
                v222);
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
        if ( v227 )
        {
          v100 = (char *)v234;
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
          while ( v99 < v227 );
          v15 = v251;
        }
        v229 = 1;
LABEL_142:
        if ( (v229 & 0xFFFFFFFE) != 0 )
        {
          v103 = WdLogNewEntry5_WdAssertion(v64, v63);
          *(_QWORD *)(v103 + 24) = (unsigned __int64)v229 >> 1;
          WdLogEvent5_WdAssertion(v103);
        }
        if ( (v229 & 1) != 0 )
          *v252 |= 1u;
        goto LABEL_146;
      }
LABEL_109:
      v83 = 0;
      if ( !v227 )
        goto LABEL_142;
      v84 = v252;
      v85 = v239;
      while ( 1 )
      {
        v86 = Src;
        v87 = 56LL * v83;
        ContainingAdapter = VIDPN_MGR::GetContainingAdapter(v85, v63);
        v89 = DXGADAPTER::UsingSetTimingsFromVidPn(ContainingAdapter);
        v63 = (__int64)v234;
        if ( v89 )
        {
          if ( *(_DWORD *)((char *)v234 + v87) != *(_DWORD *)&v86[v87]
            || *(_DWORD *)((char *)v234 + v87 + 4) != *(_DWORD *)&v86[v87 + 4]
            || *(_DWORD *)((char *)v234 + v87 + 8) != *(_DWORD *)&v86[v87 + 8]
            || *(_DWORD *)((char *)v234 + v87 + 12) != *(_DWORD *)&v86[v87 + 12] )
          {
            v93 = WdLogNewEntry5_WdAssertion(v90, v234);
            v94 = *(unsigned int *)((char *)v234 + v87);
LABEL_129:
            *(_QWORD *)(v93 + 24) = v94;
LABEL_130:
            WdLogEvent5_WdAssertion(v93);
            v63 = (__int64)v234;
            v91 = 0;
            goto LABEL_131;
          }
          if ( *(_DWORD *)&v86[v87 + 16] >= 2u || *(_DWORD *)&v86[v87 + 32] >= 0x10000000u || v86[v87 + 51] )
          {
            v92 = WdLogNewEntry5_WdAssertion(v90, v234);
            *(_QWORD *)(v92 + 24) = *(unsigned int *)&v86[v87];
            WdLogEvent5_WdAssertion(v92);
            v63 = (__int64)v234;
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
          *((_DWORD *)a5 + v233[v83] + 21) = -1073741437;
          v64 = (_DWORD *)v233[v83];
          *((_DWORD *)a5 + 20) |= 1 << (char)v64;
        }
        else
        {
          v64 = (_DWORD *)(*(_DWORD *)((_BYTE *)Src + v87 + 32) & 0xF000000);
          if ( (_DWORD)v64 == 218103808 )
          {
            *((_DWORD *)a5 + v233[v83] + 21) = -1073741506;
            *((_DWORD *)a5 + 20) |= 1 << v233[v83];
            v98 = IsRequestFromModeChange(v232);
            LOBYTE(v64) = *v84 & 0xFD;
            *v84 = (unsigned __int8)v64 | (2 * !v98);
          }
        }
        if ( ++v83 >= v227 )
        {
          v36 = v238;
          v15 = v251;
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
    *(_QWORD *)(v42 + 24) = 2652LL;
    WdLogEvent5_WdAssertion(v42);
LABEL_35:
    if ( v40 >= 2200 )
    {
      v43 = 0;
      v44 = 0;
      v45 = 0;
      v46 = 0;
      v47 = 0;
      v48 = *(_DWORD *)(*(_QWORD *)(v15 + 2696) + 80LL);
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
            if ( v225 )
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
        v36 = v238;
        v11 = v250;
      }
      ADAPTER_RENDER::FlushPresentReferencesAndDisableOverlays(*(ADAPTER_RENDER **)(v15 + 2704), v43, v44, v45, v46);
      *((_DWORD *)a5 + 15) |= v45;
      if ( v46 )
        CVidSchSuspendResume::SetSuspendSourceMask((CVidSchSuspendResume *)v245, v46);
    }
    else
    {
      ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(v15 + 2704), 8, 0xFFFFFFFF, 0);
    }
    goto LABEL_49;
  }
  v33 = WdLogNewEntry5_WdLowResource(0LL, v30, v31, v32);
  *(_QWORD *)(v33 + 24) = v227;
  WdLogEvent5_WdLowResource(v33);
  v9 = -1073741801;
LABEL_300:
  auto_rc<DMMVIDPN const>::~auto_rc<DMMVIDPN const>(&v254);
  return v9;
}
