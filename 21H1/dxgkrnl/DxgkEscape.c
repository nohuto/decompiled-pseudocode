/*
 * XREFs of DxgkEscape @ 0x1C00FB2D0
 * Callers:
 *     ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023C7A0 (-VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0008D70 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0008E58 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009F98 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000A37C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000A3E0 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C000A884 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000AA48 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C000B19C (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000EE64 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000EE8C (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EF94 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00112D4 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0011608 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0011BB8 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00245CC (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00247E4 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0024854 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C00359A0 (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C00359D8 (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     ?Feature_HoldAdapterLockEscape__private_IsEnabledPreCheck@@YAHXZ @ 0x1C0044448 (-Feature_HoldAdapterLockEscape__private_IsEnabledPreCheck@@YAHXZ.c)
 *     DxgkGetAdapterBrightnessInfo @ 0x1C00508C4 (DxgkGetAdapterBrightnessInfo.c)
 *     DxgkGetAdapterMiracastInfo @ 0x1C0053584 (DxgkGetAdapterMiracastInfo.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00DB790 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00FA130 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00FA240 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBEF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD2B0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C012B9C0 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C020899C (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C0209CDC (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C020C668 (-ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C020F04C (-GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z.c)
 *     ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x1C021010C (-ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C0216CF0 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021D140 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkWriteUserModeDiagEntry @ 0x1C0222D2C (DxgkWriteUserModeDiagEntry.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0243E14 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C025083C (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C0256188 (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025AFC4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkpIsDrtEnabled @ 0x1C025D088 (DxgkpIsDrtEnabled.c)
 *     ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x1C02613A8 (-TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z.c)
 *     _DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION @ 0x1C0262344 (_DxgkEscape_--_2_--ENSURE_DATA_DELETION--_ENSURE_DATA_DELETION.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0262378 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0262498 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0262518 (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x1C0263198 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAXI@Z @ 0x1C0263368 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAXI@Z.c)
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1C0263690 (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C0263918 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1C0263A68 (-IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026494C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C0266854 (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x1C0271F48 (-GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02809D4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     OutputDuplGetDebugInfo @ 0x1C0299428 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C0299518 (OutputDuplGetDiagnosticBuffer.c)
 *     DxgkHandleMiracastEscape @ 0x1C02CA8B8 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C02CB724 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C02D1140 (DxgkHandleIndirectEscape.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C02D7D60 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C02EBED8 (DxgkPrepareCcdDatabaseForAccess.c)
 */

__int64 __fastcall DxgkEscape(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_ESCAPE *v3; // r14
  struct DXGADAPTER *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  DXGPROCESS *v10; // rbx
  DXGPROCESS *v11; // r15
  struct _D3DKMT_DISPLAYMODELIST *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 Type; // rcx
  __int64 v18; // rcx
  UINT PrivateDriverDataSize; // eax
  size_t v20; // r8
  void *pPrivateDriverData; // rdx
  char *v22; // rax
  __int64 hAdapter; // rdx
  __int64 v24; // r8
  DXGADAPTER *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  D3DKMT_HANDLE v29; // ebx
  D3DKMT_HANDLE v30; // r14d
  DXGADAPTER **v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r9
  __int64 v36; // rax
  DXGCONTEXT *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r12
  struct DXGADAPTER *v44; // r14
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rcx
  D3DKMT_ESCAPETYPE v51; // r15d
  UINT Value; // r14d
  bool v53; // al
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  char v57; // al
  DXGADAPTER *v58; // rdx
  void *v59; // rax
  DXGCONTEXT *v60; // rcx
  void *v61; // rax
  struct _D3DKMT_DISPLAYMODELIST *v62; // r15
  DXGPROCESS *v63; // r14
  struct DXGGLOBAL *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rax
  unsigned __int8 v68; // r9
  char v69; // bl
  size_t v70; // r8
  void *v71; // rcx
  char *v72; // rdx
  DXGCONTEXT *v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // rdx
  DXGGLOBAL **v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r8
  bool v79; // zf
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r9
  DXGCONTEXT **v84; // rax
  __int64 v85; // rax
  unsigned int v86; // ebx
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  unsigned int v105; // eax
  size_t v106; // r8
  void *v107; // rcx
  char *v108; // r9
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  unsigned __int64 Width; // r8
  char *v113; // r9
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // rdx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  struct DXGPROCESS *v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rdx
  __int64 v128; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r15
  __int64 v134; // r8
  unsigned int v135; // ecx
  __int64 v136; // rdx
  DXGADAPTER **v137; // rbx
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rax
  _QWORD *v141; // rax
  __int64 v142; // rax
  unsigned __int64 v143; // rcx
  __int64 v144; // rdx
  unsigned int v145; // edi
  size_t v146; // r8
  void *v147; // rcx
  char *v148; // r9
  DXGCONTEXT *v149; // rcx
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  struct _D3DKMT_DISPLAYMODELIST *v153; // r10
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // rax
  __int64 v158; // rdx
  void *v159; // r9
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r8
  void *v163; // r9
  __int64 v164; // rdx
  char v165; // al
  unsigned __int8 v166; // r14
  _QWORD *v167; // rax
  int v168; // eax
  unsigned int v169; // r15d
  unsigned int v170; // ebx
  unsigned int HostProcess; // eax
  int v172; // eax
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rdx
  DXGADAPTER *v178; // rcx
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  unsigned __int64 v182; // rdx
  __int64 v183; // rax
  __int64 v184; // rdx
  D3DDDI_RATIONAL *p_RefreshRate; // rbx
  _QWORD *v186; // r8
  __int64 v187; // rax
  __int64 v188; // rdx
  __int64 v189; // rdx
  UINT ModeCount; // eax
  __int64 v191; // rcx
  __int64 v192; // rcx
  int v193; // r8d
  __int64 v194; // rax
  __int64 v195; // rdx
  __int64 v196; // rax
  __int64 v197; // rdx
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // rax
  DXGADAPTER *v201; // rcx
  __int64 v202; // rax
  ADAPTER_DISPLAY *v203; // rcx
  __int64 v204; // rax
  __int64 v205; // rdx
  UINT v206; // ebx
  __int64 v207; // rax
  __int64 v208; // rdx
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // r8
  __int64 v212; // rax
  __int64 v213; // rcx
  __int64 v214; // rdx
  __int64 v215; // rcx
  EDIDCACHE *v216; // rcx
  __int64 v217; // rdx
  __int64 v218; // rcx
  __int64 v219; // r8
  __int64 v220; // rdi
  __int64 v221; // rcx
  __int64 v222; // rdx
  __int64 v223; // rdx
  __int64 v224; // rdx
  char v225; // r9
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v227; // rdx
  unsigned int v228; // r8d
  __int64 v229; // rdx
  signed int Height; // eax
  __int64 v231; // rdx
  __int64 v232; // rdx
  UINT v233; // r10d
  __int64 v234; // rax
  __int64 v235; // rdx
  __int64 v236; // rdx
  __int64 v237; // rdx
  signed int v238; // eax
  __int64 v239; // rdx
  D3DKMT_DISPLAYMODE *pModeList; // r9
  __int64 v241; // r8
  __int64 v242; // rax
  __int64 v243; // rdx
  __int64 v244; // rdx
  __int64 v245; // rdx
  __int64 v246; // rax
  __int64 v247; // rdx
  __int64 v248; // rax
  __int64 v249; // rdx
  __int64 v250; // rax
  __int64 v251; // rdx
  __int64 v252; // rcx
  __int64 v253; // r8
  __int64 v254; // rax
  __int64 v255; // rdx
  __int64 v256; // rax
  __int64 v257; // rdx
  __int64 v258; // rax
  __int64 v259; // rdx
  __int64 v260; // rdx
  __int64 v261; // rdx
  __int64 v262; // rax
  _QWORD *v263; // rax
  __int64 v264; // rax
  __int64 v265; // rax
  __int64 v266; // rdx
  unsigned __int8 v267; // [rsp+50h] [rbp-528h]
  char v268; // [rsp+51h] [rbp-527h]
  int v269; // [rsp+58h] [rbp-520h] BYREF
  __int64 v270; // [rsp+60h] [rbp-518h]
  char v271; // [rsp+68h] [rbp-510h]
  struct _D3DKMT_DISPLAYMODELIST *v272; // [rsp+70h] [rbp-508h]
  DXGCONTEXT *v273; // [rsp+78h] [rbp-500h]
  bool v274; // [rsp+80h] [rbp-4F8h]
  unsigned __int64 v275; // [rsp+88h] [rbp-4F0h] BYREF
  _D3DKMT_ESCAPE v276; // [rsp+90h] [rbp-4E8h] BYREF
  struct DXGADAPTER *v277; // [rsp+B0h] [rbp-4C8h]
  void *v278[2]; // [rsp+B8h] [rbp-4C0h] BYREF
  unsigned __int64 v279; // [rsp+C8h] [rbp-4B0h] BYREF
  char v280; // [rsp+D0h] [rbp-4A8h]
  char v281[8]; // [rsp+D8h] [rbp-4A0h] BYREF
  DXGADAPTER *v282; // [rsp+E0h] [rbp-498h]
  char v283; // [rsp+E8h] [rbp-490h]
  unsigned int v284; // [rsp+F0h] [rbp-488h]
  DXGADAPTER *v285; // [rsp+F8h] [rbp-480h] BYREF
  DXGPROCESS *v286; // [rsp+100h] [rbp-478h]
  DXGCONTEXT *v287; // [rsp+108h] [rbp-470h]
  DXGADAPTER *v288; // [rsp+110h] [rbp-468h]
  int v289; // [rsp+118h] [rbp-460h]
  union _LARGE_INTEGER Interval; // [rsp+120h] [rbp-458h] BYREF
  __int64 v291; // [rsp+128h] [rbp-450h]
  int v292; // [rsp+130h] [rbp-448h] BYREF
  struct _DXGKARG_ESCAPE v293; // [rsp+138h] [rbp-440h] BYREF
  _BYTE v294[24]; // [rsp+168h] [rbp-410h] BYREF
  struct _DXGKARG_ESCAPE v295; // [rsp+180h] [rbp-3F8h] BYREF
  struct _DXGKARG_ESCAPE v296; // [rsp+1B0h] [rbp-3C8h] BYREF
  _BYTE v297[32]; // [rsp+1E0h] [rbp-398h] BYREF
  _BYTE v298[64]; // [rsp+200h] [rbp-378h] BYREF
  _BYTE v299[8]; // [rsp+240h] [rbp-338h] BYREF
  _BYTE v300[16]; // [rsp+248h] [rbp-330h] BYREF
  unsigned int *v301; // [rsp+258h] [rbp-320h]
  _BYTE v302[16]; // [rsp+288h] [rbp-2F0h] BYREF
  DXGADAPTER *v303; // [rsp+298h] [rbp-2E0h]
  char v304; // [rsp+2A0h] [rbp-2D8h]
  __int64 v305; // [rsp+2A8h] [rbp-2D0h]
  _DWORD v306[4]; // [rsp+2D0h] [rbp-2A8h] BYREF
  _DWORD v307[4]; // [rsp+2E0h] [rbp-298h] BYREF
  _QWORD v308[10]; // [rsp+2F0h] [rbp-288h] BYREF
  _BYTE v309[512]; // [rsp+340h] [rbp-238h] BYREF

  v3 = (_D3DKMT_ESCAPE *)a1;
  v269 = -1;
  v4 = 0LL;
  v270 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v271 = 1;
    v269 = 2016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2016);
  }
  else
  {
    v271 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v269, 2016LL);
  v5 = 0LL;
  v291 = 0LL;
  v273 = 0LL;
  v287 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v11 = (DXGPROCESS *)*((_QWORD *)Current + 1), (v286 = v11) == 0LL) )
  {
    v11 = v10;
    v286 = v10;
  }
  v280 = 0;
  v12 = (struct _D3DKMT_DISPLAYMODELIST *)v309;
  v272 = (struct _D3DKMT_DISPLAYMODELIST *)v309;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1 )
    v13 = 1LL;
  else
    LOBYTE(v13) = 0;
  v267 = v13;
  if ( !v11 )
  {
    v91 = WdLogNewEntry5_WdError(v14, v13);
    LODWORD(v43) = -1073741811;
    *(_QWORD *)(v91 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v91);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v92);
    v79 = v271 == 0;
LABEL_129:
    if ( !v79 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v77, &EventProfilerExit, v78, v269);
    return (unsigned int)v43;
  }
  if ( (_BYTE)v13 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_ESCAPE *)MmUserProbeAddress;
    v276 = *v3;
  }
  else
  {
    v276 = *v3;
  }
  Type = (unsigned int)v276.Type;
  if ( v276.Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)v11 + 11) + 424LL))() )
    {
LABEL_187:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v93);
      if ( !v271 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225506LL;
      goto LABEL_335;
    }
    Type = (unsigned int)v276.Type;
    v13 = v267;
  }
  else if ( v276.Type >= D3DKMT_ESCAPE_WIN32K_START )
  {
    v86 = (*(__int64 (__fastcall **)(_D3DKMT_ESCAPE *))(*((_QWORD *)v11 + 11) + 416LL))(&v276);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v87);
    if ( v271 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v88, &EventProfilerExit, v89, v269);
    return v86;
  }
  if ( (int)Type >= 1
    && ((_DWORD)Type == 1 || (_DWORD)Type == 3 || (_DWORD)Type == 8 || (int)Type > 27 && (int)Type <= 29)
    && !g_OSTestSigningEnabled )
  {
    if ( !(unsigned __int8)DxgkpIsDrtEnabled(Type, v13) )
    {
      v96 = WdLogNewEntry5_WdWarning(v95, v94, v15);
      *(_QWORD *)(v96 + 24) = v276.Type;
      WdLogEvent5_WdWarning(v96);
      goto LABEL_187;
    }
    LODWORD(Type) = v276.Type;
    v13 = v267;
  }
  v18 = (unsigned int)(Type - 1);
  PrivateDriverDataSize = v276.PrivateDriverDataSize;
  if ( (_DWORD)v18 )
  {
    if ( (_DWORD)v18 == 2 && v276.PrivateDriverDataSize < 0xC )
    {
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v13);
      if ( !v271 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        goto LABEL_781;
      goto LABEL_780;
    }
  }
  else if ( v276.PrivateDriverDataSize < 0x440 )
  {
LABEL_209:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v13);
    if ( !v271 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      goto LABEL_781;
    goto LABEL_780;
  }
  *(_OWORD *)v278 = 0LL;
  if ( v276.PrivateDriverDataSize > 0x200 )
  {
    v12 = (struct _D3DKMT_DISPLAYMODELIST *)operator new[](v276.PrivateDriverDataSize, 0x4B677844u, PagedPool);
    v272 = v12;
    v278[0] = v12;
    PrivateDriverDataSize = v276.PrivateDriverDataSize;
    v13 = v267;
  }
  if ( !v12 )
  {
    v101 = WdLogNewEntry5_WdLowResource(v18, v13, v15, v16);
    *(_QWORD *)(v101 + 24) = v276.PrivateDriverDataSize;
    *(_QWORD *)(v101 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v101);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v278);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v102);
    if ( v271 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v103, &EventProfilerExit, v104, v269);
    return 3221225495LL;
  }
  if ( (_BYTE)v13 )
  {
    v20 = PrivateDriverDataSize;
    pPrivateDriverData = v276.pPrivateDriverData;
    v22 = (char *)v276.pPrivateDriverData + PrivateDriverDataSize;
    if ( v22 < v276.pPrivateDriverData || (unsigned __int64)v22 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v12, pPrivateDriverData, v20);
  }
  else
  {
    memmove(v12, v276.pPrivateDriverData, PrivateDriverDataSize);
  }
  if ( (*(_BYTE *)&v276.Flags.0 & 0x40) != 0 )
  {
    if ( v276.Type || (hAdapter = v276.hAdapter) == 0 || (*(_BYTE *)&v276.Flags.0 & 1) != 0 )
    {
      v142 = WdLogNewEntry5_WdWarning((unsigned int)v276.Type, hAdapter, v24);
      *(_QWORD *)(v142 + 24) = 1291LL;
      goto LABEL_207;
    }
  }
  else
  {
    hAdapter = v276.hAdapter;
  }
  if ( v276.Type >= D3DKMT_ESCAPE_VIDMM && v276.Type <= D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( v276.Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
    {
      v86 = DxgkpProcessBddFallbackRequest();
      goto LABEL_224;
    }
    switch ( v276.Type )
    {
      case D3DKMT_ESCAPE_VIDMM:
        VidPnSourceId = v12->VidPnSourceId;
        if ( v12->VidPnSourceId == 5 )
        {
          v86 = DxgEscapeEvict((struct _D3DKMT_VIDMM_ESCAPE *)v12);
          goto LABEL_224;
        }
        if ( VidPnSourceId == 6 )
        {
          v86 = DxgEscapeEvictByNtHandle((struct _D3DKMT_VIDMM_ESCAPE *)v12);
          goto LABEL_224;
        }
        if ( VidPnSourceId == 13 )
        {
          v86 = DxgEscapeEvictByCriteria((struct _D3DKMT_VIDMM_ESCAPE *)v12);
          goto LABEL_224;
        }
        break;
      case D3DKMT_ESCAPE_DRT_TEST:
        if ( v276.PrivateDriverDataSize < 0xC
          || v276.PrivateDriverDataSize < v12->ModeCount
          || v12->VidPnSourceId != 1484026436 )
        {
          break;
        }
        Width = (int)v12->pModeList[0].Width;
        if ( !(_DWORD)Width && !(_DWORD)hAdapter
          || (unsigned int)Width <= 0x24 && (hAdapter = 0x1093482000LL, _bittest64(&hAdapter, Width)) )
        {
          v86 = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v12, 0LL);
          goto LABEL_224;
        }
        if ( (((_DWORD)Width - 27) & 0xFFFFFFF7) == 0 )
        {
          v86 = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v12, 0LL);
          if ( (v86 & 0x80000000) == 0 )
          {
            if ( v267 )
            {
              v106 = v276.PrivateDriverDataSize;
              v107 = v276.pPrivateDriverData;
              v113 = (char *)v276.pPrivateDriverData + v276.PrivateDriverDataSize;
              if ( (unsigned __int64)v113 > MmUserProbeAddress || v113 <= v276.pPrivateDriverData )
                *(_BYTE *)MmUserProbeAddress = 0;
LABEL_221:
              memmove(v107, v12, v106);
            }
            else
            {
LABEL_222:
              memmove(v276.pPrivateDriverData, v12, v276.PrivateDriverDataSize);
            }
          }
LABEL_224:
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v278);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v109);
          if ( v271 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          {
            McTemplateK0q_EtwWriteTransfer(v110, &EventProfilerExit, v111, v269);
            return v86;
          }
          return v86;
        }
        break;
      case D3DKMT_ESCAPE_MIRACAST_DISPLAY_REQUEST:
      case D3DKMT_ESCAPE_IDD_REQUEST:
        if ( v276.Type == D3DKMT_ESCAPE_IDD_REQUEST )
          v105 = DxgkHandleIndirectEscape(v276.PrivateDriverDataSize, v12);
        else
          v105 = DxgkHandleMiracastEscape(v276.PrivateDriverDataSize, v12);
        v86 = v105;
        if ( (int)(v105 + 0x80000000) >= 0 && v105 != -2147483643 )
          goto LABEL_224;
        if ( !v267 )
          goto LABEL_222;
        v106 = v276.PrivateDriverDataSize;
        v107 = v276.pPrivateDriverData;
        v108 = (char *)v276.pPrivateDriverData + v276.PrivateDriverDataSize;
        if ( (unsigned __int64)v108 > MmUserProbeAddress || v108 <= v276.pPrivateDriverData )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_221;
      case D3DKMT_ESCAPE_FORCE_BDDFALLBACK_HEADLESS:
        if ( !g_OSTestSigningEnabled )
          goto LABEL_253;
        if ( v276.PrivateDriverDataSize != 1 )
          goto LABEL_208;
        byte_1C00AFA1C = v12->VidPnSourceId;
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v278);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v115);
        if ( !v271 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
          return 0LL;
        goto LABEL_269;
      case D3DKMT_ESCAPE_REQUEST_MACHINE_CRASH:
        if ( v276.PrivateDriverDataSize != 24 )
          goto LABEL_208;
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v278);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v119);
        if ( v271 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v120, &EventProfilerExit, v121, v269);
        return 3221225473LL;
      case D3DKMT_ESCAPE_SOFTGPU_ENABLE_DISABLE_HMD:
        if ( g_OSTestSigningEnabled )
        {
          if ( v276.PrivateDriverDataSize != 200 )
            goto LABEL_208;
          v122 = DXGPROCESS::GetCurrent();
          if ( !v122 )
          {
            v125 = WdLogNewEntry5_WdError(v124, v123);
            *(_QWORD *)(v125 + 24) = 1471LL;
            WdLogEvent5_WdError(v125);
            goto LABEL_208;
          }
          DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v297, v122);
          DXGUSERCRIT::Acquire((DXGUSERCRIT *)v297, 1LL);
          memset(v308, 0, 0x48uLL);
          EtwActivityIdControl(3u, (LPGUID)&v308[1]);
          v308[8] = MEMORY[0xFFFFF78000000014];
          LODWORD(v308[3]) = 46;
          LOBYTE(v308[6]) = -1;
          v86 = DxgkEnableDisableTargetAsHMD(
                  (struct _D3DKMT_SOFTGPU_LUID_TARGET *)v12,
                  v12->pModeList[4].Format,
                  v12->pModeList[4].IntegerRefreshRate,
                  (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v308);
          DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v297);
          goto LABEL_224;
        }
LABEL_253:
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v278);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v118);
        if ( v271 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          goto LABEL_335;
        return 3221225506LL;
      case D3DKMT_ESCAPE_LOG_CODEPOINT_PACKET:
        if ( v276.PrivateDriverDataSize != 16 )
          goto LABEL_208;
        v287 = 0LL;
        DxgkLogCodePointPacket(
          v12->VidPnSourceId,
          v12->ModeCount,
          v12->pModeList[0].Width,
          v12->pModeList[0].Height,
          0LL);
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v278);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v126);
        if ( v271 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
LABEL_269:
          McTemplateK0q_EtwWriteTransfer(v116, &EventProfilerExit, v117, v269);
        return 0LL;
      case D3DKMT_ESCAPE_LOG_USERMODE_DAIG_PACKET:
        if ( v276.PrivateDriverDataSize < 0x30 || v276.PrivateDriverDataSize < v12->ModeCount )
          goto LABEL_208;
        v86 = DxgkWriteUserModeDiagEntry((struct _DXGK_DIAG_HEADER *)v12);
        goto LABEL_224;
      case D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS|D3DKMT_ESCAPE_TDRDBGCTRL:
        v86 = DxgkPrepareCcdDatabaseForAccess((unsigned int)v276.Type, hAdapter);
        goto LABEL_224;
      default:
        break;
    }
  }
  v25 = 0LL;
  v288 = 0LL;
  v285 = 0LL;
  if ( v276.Type == D3DKMT_ESCAPE_BDD_FALLBACK )
  {
    if ( IsCurrentConsoleSession(13LL, hAdapter) || IsCurrentProcessAdmin() )
    {
      Global = DXGGLOBAL::GetGlobal(v128, v127);
      DXGGLOBAL::ReferenceBddFallbackAdapter(Global, &v279);
    }
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v278);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v130);
    if ( v271 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v131, &EventProfilerExit, v132, v269);
    return 3221226021LL;
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v294, (struct _KTHREAD **)v11);
  if ( v276.hAdapter )
  {
    v29 = (v276.hAdapter >> 6) & 0xFFFFFF;
    v30 = v276.hAdapter >> 30;
    if ( (*((_BYTE *)v11 + 347) & 0x20) == 0 )
    {
      if ( v29 < *((_DWORD *)v11 + 64) )
      {
        v26 = v29;
        v28 = *((_QWORD *)v11 + 30);
        v27 = *(unsigned int *)(v28 + 16LL * v29 + 8);
        if ( v30 == ((*(_DWORD *)(v28 + 16LL * v29 + 8) >> 5) & 3) && (v27 & 0x2000) == 0 && (v27 & 0x1F) != 0 )
        {
          v26 = 2LL * v29;
          v31 = (DXGADAPTER **)(v28 + 16LL * v29);
          v27 &= 0x1Fu;
          if ( (_BYTE)v27 == 1 )
          {
            v25 = *v31;
LABEL_40:
            v288 = v25;
            goto LABEL_41;
          }
          v32 = WdLogNewEntry5_WdError(v27, v26);
          *(_QWORD *)(v32 + 24) = 267LL;
          WdLogEvent5_WdError(v32);
        }
      }
      v25 = 0LL;
      goto LABEL_40;
    }
    v133 = *((_QWORD *)v11 + 62);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v133 + 208));
    if ( v29 < *(_DWORD *)(v133 + 256) )
    {
      v134 = *(_QWORD *)(v133 + 240);
      v135 = *(_DWORD *)(v134 + 16LL * v29 + 8);
      if ( v30 == ((v135 >> 5) & 3) && (v135 & 0x2000) == 0 && (v135 & 0x1F) != 0 )
      {
        v136 = 2LL * v29;
        v137 = (DXGADAPTER **)(v134 + 16LL * v29);
        v138 = v135 & 0x1F;
        if ( (_BYTE)v138 == 1 )
        {
          v25 = *v137;
          goto LABEL_289;
        }
        v139 = WdLogNewEntry5_WdError(v138, v136);
        *(_QWORD *)(v139 + 24) = 267LL;
        WdLogEvent5_WdError(v139);
      }
    }
    v25 = 0LL;
LABEL_289:
    ExReleasePushLockSharedEx(v133 + 208, 0LL);
    KeLeaveCriticalRegion();
    v11 = v286;
    goto LABEL_40;
  }
LABEL_41:
  if ( !v25 )
  {
    v140 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v140 + 24) = v276.hAdapter;
    LODWORD(v43) = -1073741811;
    *(_QWORD *)(v140 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v140);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v294);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v278);
LABEL_128:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v75);
    v79 = v271 == 0;
    goto LABEL_129;
  }
  if ( v276.hDevice )
  {
    v33 = (v276.hDevice >> 6) & 0xFFFFFF;
    v34 = v276.hDevice >> 30;
    if ( (unsigned int)v33 < *((_DWORD *)v11 + 64) )
    {
      v28 = (unsigned int)v33;
      v35 = *((_QWORD *)v11 + 30);
      v26 = *(unsigned int *)(v35 + 16 * v33 + 8);
      if ( (_DWORD)v34 == ((*(_DWORD *)(v35 + 16 * v33 + 8) >> 5) & 3) && (v26 & 0x2000) == 0 && (v26 & 0x1F) != 0 )
      {
        v28 = 2LL * (unsigned int)v33;
        v26 &= 0x1Fu;
        if ( (_BYTE)v26 == 3 )
        {
          v5 = *(_QWORD *)(v35 + 16LL * (unsigned int)v33);
          goto LABEL_50;
        }
        v36 = WdLogNewEntry5_WdError(v34, v26);
        *(_QWORD *)(v36 + 24) = 267LL;
        WdLogEvent5_WdError(v36);
      }
    }
    v5 = 0LL;
LABEL_50:
    v291 = v5;
    if ( !v5 || v25 != *(DXGADAPTER **)(*(_QWORD *)(v5 + 16) + 16LL) && v25 != *(DXGADAPTER **)(v5 + 1848) )
    {
      v141 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v26, v28);
      v141[3] = v25;
      v141[4] = v276.hDevice;
LABEL_297:
      WdLogEvent5_WdWarning(v141);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v294);
      goto LABEL_208;
    }
  }
  if ( !v276.hContext )
  {
    v37 = v273;
    goto LABEL_54;
  }
  v81 = (v276.hContext >> 6) & 0xFFFFFF;
  v82 = v276.hContext >> 30;
  if ( (unsigned int)v81 < *((_DWORD *)v11 + 64) )
  {
    v28 = (unsigned int)v81;
    v83 = *((_QWORD *)v11 + 30);
    v26 = *(unsigned int *)(v83 + 16 * v81 + 8);
    if ( (_DWORD)v82 == ((*(_DWORD *)(v83 + 16 * v81 + 8) >> 5) & 3) && (v26 & 0x2000) == 0 && (v26 & 0x1F) != 0 )
    {
      v28 = 2LL * (unsigned int)v81;
      v84 = (DXGCONTEXT **)(v83 + 16LL * (unsigned int)v81);
      v26 &= 0x1Fu;
      if ( (_BYTE)v26 == 7 )
      {
        v37 = *v84;
        goto LABEL_136;
      }
      v85 = WdLogNewEntry5_WdError(v82, v26);
      *(_QWORD *)(v85 + 24) = 267LL;
      WdLogEvent5_WdError(v85);
    }
  }
  v37 = 0LL;
LABEL_136:
  v273 = v37;
  v287 = v37;
  if ( !v37 || !v5 || v5 != *((_QWORD *)v37 + 2) )
  {
    v141 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v26, v28);
    v141[3] = v25;
    v141[4] = v5;
    v141[5] = v276.hContext;
    goto LABEL_297;
  }
LABEL_54:
  if ( v5 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v5 + 64));
    v25 = *(DXGADAPTER **)(*(_QWORD *)(v5 + 16) + 16LL);
    v288 = v25;
  }
  if ( v37 )
    _InterlockedIncrement64((volatile signed __int64 *)v37 + 4);
  _InterlockedIncrement64((volatile signed __int64 *)v25 + 3);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v294);
  if ( *((_DWORD *)v25 + 462) < 0x5023u )
    goto LABEL_59;
  if ( (*(_BYTE *)&v276.Flags.0 & 0x10) != 0 || (v276.Flags.Value & 0xFFFFFF00) != 0 )
  {
    v142 = WdLogNewEntry5_WdWarning(v39, v38, v40);
    *(_QWORD *)(v142 + 24) = v25;
    goto LABEL_207;
  }
  if ( (*(_BYTE *)&v276.Flags.0 & 0x20) != 0 )
  {
    v142 = WdLogNewEntry5_WdWarning(v39, v38, v40);
    *(_QWORD *)(v142 + 24) = v25;
    *(_QWORD *)(v142 + 32) = 1626LL;
LABEL_207:
    WdLogEvent5_WdWarning(v142);
LABEL_208:
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v278);
    goto LABEL_209;
  }
LABEL_59:
  v277 = v25;
  v275 = 0LL;
  LODWORD(v43) = DxgkpGetPairingAdapters(v25, 0LL, &v285, &v275, 0LL, 0LL, 0);
  if ( (int)v43 >= 0 && _InterlockedExchangeAdd64((volatile signed __int64 *)v285 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v44 = v285;
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v285 + 2), v285);
  }
  else
  {
    v44 = v285;
  }
  v45 = (unsigned int)(v276.Type - 1);
  if ( v276.Type != D3DKMT_ESCAPE_VIDMM )
  {
    if ( v276.Type == D3DKMT_ESCAPE_DRT_TEST
      && v276.PrivateDriverDataSize >= 0xC
      && v276.PrivateDriverDataSize >= v272->ModeCount
      && v272->VidPnSourceId == 1484026436 )
    {
      v143 = (int)v272->pModeList[0].Width;
      if ( (unsigned int)v143 <= 0x25 )
      {
        v144 = 0x2744204000LL;
        if ( _bittest64(&v144, v143) )
        {
          if ( (_DWORD)v143 == 33 || (_DWORD)v143 == 32 )
          {
            Feature_HoldAdapterLockEscape__private_IsEnabledPreCheck();
            v145 = -1073741823;
          }
          else
          {
            v145 = DxgkDrtTestEscape(v25, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v272, 0LL);
            if ( (v145 & 0x80000000) == 0 )
            {
              if ( v267 )
              {
                v146 = v276.PrivateDriverDataSize;
                v147 = v276.pPrivateDriverData;
                v148 = (char *)v276.pPrivateDriverData + v276.PrivateDriverDataSize;
                if ( (unsigned __int64)v148 > MmUserProbeAddress || v148 <= v276.pPrivateDriverData )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v147, v272, v146);
                v149 = v273;
                goto LABEL_315;
              }
              memmove(v276.pPrivateDriverData, v272, v276.PrivateDriverDataSize);
            }
          }
          v149 = v273;
LABEL_315:
          if ( v149 )
            DXGCONTEXT::ReleaseReference(v149);
          if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
          DXGADAPTER::ReleaseReferenceNoTracking(v25);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v278);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v150);
          if ( v271 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v151, &EventProfilerExit, v152, v269);
          return v145;
        }
      }
    }
LABEL_64:
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v299, v25, 0LL);
    COREACCESS::COREACCESS((COREACCESS *)v298, 0LL);
    v284 = 0;
    v282 = v25;
    v268 = 0;
    v283 = 0;
    v48 = *((_QWORD *)v11 + 11);
    if ( v48 )
    {
      v49 = (*(__int64 (__fastcall **)(_QWORD))(v48 + 224))(0LL);
      v50 = 1LL;
      if ( v49 )
      {
        v289 = 1;
LABEL_67:
        v51 = v276.Type;
        if ( v276.Type == D3DKMT_ESCAPE_BDD_FALLBACK )
        {
          COREACCESS::AcquireShared((COREACCESS *)v298, 0LL);
          Value = v276.Flags.Value;
          v51 = v276.Type;
        }
        else
        {
          Value = v276.Flags.Value;
          if ( (*(_BYTE *)&v276.Flags.0 & 1) != 0 )
          {
            v165 = 0;
            if ( v276.Type == D3DKMT_ESCAPE_DRIVERPRIVATE
              || v276.Type == D3DKMT_ESCAPE_VIDSCH && v272->VidPnSourceId == 3 )
            {
              v165 = 1;
            }
            v166 = v165;
            if ( *((_QWORD *)v25 + 335) )
              v166 = 1;
            LODWORD(v43) = COREADAPTERACCESS::AcquireExclusive((__int64)v299, (unsigned int)v166 + 2, 2u);
            if ( (int)v43 < 0 )
            {
              v57 = 0;
              goto LABEL_161;
            }
            if ( !v166 )
            {
              v50 = *((_QWORD *)v25 + 335);
              if ( v50 )
                ADAPTER_RENDER::FlushScheduler(v50, 2LL, 0xFFFFFFFFLL);
            }
            v56 = 1LL;
            Value = v276.Flags.Value;
            v51 = v276.Type;
            goto LABEL_84;
          }
          v53 = v276.Type == D3DKMT_ESCAPE_DRT_TEST
             && v272->pModeList[0].Width == 23
             && v272->pModeList[0].Height - 2 <= 1;
          v274 = v53;
          if ( v276.Type == D3DKMT_ESCAPE_DRIVERPRIVATE )
          {
            v50 = (unsigned int)*DXGADAPTER::GetAdapterType(v25, &v292);
            if ( (v50 & 0x10) != 0 || *((_DWORD *)v25 + 462) >= 0x5023u && (Value & 8) != 0 )
            {
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
              v57 = v283;
              if ( *((_DWORD *)v25 + 50) != 1 )
              {
                LODWORD(v43) = -1073741130;
                goto LABEL_161;
              }
              Value = v276.Flags.Value;
              v51 = v276.Type;
              v268 = v283;
              goto LABEL_357;
            }
            v53 = v274;
          }
          if ( !v53 )
          {
            if ( v304 )
            {
              v167 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50, v46);
              v167[3] = 275LL;
              v167[4] = 4LL;
              v167[5] = v302;
              v167[6] = 0LL;
              v167[7] = 0LL;
              WdLogEvent5_WdCriticalError(v167);
            }
            v50 = (__int64)v303;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v303 + 23) )
            {
              if ( !KeReadStateEvent((PRKEVENT)v303 + 2) )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v54, &EventBlockThread, v55, 72);
                KeWaitForSingleObject((char *)v303 + 48, Executive, 0, 0, 0LL);
              }
              DXGADAPTER::AcquireCoreResourceShared(v303, 0LL);
              v50 = (__int64)v303;
            }
            v305 = 0LL;
            v304 = 1;
            if ( *(_DWORD *)(v50 + 200) != 1 )
            {
              COREACCESS::Release((COREACCESS *)v302);
              LODWORD(v43) = -1073741130;
              v57 = v283;
              goto LABEL_161;
            }
            if ( v301 != (unsigned int *)v303 )
            {
              COREACCESS::AcquireShared((COREACCESS *)v300, 0LL);
              v50 = v301[50];
              if ( (_DWORD)v50 != 1 )
              {
                COREACCESS::Release((COREACCESS *)v300);
                COREACCESS::Release((COREACCESS *)v302);
                LODWORD(v43) = -1073741130;
                v57 = v283;
                goto LABEL_161;
              }
            }
            v299[1] = 1;
            LODWORD(v43) = 0;
            Value = v276.Flags.Value;
            v51 = v276.Type;
            v268 = v283;
            v56 = 0LL;
LABEL_84:
            if ( v276.hDevice )
            {
              v57 = v283;
              if ( *(_DWORD *)(v5 + 576) != 1 )
              {
                LODWORD(v43) = -1073741130;
                goto LABEL_161;
              }
              Value = v276.Flags.Value;
              v51 = v276.Type;
              v268 = v283;
            }
            v58 = v285;
            if ( v285 && *((_BYTE *)v285 + 209) )
            {
              if ( (v25 = v285, v288 = v285, v51 == D3DKMT_ESCAPE_DRIVERPRIVATE) && (Value & 0x40) == 0
                || (unsigned int)v51 <= D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION
                && (v168 = 805306378, _bittest(&v168, v51)) )
              {
                if ( v273 )
                  v169 = *((_DWORD *)v273 + 7);
                else
                  v169 = 0;
                if ( v5 )
                  LODWORD(v4) = *(_DWORD *)(v5 + 440);
                v170 = *((_DWORD *)v285 + 1070);
                HostProcess = DXGPROCESS::GetHostProcess(v286);
                v172 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                         (DXGADAPTER *)((char *)v285 + 4208),
                         HostProcess,
                         v170,
                         (unsigned int)v4,
                         v169,
                         v276.Type,
                         v276.Flags,
                         v276.PrivateDriverDataSize,
                         (unsigned __int8 *)v272);
                v43 = v172;
                if ( v172 < 0 )
                {
                  v175 = WdLogNewEntry5_WdError(v174, v173);
                  *(_QWORD *)(v175 + 24) = v43;
                  WdLogEvent5_WdError(v175);
                }
LABEL_394:
                v62 = v272;
LABEL_108:
                v68 = v267;
LABEL_109:
                v69 = 0;
LABEL_110:
                if ( (int)v43 >= 0 )
                  goto LABEL_111;
                goto LABEL_159;
              }
            }
            if ( v51 == D3DKMT_ESCAPE_DRIVERPRIVATE )
            {
              memset(&v293, 0, sizeof(v293));
              if ( (Value & 0x40) != 0 )
              {
                v62 = v272;
                LODWORD(v43) = DxgkpDriverKnownEscape(v286, v272, v276.PrivateDriverDataSize);
                goto LABEL_108;
              }
              if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))v25 + 62) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
              {
                v264 = WdLogNewEntry5_WdWarning(v50, v285, v47);
                *(_QWORD *)(v264 + 24) = v25;
                *(_QWORD *)(v264 + 32) = -1073741637LL;
                WdLogEvent5_WdWarning(v264);
                v62 = v272;
              }
              else
              {
                if ( !v276.PrivateDriverDataSize || !v276.pPrivateDriverData )
                {
                  v263 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v285, v47);
                  v263[3] = v276.PrivateDriverDataSize;
                  v263[4] = v276.pPrivateDriverData;
                  LODWORD(v43) = -1073741811;
                  v263[5] = -1073741811LL;
                  WdLogEvent5_WdWarning(v263);
                  v62 = v272;
                  goto LABEL_157;
                }
                if ( v5 )
                  v59 = *(void **)(v5 + 584);
                else
                  v59 = 0LL;
                v293.hDevice = v59;
                v60 = v273;
                if ( v273 )
                  v61 = (void *)*((_QWORD *)v273 + 23);
                else
                  v61 = 0LL;
                v293.hContext = v61;
                v293.Flags.Value = Value;
                v62 = v272;
                if ( (*((_DWORD *)v25 + 87) & 8) != 0 || *((_DWORD *)v25 + 81) != 4098 )
                {
LABEL_100:
                  if ( (Value & 0x80) != 0 )
                  {
                    v262 = WdLogNewEntry5_WdError(v60, v58);
                    *(_QWORD *)(v262 + 24) = -1073741637LL;
                    WdLogEvent5_WdError(v262);
                    LODWORD(v43) = -1073741637;
                  }
                  else
                  {
                    v63 = v286;
                    if ( (*((_BYTE *)v286 + 347) & 0x20) != 0
                      || (v64 = DXGGLOBAL::GetGlobal((__int64)v60, (__int64)v58), *((_BYTE *)v64 + 1443))
                      && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                           (struct DXGGLOBAL *)((char *)v64 + 1436),
                           v25) )
                    {
                      LODWORD(v4) = 32;
                    }
                    v293.Flags.Value = (unsigned int)v4 | v293.Flags.Value & 0xFFFFFFDF;
                    v293.PrivateDriverDataSize = v276.PrivateDriverDataSize;
                    v293.pPrivateDriverData = v62;
                    v65 = *((_QWORD *)v25 + 335);
                    if ( v65 )
                    {
                      v66 = v65 + 72;
                      KeEnterCriticalRegion();
                      ExAcquirePushLockSharedEx(v66, 0LL);
                      v67 = *(_QWORD *)(*((_QWORD *)v63 + 6) + 8LL * *((unsigned int *)v25 + 58));
                      if ( v67 )
                        v293.hKmdProcessHandle = *(HANDLE *)(v67 + 16);
                      ExReleasePushLockSharedEx(v66, 0LL);
                      KeLeaveCriticalRegion();
                    }
                    LODWORD(v43) = DXGADAPTER::DdiEscape(v25, &v293);
                  }
                  goto LABEL_108;
                }
                if ( (unsigned int)IsAMDDriverEscapeAllowed(v272, v276.PrivateDriverDataSize) )
                {
                  LOBYTE(Value) = v276.Flags.0;
                  goto LABEL_100;
                }
              }
LABEL_768:
              LODWORD(v43) = -1073741637;
LABEL_157:
              v68 = v267;
LABEL_158:
              v69 = 0;
LABEL_159:
              if ( !v69 || (_DWORD)v43 != -2147483643 )
              {
LABEL_160:
                v57 = v268;
LABEL_161:
                v73 = v273;
LABEL_116:
                if ( v57 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                COREACCESS::~COREACCESS((COREACCESS *)v298);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v74);
                if ( v73 )
                  DXGCONTEXT::ReleaseReference(v73);
                if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
                v76 = (DXGGLOBAL **)v277;
                if ( v277 && _InterlockedExchangeAdd64((volatile signed __int64 *)v277 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(v76[2], (struct DXGADAPTER *)v76);
                if ( v278[0] )
                  operator delete[](v278[0]);
                goto LABEL_128;
              }
LABEL_111:
              if ( v68 )
              {
                v70 = v276.PrivateDriverDataSize;
                v71 = v276.pPrivateDriverData;
                v72 = (char *)v276.pPrivateDriverData + v276.PrivateDriverDataSize;
                if ( (unsigned __int64)v72 > MmUserProbeAddress || v72 <= v276.pPrivateDriverData )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v71, v62, v70);
                v57 = v268;
                v73 = v273;
                goto LABEL_116;
              }
              memmove(v276.pPrivateDriverData, v62, v276.PrivateDriverDataSize);
              goto LABEL_160;
            }
            switch ( v51 )
            {
              case D3DKMT_ESCAPE_VIDMM:
                if ( v285 )
                {
                  if ( v5 )
                    v4 = *(struct DXGADAPTER **)(v5 + 760);
                  v62 = v272;
                  if ( v272->VidPnSourceId != 16 )
                  {
                    LODWORD(v43) = (*(__int64 (__fastcall **)(_QWORD, struct DXGADAPTER *, struct _D3DKMT_DISPLAYMODELIST *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v285 + 335) + 640LL) + 8LL) + 40LL))(
                                     *(_QWORD *)(*((_QWORD *)v285 + 335) + 648LL),
                                     v4,
                                     v272,
                                     v56);
                    goto LABEL_108;
                  }
                  p_RefreshRate = &v272->pModeList[0].RefreshRate;
                  LODWORD(v43) = DxgkpEscapeVidMmDelayExecution(
                                   (struct DXGDEVICE *)v5,
                                   v272->pModeList[0].Height,
                                   v272->pModeList[0].Width,
                                   v272->pModeList[0].Format,
                                   (unsigned __int64 *)&v272->pModeList[0].RefreshRate);
                  if ( (int)v43 < 0 )
                    goto LABEL_108;
                  v286 = (DXGPROCESS *)v276.pPrivateDriverData;
                  v68 = v267;
                  if ( !v267 )
                  {
                    *((D3DDDI_RATIONAL *)v276.pPrivateDriverData + 3) = *p_RefreshRate;
                    goto LABEL_109;
                  }
                  v186 = (char *)v276.pPrivateDriverData + 24;
                  if ( (char *)v276.pPrivateDriverData + 24 >= (void *)MmUserProbeAddress )
                    v186 = (_QWORD *)MmUserProbeAddress;
                  *v186 = *p_RefreshRate;
                  v69 = 0;
                  goto LABEL_110;
                }
                v183 = WdLogNewEntry5_WdError(v50, 0LL);
                *(_QWORD *)(v183 + 24) = v25;
                *(_QWORD *)(v183 + 32) = -1073741637LL;
                WdLogEvent5_WdError(v183);
                if ( v268 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                COREACCESS::~COREACCESS((COREACCESS *)v298);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v184);
                if ( v273 )
                  DXGCONTEXT::ReleaseReference(v273);
                if ( !v5 || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  goto LABEL_421;
                goto LABEL_420;
              case D3DKMT_ESCAPE_TDRDBGCTRL:
                if ( !v276.pPrivateDriverData )
                {
                  LODWORD(v43) = TdrDbgCtrl(0LL);
                  goto LABEL_394;
                }
                v62 = v272;
                if ( v276.PrivateDriverDataSize < 4 )
                  goto LABEL_455;
                switch ( v272->VidPnSourceId )
                {
                  case 0u:
                    LODWORD(v43) = TdrDbgCtrl(0LL);
                    goto LABEL_108;
                  case 1u:
                    LODWORD(v43) = TdrDbgCtrl(2LL);
                    goto LABEL_108;
                  case 2u:
                    LODWORD(v43) = TdrDbgCtrl(1LL);
                    goto LABEL_108;
                  case 3u:
                    LODWORD(v43) = TdrDbgCtrl(3LL);
                    goto LABEL_108;
                  case 4u:
                  case 5u:
                    if ( !v285 )
                    {
                      *(_QWORD *)(WdLogNewEntry5_WdTrace(v50, 0LL, 0x1C0000000uLL, v56) + 24) = 0LL;
                      goto LABEL_768;
                    }
                    if ( *((_BYTE *)v285 + 209) )
                      goto LABEL_768;
                    LODWORD(v43) = TdrDbgCtrl(4LL);
                    if ( (int)v43 >= 0 )
                    {
                      v191 = *(_QWORD *)(*((_QWORD *)v285 + 335) + 624LL);
                      v306[2] = 0;
                      v306[0] = 2;
                      v306[1] = v62->VidPnSourceId;
                      LODWORD(v43) = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v285 + 335) + 616LL)
                                                                                              + 8LL)
                                                                                  + 64LL))(
                                       v191,
                                       v306);
                    }
                    goto LABEL_108;
                  case 6u:
                    LODWORD(v43) = TdrDbgCtrl(5LL);
                    goto LABEL_108;
                  case 7u:
                    LODWORD(v43) = TdrDbgCtrl(6LL);
                    goto LABEL_108;
                  case 8u:
                    if ( v276.PrivateDriverDataSize < 8 )
                    {
                      LODWORD(v43) = -1073741811;
                      goto LABEL_157;
                    }
                    if ( !v285 )
                    {
                      *(_QWORD *)(WdLogNewEntry5_WdTrace(v50, 0LL, 0x1C0000000uLL, v56) + 24) = v25;
                      goto LABEL_768;
                    }
                    if ( *((_BYTE *)v285 + 209) )
                      goto LABEL_768;
                    LODWORD(v43) = TdrDbgCtrl(4LL);
                    if ( (int)v43 >= 0 )
                    {
                      v192 = *(_QWORD *)(*((_QWORD *)v285 + 335) + 624LL);
                      v307[0] = 2;
                      v307[1] = v62->VidPnSourceId;
                      v307[2] = v62->ModeCount;
                      LODWORD(v43) = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v285 + 335) + 616LL)
                                                                                              + 8LL)
                                                                                  + 64LL))(
                                       v192,
                                       v307);
                    }
                    break;
                  default:
                    goto LABEL_455;
                }
                goto LABEL_108;
              case D3DKMT_ESCAPE_VIDSCH:
                if ( v285 )
                {
                  if ( !*((_BYTE *)v285 + 209) )
                  {
                    v62 = v272;
                    if ( v272->VidPnSourceId == 2 )
                      goto LABEL_455;
                    if ( v272->VidPnSourceId != 3 )
                    {
                      LODWORD(v43) = (*(__int64 (__fastcall **)(_QWORD, struct _D3DKMT_DISPLAYMODELIST *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v285 + 335) + 616LL) + 8LL) + 64LL))(
                                       *(_QWORD *)(*((_QWORD *)v285 + 335) + 624LL),
                                       v272);
                      goto LABEL_108;
                    }
                    if ( !(_DWORD)v56 )
                      goto LABEL_455;
                    ModeCount = 5000000;
                    if ( v272->ModeCount < 0x4C4B40 )
                      ModeCount = v272->ModeCount;
                    Interval.QuadPart = -(__int64)ModeCount;
                    KeDelayExecutionThread(0, 0, &Interval);
                    LODWORD(v43) = 0;
                    v68 = v267;
                    goto LABEL_111;
                  }
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v189);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( !v5
                    || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  {
                    goto LABEL_421;
                  }
                }
                else
                {
                  v187 = WdLogNewEntry5_WdError(v50, 0LL);
                  *(_QWORD *)(v187 + 24) = v25;
                  *(_QWORD *)(v187 + 32) = -1073741637LL;
                  WdLogEvent5_WdError(v187);
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v188);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( !v5
                    || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  {
                    goto LABEL_421;
                  }
                }
                goto LABEL_420;
              case D3DKMT_ESCAPE_DEVICE:
                if ( v276.PrivateDriverDataSize < 0xC || !v5 )
                  goto LABEL_561;
                v62 = v272;
                LODWORD(v43) = DXGDEVICE::Escape((DXGDEVICE *)v5, (struct _D3DKMT_DEVICE_ESCAPE *)v272);
                goto LABEL_108;
              case D3DKMT_ESCAPE_DMM:
                if ( *((_QWORD *)v25 + 334) )
                {
                  v62 = v272;
                  if ( v276.PrivateDriverDataSize >= 0x80 )
                  {
                    v182 = *(_QWORD *)&v272->pModeList[0].Width;
                    if ( v182 <= 0x19000 && (v276.PrivateDriverDataSize == v182 + 127 || !v182) )
                    {
                      LODWORD(v43) = DmmEscape(v25, (struct _D3DKMT_DMM_ESCAPE_INTERNAL *const)v272);
                      goto LABEL_108;
                    }
                  }
LABEL_455:
                  LODWORD(v43) = -1073741811;
                  goto LABEL_157;
                }
                v176 = WdLogNewEntry5_WdError(v50, v285);
                *(_QWORD *)(v176 + 24) = v25;
                *(_QWORD *)(v176 + 32) = -1073741637LL;
                WdLogEvent5_WdError(v176);
                if ( v268 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                COREACCESS::~COREACCESS((COREACCESS *)v298);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v177);
                if ( v273 )
                  DXGCONTEXT::ReleaseReference(v273);
                if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
                v178 = v277;
                if ( !v277 )
                  goto LABEL_405;
                goto LABEL_404;
              case D3DKMT_ESCAPE_DEBUG_SNAPSHOT:
                v62 = v272;
                if ( v276.PrivateDriverDataSize < 8 )
                {
                  LODWORD(v43) = -1073741811;
                  goto LABEL_157;
                }
                LODWORD(v43) = DxgDbgTakeSnapshot(
                                 &v272->ModeCount,
                                 v276.PrivateDriverDataSize - 4,
                                 (unsigned int *)v272);
                goto LABEL_108;
              case D3DKMT_ESCAPE_DRT_TEST:
                v62 = v272;
                if ( v276.PrivateDriverDataSize < 0xC
                  || v276.PrivateDriverDataSize < v272->ModeCount
                  || v272->VidPnSourceId != 1484026436 )
                {
                  goto LABEL_455;
                }
                LODWORD(v43) = DxgkDrtTestEscape(
                                 v25,
                                 (struct _D3DKMT_DRT_ESCAPE_HEAD *)v272,
                                 (struct COREADAPTERACCESS *)v299);
                goto LABEL_108;
              case D3DKMT_ESCAPE_DIAGNOSTICS:
                v193 = 1;
                goto LABEL_491;
              case D3DKMT_ESCAPE_OUTPUTDUPL_SNAPSHOT:
                if ( *((_QWORD *)v25 + 334) )
                {
                  v62 = v272;
                  if ( v276.PrivateDriverDataSize < 0x18 )
                  {
                    LODWORD(v43) = -1073741811;
                    goto LABEL_157;
                  }
                  if ( v276.PrivateDriverDataSize != v272->VidPnSourceId )
                  {
                    LODWORD(v43) = -1073741811;
                    goto LABEL_157;
                  }
                  if ( !v289 )
                    v4 = v25;
                  LODWORD(v43) = OutputDuplGetDebugInfo(v4, (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)v272);
                  goto LABEL_108;
                }
                v194 = WdLogNewEntry5_WdError(v50, v285);
                *(_QWORD *)(v194 + 24) = v25;
                *(_QWORD *)(v194 + 32) = -1073741637LL;
                WdLogEvent5_WdError(v194);
                if ( v268 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                COREACCESS::~COREACCESS((COREACCESS *)v298);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v195);
                if ( v273 )
                  DXGCONTEXT::ReleaseReference(v273);
                if ( !v5 || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  goto LABEL_421;
                goto LABEL_420;
              case D3DKMT_ESCAPE_OUTPUTDUPL_DIAGNOSTICS:
                if ( *((_QWORD *)v25 + 334) )
                {
                  v62 = v272;
                  if ( v276.PrivateDriverDataSize < 8 )
                  {
                    LODWORD(v43) = -1073741811;
                    goto LABEL_157;
                  }
                  if ( v276.PrivateDriverDataSize != v272->ModeCount + 8LL )
                  {
                    LODWORD(v43) = -1073741811;
                    goto LABEL_157;
                  }
                  if ( !v289 )
                    v4 = v25;
                  LODWORD(v43) = OutputDuplGetDiagnosticBuffer(v4, (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)v272);
                  goto LABEL_108;
                }
                v196 = WdLogNewEntry5_WdError(v50, v285);
                *(_QWORD *)(v196 + 24) = v25;
                *(_QWORD *)(v196 + 32) = -1073741637LL;
                WdLogEvent5_WdError(v196);
                if ( v268 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                COREACCESS::~COREACCESS((COREACCESS *)v298);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v197);
                if ( v273 )
                  DXGCONTEXT::ReleaseReference(v273);
                if ( !v5 || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  goto LABEL_421;
                goto LABEL_420;
              case D3DKMT_ESCAPE_BDD_PNP:
                if ( (*((_DWORD *)v25 + 87) & 0x20) == 0 || DXGADAPTER::IsBddFallbackDriver(v25) )
                {
                  LODWORD(v43) = -1071775742;
                  v62 = v272;
                  goto LABEL_157;
                }
                *((_DWORD *)&v296.Flags + 1) = 0;
                memset(&v296.PrivateDriverDataSize + 1, 0, 20);
                v296.hDevice = 0LL;
                v296.Flags.Value = Value;
                v296.PrivateDriverDataSize = v276.PrivateDriverDataSize;
                v62 = v272;
                v296.pPrivateDriverData = v272;
                LODWORD(v43) = DXGADAPTER::DdiEscape(v201, &v296);
                goto LABEL_108;
              case D3DKMT_ESCAPE_BDD_FALLBACK:
                if ( !DXGADAPTER::IsBddFallbackDriver(0LL) )
                {
                  v200 = WdLogNewEntry5_WdAssertion(v199, v198);
                  *(_QWORD *)(v200 + 24) = 2461LL;
                  WdLogEvent5_WdAssertion(v200);
                  Value = v276.Flags.Value;
                }
                *((_DWORD *)&v295.Flags + 1) = 0;
                memset(&v295.PrivateDriverDataSize + 1, 0, 20);
                v295.hDevice = 0LL;
                v295.Flags.Value = Value;
                v295.PrivateDriverDataSize = v276.PrivateDriverDataSize;
                v62 = v272;
                v295.pPrivateDriverData = v272;
                LODWORD(v43) = DXGADAPTER::DdiEscape(0LL, &v295);
                goto LABEL_108;
              case D3DKMT_ESCAPE_ACTIVATE_SPECIFIC_DIAG:
                v62 = v272;
                if ( v276.PrivateDriverDataSize != 8 )
                {
                  LODWORD(v43) = -1073741811;
                  goto LABEL_157;
                }
                if ( !v272->VidPnSourceId )
                {
                  v206 = v272->ModeCount;
                  *((_BYTE *)DXGGLOBAL::GetGlobal(v50, (__int64)v285) + 1120) = v206 != 0;
                  LODWORD(v43) = 0;
                  v68 = v267;
                  goto LABEL_111;
                }
                if ( v272->VidPnSourceId != 15 )
                {
                  v202 = WdLogNewEntry5_WdAssertion(v50, v285);
                  *(_QWORD *)(v202 + 24) = (int)v62->VidPnSourceId;
                  WdLogEvent5_WdAssertion(v202);
                  LODWORD(v43) = -1073741811;
                  goto LABEL_108;
                }
                v203 = (ADAPTER_DISPLAY *)*((_QWORD *)v25 + 334);
                if ( v203 )
                {
                  LODWORD(v43) = ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(v203, v272->ModeCount);
                  goto LABEL_108;
                }
                v204 = WdLogNewEntry5_WdError(0LL, v285);
                *(_QWORD *)(v204 + 24) = v25;
                *(_QWORD *)(v204 + 32) = -1073741637LL;
                WdLogEvent5_WdError(v204);
                if ( v268 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                COREACCESS::~COREACCESS((COREACCESS *)v298);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v205);
                if ( v273 )
                  DXGCONTEXT::ReleaseReference(v273);
                if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  goto LABEL_420;
                goto LABEL_421;
              case D3DKMT_ESCAPE_MODES_PRUNED_OUT:
                if ( *((_QWORD *)v25 + 334) )
                {
                  v62 = v272;
                  if ( v276.PrivateDriverDataSize < 8 )
                  {
                    LODWORD(v43) = -1073741811;
                    goto LABEL_157;
                  }
                  if ( v276.PrivateDriverDataSize < 44 * (unsigned __int64)v272->ModeCount + 8 )
                  {
                    LODWORD(v43) = -1073741811;
                    goto LABEL_157;
                  }
                  LODWORD(v43) = ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(*((ADAPTER_DISPLAY **)v25 + 334), v272);
                  goto LABEL_108;
                }
                v207 = WdLogNewEntry5_WdError(v50, v285);
                *(_QWORD *)(v207 + 24) = v25;
                *(_QWORD *)(v207 + 32) = -1073741637LL;
                WdLogEvent5_WdError(v207);
                if ( v268 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                COREACCESS::~COREACCESS((COREACCESS *)v298);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v208);
                if ( v273 )
                  DXGCONTEXT::ReleaseReference(v273);
                if ( !v5 || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  goto LABEL_421;
                goto LABEL_420;
              case D3DKMT_ESCAPE_WHQL_INFO:
                v62 = v272;
                v68 = v267;
                if ( v276.PrivateDriverDataSize < 4 )
                {
                  LODWORD(v43) = -1073741811;
                  goto LABEL_158;
                }
                v272->VidPnSourceId = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 27) + 64LL) + 2720LL);
                LODWORD(v43) = 0;
                goto LABEL_111;
              case D3DKMT_ESCAPE_BRIGHTNESS:
                if ( (Value & 1) == 0 )
                {
LABEL_561:
                  LODWORD(v43) = -1073741811;
                  v62 = v272;
                  goto LABEL_157;
                }
                if ( v276.PrivateDriverDataSize < 0x60C )
                {
                  LODWORD(v43) = -1073741811;
                  v62 = v272;
                  goto LABEL_157;
                }
                if ( !DXGPROCESS::IsRemoteConnection(v286) )
                {
                  v62 = v272;
                  LODWORD(v43) = DpiBrightnessEscape(
                                   *((struct _DEVICE_OBJECT **)v25 + 27),
                                   (struct _D3DKMT_BRIGHTNESS_INFO *)v272);
                  goto LABEL_108;
                }
                LODWORD(v43) = -1073741790;
                v212 = WdLogNewEntry5_WdWarning(v210, v209, v211);
                *(_QWORD *)(v212 + 24) = v25;
                *(_QWORD *)(v212 + 32) = -1073741790LL;
LABEL_565:
                WdLogEvent5_WdWarning(v212);
                goto LABEL_394;
              case D3DKMT_ESCAPE_EDID_CACHE:
                v62 = v272;
                if ( v276.PrivateDriverDataSize < 4 )
                  goto LABEL_455;
                v213 = v272->VidPnSourceId + 4LL;
                if ( v276.PrivateDriverDataSize != v213 )
                  goto LABEL_455;
                if ( !IsCurrentConsoleSession(v213, (__int64)v285) && !IsCurrentProcessAdmin() )
                {
                  memset(v62, 0, v276.PrivateDriverDataSize);
                  goto LABEL_108;
                }
                v216 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v215, v214) + 112);
                if ( v216 )
                {
                  LODWORD(v43) = EDIDCACHE::GetEdids(v216, (struct _D3DKMT_DXGK_DIAGNOSTICS *)v62);
                  goto LABEL_108;
                }
                LODWORD(v43) = -1073741801;
                goto LABEL_157;
              case D3DKMT_ESCAPE_GENERIC_ADAPTER_DIAG_INFO:
                if ( v276.PrivateDriverDataSize < 0x10 )
                {
                  LODWORD(v43) = -1073741811;
                  v62 = v272;
                  goto LABEL_157;
                }
                if ( !DXGADAPTER::IsDiagnosticAllowed(v25) )
                  goto LABEL_579;
                v62 = v272;
                v272->ModeCount &= 7u;
                DxgkGetAdapterBrightnessInfo(*((_QWORD *)v25 + 27), v62);
                LODWORD(v43) = 0;
                v68 = v267;
                goto LABEL_111;
              case D3DKMT_ESCAPE_HISTORY_BUFFER_STATUS:
                if ( v276.PrivateDriverDataSize >= 8 )
                {
                  if ( v285 )
                  {
                    if ( v5 )
                    {
                      v225 = 0;
                      if ( (qword_1C00AE9B0 & 0x61C8ED7) != 0
                        && (qword_1C00AE9B8 & 0xFFFFFFFFF9E37128uLL) == 0
                        && (qword_1C00AE9B0 & 0x4000) != 0 )
                      {
                        while ( 1 )
                        {
                          NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v58);
                          if ( v228 >= NumDifferentPhysicalAdapters )
                            goto LABEL_614;
                          if ( *(_QWORD *)(360LL * v228
                                         + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v227 + 2680) + 16LL) + 2560LL)
                                         + 40) )
                            break;
                          v58 = v285;
                        }
                        v225 = 1;
                      }
LABEL_614:
                      *(_BYTE *)(v5 + 1864) = v225;
                      v62 = v272;
                      LOBYTE(v272->VidPnSourceId) = v225;
                      v62->ModeCount = 0;
                      LODWORD(v43) = 0;
                      v68 = v267;
                      goto LABEL_111;
                    }
                    if ( v268 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                    COREACCESS::~COREACCESS((COREACCESS *)v298);
                    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v224);
                    if ( v273 )
                      DXGCONTEXT::ReleaseReference(v273);
                    goto LABEL_592;
                  }
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v223);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( !v5
                    || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  {
                    goto LABEL_592;
                  }
                }
                else
                {
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v222);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( !v5
                    || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  {
                    goto LABEL_592;
                  }
                }
                goto LABEL_591;
              case D3DKMT_ESCAPE_MIRACAST_ADAPTER_DIAG_INFO:
                if ( v276.PrivateDriverDataSize != 32 )
                {
                  LODWORD(v43) = -1073741811;
                  v62 = v272;
                  goto LABEL_157;
                }
                if ( !DXGADAPTER::IsDiagnosticAllowed(v25) )
                {
LABEL_579:
                  v220 = WdLogNewEntry5_WdWarning(v218, v217, v219);
                  *(_QWORD *)(v220 + 24) = v25;
                  *(_QWORD *)(v220 + 32) = (unsigned int)PsGetCurrentProcessSessionId(v221);
                  WdLogEvent5_WdWarning(v220);
                  LODWORD(v43) = -1073741790;
                  v62 = v272;
                  goto LABEL_157;
                }
                v62 = v272;
                DxgkGetAdapterMiracastInfo(*((_QWORD *)v25 + 27), (__int64)v272);
                LODWORD(v43) = 0;
                v68 = v267;
                goto LABEL_111;
              case D3DKMT_ESCAPE_PROCESS_VERIFIER_OPTION:
                if ( v276.PrivateDriverDataSize < 0x20 )
                {
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v229);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( !v5
                    || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  {
                    goto LABEL_592;
                  }
                  goto LABEL_591;
                }
                v62 = v272;
                Height = v272->pModeList[0].Height;
                if ( Height > 1 )
                {
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v231);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( !v5
                    || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  {
                    goto LABEL_592;
                  }
                  goto LABEL_591;
                }
                if ( *v272 )
                {
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v232);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( !v5
                    || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  {
                    goto LABEL_592;
                  }
                  goto LABEL_591;
                }
                if ( !Height )
                  *(_OWORD *)&v272->pModeList[0].Format = 0LL;
                v233 = v62->pModeList[0].Width;
                if ( v233 - 1000 > 1 )
                {
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v236);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( !v5
                    || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  {
                    goto LABEL_592;
                  }
                  goto LABEL_591;
                }
                if ( v58 )
                {
                  LODWORD(v43) = (*(__int64 (__fastcall **)(_QWORD, DXGPROCESS *, _QWORD, _QWORD, D3DDDIFORMAT *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v58 + 335) + 640LL) + 8LL) + 1104LL))(
                                   *(_QWORD *)(*((_QWORD *)v58 + 335) + 648LL),
                                   v286,
                                   v62->pModeList[0].Height,
                                   v233,
                                   &v62->pModeList[0].Format);
                  goto LABEL_108;
                }
                v234 = WdLogNewEntry5_WdError(v50, 0LL);
                *(_QWORD *)(v234 + 24) = 2778LL;
                WdLogEvent5_WdError(v234);
                if ( v268 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                COREACCESS::~COREACCESS((COREACCESS *)v298);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v235);
                if ( v273 )
                  DXGCONTEXT::ReleaseReference(v273);
                if ( !v5 || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  goto LABEL_421;
                goto LABEL_420;
              case D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION:
                if ( v276.PrivateDriverDataSize < 0x20 )
                {
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v237);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( !v5
                    || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  {
                    goto LABEL_592;
                  }
                  goto LABEL_591;
                }
                v62 = v272;
                v238 = v272->ModeCount;
                if ( v238 > 1 )
                {
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v239);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( !v5
                    || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  {
                    goto LABEL_592;
                  }
                  goto LABEL_591;
                }
                pModeList = v272->pModeList;
                if ( !v238 )
                {
                  *(_OWORD *)&pModeList->Width = 0LL;
                  v62->pModeList[0].RefreshRate = 0LL;
                }
                v241 = v62->VidPnSourceId;
                if ( (unsigned int)(v241 - 1000) > 1 )
                {
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v245);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( !v5
                    || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  {
                    goto LABEL_592;
                  }
                  goto LABEL_591;
                }
                if ( v58 )
                {
                  if ( !*((_BYTE *)v58 + 209) )
                  {
                    LODWORD(v43) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, D3DKMT_DISPLAYMODE *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v58 + 335) + 640LL) + 8LL) + 1112LL))(
                                     *(_QWORD *)(*((_QWORD *)v58 + 335) + 648LL),
                                     v62->ModeCount,
                                     v241,
                                     pModeList);
                    goto LABEL_108;
                  }
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v244);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( !v5
                    || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  {
                    goto LABEL_421;
                  }
                }
                else
                {
                  v242 = WdLogNewEntry5_WdError(v50, 0LL);
                  *(_QWORD *)(v242 + 24) = 2828LL;
                  WdLogEvent5_WdError(v242);
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v243);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( !v5
                    || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  {
                    goto LABEL_421;
                  }
                }
                goto LABEL_420;
              case D3DKMT_ESCAPE_DOD_SET_DIRTYRECT_MODE:
                if ( v276.PrivateDriverDataSize == 4 )
                {
                  if ( !*((_QWORD *)v25 + 335) )
                  {
                    v250 = *((_QWORD *)v25 + 334);
                    v62 = v272;
                    v68 = v267;
                    if ( !*(_QWORD *)(v250 + 384) )
                    {
                      LODWORD(v43) = -1073741811;
                      goto LABEL_158;
                    }
                    *(_DWORD *)(v250 + 392) = v272->VidPnSourceId;
                    LODWORD(v43) = 0;
                    goto LABEL_111;
                  }
                  v248 = WdLogNewEntry5_WdWarning(v50, v285, 0x1C0000000uLL);
                  *(_QWORD *)(v248 + 24) = v25;
                  WdLogEvent5_WdWarning(v248);
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v249);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( !v5
                    || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  {
                    goto LABEL_592;
                  }
                }
                else
                {
                  v246 = WdLogNewEntry5_WdError(v50, v285);
                  *(_QWORD *)(v246 + 24) = v276.PrivateDriverDataSize;
                  WdLogEvent5_WdError(v246);
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v247);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( !v5
                    || _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
                  {
                    goto LABEL_592;
                  }
                }
                goto LABEL_591;
              case D3DKMT_ESCAPE_GET_EXTERNAL_DIAGNOSTICS:
                v193 = 0;
LABEL_491:
                v69 = 1;
                v62 = v272;
                LODWORD(v43) = GetDiagnosticsBuffer(
                                 (struct _D3DKMT_DXGK_DIAGNOSTICS *)v272,
                                 v276.PrivateDriverDataSize,
                                 v193);
                v68 = v267;
                goto LABEL_110;
              case D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS:
                if ( DXGADAPTER::IsFullWDDMAdapter(v25) )
                {
                  v62 = v272;
                  LODWORD(v43) = ADAPTER_DISPLAY::ReportDisplayState(
                                   *((ADAPTER_DISPLAY **)v25 + 334),
                                   (struct _D3DKMT_DXGK_DIAGNOSTICS *)v272,
                                   v276.PrivateDriverDataSize);
                  goto LABEL_108;
                }
                v254 = WdLogNewEntry5_WdWarning(v252, v251, v253);
                *(_QWORD *)(v254 + 24) = v25;
                WdLogEvent5_WdWarning(v254);
                if ( v268 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                COREACCESS::~COREACCESS((COREACCESS *)v298);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v255);
                if ( v273 )
                  DXGCONTEXT::ReleaseReference(v273);
                if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  goto LABEL_591;
                goto LABEL_592;
              case D3DKMT_ESCAPE_QUERY_IOMMU_STATUS:
                if ( !v276.PrivateDriverDataSize )
                {
                  v256 = WdLogNewEntry5_WdError(v50, v285);
                  *(_QWORD *)(v256 + 24) = v276.PrivateDriverDataSize;
                  WdLogEvent5_WdError(v256);
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v257);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
LABEL_591:
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
LABEL_592:
                  if ( v277 )
                    DXGADAPTER::ReleaseReferenceNoTracking(v277);
                  goto LABEL_208;
                }
                if ( v285 )
                {
                  if ( !*((_BYTE *)v285 + 209) )
                  {
                    v62 = v272;
                    LOBYTE(v272->VidPnSourceId) = *(_BYTE *)(*((_QWORD *)v285 + 335) + 1648LL);
                    LODWORD(v43) = 0;
                    v68 = v267;
                    goto LABEL_111;
                  }
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v260);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
                  if ( v277 )
                    DXGADAPTER::ReleaseReferenceNoTracking(v277);
                  DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v278);
                  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v261);
                  if ( !v271 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
                    return 3221225659LL;
                }
                else
                {
                  v258 = WdLogNewEntry5_WdError(v50, 0LL);
                  *(_QWORD *)(v258 + 24) = 2899LL;
                  WdLogEvent5_WdError(v258);
                  if ( v268 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v281);
                  COREACCESS::~COREACCESS((COREACCESS *)v298);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v299, v259);
                  if ( v273 )
                    DXGCONTEXT::ReleaseReference(v273);
                  if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
LABEL_420:
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
LABEL_421:
                  v178 = v277;
                  if ( v277 )
LABEL_404:
                    DXGADAPTER::ReleaseReferenceNoTracking(v178);
LABEL_405:
                  DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v278);
                  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v179);
                  if ( !v271 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
                    return 3221225659LL;
                }
                McTemplateK0q_EtwWriteTransfer(v180, &EventProfilerExit, v181, v269);
                return 3221225659LL;
              default:
                LODWORD(v43) = -1073741811;
                v212 = WdLogNewEntry5_WdWarning(v50, v285, 0x1C0000000uLL);
                *(_QWORD *)(v212 + 24) = v276.Type;
                goto LABEL_565;
            }
          }
        }
LABEL_357:
        v56 = v284;
        goto LABEL_84;
      }
    }
    else
    {
      v50 = 1LL;
    }
    v289 = 0;
    goto LABEL_67;
  }
  if ( !v44 )
  {
    v265 = WdLogNewEntry5_WdWarning(v45, v41, v42);
    *(_QWORD *)(v265 + 24) = 1789LL;
    WdLogEvent5_WdWarning(v265);
    if ( v273 )
      DXGCONTEXT::ReleaseReference(v273);
    if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
    DXGADAPTER::ReleaseReferenceNoTracking(v25);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v278);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v266);
    if ( !v271 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      goto LABEL_781;
LABEL_780:
    McTemplateK0q_EtwWriteTransfer(v99, &EventProfilerExit, v100, v269);
LABEL_781:
    LODWORD(v43) = -1073741811;
    return (unsigned int)v43;
  }
  v153 = v272;
  if ( v272->VidPnSourceId == 9 )
  {
    if ( v272->pModeList[0].Format == D3DDDIFMT_UNKNOWN )
    {
      if ( !(unsigned __int8)DxgkpIsDrtEnabled(v45, v41) )
      {
        v157 = WdLogNewEntry5_WdWarning(v155, v154, v156);
        *(_QWORD *)(v157 + 24) = 1769LL;
        WdLogEvent5_WdWarning(v157);
        if ( v273 )
          DXGCONTEXT::ReleaseReference(v273);
        if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
        DXGADAPTER::ReleaseReferenceNoTracking(v25);
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v278);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v158);
        if ( !v271 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
          return 3221225506LL;
LABEL_335:
        McTemplateK0q_EtwWriteTransfer(v97, &EventProfilerExit, v98, v269);
        return 3221225506LL;
      }
      v153 = v272;
    }
    v159 = *(void **)&v153->pModeList[0].Width;
    *(_QWORD *)&v153->pModeList[0].Width = 0LL;
    v145 = DxgEscapeSuspendResumeProcess(&v276, v153, v44, v159, 1, v153->pModeList[0].Format != D3DDDIFMT_UNKNOWN);
    if ( v273 )
      DXGCONTEXT::ReleaseReference(v273);
    if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
    DXGADAPTER::ReleaseReferenceNoTracking(v25);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v278);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v160);
    if ( !v271 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v145;
  }
  else
  {
    if ( v272->VidPnSourceId != 10 )
      goto LABEL_64;
    v163 = *(void **)&v272->pModeList[0].Width;
    *(_QWORD *)&v272->pModeList[0].Width = 0LL;
    v145 = DxgEscapeSuspendResumeProcess(&v276, v153, v44, v163, 0, 0);
    if ( v273 )
      DXGCONTEXT::ReleaseReference(v273);
    if ( v5 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v5 + 16), (struct DXGDEVICE *)v5);
    DXGADAPTER::ReleaseReferenceNoTracking(v25);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v278);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v269, v164);
    if ( !v271 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v145;
  }
  McTemplateK0q_EtwWriteTransfer(v161, &EventProfilerExit, v162, v269);
  return v145;
}
