/*
 * XREFs of DxgkEscape @ 0x1C00F9100
 * Callers:
 *     ?VmBusEscapeCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D9220 (-VmBusEscapeCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0240900 (-VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024D8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C00027C8 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00040C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004160 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C0004280 (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0004488 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00058C8 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00065B8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006614 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007018 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0007300 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00073EC (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0007554 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00099E8 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000A4AC (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000A914 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A9FC (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000B71C (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025AFC (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0025B6C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C0026138 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     Feature_HoldAdapterLockEscape__private_ReportDeviceUsage @ 0x1C00279FC (Feature_HoldAdapterLockEscape__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028C40 (memmove.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?IsCurrentConsoleSession@@YAEXZ @ 0x1C0037830 (-IsCurrentConsoleSession@@YAEXZ.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C0037868 (-IsCurrentProcessAdmin@@YAEXZ.c)
 *     DxgkGetAdapterBrightnessInfo @ 0x1C0052724 (DxgkGetAdapterBrightnessInfo.c)
 *     DxgkGetAdapterMiracastInfo @ 0x1C00553E4 (DxgkGetAdapterMiracastInfo.c)
 *     ?DxgkpDriverKnownEscapeCblt@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1C00DC360 (-DxgkpDriverKnownEscapeCblt@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00E49F4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00F7BC0 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F7CD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FBBF0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C00FD9E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C013D324 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DxgkpProcessBddFallbackRequest@@YAJXZ @ 0x1C020C91C (-DxgkpProcessBddFallbackRequest@@YAJXZ.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C020DC5C (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C02105E8 (-ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C0212FCC (-GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z.c)
 *     ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x1C021408C (-ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C021AC80 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02210D0 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkWriteUserModeDiagEntry @ 0x1C0226C8C (DxgkWriteUserModeDiagEntry.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0247F54 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C0254C20 (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C025A788 (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025F574 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     DxgkpIsDrtEnabled @ 0x1C0261638 (DxgkpIsDrtEnabled.c)
 *     ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x1C02658E8 (-TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z.c)
 *     _DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION @ 0x1C0266884 (_DxgkEscape_--_2_--ENSURE_DATA_DELETION--_ENSURE_DATA_DELETION.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C02668B8 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C02669D8 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C0266A58 (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z @ 0x1C0267748 (-DxgEscapeSuspendResumeProcess@@YAJPEAU_D3DKMT_ESCAPE@@PEAXPEAVDXGADAPTER@@1_N3@Z.c)
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAXI@Z @ 0x1C0267918 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAXI@Z.c)
 *     ?DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z @ 0x1C0267C40 (-DxgkpEscapeVidMmDelayExecution@@YAJPEAVDXGDEVICE@@IIKPEA_K@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C0267EC8 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1C0268018 (-IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0268F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C026AE34 (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x1C0276658 (-GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0285260 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     OutputDuplGetDebugInfo @ 0x1C029DDF8 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C029DEE8 (OutputDuplGetDiagnosticBuffer.c)
 *     DxgkHandleMiracastEscape @ 0x1C02CF1E8 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C02D0054 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C02D5A00 (DxgkHandleIndirectEscape.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C02DC620 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C02F07A8 (DxgkPrepareCcdDatabaseForAccess.c)
 */

__int64 __fastcall DxgkEscape(__int64 a1, __int64 a2, __int64 a3)
{
  _D3DKMT_ESCAPE *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v10; // r14
  struct DXGTHREAD *Current; // rax
  struct DXGPROCESS *v12; // r13
  int *v13; // r14
  bool v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  bool v23; // zf
  D3DKMT_ESCAPETYPE Type; // ecx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rcx
  UINT PrivateDriverDataSize; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  void *pPrivateDriverData; // rdx
  char *v40; // rcx
  unsigned __int64 v41; // rdx
  __int64 hAdapter; // r8
  __int64 v43; // rax
  int v44; // eax
  size_t v45; // r8
  void *v46; // rcx
  char *v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r8
  char *v52; // r9
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  struct DXGPROCESS *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  DXGADAPTER *v64; // r13
  __int64 v65; // rdx
  __int64 v66; // rcx
  DXGGLOBAL *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  struct DXGPROCESS *v71; // r12
  struct DXGPROCESS *v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rdx
  D3DKMT_HANDLE v75; // r12d
  __int64 v76; // r13
  __int64 v77; // r8
  unsigned int v78; // ecx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // r9
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // r9
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rax
  __int64 v96; // rax
  DXGADAPTER *v97; // r12
  __int64 v98; // rdx
  __int64 v99; // r8
  unsigned __int64 v100; // rcx
  __int64 v101; // rdx
  size_t v102; // r8
  void *v103; // rcx
  char *v104; // r9
  struct DXGADAPTER *v105; // rax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // r8
  void *v112; // r9
  void *v113; // r9
  __int64 v114; // rdx
  __int64 v115; // rcx
  int v116; // eax
  __int64 v117; // rcx
  struct DXGADAPTER *v118; // r10
  __int64 v119; // r9
  int v120; // eax
  int v121; // eax
  bool v122; // cf
  _QWORD *v123; // rax
  __int64 v124; // rcx
  __int64 v125; // r8
  DXGADAPTER *v126; // r8
  unsigned int v127; // r13d
  unsigned int v128; // ebx
  unsigned int HostProcess; // eax
  int v130; // eax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rax
  unsigned __int8 v134; // al
  int v135; // ebx
  void *v136; // rax
  void *v137; // rax
  bool v138; // r9
  char v139; // r13
  struct DXGGLOBAL *Global; // rax
  __int64 v141; // rax
  __int64 v142; // rbx
  __int64 v143; // rax
  _QWORD *v144; // rax
  __int64 v145; // rax
  unsigned __int64 v146; // r8
  _QWORD *v147; // r13
  _QWORD *v148; // r8
  unsigned int v149; // eax
  __int64 v150; // rcx
  __int64 v151; // rcx
  int v152; // r8d
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // rax
  DXGADAPTER *v156; // rcx
  void *v157; // r10
  __int64 v158; // rax
  int v159; // ebx
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // rax
  __int64 v166; // rcx
  __int64 v167; // rdx
  __int64 v168; // rcx
  EDIDCACHE *v169; // rcx
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // rdx
  __int64 v174; // rcx
  bool v175; // zf
  __int64 v176; // rdx
  DXGADAPTER *v177; // rcx
  __int64 v178; // rdx
  char v179; // r11
  unsigned int NumDifferentPhysicalAdapters; // eax
  __int64 v181; // r8
  unsigned int v182; // r9d
  __int64 v183; // r8
  int v184; // eax
  unsigned int v185; // r10d
  __int64 v186; // rax
  bool v187; // zf
  int v188; // eax
  _OWORD *v189; // r9
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 v193; // rdx
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  size_t v197; // r8
  void *v198; // rcx
  char *v199; // r9
  __int64 v200; // rdx
  __int64 v201; // rax
  bool v202; // [rsp+50h] [rbp-528h]
  unsigned __int8 v203; // [rsp+51h] [rbp-527h]
  int v204; // [rsp+58h] [rbp-520h] BYREF
  __int64 v205; // [rsp+60h] [rbp-518h]
  char v206; // [rsp+68h] [rbp-510h]
  unsigned __int8 v207[8]; // [rsp+70h] [rbp-508h] BYREF
  unsigned __int64 v208; // [rsp+78h] [rbp-500h] BYREF
  char v209; // [rsp+80h] [rbp-4F8h]
  char v210; // [rsp+81h] [rbp-4F7h]
  _D3DKMT_ESCAPE v211; // [rsp+88h] [rbp-4F0h] BYREF
  void *v212[2]; // [rsp+A8h] [rbp-4D0h] BYREF
  unsigned __int64 v213; // [rsp+B8h] [rbp-4C0h] BYREF
  struct DXGPROCESS *v214; // [rsp+C0h] [rbp-4B8h]
  unsigned int v215; // [rsp+C8h] [rbp-4B0h]
  char v216[8]; // [rsp+D0h] [rbp-4A8h] BYREF
  DXGADAPTER *v217; // [rsp+D8h] [rbp-4A0h]
  unsigned __int8 v218; // [rsp+E0h] [rbp-498h]
  DXGADAPTER *v219; // [rsp+E8h] [rbp-490h] BYREF
  __int64 v220; // [rsp+F0h] [rbp-488h]
  D3DKMT_HANDLE v221; // [rsp+F8h] [rbp-480h]
  DXGADAPTER *v222; // [rsp+100h] [rbp-478h]
  DXGADAPTER *v223; // [rsp+108h] [rbp-470h]
  unsigned int v224[2]; // [rsp+110h] [rbp-468h]
  __int64 v225; // [rsp+118h] [rbp-460h]
  union _LARGE_INTEGER Interval; // [rsp+120h] [rbp-458h] BYREF
  _D3DKMT_DISPLAYMODELIST *v227; // [rsp+128h] [rbp-450h]
  int v228; // [rsp+130h] [rbp-448h] BYREF
  struct _DXGKARG_ESCAPE v229; // [rsp+138h] [rbp-440h] BYREF
  _BYTE v230[24]; // [rsp+168h] [rbp-410h] BYREF
  struct _DXGKARG_ESCAPE v231; // [rsp+180h] [rbp-3F8h] BYREF
  struct _DXGKARG_ESCAPE v232; // [rsp+1B0h] [rbp-3C8h] BYREF
  _BYTE v233[32]; // [rsp+1E0h] [rbp-398h] BYREF
  _BYTE v234[64]; // [rsp+200h] [rbp-378h] BYREF
  _BYTE v235[8]; // [rsp+240h] [rbp-338h] BYREF
  _BYTE v236[16]; // [rsp+248h] [rbp-330h] BYREF
  unsigned int *v237; // [rsp+258h] [rbp-320h]
  _BYTE v238[16]; // [rsp+288h] [rbp-2F0h] BYREF
  DXGADAPTER *v239; // [rsp+298h] [rbp-2E0h]
  char v240; // [rsp+2A0h] [rbp-2D8h]
  __int64 v241; // [rsp+2A8h] [rbp-2D0h]
  _DWORD v242[4]; // [rsp+2D0h] [rbp-2A8h] BYREF
  _DWORD v243[4]; // [rsp+2E0h] [rbp-298h] BYREF
  GUID ActivityId; // [rsp+2F0h] [rbp-288h] BYREF
  __int128 v245; // [rsp+300h] [rbp-278h]
  __int128 v246; // [rsp+310h] [rbp-268h]
  __int128 v247; // [rsp+320h] [rbp-258h]
  __int64 v248; // [rsp+330h] [rbp-248h]
  _D3DKMT_DISPLAYMODELIST v249; // [rsp+340h] [rbp-238h] BYREF

  v3 = (_D3DKMT_ESCAPE *)a1;
  v204 = -1;
  *(_QWORD *)v224 = 0LL;
  v205 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v206 = 1;
    v204 = 2016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2016);
  }
  else
  {
    v206 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v204, 2016LL);
  v4 = 0LL;
  v225 = 0LL;
  v5 = 0LL;
  v220 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v12 = (struct DXGPROCESS *)*((_QWORD *)Current + 1), (v214 = v12) == 0LL) )
  {
    v12 = v10;
    v214 = v10;
  }
  v210 = 0;
  v13 = (int *)&v249;
  v227 = &v249;
  v14 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v202 = v14;
  if ( !v12 )
  {
    v19 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v204, v20);
    v23 = v206 == 0;
LABEL_589:
    if ( !v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v204);
    return 3221225485LL;
  }
  if ( v14 )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (_D3DKMT_ESCAPE *)MmUserProbeAddress;
    v211 = *v3;
  }
  else
  {
    v211 = *v3;
  }
  Type = v211.Type;
  if ( v211.Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( !(*(unsigned int (**)(void))(*((_QWORD *)v12 + 11) + 424LL))() )
      goto LABEL_225;
    Type = v211.Type;
  }
  else if ( v211.Type >= D3DKMT_ESCAPE_WIN32K_START )
  {
    LODWORD(v29) = (*(__int64 (__fastcall **)(_D3DKMT_ESCAPE *))(*((_QWORD *)v12 + 11) + 416LL))(&v211);
LABEL_28:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v204, v28);
    if ( v206 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v204);
    return (unsigned int)v29;
  }
  if ( (unsigned int)Type <= D3DKMT_ESCAPE_DRT_TEST && (v25 = 266, _bittest(&v25, Type))
    || (unsigned int)(Type - 28) <= 1 )
  {
    if ( !g_OSTestSigningEnabled )
    {
      if ( !(unsigned __int8)DxgkpIsDrtEnabled() )
      {
        v27 = WdLogNewEntry5_WdWarning(v26, v15, v17);
        *(_QWORD *)(v27 + 24) = v211.Type;
        WdLogEvent5_WdWarning(v27);
LABEL_225:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v204, v15);
        if ( v206 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v110, &EventProfilerExit, v111, v204);
        return 3221225506LL;
      }
      Type = v211.Type;
    }
  }
  v33 = (unsigned int)(Type - 1);
  PrivateDriverDataSize = v211.PrivateDriverDataSize;
  if ( (_DWORD)v33 )
  {
    if ( (_DWORD)v33 == 2 && v211.PrivateDriverDataSize < 0xC )
      goto LABEL_588;
  }
  else if ( v211.PrivateDriverDataSize < 0x440 )
  {
LABEL_588:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v204, v15);
    v23 = v206 == 0;
    goto LABEL_589;
  }
  *(_OWORD *)v212 = 0LL;
  if ( v211.PrivateDriverDataSize > 0x200 )
  {
    v13 = (int *)operator new[](v211.PrivateDriverDataSize, 0x4B677844u, PagedPool);
    v227 = (_D3DKMT_DISPLAYMODELIST *)v13;
    v212[0] = v13;
    PrivateDriverDataSize = v211.PrivateDriverDataSize;
  }
  if ( !v13 )
  {
    v35 = WdLogNewEntry5_WdLowResource(v33, v15, v17, v18);
    *(_QWORD *)(v35 + 24) = v211.PrivateDriverDataSize;
    *(_QWORD *)(v35 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v35);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v212);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v204, v36);
    if ( v206 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v204);
    return 3221225495LL;
  }
  if ( v202 )
  {
    pPrivateDriverData = v211.pPrivateDriverData;
    v40 = (char *)v211.pPrivateDriverData + PrivateDriverDataSize;
    if ( v40 < v211.pPrivateDriverData || (unsigned __int64)v40 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v13, pPrivateDriverData, PrivateDriverDataSize);
  }
  else
  {
    memmove(v13, v211.pPrivateDriverData, PrivateDriverDataSize);
  }
  if ( (*(_BYTE *)&v211.Flags.0 & 0x40) != 0 )
  {
    if ( v211.Type || (hAdapter = v211.hAdapter) == 0 || (*(_BYTE *)&v211.Flags.0 & 1) != 0 )
    {
      v43 = WdLogNewEntry5_WdWarning((unsigned int)v211.Type, v41, hAdapter);
      *(_QWORD *)(v43 + 24) = 1431LL;
      WdLogEvent5_WdWarning(v43);
LABEL_587:
      DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v212);
      goto LABEL_588;
    }
  }
  else
  {
    LODWORD(hAdapter) = v211.hAdapter;
  }
  if ( v211.Type <= D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
  {
    if ( v211.Type == D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK )
    {
      LODWORD(v29) = DxgkpProcessBddFallbackRequest();
      goto LABEL_71;
    }
    v41 = 0x1C0000000uLL;
    switch ( v211.Type )
    {
      case D3DKMT_ESCAPE_VIDMM:
        v53 = *v13;
        if ( *v13 == 5 )
        {
          LODWORD(v29) = DxgEscapeEvict((struct _D3DKMT_VIDMM_ESCAPE *)v13);
          goto LABEL_71;
        }
        if ( v53 == 6 )
        {
          LODWORD(v29) = DxgEscapeEvictByNtHandle((struct _D3DKMT_VIDMM_ESCAPE *)v13);
          goto LABEL_71;
        }
        if ( v53 == 13 )
        {
          LODWORD(v29) = DxgEscapeEvictByCriteria((struct _D3DKMT_VIDMM_ESCAPE *)v13);
          goto LABEL_71;
        }
        break;
      case D3DKMT_ESCAPE_DRT_TEST:
        if ( v211.PrivateDriverDataSize < 0xC || v211.PrivateDriverDataSize < v13[1] || *v13 != 1484026436 )
          break;
        v41 = v13[2];
        if ( !(_DWORD)v41 && !(_DWORD)hAdapter
          || (unsigned int)v41 <= 0x24 && (v51 = 0x1093482000LL, _bittest64(&v51, v41)) )
        {
          LODWORD(v29) = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v13, 0LL);
LABEL_71:
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v212);
          goto LABEL_72;
        }
        if ( (((_DWORD)v41 - 27) & 0xFFFFFFF7) == 0 )
        {
          LODWORD(v29) = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v13, 0LL);
          if ( (int)v29 >= 0 )
          {
            if ( v202 )
            {
              v45 = v211.PrivateDriverDataSize;
              v46 = v211.pPrivateDriverData;
              v52 = (char *)v211.pPrivateDriverData + v211.PrivateDriverDataSize;
              if ( (unsigned __int64)v52 > MmUserProbeAddress || v52 <= v211.pPrivateDriverData )
                *(_BYTE *)MmUserProbeAddress = 0;
LABEL_69:
              memmove(v46, v13, v45);
            }
            else
            {
LABEL_70:
              memmove(v211.pPrivateDriverData, v13, v211.PrivateDriverDataSize);
            }
          }
          goto LABEL_71;
        }
        break;
      case D3DKMT_ESCAPE_MIRACAST_DISPLAY_REQUEST:
      case D3DKMT_ESCAPE_IDD_REQUEST:
        if ( v211.Type == D3DKMT_ESCAPE_IDD_REQUEST )
          v44 = DxgkHandleIndirectEscape(v211.PrivateDriverDataSize, v13);
        else
          v44 = DxgkHandleMiracastEscape(v211.PrivateDriverDataSize, v13);
        LODWORD(v29) = v44;
        if ( (int)(v44 + 0x80000000) >= 0 && v44 != -2147483643 )
          goto LABEL_71;
        if ( !v202 )
          goto LABEL_70;
        v45 = v211.PrivateDriverDataSize;
        v46 = v211.pPrivateDriverData;
        v47 = (char *)v211.pPrivateDriverData + v211.PrivateDriverDataSize;
        if ( (unsigned __int64)v47 > MmUserProbeAddress || v47 <= v211.pPrivateDriverData )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_69;
      case D3DKMT_ESCAPE_FORCE_BDDFALLBACK_HEADLESS:
        if ( !g_OSTestSigningEnabled )
          goto LABEL_224;
        if ( v211.PrivateDriverDataSize != 1 )
          goto LABEL_587;
        byte_1C00B2B1C = *(_BYTE *)v13;
LABEL_111:
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v212);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v204, v61);
        if ( v206 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v62, &EventProfilerExit, v63, v204);
        return 0LL;
      case D3DKMT_ESCAPE_REQUEST_MACHINE_CRASH:
        if ( v211.PrivateDriverDataSize != 24 )
          goto LABEL_587;
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v212);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v204, v54);
        if ( v206 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v55, &EventProfilerExit, v56, v204);
        return 3221225473LL;
      case D3DKMT_ESCAPE_SOFTGPU_ENABLE_DISABLE_HMD:
        if ( !g_OSTestSigningEnabled )
          goto LABEL_224;
        if ( v211.PrivateDriverDataSize != 200 )
          goto LABEL_587;
        v57 = DXGPROCESS::GetCurrent();
        if ( !v57 )
        {
          v60 = WdLogNewEntry5_WdError(v59, v58);
          *(_QWORD *)(v60 + 24) = 1611LL;
          WdLogEvent5_WdError(v60);
          goto LABEL_587;
        }
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v233, v57);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v233, 1LL);
        ActivityId = 0LL;
        v245 = 0LL;
        v246 = 0LL;
        v247 = 0LL;
        v248 = 0LL;
        EtwActivityIdControl(3u, (LPGUID)ActivityId.Data4);
        v248 = MEMORY[0xFFFFF78000000014];
        DWORD2(v245) = 46;
        LOBYTE(v247) = -1;
        LODWORD(v29) = DxgkEnableDisableTargetAsHMD(
                         (struct _D3DKMT_SOFTGPU_LUID_TARGET *)v13,
                         v13[48],
                         *((_BYTE *)v13 + 196),
                         (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&ActivityId);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v233);
        goto LABEL_71;
      case D3DKMT_ESCAPE_LOG_CODEPOINT_PACKET:
        if ( v211.PrivateDriverDataSize != 16 )
          goto LABEL_587;
        v220 = 0LL;
        DxgkLogCodePointPacket(*v13, v13[1], v13[2], v13[3], 0LL);
        goto LABEL_111;
      case D3DKMT_ESCAPE_LOG_USERMODE_DAIG_PACKET:
        if ( v211.PrivateDriverDataSize < 0x30 || v211.PrivateDriverDataSize < v13[1] )
          goto LABEL_587;
        LODWORD(v29) = DxgkWriteUserModeDiagEntry((struct _DXGK_DIAG_HEADER *)v13);
        goto LABEL_71;
      case D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS|D3DKMT_ESCAPE_TDRDBGCTRL:
        LODWORD(v29) = DxgkPrepareCcdDatabaseForAccess();
        goto LABEL_71;
      default:
        break;
    }
  }
  v64 = 0LL;
  v222 = 0LL;
  v219 = 0LL;
  if ( v211.Type != D3DKMT_ESCAPE_BDD_FALLBACK )
  {
    v71 = v214;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v230, (struct _KTHREAD **)v214);
    v74 = v211.hAdapter;
    if ( !v211.hAdapter )
      goto LABEL_149;
    v75 = (v211.hAdapter >> 6) & 0xFFFFFF;
    v74 = v211.hAdapter >> 30;
    v221 = v211.hAdapter >> 30;
    v72 = v214;
    if ( (*((_BYTE *)v214 + 347) & 0x20) == 0 )
    {
      if ( v75 >= *((_DWORD *)v214 + 64) )
      {
        v71 = v214;
      }
      else
      {
        v73 = v75;
        v71 = v214;
        v81 = *((_QWORD *)v214 + 30);
        v72 = (struct DXGPROCESS *)*(unsigned int *)(v81 + 16LL * (unsigned int)v73 + 8);
        if ( (_DWORD)v74 == ((*(_DWORD *)(v81 + 16LL * (unsigned int)v73 + 8) >> 5) & 3)
          && ((unsigned __int16)v72 & 0x2000) == 0
          && ((unsigned __int8)v72 & 0x1F) != 0 )
        {
          v73 *= 2LL;
          v72 = (struct DXGPROCESS *)((unsigned __int8)v72 & 0x1F);
          if ( (_BYTE)v72 == 1 )
          {
            v64 = *(DXGADAPTER **)(v81 + 8 * v73);
            goto LABEL_148;
          }
          v82 = WdLogNewEntry5_WdError(v72, v74);
          *(_QWORD *)(v82 + 24) = 316LL;
          WdLogEvent5_WdError(v82);
        }
      }
      v64 = 0LL;
      goto LABEL_148;
    }
    v76 = *((_QWORD *)v214 + 62);
    v223 = (DXGADAPTER *)(v76 + 208);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v76 + 208));
    if ( v75 < *(_DWORD *)(v76 + 256) )
    {
      v77 = *(_QWORD *)(v76 + 240);
      v78 = *(_DWORD *)(v77 + 16LL * v75 + 8);
      if ( v221 == ((v78 >> 5) & 3) && (v78 & 0x2000) == 0 && (v78 & 0x1F) != 0 )
      {
        v79 = v78 & 0x1F;
        if ( (_BYTE)v79 == 1 )
        {
          v64 = *(DXGADAPTER **)(v77 + 16LL * v75);
          goto LABEL_137;
        }
        v80 = WdLogNewEntry5_WdError(v79, 2LL * v75);
        *(_QWORD *)(v80 + 24) = 316LL;
        WdLogEvent5_WdError(v80);
      }
    }
    v64 = 0LL;
LABEL_137:
    ExReleasePushLockSharedEx(v223, 0LL);
    KeLeaveCriticalRegion();
    v71 = v214;
LABEL_148:
    v222 = v64;
LABEL_149:
    if ( !v64 )
    {
      v83 = (_QWORD *)WdLogNewEntry5_WdWarning(v72, v74, v73);
      v83[3] = v211.hAdapter;
      v83[4] = -1073741811LL;
LABEL_151:
      WdLogEvent5_WdWarning(v83);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v230);
      goto LABEL_587;
    }
    if ( !v211.hDevice )
    {
LABEL_165:
      if ( !v211.hContext )
        goto LABEL_178;
      v88 = (v211.hContext >> 6) & 0xFFFFFF;
      v89 = v211.hContext >> 30;
      if ( (unsigned int)v88 < *((_DWORD *)v71 + 64) )
      {
        v73 = (unsigned int)v88;
        v90 = *((_QWORD *)v71 + 30);
        v72 = (struct DXGPROCESS *)*(unsigned int *)(v90 + 16 * v88 + 8);
        if ( (_DWORD)v89 == ((*(_DWORD *)(v90 + 16 * v88 + 8) >> 5) & 3)
          && ((unsigned __int16)v72 & 0x2000) == 0
          && ((unsigned __int8)v72 & 0x1F) != 0 )
        {
          v73 = 2LL * (unsigned int)v88;
          v72 = (struct DXGPROCESS *)((unsigned __int8)v72 & 0x1F);
          if ( (_BYTE)v72 == 7 )
          {
            v5 = *(_QWORD *)(v90 + 16LL * (unsigned int)v88);
            goto LABEL_173;
          }
          v91 = WdLogNewEntry5_WdError(v72, v89);
          *(_QWORD *)(v91 + 24) = 316LL;
          WdLogEvent5_WdError(v91);
        }
      }
      v5 = 0LL;
LABEL_173:
      v220 = v5;
      if ( !v5 || !v4 || v4 != *(_QWORD *)(v5 + 16) )
      {
        v83 = (_QWORD *)WdLogNewEntry5_WdWarning(v72, v89, v73);
        v83[3] = v64;
        v83[4] = v4;
        v83[5] = v211.hContext;
        goto LABEL_151;
      }
LABEL_178:
      if ( v4 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v4 + 64));
        v64 = *(DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL);
        v222 = v64;
      }
      if ( v5 )
        _InterlockedIncrement64((volatile signed __int64 *)(v5 + 32));
      _InterlockedIncrement64((volatile signed __int64 *)v64 + 3);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v230);
      if ( *((_DWORD *)v64 + 468) >= 0x5023u )
      {
        if ( (*(_BYTE *)&v211.Flags.0 & 0x10) != 0 || (v211.Flags.Value & 0xFFFFFF00) != 0 )
        {
          v96 = WdLogNewEntry5_WdWarning(v93, v92, v94);
          *(_QWORD *)(v96 + 24) = v64;
          WdLogEvent5_WdWarning(v96);
          goto LABEL_587;
        }
        if ( (*(_BYTE *)&v211.Flags.0 & 0x20) != 0 )
        {
          v95 = WdLogNewEntry5_WdWarning(v93, v92, v94);
          *(_QWORD *)(v95 + 24) = v64;
          *(_QWORD *)(v95 + 32) = 1766LL;
          WdLogEvent5_WdWarning(v95);
          goto LABEL_587;
        }
      }
      v97 = v64;
      v223 = v64;
      v208 = 0LL;
      LODWORD(v29) = DxgkpGetPairingAdapters(v64, 0LL, &v219, &v208, 0LL, 0LL, 0);
      if ( (int)v29 >= 0 && _InterlockedExchangeAdd64((volatile signed __int64 *)v219 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v219 + 2), v219);
      if ( v211.Type == D3DKMT_ESCAPE_VIDMM )
      {
        v105 = v219;
        if ( !v219 )
        {
          v201 = WdLogNewEntry5_WdWarning((unsigned int)(v211.Type - 1), v98, v99);
          *(_QWORD *)(v201 + 24) = 1929LL;
          WdLogEvent5_WdWarning(v201);
          if ( v5 )
            DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
          if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
          v177 = v64;
LABEL_586:
          DXGADAPTER::ReleaseReference(v177);
          goto LABEL_587;
        }
        if ( *v13 == 9 )
        {
          if ( !v13[4] && !(unsigned __int8)DxgkpIsDrtEnabled() )
          {
            v109 = WdLogNewEntry5_WdWarning(v107, v106, v108);
            *(_QWORD *)(v109 + 24) = 1909LL;
            WdLogEvent5_WdWarning(v109);
            if ( v5 )
              DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
            if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
            DXGADAPTER::ReleaseReference(v64);
LABEL_224:
            DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v212);
            goto LABEL_225;
          }
          v112 = (void *)*((_QWORD *)v13 + 1);
          *((_QWORD *)v13 + 1) = 0LL;
          LODWORD(v29) = DxgEscapeSuspendResumeProcess(&v211, v13, v219, v112, 1, v13[4] != 0);
          if ( v5 )
            DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
          if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
          goto LABEL_241;
        }
        if ( *v13 == 10 )
        {
          v113 = (void *)*((_QWORD *)v13 + 1);
          *((_QWORD *)v13 + 1) = 0LL;
          LODWORD(v29) = DxgEscapeSuspendResumeProcess(&v211, v13, v105, v113, 0, 0);
          if ( v5 )
            DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
          if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
          goto LABEL_241;
        }
      }
      else if ( v211.Type == D3DKMT_ESCAPE_DRT_TEST
             && v211.PrivateDriverDataSize >= 0xC
             && v211.PrivateDriverDataSize >= v13[1]
             && *v13 == 1484026436 )
      {
        v100 = v13[2];
        if ( (unsigned int)v100 <= 0x25 )
        {
          v101 = 0x2744204000LL;
          if ( _bittest64(&v101, v100) )
          {
            if ( (_DWORD)v100 == 33 || (_DWORD)v100 == 32 )
            {
              Feature_HoldAdapterLockEscape__private_ReportDeviceUsage();
              LODWORD(v29) = -1073741823;
            }
            else
            {
              LODWORD(v29) = DxgkDrtTestEscape(v64, (struct _D3DKMT_DRT_ESCAPE_HEAD *)v13, 0LL);
              if ( (int)v29 >= 0 )
              {
                if ( v202 )
                {
                  v102 = v211.PrivateDriverDataSize;
                  v103 = v211.pPrivateDriverData;
                  v104 = (char *)v211.pPrivateDriverData + v211.PrivateDriverDataSize;
                  if ( (unsigned __int64)v104 > MmUserProbeAddress || v104 <= v211.pPrivateDriverData )
                    *(_BYTE *)MmUserProbeAddress = 0;
                  memmove(v103, v13, v102);
                }
                else
                {
                  memmove(v211.pPrivateDriverData, v13, v211.PrivateDriverDataSize);
                }
              }
            }
            if ( v5 )
              DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
            if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
LABEL_241:
            DXGADAPTER::ReleaseReference(v64);
            goto LABEL_71;
          }
        }
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v235, v64, 0LL);
      COREACCESS::COREACCESS((COREACCESS *)v234, 0LL);
      v215 = 0;
      v217 = v64;
      v203 = 0;
      v218 = 0;
      v115 = *((_QWORD *)v214 + 11);
      if ( v115 )
      {
        v116 = (*(__int64 (__fastcall **)(_QWORD))(v115 + 224))(0LL);
        v114 = v116 != 0;
        v221 = v116 != 0;
      }
      else
      {
        v221 = 0;
      }
      v117 = (unsigned int)v211.Type;
      if ( v211.Type == D3DKMT_ESCAPE_BDD_FALLBACK )
      {
        COREACCESS::AcquireShared((COREACCESS *)v234, 0LL);
LABEL_247:
        v118 = 0LL;
        v119 = 0LL;
LABEL_248:
        LOBYTE(v114) = 0;
        goto LABEL_249;
      }
      if ( (*(_BYTE *)&v211.Flags.0 & 1) != 0 )
      {
        LOBYTE(v120) = 0;
        if ( v211.Type == D3DKMT_ESCAPE_DRIVERPRIVATE || v211.Type == D3DKMT_ESCAPE_VIDSCH && *v13 == 3 )
          LOBYTE(v120) = 1;
        v120 = (unsigned __int8)v120;
        if ( *((_QWORD *)v64 + 338) )
          v120 = 1;
        v215 = v120;
        LODWORD(v29) = COREADAPTERACCESS::AcquireExclusive((__int64)v235, (unsigned int)(unsigned __int8)v120 + 2);
        if ( (int)v29 < 0 )
        {
          LOBYTE(v114) = 0;
          goto LABEL_568;
        }
        if ( !(_BYTE)v215 )
        {
          v117 = *((_QWORD *)v64 + 338);
          if ( v117 )
            ADAPTER_RENDER::FlushScheduler(v117, 2LL, 0xFFFFFFFFLL);
        }
        v119 = 1LL;
        v118 = 0LL;
        goto LABEL_248;
      }
      if ( v211.Type != D3DKMT_ESCAPE_DRT_TEST
        || v13[2] != 23
        || (v121 = v13[3] - 2, v122 = v13[3] == 2, v209 = 1, !v122 && v121 != 1) )
      {
        v209 = 0;
      }
      if ( v211.Type == D3DKMT_ESCAPE_DRIVERPRIVATE )
      {
        v117 = (unsigned int)*DXGADAPTER::GetAdapterType(v64, &v228);
        if ( (v117 & 0x10) != 0 || *((_DWORD *)v64 + 468) >= 0x5023u && (*(_BYTE *)&v211.Flags.0 & 8) != 0 )
        {
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v216);
          v114 = v218;
          if ( *((_DWORD *)v64 + 50) != 1 )
          {
            LODWORD(v29) = -1073741130;
            goto LABEL_568;
          }
          v203 = v218;
          v118 = 0LL;
          v119 = 0LL;
LABEL_249:
          if ( v211.hDevice )
          {
            v114 = v218;
            if ( *(_DWORD *)(v4 + 576) != 1 )
            {
              LODWORD(v29) = -1073741130;
LABEL_568:
              if ( (_BYTE)v114 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v216);
              COREACCESS::~COREACCESS((COREACCESS *)v234);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v235, v200);
              if ( v5 )
                DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
              if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
              if ( v97 && _InterlockedExchangeAdd64((volatile signed __int64 *)v97 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v97 + 2), v97);
              if ( v212[0] )
                operator delete[](v212[0]);
LABEL_72:
              DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v204, v48);
              if ( v206 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              {
                McTemplateK0q_EtwWriteTransfer(v49, &EventProfilerExit, v50, v204);
                return (unsigned int)v29;
              }
              return (unsigned int)v29;
            }
            v203 = v218;
          }
          v126 = v219;
          if ( v219
            && *((_BYTE *)v219 + 209)
            && ((v64 = v219, v222 = v219, v211.Type == D3DKMT_ESCAPE_DRIVERPRIVATE)
             && (*(_BYTE *)&v211.Flags.0 & 0x40) == 0
             || v211.Type <= (unsigned int)D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION
             && (v117 = 805306378LL, _bittest((const int *)&v117, v211.Type))) )
          {
            if ( v5 )
              v127 = *(_DWORD *)(v5 + 28);
            else
              v127 = 0;
            if ( v4 )
              *(_QWORD *)v224 = *(unsigned int *)(v4 + 440);
            v128 = *((_DWORD *)v219 + 1078);
            HostProcess = DXGPROCESS::GetHostProcess(v214);
            v130 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                     (DXGADAPTER *)((char *)v219 + 4240),
                     HostProcess,
                     v128,
                     v224[0],
                     v127,
                     v211.Type,
                     v211.Flags,
                     v211.PrivateDriverDataSize,
                     (unsigned __int8 *)v13);
            v29 = v130;
            if ( v130 < 0 )
            {
              v133 = WdLogNewEntry5_WdError(v132, v131);
LABEL_306:
              *(_QWORD *)(v133 + 24) = v29;
              WdLogEvent5_WdError(v133);
            }
          }
          else
          {
            switch ( v211.Type )
            {
              case D3DKMT_ESCAPE_DRIVERPRIVATE:
                memset(&v229, 0, sizeof(v229));
                v134 = 1;
                v207[0] = 1;
                if ( (*(_BYTE *)&v211.Flags.0 & 0x40) == 0 )
                  goto LABEL_314;
                v207[0] = 0;
                if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
                {
                  LODWORD(v29) = DxgkpDriverKnownEscapeCblt(
                                   v214,
                                   (struct ADAPTER_RENDER **)v219,
                                   v13,
                                   v211.PrivateDriverDataSize,
                                   v207);
                  v114 = v203;
                  if ( (int)v29 < 0 )
                    goto LABEL_556;
                }
                else
                {
                  LODWORD(v29) = DxgkpDriverKnownEscape(v214, v13, v211.PrivateDriverDataSize);
                  v114 = v203;
                }
                v134 = v207[0];
LABEL_314:
                if ( !v134 )
                  goto LABEL_556;
                if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))v64 + 62) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
                {
                  v145 = WdLogNewEntry5_WdWarning(v117, v114, v126);
                  *(_QWORD *)(v145 + 24) = v64;
                  LODWORD(v29) = -1073741637;
                  *(_QWORD *)(v145 + 32) = -1073741637LL;
                  WdLogEvent5_WdWarning(v145);
                  LOBYTE(v114) = v203;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                if ( !v211.PrivateDriverDataSize || !v211.pPrivateDriverData )
                {
                  v144 = (_QWORD *)WdLogNewEntry5_WdWarning(v117, v114, v126);
                  v144[3] = v211.PrivateDriverDataSize;
                  v144[4] = v211.pPrivateDriverData;
                  v144[5] = -1073741811LL;
                  WdLogEvent5_WdWarning(v144);
                  LODWORD(v29) = -1073741811;
                  LOBYTE(v114) = v203;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                v135 = 0;
                if ( v4 )
                  v136 = *(void **)(v4 + 584);
                else
                  v136 = 0LL;
                v229.hDevice = v136;
                if ( v5 )
                  v137 = *(void **)(v5 + 184);
                else
                  v137 = 0LL;
                v229.hContext = v137;
                v229.Flags.Value = v211.Flags.Value;
                if ( (*((_DWORD *)v64 + 87) & 8) == 0
                  && *((_DWORD *)v64 + 81) == 4098
                  && !(unsigned int)IsAMDDriverEscapeAllowed(v13, v211.PrivateDriverDataSize) )
                {
LABEL_327:
                  LODWORD(v29) = -1073741637;
                  LOBYTE(v114) = v203;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                if ( *(_BYTE *)&v211.Flags.0 < 0 )
                {
                  v133 = WdLogNewEntry5_WdError(v117, v114);
                  v29 = -1073741637LL;
                  goto LABEL_306;
                }
                if ( (*((_BYTE *)v214 + 347) & 0x20) != 0
                  || (Global = DXGGLOBAL::GetGlobal(v117, v114), *((_BYTE *)Global + 1555))
                  && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                       (struct DXGGLOBAL *)((char *)Global + 1548),
                       v64) )
                {
                  v135 = 32;
                }
                v229.Flags.Value = v135 | v229.Flags.Value & 0xFFFFFFDF;
                v229.PrivateDriverDataSize = v211.PrivateDriverDataSize;
                v229.pPrivateDriverData = v13;
                v141 = *((_QWORD *)v64 + 338);
                if ( v141 )
                {
                  v142 = v141 + 72;
                  KeEnterCriticalRegion();
                  ExAcquirePushLockSharedEx(v142, 0LL);
                  v143 = *(_QWORD *)(*((_QWORD *)v214 + 6) + 8LL * *((unsigned int *)v64 + 58));
                  if ( v143 )
                    v229.hKmdProcessHandle = *(HANDLE *)(v143 + 16);
                  ExReleasePushLockSharedEx(v142, 0LL);
                  KeLeaveCriticalRegion();
                }
                LODWORD(v29) = DXGADAPTER::DdiEscape(v64, &v229);
                break;
              case D3DKMT_ESCAPE_VIDMM:
                if ( !v219 )
                  goto LABEL_437;
                if ( v4 )
                  v118 = *(struct DXGADAPTER **)(v4 + 760);
                if ( *v13 == 16 )
                {
                  v147 = v13 + 6;
                  LODWORD(v29) = DxgkpEscapeVidMmDelayExecution(
                                   (struct DXGDEVICE *)v4,
                                   v13[3],
                                   v13[2],
                                   v13[4],
                                   (unsigned __int64 *)v13 + 3);
                  v138 = v202;
                  if ( (int)v29 >= 0 )
                  {
                    *(_QWORD *)v224 = v211.pPrivateDriverData;
                    if ( v202 )
                    {
                      v148 = (char *)v211.pPrivateDriverData + 24;
                      if ( (char *)v211.pPrivateDriverData + 24 >= (void *)MmUserProbeAddress )
                        v148 = (_QWORD *)MmUserProbeAddress;
                      *v148 = *v147;
                      LOBYTE(v114) = v203;
                      v139 = 0;
                      goto LABEL_558;
                    }
                    *((_QWORD *)v211.pPrivateDriverData + 3) = *v147;
                  }
                  LOBYTE(v114) = v203;
                  goto LABEL_557;
                }
                LODWORD(v29) = (*(__int64 (__fastcall **)(_QWORD, struct DXGADAPTER *, int *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v219 + 338) + 640LL) + 8LL) + 40LL))(
                                 *(_QWORD *)(*((_QWORD *)v219 + 338) + 648LL),
                                 v118,
                                 v13,
                                 v119);
                break;
              case D3DKMT_ESCAPE_TDRDBGCTRL:
                if ( !v211.pPrivateDriverData )
                {
LABEL_370:
                  LODWORD(v29) = TdrDbgCtrl(0LL, v114, v219, v119);
                  break;
                }
                if ( v211.PrivateDriverDataSize < 4 )
                {
LABEL_383:
                  LODWORD(v29) = -1073741811;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                switch ( *v13 )
                {
                  case 0:
                    goto LABEL_370;
                  case 1:
                    LODWORD(v29) = TdrDbgCtrl(2LL, v114, v219, v119);
                    goto LABEL_555;
                  case 2:
                    LODWORD(v29) = TdrDbgCtrl(1LL, v114, v219, v119);
                    goto LABEL_555;
                  case 3:
                    LODWORD(v29) = TdrDbgCtrl(3LL, v114, v219, v119);
                    goto LABEL_555;
                  case 4:
                  case 5:
                    if ( !v219 )
                    {
                      *(_QWORD *)(WdLogNewEntry5_WdTrace(v117, v114, 0LL, v119) + 24) = 0LL;
                      goto LABEL_327;
                    }
                    if ( *((_BYTE *)v219 + 209) )
                    {
                      LODWORD(v29) = -1073741637;
                      v138 = v202;
                      v139 = 0;
                      goto LABEL_559;
                    }
                    LODWORD(v29) = TdrDbgCtrl(4LL, v114, v219, v119);
                    if ( (int)v29 >= 0 )
                    {
                      v150 = *(_QWORD *)(*((_QWORD *)v219 + 338) + 624LL);
                      v242[2] = 0;
                      v242[0] = 2;
                      v242[1] = *v13;
                      LODWORD(v29) = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v219 + 338) + 616LL)
                                                                                              + 8LL)
                                                                                  + 64LL))(
                                       v150,
                                       v242);
                    }
                    goto LABEL_555;
                  case 6:
                    LODWORD(v29) = TdrDbgCtrl(5LL, v114, v219, v119);
                    goto LABEL_555;
                  case 7:
                    LODWORD(v29) = TdrDbgCtrl(6LL, v114, v219, v119);
                    goto LABEL_555;
                  case 8:
                    if ( v211.PrivateDriverDataSize < 8 )
                      goto LABEL_383;
                    if ( !v219 )
                    {
                      *(_QWORD *)(WdLogNewEntry5_WdTrace(v117, v114, 0LL, v119) + 24) = v64;
                      goto LABEL_327;
                    }
                    if ( *((_BYTE *)v219 + 209) )
                    {
                      LODWORD(v29) = -1073741637;
                      v138 = v202;
                      v139 = 0;
                      goto LABEL_559;
                    }
                    LODWORD(v29) = TdrDbgCtrl(4LL, v114, v219, v119);
                    if ( (int)v29 >= 0 )
                    {
                      v151 = *(_QWORD *)(*((_QWORD *)v219 + 338) + 624LL);
                      v243[0] = 2;
                      v243[1] = *v13;
                      v243[2] = v13[1];
                      LODWORD(v29) = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v219 + 338) + 616LL)
                                                                                              + 8LL)
                                                                                  + 64LL))(
                                       v151,
                                       v243);
                    }
                    break;
                  default:
                    goto LABEL_383;
                }
                break;
              case D3DKMT_ESCAPE_VIDSCH:
                if ( !v219 )
                  goto LABEL_437;
                if ( *((_BYTE *)v219 + 209) )
                  goto LABEL_538;
                if ( *v13 == 2 )
                  goto LABEL_362;
                if ( *v13 != 3 )
                {
                  LODWORD(v29) = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v219 + 338)
                                                                                                  + 616LL)
                                                                                      + 8LL)
                                                                          + 64LL))(
                                   *(_QWORD *)(*((_QWORD *)v219 + 338) + 624LL),
                                   v13);
                  break;
                }
                if ( !(_DWORD)v119 )
                {
LABEL_362:
                  LODWORD(v29) = -1073741811;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                v149 = 5000000;
                if ( (unsigned int)v13[1] < 0x4C4B40 )
                  v149 = v13[1];
                Interval.QuadPart = -(__int64)v149;
                KeDelayExecutionThread(0, 0, &Interval);
                LODWORD(v29) = 0;
                v138 = v202;
                goto LABEL_561;
              case D3DKMT_ESCAPE_DEVICE:
                if ( v211.PrivateDriverDataSize < 0xC || !v4 )
                  goto LABEL_383;
                LODWORD(v29) = DXGDEVICE::Escape((DXGDEVICE *)v4, (struct _D3DKMT_DEVICE_ESCAPE *)v13);
                break;
              case D3DKMT_ESCAPE_DMM:
                if ( !*((_QWORD *)v64 + 337) )
                  goto LABEL_437;
                if ( v211.PrivateDriverDataSize < 0x80 )
                  goto LABEL_362;
                v146 = *((_QWORD *)v13 + 1);
                if ( v146 > 0x19000 || v211.PrivateDriverDataSize != v146 + 127 && v146 )
                  goto LABEL_362;
                LODWORD(v29) = DmmEscape(v64, (struct _D3DKMT_DMM_ESCAPE_INTERNAL *const)v13);
                break;
              case D3DKMT_ESCAPE_DEBUG_SNAPSHOT:
                if ( v211.PrivateDriverDataSize < 8 )
                {
                  LODWORD(v29) = -1073741811;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                LODWORD(v29) = DxgDbgTakeSnapshot(v13 + 1, v211.PrivateDriverDataSize - 4, (unsigned int *)v13);
                break;
              case D3DKMT_ESCAPE_DRT_TEST:
                if ( v211.PrivateDriverDataSize < 0xC || v211.PrivateDriverDataSize < v13[1] || *v13 != 1484026436 )
                  goto LABEL_383;
                LODWORD(v29) = DxgkDrtTestEscape(
                                 v64,
                                 (struct _D3DKMT_DRT_ESCAPE_HEAD *)v13,
                                 (struct COREADAPTERACCESS *)v235);
                break;
              case D3DKMT_ESCAPE_DIAGNOSTICS:
                v152 = 1;
                goto LABEL_403;
              case D3DKMT_ESCAPE_OUTPUTDUPL_SNAPSHOT:
                if ( !*((_QWORD *)v64 + 337) )
                  goto LABEL_437;
                if ( v211.PrivateDriverDataSize < 0x18 )
                {
                  LODWORD(v29) = -1073741811;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                if ( v211.PrivateDriverDataSize != *v13 )
                {
                  LODWORD(v29) = -1073741811;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                if ( !v221 )
                  v118 = v64;
                LODWORD(v29) = OutputDuplGetDebugInfo(v118, (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)v13);
                break;
              case D3DKMT_ESCAPE_OUTPUTDUPL_DIAGNOSTICS:
                if ( !*((_QWORD *)v64 + 337) )
                  goto LABEL_437;
                if ( v211.PrivateDriverDataSize < 8 )
                {
                  LODWORD(v29) = -1073741811;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                if ( v211.PrivateDriverDataSize != (unsigned int)v13[1] + 8LL )
                {
                  LODWORD(v29) = -1073741811;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                if ( !v221 )
                  v118 = v64;
                LODWORD(v29) = OutputDuplGetDiagnosticBuffer(v118, (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)v13);
                break;
              case D3DKMT_ESCAPE_BDD_PNP:
                if ( (*((_DWORD *)v64 + 87) & 0x20) != 0 && !DXGADAPTER::IsBddFallbackDriver(v64) )
                {
                  *((_DWORD *)&v232.Flags + 1) = (_DWORD)v157;
                  *(&v232.PrivateDriverDataSize + 1) = (unsigned int)v157;
                  v232.hKmdProcessHandle = v157;
                  v232.hDevice = v157;
                  v232.hContext = v157;
                  v232.Flags.Value = v211.Flags.Value;
                  v232.PrivateDriverDataSize = v211.PrivateDriverDataSize;
                  v232.pPrivateDriverData = v13;
                  LODWORD(v29) = DXGADAPTER::DdiEscape(v156, &v232);
                  break;
                }
                LODWORD(v29) = -1071775742;
                v138 = v202;
                v139 = 0;
                goto LABEL_559;
              case D3DKMT_ESCAPE_BDD_FALLBACK:
                if ( !DXGADAPTER::IsBddFallbackDriver(0LL) )
                {
                  v155 = WdLogNewEntry5_WdAssertion(v154, v153);
                  *(_QWORD *)(v155 + 24) = 2618LL;
                  WdLogEvent5_WdAssertion(v155);
                }
                *((_DWORD *)&v231.Flags + 1) = 0;
                memset(&v231.PrivateDriverDataSize + 1, 0, 20);
                v231.hDevice = 0LL;
                v231.Flags.Value = v211.Flags.Value;
                v231.PrivateDriverDataSize = v211.PrivateDriverDataSize;
                v231.pPrivateDriverData = v13;
                LODWORD(v29) = DXGADAPTER::DdiEscape(0LL, &v231);
                break;
              case D3DKMT_ESCAPE_ACTIVATE_SPECIFIC_DIAG:
                if ( v211.PrivateDriverDataSize != 8 )
                {
                  LODWORD(v29) = -1073741811;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                if ( !*v13 )
                {
                  v159 = v13[1];
                  *((_BYTE *)DXGGLOBAL::GetGlobal(v117, v114) + 1232) = v159 != 0;
                  LODWORD(v29) = 0;
                  v138 = v202;
                  goto LABEL_561;
                }
                if ( *v13 != 15 )
                {
                  v158 = WdLogNewEntry5_WdAssertion(v117, v114);
                  *(_QWORD *)(v158 + 24) = *v13;
                  WdLogEvent5_WdAssertion(v158);
                  LODWORD(v29) = -1073741811;
                  break;
                }
                v117 = *((_QWORD *)v64 + 337);
                if ( v117 )
                {
                  LODWORD(v29) = ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(
                                   (ADAPTER_DISPLAY *)v117,
                                   v13[1]);
                  break;
                }
LABEL_437:
                v160 = WdLogNewEntry5_WdError(v117, v114);
                *(_QWORD *)(v160 + 24) = v64;
                LODWORD(v29) = -1073741637;
                *(_QWORD *)(v160 + 32) = -1073741637LL;
                WdLogEvent5_WdError(v160);
                if ( v203 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v216);
                COREACCESS::~COREACCESS((COREACCESS *)v234);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v235, v161);
                if ( v5 )
                  DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
                if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
                if ( v97 )
                  DXGADAPTER::ReleaseReference(v97);
                DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v212);
                goto LABEL_28;
              case D3DKMT_ESCAPE_MODES_PRUNED_OUT:
                if ( !*((_QWORD *)v64 + 337) )
                  goto LABEL_437;
                if ( v211.PrivateDriverDataSize < 8 )
                {
                  LODWORD(v29) = -1073741811;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                if ( v211.PrivateDriverDataSize < 44 * (unsigned __int64)(unsigned int)v13[1] + 8 )
                {
                  LODWORD(v29) = -1073741811;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                LODWORD(v29) = ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
                                 *((ADAPTER_DISPLAY **)v64 + 337),
                                 (struct _D3DKMT_DISPLAYMODELIST *)v13);
                break;
              case D3DKMT_ESCAPE_WHQL_INFO:
                v138 = v202;
                if ( v211.PrivateDriverDataSize < 4 )
                {
                  LODWORD(v29) = -1073741811;
                  v139 = 0;
                  goto LABEL_559;
                }
                *v13 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v64 + 27) + 64LL) + 2720LL);
                LODWORD(v29) = 0;
                goto LABEL_561;
              case D3DKMT_ESCAPE_BRIGHTNESS:
                if ( (*(_BYTE *)&v211.Flags.0 & 1) == 0 )
                {
                  LODWORD(v29) = -1073741811;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                if ( v211.PrivateDriverDataSize < 0x60C )
                {
                  LODWORD(v29) = -1073741811;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                if ( DXGPROCESS::IsRemoteConnection(v214) )
                {
                  LODWORD(v29) = -1073741790;
                  v165 = WdLogNewEntry5_WdWarning(v163, v162, v164);
                  *(_QWORD *)(v165 + 24) = v64;
                  *(_QWORD *)(v165 + 32) = -1073741790LL;
LABEL_554:
                  WdLogEvent5_WdWarning(v165);
                }
                else
                {
                  LODWORD(v29) = DpiBrightnessEscape(
                                   *((struct _DEVICE_OBJECT **)v64 + 27),
                                   (struct _D3DKMT_BRIGHTNESS_INFO *)v13);
                }
                break;
              case D3DKMT_ESCAPE_EDID_CACHE:
                if ( v211.PrivateDriverDataSize < 4 )
                  goto LABEL_383;
                v166 = (unsigned int)*v13 + 4LL;
                if ( v211.PrivateDriverDataSize != v166 )
                  goto LABEL_383;
                if ( !IsCurrentConsoleSession(v166, v114) && !IsCurrentProcessAdmin() )
                {
                  memset(v13, 0, v211.PrivateDriverDataSize);
                  break;
                }
                v169 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v168, v167) + 126);
                if ( v169 )
                {
                  LODWORD(v29) = EDIDCACHE::GetEdids(v169, (struct _D3DKMT_DXGK_DIAGNOSTICS *)v13);
                  break;
                }
                LODWORD(v29) = -1073741801;
                LOBYTE(v114) = v203;
                v138 = v202;
                v139 = 0;
                goto LABEL_559;
              case D3DKMT_ESCAPE_GENERIC_ADAPTER_DIAG_INFO:
                if ( v211.PrivateDriverDataSize < 0x10 )
                {
                  LODWORD(v29) = -1073741811;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                if ( !DXGADAPTER::IsDiagnosticAllowed(v64) )
                  goto LABEL_474;
                v13[1] &= 7u;
                DxgkGetAdapterBrightnessInfo(*((_QWORD *)v64 + 27), v13);
                LODWORD(v29) = 0;
                v138 = v202;
                goto LABEL_561;
              case D3DKMT_ESCAPE_HISTORY_BUFFER_STATUS:
                if ( v211.PrivateDriverDataSize < 8 || !v219 )
                  goto LABEL_480;
                if ( v4 )
                {
                  v179 = 0;
                  if ( (qword_1C00B19B0 & 0x61C8ED7) != 0
                    && (qword_1C00B19B8 & 0xFFFFFFFFF9E37128uLL) == 0
                    && (qword_1C00B19B0 & 0x4000) != 0 )
                  {
                    NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v219);
                    if ( NumDifferentPhysicalAdapters )
                    {
                      v183 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v181 + 2704) + 16LL) + 2584LL);
                      while ( !*(_QWORD *)(360LL * v182 + v183 + 40) )
                      {
                        if ( ++v182 >= NumDifferentPhysicalAdapters )
                          goto LABEL_505;
                      }
                      v179 = 1;
                    }
                  }
LABEL_505:
                  *(_BYTE *)(v4 + 1864) = v179;
                  *(_BYTE *)v13 = v179;
                  v13[1] = (int)v118;
                  LODWORD(v29) = (_DWORD)v118;
                  v138 = v202;
                  goto LABEL_561;
                }
                if ( (_BYTE)v114 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v216);
                COREACCESS::~COREACCESS((COREACCESS *)v234);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v235, v178);
                if ( v5 )
                  DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
LABEL_488:
                if ( !v97 )
                  goto LABEL_587;
                v177 = v97;
                goto LABEL_586;
              case D3DKMT_ESCAPE_MIRACAST_ADAPTER_DIAG_INFO:
                if ( v211.PrivateDriverDataSize != 32 )
                {
                  LODWORD(v29) = -1073741811;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                if ( !DXGADAPTER::IsDiagnosticAllowed(v64) )
                {
LABEL_474:
                  v29 = WdLogNewEntry5_WdWarning(v171, v170, v172);
                  *(_QWORD *)(v29 + 24) = v64;
                  *(_QWORD *)(v29 + 32) = (unsigned int)PsGetCurrentProcessSessionId(v174, v173);
                  WdLogEvent5_WdWarning(v29);
                  LODWORD(v29) = -1073741790;
                  LOBYTE(v114) = v203;
                  v138 = v202;
                  v139 = 0;
                  goto LABEL_559;
                }
                DxgkGetAdapterMiracastInfo(*((_QWORD *)v64 + 27), (__int64)v13);
                LODWORD(v29) = 0;
                v138 = v202;
                goto LABEL_561;
              case D3DKMT_ESCAPE_PROCESS_VERIFIER_OPTION:
                if ( v211.PrivateDriverDataSize < 0x20 )
                  goto LABEL_480;
                v184 = v13[3];
                if ( v184 > 1 || *(_QWORD *)v13 )
                  goto LABEL_480;
                if ( !v184 )
                  *((_OWORD *)v13 + 1) = 0LL;
                v185 = v13[2];
                if ( v185 - 1000 > 1 )
                  goto LABEL_480;
                if ( !v126 )
                {
                  v186 = WdLogNewEntry5_WdError(v117, v114);
                  *(_QWORD *)(v186 + 24) = 2935LL;
                  goto LABEL_514;
                }
                LODWORD(v29) = (*(__int64 (__fastcall **)(_QWORD, struct DXGPROCESS *, _QWORD, _QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v126 + 338) + 640LL) + 8LL) + 1104LL))(
                                 *(_QWORD *)(*((_QWORD *)v126 + 338) + 648LL),
                                 v214,
                                 (unsigned int)v13[3],
                                 v185,
                                 v13 + 4);
                break;
              case D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION:
                if ( v211.PrivateDriverDataSize < 0x20 )
                  goto LABEL_480;
                v188 = v13[1];
                if ( v188 > 1 )
                  goto LABEL_480;
                v189 = v13 + 2;
                if ( !v188 )
                {
                  *v189 = 0LL;
                  *((_QWORD *)v13 + 3) = 0LL;
                }
                if ( (unsigned int)(*v13 - 1000) > 1 )
                {
LABEL_480:
                  v175 = (_BYTE)v114 == 0;
                  goto LABEL_481;
                }
                if ( !v126 )
                {
                  v186 = WdLogNewEntry5_WdError(v117, v114);
                  *(_QWORD *)(v186 + 24) = 2985LL;
                  goto LABEL_514;
                }
                if ( *((_BYTE *)v126 + 209) )
                  goto LABEL_538;
                LODWORD(v29) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _OWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v126 + 338) + 640LL) + 8LL)
                                                                                           + 1112LL))(
                                 *(_QWORD *)(*((_QWORD *)v126 + 338) + 648LL),
                                 (unsigned int)v13[1],
                                 (unsigned int)*v13,
                                 v189);
                break;
              case D3DKMT_ESCAPE_DOD_SET_DIRTYRECT_MODE:
                if ( v211.PrivateDriverDataSize != 4 )
                  goto LABEL_526;
                if ( *((_QWORD *)v64 + 338) )
                {
LABEL_528:
                  v191 = WdLogNewEntry5_WdWarning(v117, v114, v126);
                  *(_QWORD *)(v191 + 24) = v64;
                  WdLogEvent5_WdWarning(v191);
                  v175 = v203 == 0;
                  goto LABEL_481;
                }
                v192 = *((_QWORD *)v64 + 337);
                v138 = v202;
                if ( !*(_QWORD *)(v192 + 392) )
                {
                  LODWORD(v29) = -1073741811;
                  v139 = 0;
                  goto LABEL_559;
                }
                *(_DWORD *)(v192 + 400) = *v13;
                LODWORD(v29) = 0;
                goto LABEL_561;
              case D3DKMT_ESCAPE_GET_EXTERNAL_DIAGNOSTICS:
                v152 = 0;
LABEL_403:
                v139 = 1;
                LODWORD(v29) = GetDiagnosticsBuffer(
                                 (struct _D3DKMT_DXGK_DIAGNOSTICS *)v13,
                                 v211.PrivateDriverDataSize,
                                 v152);
                LOBYTE(v114) = v203;
                v138 = v202;
                goto LABEL_558;
              case D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS:
                if ( !DXGADAPTER::IsFullWDDMAdapter(v64) )
                  goto LABEL_528;
                LODWORD(v29) = ADAPTER_DISPLAY::ReportDisplayState(
                                 *((ADAPTER_DISPLAY **)v64 + 337),
                                 (struct _D3DKMT_DXGK_DIAGNOSTICS *)v13,
                                 v211.PrivateDriverDataSize);
                break;
              case D3DKMT_ESCAPE_QUERY_IOMMU_STATUS:
                if ( !v211.PrivateDriverDataSize )
                {
LABEL_526:
                  v190 = WdLogNewEntry5_WdError(v117, v114);
                  *(_QWORD *)(v190 + 24) = v211.PrivateDriverDataSize;
                  WdLogEvent5_WdError(v190);
                  v175 = v203 == 0;
LABEL_481:
                  if ( !v175 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v216);
                  COREACCESS::~COREACCESS((COREACCESS *)v234);
                  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v235, v176);
                  if ( v5 )
                    DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
                  if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
                  goto LABEL_488;
                }
                if ( v219 )
                {
                  if ( !*((_BYTE *)v219 + 209) )
                  {
                    *(_BYTE *)v13 = *(_BYTE *)(*((_QWORD *)v219 + 338) + 1648LL);
                    LODWORD(v29) = 0;
                    v138 = v202;
                    goto LABEL_561;
                  }
LABEL_538:
                  v187 = (_BYTE)v114 == 0;
                }
                else
                {
                  v186 = WdLogNewEntry5_WdError(v117, v114);
                  *(_QWORD *)(v186 + 24) = 3056LL;
LABEL_514:
                  WdLogEvent5_WdError(v186);
                  v187 = v203 == 0;
                }
                if ( !v187 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v216);
                COREACCESS::~COREACCESS((COREACCESS *)v234);
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v235, v193);
                if ( v5 )
                  DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v5);
                if ( v4 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v4 + 16), (struct DXGDEVICE *)v4);
                if ( v97 )
                  DXGADAPTER::ReleaseReference(v97);
                DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v212);
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v204, v194);
                if ( v206 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v195, &EventProfilerExit, v196, v204);
                return 3221225659LL;
              default:
                LODWORD(v29) = -1073741811;
                v165 = WdLogNewEntry5_WdWarning(v117, v114, v219);
                *(_QWORD *)(v165 + 24) = v211.Type;
                goto LABEL_554;
            }
          }
LABEL_555:
          LOBYTE(v114) = v203;
LABEL_556:
          v138 = v202;
LABEL_557:
          v139 = 0;
LABEL_558:
          if ( (int)v29 < 0 )
          {
LABEL_559:
            if ( !v139 || (_DWORD)v29 != -2147483643 )
              goto LABEL_568;
          }
LABEL_561:
          if ( v138 )
          {
            v197 = v211.PrivateDriverDataSize;
            v198 = v211.pPrivateDriverData;
            v199 = (char *)v211.pPrivateDriverData + v211.PrivateDriverDataSize;
            if ( (unsigned __int64)v199 > MmUserProbeAddress || v199 <= v211.pPrivateDriverData )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v198, v13, v197);
            LOBYTE(v114) = v203;
          }
          else
          {
            memmove(v211.pPrivateDriverData, v13, v211.PrivateDriverDataSize);
            LOBYTE(v114) = v203;
          }
          goto LABEL_568;
        }
      }
      if ( v209 )
        goto LABEL_247;
      if ( v240 )
      {
        v123 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v117, v114);
        v123[3] = 275LL;
        v123[4] = 4LL;
        v123[5] = v238;
        v123[6] = 0LL;
        v123[7] = 0LL;
        WdLogEvent5_WdCriticalError(v123);
      }
      v117 = (__int64)v239;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v239 + 23) )
      {
        if ( !KeReadStateEvent((PRKEVENT)v239 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q_EtwWriteTransfer(v124, &EventBlockThread, v125, 72);
          KeWaitForSingleObject((char *)v239 + 48, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared(v239, 0LL);
        v117 = (__int64)v239;
      }
      v118 = 0LL;
      v241 = 0LL;
      v240 = 1;
      if ( *(_DWORD *)(v117 + 200) != 1 )
      {
LABEL_286:
        COREACCESS::Release((COREACCESS *)v238);
        LODWORD(v29) = -1073741130;
        LOBYTE(v114) = v218;
        goto LABEL_568;
      }
      if ( v237 != (unsigned int *)v239 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v236, 0LL);
        v117 = v237[50];
        if ( (_DWORD)v117 != 1 )
        {
          COREACCESS::Release((COREACCESS *)v236);
          goto LABEL_286;
        }
        v118 = 0LL;
      }
      v235[1] = 1;
      LODWORD(v29) = 0;
      v114 = v218;
      v203 = v218;
      v119 = v215;
      goto LABEL_249;
    }
    v84 = (v211.hDevice >> 6) & 0xFFFFFF;
    v85 = v211.hDevice >> 30;
    if ( (unsigned int)v84 < *((_DWORD *)v71 + 64) )
    {
      v73 = (unsigned int)v84;
      v86 = *((_QWORD *)v71 + 30);
      v72 = (struct DXGPROCESS *)*(unsigned int *)(v86 + 16 * v84 + 8);
      if ( (_DWORD)v85 == ((*(_DWORD *)(v86 + 16 * v84 + 8) >> 5) & 3)
        && ((unsigned __int16)v72 & 0x2000) == 0
        && ((unsigned __int8)v72 & 0x1F) != 0 )
      {
        v73 = 2LL * (unsigned int)v84;
        v72 = (struct DXGPROCESS *)((unsigned __int8)v72 & 0x1F);
        if ( (_BYTE)v72 == 3 )
        {
          v4 = *(_QWORD *)(v86 + 16LL * (unsigned int)v84);
          goto LABEL_160;
        }
        v87 = WdLogNewEntry5_WdError(v72, v85);
        *(_QWORD *)(v87 + 24) = 316LL;
        WdLogEvent5_WdError(v87);
      }
    }
    v4 = 0LL;
LABEL_160:
    v225 = v4;
    if ( !v4 || v64 != *(DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL) && v64 != *(DXGADAPTER **)(v4 + 1848) )
    {
      v83 = (_QWORD *)WdLogNewEntry5_WdWarning(v72, v85, v73);
      v83[3] = v64;
      v83[4] = v211.hDevice;
      goto LABEL_151;
    }
    goto LABEL_165;
  }
  if ( IsCurrentConsoleSession(13LL, v41) || IsCurrentProcessAdmin() )
  {
    v67 = DXGGLOBAL::GetGlobal(v66, v65);
    DXGGLOBAL::ReferenceBddFallbackAdapter(v67, &v213);
  }
  DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(v212);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v204, v68);
  if ( v206 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v69, &EventProfilerExit, v70, v204);
  return 3221226021LL;
}
