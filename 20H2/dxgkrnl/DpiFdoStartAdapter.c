/*
 * XREFs of DpiFdoStartAdapter @ 0x1C01815E4
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x1C01826A0 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiLdaStartAdapterInChain @ 0x1C02D6EF8 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D03C (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     DxgkDiagCalcDuration1us @ 0x1C001FE94 (DxgkDiagCalcDuration1us.c)
 *     DpiFdoInitializeMipiDsi @ 0x1C00214D8 (DpiFdoInitializeMipiDsi.c)
 *     DpiFdoCleanupMipiDsi @ 0x1C0021570 (DpiFdoCleanupMipiDsi.c)
 *     DpiFdoInitializeDP @ 0x1C0021598 (DpiFdoInitializeDP.c)
 *     DpiFdoInitializeDisplayDiagnostics @ 0x1C002163C (DpiFdoInitializeDisplayDiagnostics.c)
 *     DpiFdoCleanupDisplayDiagnostics @ 0x1C00216B8 (DpiFdoCleanupDisplayDiagnostics.c)
 *     DpiHybridInternalPanelOverride @ 0x1C00217C0 (DpiHybridInternalPanelOverride.c)
 *     ?DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z @ 0x1C002186C (-DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z.c)
 *     SendBDDDiagTelemetry @ 0x1C0023DD8 (SendBDDDiagTelemetry.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00393B4 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C00399F4 (McTemplateK0pt_EtwWriteTransfer.c)
 *     NotifyUserMSBDAIfApplicable @ 0x1C0051C28 (NotifyUserMSBDAIfApplicable.c)
 *     DpiFdoCleanupDP @ 0x1C0051D58 (DpiFdoCleanupDP.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0113708 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C011DFA0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C011E21C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01362BC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0170584 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0173AE8 (DpiDxgkDdiDisplayDetectControl.c)
 *     DxgkAddAdapter @ 0x1C01763E0 (DxgkAddAdapter.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C0179090 (DxgkRetrieveStringFromRegistry.c)
 *     DpiOpenPnpRegistryKey @ 0x1C0179EE0 (DpiOpenPnpRegistryKey.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C017DA5C (DpiFdoInitializeGpuVirtualization.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C017DD1C (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiQueryMiniportInterface @ 0x1C01808E0 (DpiQueryMiniportInterface.c)
 *     DpiGetDevicePropertyString @ 0x1C01814D8 (DpiGetDevicePropertyString.c)
 *     DpiFdoOpenDeviceFileObjectIfNeeded @ 0x1C0182318 (DpiFdoOpenDeviceFileObjectIfNeeded.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C0182350 (DpiFdoCreateRelatedObjects.c)
 *     DpiDxgkDdiStartDevice @ 0x1C0182428 (DpiDxgkDdiStartDevice.c)
 *     DpiKsrIsSoftBoot @ 0x1C01824FC (DpiKsrIsSoftBoot.c)
 *     DpiFdoConnectInterrupt @ 0x1C018251C (DpiFdoConnectInterrupt.c)
 *     MonitorInitializeAdapterDone @ 0x1C01845B8 (MonitorInitializeAdapterDone.c)
 *     DxgkAcquireGdiViewIds @ 0x1C0184B20 (DxgkAcquireGdiViewIds.c)
 *     DpiFdoEnumChildDevices @ 0x1C0184BA4 (DpiFdoEnumChildDevices.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C0197808 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x1C0197884 (DpiMiracastDdiMiracastQueryCaps.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C020E78C (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020E8D4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C0216898 (DxgkReleaseAdapterFdoReference.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C021FC08 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C021FCF8 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C021FEF0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0220060 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     ?LPMDisplayRegisterInternalDisplay@@YAXPEAXI@Z @ 0x1C0274BF0 (-LPMDisplayRegisterInternalDisplay@@YAXPEAXI@Z.c)
 *     ?CommitSessionGdiViewIds@DXGSESSIONDATA@@QEAAJXZ @ 0x1C029D454 (-CommitSessionGdiViewIds@DXGSESSIONDATA@@QEAAJXZ.c)
 *     DxgkReleaseGdiViewId @ 0x1C029ECF4 (DxgkReleaseGdiViewId.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C02C75C0 (DpiFdoCleanupGpuVirtualization.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C02C78B4 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C02C795C (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C02CA83C (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C02CB318 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1C02D1B4C (DpiKsrRestoreAdapterDriverState.c)
 *     DpiDxgkDdiStopDevice @ 0x1C02D7914 (DpiDxgkDdiStopDevice.c)
 */

__int64 __fastcall DpiFdoStartAdapter(
        struct _DEVICE_OBJECT *a1,
        char a2,
        void *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned int a5,
        __int64 a6,
        _QWORD *a7)
{
  char v7; // bl
  __int64 v9; // rsi
  char *DeviceExtension; // r14
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 started; // r15
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  NTSTATUS LocallyUniqueId; // eax
  struct _LUID *v20; // rdx
  _QWORD *v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  _DWORD *PoolWithTag; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  _DWORD *v31; // rbx
  unsigned int v32; // ecx
  int v33; // eax
  _DWORD *v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // eax
  _BYTE *v39; // rbx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rcx
  int v43; // r8d
  unsigned int v44; // eax
  unsigned int *v45; // rax
  int v46; // eax
  unsigned int *v47; // rdi
  char v48; // r8
  __int64 v49; // r8
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  int RelatedObjects; // eax
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rax
  int v65; // eax
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // eax
  __int64 v72; // rbx
  int v73; // eax
  BOOLEAN v74; // dl
  NTSTATUS v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  unsigned int v78; // ebx
  __int64 v79; // rdi
  _DWORD *v80; // rax
  _DWORD *v81; // r12
  __int64 v83; // rcx
  __int64 v84; // r8
  unsigned int v85; // eax
  bool v86; // cf
  bool v87; // zf
  int Caps; // eax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rbx
  unsigned int v92; // edx
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 (__fastcall *v95)(_QWORD, _QWORD, __int64); // rax
  int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rbx
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rax
  int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // rbx
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // rcx
  int DevicePropertyString; // eax
  _QWORD *v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  bool v123; // zf
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rcx
  NTSTATUS v128; // eax
  __int64 v129; // rax
  int v130; // eax
  __int64 v131; // rax
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v134; // rdx
  __int64 v135; // rcx
  int v136; // eax
  __int64 v137; // rax
  struct _DEVICE_OBJECT *v138; // rcx
  int v139; // eax
  __int64 v140; // rcx
  __int64 v141; // r9
  int v142; // edi
  DXGADAPTER *v143; // rcx
  _QWORD *v144; // rax
  _QWORD *v145; // rdi
  int v146; // eax
  __int64 v147; // rdx
  __int64 DiagnosticInfoArgs; // rax
  __int64 v149; // rdi
  __int64 v150; // rcx
  unsigned __int64 v151; // rax
  __int64 v152; // rcx
  __int64 (__fastcall *v153)(__int64, _QWORD); // rax
  int v154; // eax
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r12
  __int64 v158; // rax
  __int64 (__fastcall *v159)(__int64, __int128 *); // rax
  __int64 v160; // rcx
  int v161; // eax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r12
  __int64 v165; // rax
  char *v166; // rax
  char *v167; // rbx
  int v168; // eax
  unsigned __int64 v169; // [rsp+20h] [rbp-158h]
  unsigned __int64 v170; // [rsp+20h] [rbp-158h]
  int v171; // [rsp+30h] [rbp-148h]
  char v172; // [rsp+40h] [rbp-138h]
  char v173; // [rsp+41h] [rbp-137h]
  char v174; // [rsp+42h] [rbp-136h]
  char v175; // [rsp+42h] [rbp-136h]
  char v176; // [rsp+43h] [rbp-135h]
  unsigned int *P; // [rsp+48h] [rbp-130h]
  char v178; // [rsp+50h] [rbp-128h]
  int v179; // [rsp+54h] [rbp-124h] BYREF
  char v180; // [rsp+58h] [rbp-120h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v181; // [rsp+60h] [rbp-118h]
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-110h] BYREF
  PVOID v183; // [rsp+70h] [rbp-108h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-100h] BYREF
  __int64 v185; // [rsp+80h] [rbp-F8h] BYREF
  int v186; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v187; // [rsp+90h] [rbp-E8h]
  char v188; // [rsp+98h] [rbp-E0h]
  void *v189; // [rsp+A0h] [rbp-D8h]
  _QWORD *v190; // [rsp+A8h] [rbp-D0h]
  __int64 v191; // [rsp+B0h] [rbp-C8h]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-C0h] BYREF
  __int128 v193; // [rsp+C8h] [rbp-B0h] BYREF
  __int64 v194; // [rsp+D8h] [rbp-A0h]
  __int128 v195; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v196; // [rsp+F0h] [rbp-88h]
  _DWORD v197[7]; // [rsp+F8h] [rbp-80h] BYREF
  _OWORD v198[2]; // [rsp+118h] [rbp-60h] BYREF

  v190 = a7;
  v7 = a2;
  Handle = 0LL;
  v9 = 0LL;
  memset(v197, 0, sizeof(v197));
  v181 = a4;
  DestinationString = 0LL;
  v189 = a3;
  v180 = a2;
  DeviceExtension = (char *)a1->DeviceExtension;
  v174 = 0;
  v176 = 0;
  v173 = 0;
  v87 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  v11 = *((_QWORD *)DeviceExtension + 5);
  v191 = v11;
  v172 = 0;
  v178 = 0;
  P = 0LL;
  v185 = MEMORY[0xFFFFF78000000320];
  if ( v87 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v9 = (__int64)DeviceExtension;
    if ( (int)DpiQueryMiniportInterface(
                *((_QWORD *)DeviceExtension + 3),
                (__int64)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
                112,
                3,
                v169,
                (__int64)(DeviceExtension + 1000)) >= 0 )
    {
      if ( a6 )
      {
        v95 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))*((_QWORD *)DeviceExtension + 131);
        if ( v95 )
        {
          v96 = v95(*((_QWORD *)DeviceExtension + 126), a5, a6);
          started = v96;
          if ( v96 < 0 )
          {
            v99 = WdLogNewEntry5_WdError(v98, v97);
            v100 = *((_QWORD *)DeviceExtension + 131);
LABEL_120:
            *(_QWORD *)(v99 + 24) = v100;
            *(_QWORD *)(v99 + 32) = started;
            goto LABEL_123;
          }
        }
      }
    }
    else
    {
      memset(DeviceExtension + 1000, 0, 0x70uLL);
    }
    v7 = v180;
    *((_DWORD *)DeviceExtension + 994) = 0;
  }
  v12 = DpiFdoConnectInterrupt(a1);
  started = v12;
  if ( v12 == -1073741275 )
  {
    v16 = WdLogNewEntry5_WdEvent(v14, v13);
    *(_QWORD *)(v16 + 24) = a1;
    WdLogEvent5_WdEvent(v16);
  }
  else
  {
    v47 = 0LL;
    if ( v12 < 0 )
    {
LABEL_126:
      v102 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v102 + 24) = started;
      WdLogEvent5_WdError(v102);
      goto LABEL_74;
    }
    v174 = 1;
  }
  if ( DeviceExtension[1152] == 1 )
  {
    if ( DeviceExtension[1155] == 1
      && v7
      && byte_1C00B0B16
      && !(unsigned __int8)DpiFdoIsCompatibleWithHighResolutionBoot(a1) )
    {
      v186 = -1;
      v187 = 0LL;
      if ( (qword_1C00AF9B0 & 2) != 0 )
      {
        v188 = 1;
        v186 = 8006;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v83, &EventProfilerEnter, v84, 8006);
      }
      else
      {
        v188 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v186, 8006LL);
      memset(v198, 0, sizeof(v198));
      LODWORD(v198[0]) = 18;
      x86BiosCall(16LL, v198);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v186, v103);
      if ( v188 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v104, &EventProfilerExit, v105, v186);
    }
    if ( v9 )
    {
      v85 = *(_DWORD *)(v11 + 28);
      if ( byte_1C00B0B16 )
      {
        v86 = v85 < 0x300E;
        v87 = v85 == 12302;
      }
      else
      {
        v86 = v85 < 0x2005;
        v87 = v85 == 8197;
      }
      *(_BYTE *)(v9 + 3904) = *(_BYTE *)(v9 + 3904) & 0xFB | (4 * (!v86 && !v87));
    }
  }
  for ( Interval.QuadPart = 0LL; ; Interval.QuadPart = 0LL )
  {
    LODWORD(started) = ExUuidCreate((UUID *)DeviceExtension + 166);
    if ( (int)started >= 0 )
      break;
    if ( (_DWORD)started != -1073741267 )
    {
      v99 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v99 + 24) = (int)started;
      goto LABEL_123;
    }
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)DeviceExtension + 334);
  started = LocallyUniqueId;
  if ( LocallyUniqueId < 0 )
    goto LABEL_138;
  if ( v9 )
  {
    v22 = DpiFdoSetAdapterLuid((struct _FDO_CONTEXT *)v9);
    v25 = v22;
    if ( v22 < 0 )
    {
      v106 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v106 + 24) = v25;
      WdLogEvent5_WdError(v106);
    }
    if ( (unsigned __int8)DpiKsrIsSoftBoot() )
    {
      v107 = DpiKsrRestoreAdapterDriverState((struct _FDO_CONTEXT *)v9);
      v110 = v107;
      if ( v107 < 0 )
      {
        v111 = WdLogNewEntry5_WdError(v109, v108);
        *(_QWORD *)(v111 + 24) = v110;
        WdLogEvent5_WdError(v111);
      }
    }
  }
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x1E0uLL, 0x74727044u);
  v31 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_141;
  memset(PoolWithTag, 0, 0x1E0uLL);
  v32 = *(_DWORD *)(v11 + 28);
  v33 = 16387;
  if ( v32 <= 0x4003 )
  {
    if ( v32 <= 0x300E )
    {
      v33 = 8197;
      if ( v32 <= 0x2005 )
      {
        *v31 = 184;
      }
      else
      {
        *v31 = 256;
        v33 = 12302;
      }
    }
    else
    {
      *v31 = 264;
    }
  }
  else
  {
    *v31 = 480;
    v33 = *((_DWORD *)DeviceExtension + 681);
  }
  v31[1] = v33;
  *((_QWORD *)v31 + 2) = DpEvalAcpiMethod;
  *((_QWORD *)v31 + 3) = &DpGetDeviceInformation;
  *((_QWORD *)v31 + 4) = DpIndicateChildStatus;
  *((_QWORD *)v31 + 5) = DpMapMemory;
  *((_QWORD *)v31 + 6) = DpQueueDpc;
  *((_QWORD *)v31 + 7) = DpQueryServices;
  *((_QWORD *)v31 + 8) = DpReadDeviceSpace;
  *((_QWORD *)v31 + 9) = DpSynchronizeExecution;
  *((_QWORD *)v31 + 10) = DpUnmapMemory;
  *((_QWORD *)v31 + 11) = DpWriteDeviceSpace;
  *((_QWORD *)v31 + 12) = DpIsDevicePresent;
  *((_QWORD *)v31 + 13) = DxgGetHandleDataCB;
  *((_QWORD *)v31 + 14) = DxgGetHandleParentCB;
  *((_QWORD *)v31 + 15) = DxgEnumHandleChildrenCB;
  *((_QWORD *)v31 + 16) = DxgNotifyInterruptCB;
  *((_QWORD *)v31 + 17) = DxgNotifyDpcCB;
  *((_QWORD *)v31 + 18) = DxgMiniportQueryVidPnInterfaceCB;
  *((_QWORD *)v31 + 19) = DxgMiniportQueryMonitorInterfaceCB;
  *((_QWORD *)v31 + 20) = DxgGetCaptureAddressCB;
  *((_QWORD *)v31 + 21) = DxgLogEtwEventCb;
  *((_QWORD *)v31 + 22) = DpExcludeAdapterAccess;
  *((_QWORD *)v31 + 23) = DxgCreateContextAllocationCB;
  *((_QWORD *)v31 + 24) = DxgDestroyContextAllocationCB;
  *((_QWORD *)v31 + 25) = &DxgSetPowerComponentActiveCB;
  *((_QWORD *)v31 + 26) = DxgSetPowerComponentIdleCB;
  *((_QWORD *)v31 + 28) = DxgkPowerRuntimeControlRequestCB;
  *((_QWORD *)v31 + 29) = DxgkSetPowerComponentLatencyCB;
  *((_QWORD *)v31 + 30) = DxgkSetPowerComponentResidencyCB;
  *((_QWORD *)v31 + 31) = DxgkCompleteFStateTransitionCB;
  *((_QWORD *)v31 + 32) = DxgkCompletePStateTransitionCB;
  *((_QWORD *)v31 + 27) = DpAcquirePostDisplayOwnership;
  *((_QWORD *)v31 + 33) = DxgkMapContextAllocationCB;
  *((_QWORD *)v31 + 34) = DxgkUpdateContextAllocationCB;
  *((_QWORD *)v31 + 35) = DxgkReserveGpuVirtualAddressRangeCB;
  *((_QWORD *)v31 + 36) = DxgkAcquireHandleDataCB;
  *((_QWORD *)v31 + 37) = DxgkReleaseHandleDataCB;
  *((_QWORD *)v31 + 38) = DxgkHardwareContentProtectionTeardownCB;
  *((_QWORD *)v31 + 39) = DxgkMultiPlaneOverlayDisabledCB;
  *((_QWORD *)v31 + 40) = DxgkMitigatedRangeUpdateCB;
  *((_QWORD *)v31 + 1) = a1;
  *((_QWORD *)v31 + 42) = DpIndicateConnectorChange;
  *((_QWORD *)v31 + 43) = DxgkUnblockUEFIFrameBufferRangesCB;
  *((_QWORD *)v31 + 44) = DpAcquirePostDisplayOwnership2;
  *((_QWORD *)v31 + 45) = DxgkSetProtectedSessionStatusCB;
  *((_QWORD *)v31 + 46) = DxgkAllocateContiguousMemoryCB;
  *((_QWORD *)v31 + 47) = DxgkFreeContiguousMemoryCB;
  *((_QWORD *)v31 + 48) = DxgkAllocatePagesForMdlCB;
  *((_QWORD *)v31 + 49) = DxgkFreePagesFromMdlCB;
  *((_QWORD *)v31 + 50) = DxgkPinFrameBufferForSaveCB;
  *((_QWORD *)v31 + 51) = DxgkUnpinFrameBufferForSaveCB;
  *((_QWORD *)v31 + 52) = DxgkMapFrameBufferPointerCB;
  *((_QWORD *)v31 + 53) = DxgkUnmapFrameBufferPointerCB;
  *((_QWORD *)v31 + 54) = DxgkMapMdlToIoMmuCB;
  *((_QWORD *)v31 + 55) = DxgkUnmapMdlFromIoMmuCB;
  *((_QWORD *)v31 + 56) = DxgkCbReportDiagnostic;
  *((_QWORD *)v31 + 41) = DxgkInvalidateHwContextCB;
  *((_QWORD *)v31 + 57) = DxgkSignalEventCB;
  *((_QWORD *)v31 + 58) = DpIsFeatureEnabled;
  *((_QWORD *)v31 + 59) = DpSaveMemoryForHotUpdateCB;
  v197[0] = 32;
  v34 = DeviceExtension + 2684;
  *(_OWORD *)&v197[1] = *((_OWORD *)DeviceExtension + 166);
  *(_QWORD *)&v197[5] = *((_QWORD *)DeviceExtension + 334);
  qword_1C00B0E70 = (__int64)KeGetCurrentThread();
  qword_1C00B0E78 = (__int64)a1;
  started = (int)DpiDxgkDdiStartDevice(
                   v11,
                   *((_QWORD *)DeviceExtension + 6),
                   (unsigned int)v197,
                   (_DWORD)v31,
                   (__int64)(DeviceExtension + 2684),
                   (__int64)(DeviceExtension + 2680));
  ExFreePoolWithTag(v31, 0x74727044u);
  qword_1C00B0E78 = 0LL;
  qword_1C00B0E70 = 0LL;
  if ( (int)started < 0 )
  {
    v113 = WdLogNewEntry5_WdError(v36, v35);
    *(_QWORD *)(v113 + 24) = *(_QWORD *)(v11 + 152);
    *(_QWORD *)(v113 + 32) = started;
    WdLogEvent5_WdError(v113);
    if ( (_DWORD)started != -1071775735 )
    {
      if ( (_DWORD)started == -1071774944 && DeviceExtension[1152] )
      {
        v117 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v115, v114);
        v117[3] = 275LL;
        v117[4] = 26LL;
        v117[5] = v11;
        v118 = (unsigned __int8)byte_1C00B0B16;
        v117[7] = 0LL;
        v117[6] = v118;
        WdLogEvent5_WdCriticalError(v117);
      }
      goto LABEL_124;
    }
    v183 = 0LL;
    if ( !DeviceExtension[1152] )
    {
LABEL_124:
      v47 = P;
      goto LABEL_74;
    }
    DevicePropertyString = DpiGetDevicePropertyString(
                             *((PDEVICE_OBJECT *)DeviceExtension + 19),
                             DevicePropertyHardwareID,
                             PagedPool,
                             &v183,
                             &v179);
    v101 = DevicePropertyString;
    if ( DevicePropertyString >= 0 )
    {
      WdDiagNotifyUser(8LL, 5LL, 1LL, &v183);
      if ( v183 )
        ExFreePoolWithTag(v183, 0);
      goto LABEL_124;
    }
LABEL_122:
    v99 = WdLogNewEntry5_WdError(v42, v20);
    *(_QWORD *)(v99 + 24) = v101;
    goto LABEL_123;
  }
  if ( DeviceExtension[1152] )
  {
    xmmword_1C00B0DD8 = 0LL;
    DWORD2(xmmword_1C00B0DD8) = -1;
    xmmword_1C00B0DC8 = 0LL;
    memset(&xmmword_1C00B0DE8, 0, 0x80uLL);
    dword_1C00B0E68 = 3;
  }
  if ( !*((_DWORD *)DeviceExtension + 672) && *v34 > 1u )
  {
    v119 = WdLogNewEntry5_WdWarning(v36, v35, v37);
    *(_QWORD *)(v119 + 24) = (unsigned int)*v34;
    WdLogEvent5_WdWarning(v119);
    *v34 = 1;
  }
  v176 = 1;
  if ( !v9 )
  {
    v47 = 0LL;
    goto LABEL_62;
  }
  if ( *(_DWORD *)(v9 + 2680) )
  {
    v38 = DpiFdoEnumChildDevices(a1);
    started = v38;
    if ( v38 < 0 )
      goto LABEL_138;
  }
  v39 = (_BYTE *)(v9 + 3904);
  v40 = DxgkAddAdapter(a1, v189, (struct _DXGK_ADAPTER_CAPS *)(v9 + 3904), v181);
  started = v40;
  if ( v40 < 0 )
    goto LABEL_138;
  v41 = *(_QWORD *)(v9 + 3896);
  if ( v41 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v41 + 24));
  }
  else
  {
    v120 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v120 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v120);
  }
  v173 = 1;
  *(_BYTE *)(v9 + 2743) = DXGADAPTER::IsAdapterSessionized(
                            *(DXGADAPTER **)(v9 + 3896),
                            v20,
                            0LL,
                            (unsigned __int64 *)(v9 + 5936));
  v44 = *(_DWORD *)(v9 + 2684);
  if ( v44 )
  {
    v45 = (unsigned int *)ExAllocatePoolWithTag((POOL_TYPE)(v43 + 1), 4LL * v44, 0x74727044u);
    P = v45;
    if ( v45 )
    {
      LOBYTE(v28) = *(_BYTE *)(v9 + 2743);
      v46 = DxgkAcquireGdiViewIds(v28, *(_QWORD *)(v9 + 5936), v9 + 2684, v45);
      v47 = 0LL;
      started = v46;
      if ( v46 < 0 )
      {
        v121 = WdLogNewEntry5_WdError(v42, v20);
        *(_QWORD *)(v121 + 24) = started;
        WdLogEvent5_WdError(v121);
        ExFreePoolWithTag(P, 0);
        P = 0LL;
        goto LABEL_74;
      }
      goto LABEL_32;
    }
LABEL_141:
    LODWORD(started) = -1073741670;
    v112 = WdLogNewEntry5_WdLowResource(v28, v27, v29, v30);
    *(_QWORD *)(v112 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v112);
    goto LABEL_124;
  }
LABEL_32:
  LOBYTE(v42) = *(_BYTE *)(v9 + 3905) ^ (*(_BYTE *)(v9 + 3905) ^ (2 * *(_BYTE *)(v9 + 3905))) & 8;
  *(_BYTE *)(v9 + 3905) = v42;
  v48 = v42;
  if ( (v42 & 4) != 0 && (!*(_QWORD *)(v11 + 1128) || !*(_QWORD *)(v11 + 1136)) )
  {
    v122 = WdLogNewEntry5_WdError(v42, v20);
    *(_QWORD *)(v122 + 24) = (int)started;
    WdLogEvent5_WdError(v122);
    *(_BYTE *)(v9 + 3905) &= ~8u;
    v48 = *(_BYTE *)(v9 + 3905);
    LOBYTE(v42) = v48;
  }
  LOBYTE(v20) = v42;
  if ( (*v39 & 1) != 0 && *(int *)(v9 + 3912) >= 0x2000 && !*(_BYTE *)(v9 + 1158) )
  {
    if ( (v48 & 8) != 0 )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_HPDWakeFiltering__private_reporting,
        0x10C5B21u,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_TrackedWorkload_logged_traits,
        0,
        v171);
    }
    else
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_LegacyHPDFiltering__private_reporting,
        0xEF666Fu,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
        1,
        v171);
      *(_BYTE *)(v9 + 3905) |= 0x10u;
    }
    LOBYTE(v20) = *(_BYTE *)(v9 + 3905);
  }
  if ( ((unsigned __int8)v20 & 8) == 0 && !*(_QWORD *)(v11 + 208)
    || *(_BYTE *)(v9 + 2697) && ((unsigned __int8)v20 & 0x20) == 0 )
  {
    v101 = -1073741735LL;
    LODWORD(started) = -1073741735;
    goto LABEL_122;
  }
  if ( qword_1C00B0B28 )
  {
    if ( *(_BYTE *)(v9 + 2692) && ((unsigned __int8)v20 & 1) != 0 )
    {
      v123 = (_BYTE)word_1C00B0B1D == 0;
LABEL_173:
      if ( !v123 )
        goto LABEL_41;
      goto LABEL_174;
    }
  }
  else
  {
    if ( ((unsigned __int8)v20 & 1) != 0 )
    {
LABEL_174:
      qword_1C00B0B28 = (__int64)a1;
      goto LABEL_41;
    }
    if ( DpiHybridInternalPanelOverride() && (*v39 & 0x20) != 0 && *(_BYTE *)(v9 + 1152) )
    {
      v123 = (*v39 & 0x40) == 0;
      goto LABEL_173;
    }
  }
LABEL_41:
  if ( (*v39 & 0x40) != 0 )
  {
    v42 = qword_1C00B0B20;
    if ( qword_1C00B0B20 && (struct _DEVICE_OBJECT *)qword_1C00B0B20 != a1 )
    {
      if ( !*(_BYTE *)(v9 + 2692) || (_BYTE)word_1C00B0B1D )
      {
        *v39 &= ~0x40u;
        goto LABEL_42;
      }
      *(_BYTE *)(*(_QWORD *)(qword_1C00B0B20 + 64) + 3904LL) &= ~0x40u;
    }
    qword_1C00B0B20 = (__int64)a1;
    HIBYTE(word_1C00B0B1D) = (*(_BYTE *)(v9 + 3905) & 2) != 0;
  }
LABEL_42:
  if ( qword_1C00B0B28 )
  {
    v20 = (struct _LUID *)qword_1C00B0B20;
    if ( qword_1C00B0B20 )
    {
      if ( !(_BYTE)word_1C00B0B1D )
      {
        LOBYTE(v42) = *(_BYTE *)(*(_QWORD *)(qword_1C00B0B28 + 64) + 2692LL);
        if ( *(_BYTE *)(*(_QWORD *)(qword_1C00B0B20 + 64) + 2692LL) )
        {
          if ( !(_BYTE)v42 )
            goto LABEL_186;
        }
        else if ( (_BYTE)v42 )
        {
LABEL_186:
          LOBYTE(word_1C00B0B1D) = 0;
          goto LABEL_43;
        }
        LOBYTE(word_1C00B0B1D) = 1;
        *((_BYTE *)DXGGLOBAL::GetGlobal(v42, qword_1C00B0B20) + 761) = 1;
      }
    }
  }
LABEL_43:
  v21 = v190;
  if ( v190 )
  {
    *v190 = *(_QWORD *)v39;
    *((_DWORD *)v21 + 2) = *(_DWORD *)(v9 + 3912);
  }
  if ( *(_BYTE *)(v9 + 1152) && (*v39 & 1) == 0 && !DeviceExtension[2695] )
  {
    started = -1071775740LL;
LABEL_138:
    v99 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v99 + 24) = started;
LABEL_123:
    WdLogEvent5_WdError(v99);
    goto LABEL_124;
  }
  if ( *(_DWORD *)(v9 + 3480) )
  {
    v49 = *(_QWORD *)(v9 + 48);
    v50 = *(_QWORD *)(v9 + 40);
    v193 = 0LL;
    LODWORD(v193) = 67108861;
    v194 = 0LL;
    v51 = DpiDxgkDdiDisplayDetectControl(v9, v50, v49, (unsigned int *)&v193);
    started = v51;
    if ( v51 < 0 )
    {
      v99 = WdLogNewEntry5_WdError(v53, v52);
      v100 = *(_QWORD *)(v11 + 1128);
      goto LABEL_120;
    }
  }
  v47 = P;
  RelatedObjects = DpiFdoCreateRelatedObjects(a1, *(unsigned int *)(v9 + 2684), P, v181);
  started = RelatedObjects;
  if ( RelatedObjects < 0 )
    goto LABEL_126;
  if ( (*v39 & 1) != 0 && (int)DpiAcquireCoreSyncAccessSafe((__int64)a1, 1) >= 0 )
  {
    MonitorInitializeAdapterDone(*(DXGADAPTER **)(v9 + 3896));
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
  }
  v172 = 1;
  if ( *(_DWORD *)(v9 + 3224) != -1 )
  {
    Caps = DpiMiracastDdiMiracastQueryCaps(v9, v13, v9 + 3216);
    v91 = Caps;
    if ( Caps < 0 )
    {
      v124 = WdLogNewEntry5_WdEvent(v90, v89);
      *(_QWORD *)(v124 + 24) = v91;
      WdLogEvent5_WdEvent(v124);
      *(_DWORD *)(v9 + 3224) = -1;
      memset((void *)(v9 + 3152), 0, 0x40uLL);
    }
  }
  v55 = DpiOpenPnpRegistryKey((__int64)a1, 2u, 0x20019u, &Handle);
  v58 = v55;
  if ( v55 < 0 )
  {
    v125 = WdLogNewEntry5_WdEvent(v57, v56);
    *(_QWORD *)(v125 + 24) = v58;
    WdLogEvent5_WdEvent(v125);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"MiracastDriverName");
    if ( DxgkRetrieveStringFromRegistry(Handle, &DestinationString, v9 + 4920) < 0 )
    {
      v61 = WdLogNewEntry5_WdEvent(v60, v59);
      *(_QWORD *)(v61 + 24) = DxgkRetrieveStringFromRegistry;
      WdLogEvent5_WdEvent(v61);
    }
    ZwClose(Handle);
  }
  v64 = *(_QWORD *)(v9 + 4936);
  if ( v64 )
  {
    v126 = *(_QWORD *)(v9 + 4936);
    if ( *(_QWORD *)(v64 + 48) && *(_BYTE *)v64 )
    {
      *(_BYTE *)v64 = 0;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      {
        LODWORD(v170) = *(unsigned __int8 *)(*(_QWORD *)(v9 + 4936) + 2LL);
        McTemplateK0pt_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          &EventDpiFdoThermalActiveCooling,
          v63,
          a1,
          v170);
      }
      v127 = *(_QWORD *)(v9 + 4936);
      LOBYTE(v62) = *(_BYTE *)(v127 + 2);
      (*(void (__fastcall **)(_QWORD, __int64))(v127 + 48))(*(_QWORD *)(v127 + 16), v62);
      v126 = *(_QWORD *)(v9 + 4936);
    }
    if ( *(_QWORD *)(v126 + 56) && *(_BYTE *)(v126 + 1) )
    {
      *(_BYTE *)(v126 + 1) = 0;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      {
        LODWORD(v170) = *(_DWORD *)(*(_QWORD *)(v9 + 4936) + 4LL);
        McTemplateK0pq_EtwWriteTransfer((unsigned int)v170, &EventDpiFdoThermalPassiveCooling, v63, a1, v170);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v9 + 4936) + 56LL))(
        *(_QWORD *)(*(_QWORD *)(v9 + 4936) + 16LL),
        *(unsigned int *)(*(_QWORD *)(v9 + 4936) + 4LL));
    }
  }
  v65 = DpiFdoInitializeGpuVirtualization((__int64)a1, v62, v63);
  started = v65;
  if ( v65 < 0 )
    goto LABEL_126;
  if ( *(_BYTE *)(v9 + 482) )
  {
    DXGADAPTER::StartRuntimePowerManagement(*(DXGADAPTER **)(v9 + 3896));
    if ( *(_BYTE *)(v9 + 5736) )
    {
      v128 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 5720), 1u);
      started = v128;
      if ( v128 < 0 )
        goto LABEL_126;
    }
  }
  if ( !*(_BYTE *)(v9 + 480) )
  {
    v92 = *(_DWORD *)(v9 + 3484);
    if ( v92 != -1 )
      LPMDisplayRegisterInternalDisplay(*(void **)(v9 + 3896), v92);
  }
  DpiBrightnessStartDevice(a1);
  DpiFdoInitializeMipiDsi((__int64)a1);
  DpiFdoInitializeDP((__int64)a1);
  DpiFdoInitializeDisplayDiagnostics((__int64)a1);
LABEL_62:
  v66 = DpiFdoOpenDeviceFileObjectIfNeeded(DeviceExtension);
  started = v66;
  if ( v66 < 0 )
  {
LABEL_210:
    v131 = WdLogNewEntry5_WdError(v68, v67);
    *(_QWORD *)(v131 + 24) = started;
    WdLogEvent5_WdError(v131);
    v172 = v173;
    goto LABEL_74;
  }
  DxgkMiracastQueryMiracastSupportInternal(0LL);
  v70 = *((_DWORD *)DeviceExtension + 69) & 7;
  *(_DWORD *)&DeviceExtension[4 * v70 + 244] = *((_DWORD *)DeviceExtension + 60);
  v71 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  *((_DWORD *)DeviceExtension + 60) = v71;
  *((_DWORD *)DeviceExtension + 59) = 2;
  if ( v9 && v47 )
  {
    v72 = *(_QWORD *)(v9 + 5936);
    if ( *(_BYTE *)(v9 + 2743) )
    {
      Global = DXGGLOBAL::GetGlobal(v70, v69);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         *((DXGSESSIONMGR **)Global + 102),
                                         (unsigned int)v72);
      if ( !SessionDataForSpecifiedSession )
      {
        v129 = WdLogNewEntry5_WdError(v135, v134);
        *(_QWORD *)(v129 + 24) = (unsigned int)v72;
        *(_QWORD *)(v129 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v129);
LABEL_209:
        v130 = *((_DWORD *)DeviceExtension + 60);
        --*((_DWORD *)DeviceExtension + 69);
        *((_DWORD *)DeviceExtension + 59) = v130;
        *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7)
                                                                      + 244];
        goto LABEL_210;
      }
      v73 = DXGSESSIONDATA::CommitSessionGdiViewIds(SessionDataForSpecifiedSession);
    }
    else
    {
      v73 = DMgrWriteDeviceCountToRegistry();
    }
    if ( v73 >= 0 )
      goto LABEL_68;
    goto LABEL_209;
  }
LABEL_68:
  v172 = v173;
  if ( v9 )
  {
    v74 = !*(_BYTE *)(v9 + 1154) || !*(_BYTE *)(v9 + 480);
    v75 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2744), v74);
    started = v75;
    if ( v75 < 0 )
    {
      v136 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v136;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
      v137 = WdLogNewEntry5_WdError(v77, v76);
      *(_QWORD *)(v137 + 24) = started;
      WdLogEvent5_WdError(v137);
    }
    else
    {
      v178 = 1;
    }
    v172 = v173;
  }
LABEL_74:
  v78 = 0;
  if ( v9 )
    v78 = (*(unsigned __int8 *)(v9 + 3904) >> 1) & 0x21 | (2
                                                         * (*(_BYTE *)(v9 + 3904) & 1 | (2
                                                                                       * (*(_BYTE *)(v9 + 480) & 1 | (2 * (*(_BYTE *)(v9 + 1152) & 1 | (2 * (*(_BYTE *)(v9 + 2692) & 1 | (4 * (*(_BYTE *)(v9 + 3904) & 0x84 | *(_BYTE *)(v9 + 3905) & 1 | (2 * (*(_BYTE *)(v9 + 3904) & 0x38 | (*(_DWORD *)(v9 + 504) != 0 ? 4 : 0) | *(_BYTE *)(v9 + 1158) & 1))))))))))));
  if ( (int)started < 0 )
  {
    v138 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
    DeviceExtension[232] = 1;
    IoInvalidateDeviceState(v138);
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
    {
      v139 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v139;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
    }
    if ( v9 )
    {
      if ( v178 == 1 )
        IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2744), 0);
      DpiFdoCleanupGpuVirtualization(v9);
      DpiFdoCleanupMipiDsi(v9);
      DpiFdoCleanupDP((_QWORD *)v9);
      DpiFdoCleanupDisplayDiagnostics(v9);
      if ( v172 == 1 )
        DpiFdoDestroyRelatedObjects(a1, v181);
      if ( v47 )
      {
        v142 = *(_DWORD *)(v9 + 2684);
        if ( v142 )
        {
          do
          {
            --v142;
            LOBYTE(v140) = *(_BYTE *)(v9 + 2743);
            LOBYTE(v141) = 1;
            DxgkReleaseGdiViewId(v140, *(_QWORD *)(v9 + 5936), P[v142], v141);
          }
          while ( v142 );
          v11 = v191;
        }
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C00B0B20 == a1 )
      {
        qword_1C00B0B20 = 0LL;
        word_1C00B0B1D = 0;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C00B0B28 == a1 )
      {
        LOBYTE(word_1C00B0B1D) = 0;
        qword_1C00B0B28 = 0LL;
      }
      if ( v173 == 1 )
      {
        if ( *((_QWORD *)DeviceExtension + 61) )
        {
          PoFxUnregisterDevice();
          *(_QWORD *)(*(_QWORD *)(v9 + 3896) + 2808LL) = 0LL;
          *((_QWORD *)DeviceExtension + 61) = 0LL;
        }
        v143 = *(DXGADAPTER **)(v9 + 3896);
        if ( v143 && *((_DWORD *)v143 + 50) != 2 && *((_DWORD *)v143 + 50) != 4 )
          DXGADAPTER::Stop(v143, 0, 0);
        DxgkReleaseAdapterFdoReference(*(_QWORD *)(v9 + 3896));
        *(_QWORD *)(v9 + 3896) = 0LL;
      }
      DpiFdoRemoveChildDescriptors(a1);
    }
    if ( v176 == 1 && v11 )
    {
      if ( !DeviceExtension[1152] )
        goto LABEL_247;
      v179 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      v144 = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x74727044u);
      v145 = v144;
      if ( v144 )
      {
        memset(v144, 0, 0x48uLL);
        v146 = v179;
        v145[8] = *((_QWORD *)DeviceExtension + 334);
        *(_DWORD *)v145 = 30;
        *((_DWORD *)v145 + 1) = 72;
        *((_DWORD *)v145 + 12) = 98;
        *((_DWORD *)v145 + 13) = 1;
        *((_DWORD *)v145 + 14) = v146;
        if ( v9 )
          v147 = *(_QWORD *)(v9 + 5936);
        else
          v147 = 0x200000000LL;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v145, v147);
        ExFreePoolWithTag(v145, 0x74727044u);
      }
      if ( v179 < 0 )
      {
LABEL_247:
        if ( v9 )
          *(_BYTE *)(v9 + 3904) &= ~4u;
        DpiDxgkDdiStopDevice(v11, *((_QWORD *)DeviceExtension + 6));
      }
    }
    if ( v174 == 1 )
      DpiFdoDisconnectInterrupt(a1);
    v175 = 1;
    if ( v176 )
      goto LABEL_260;
    if ( !*(_QWORD *)(v11 + 1344) )
      goto LABEL_260;
    DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(2LL);
    v149 = DiagnosticInfoArgs;
    if ( !DiagnosticInfoArgs )
      goto LABEL_260;
    *(_QWORD *)DiagnosticInfoArgs = *((_QWORD *)DeviceExtension + 6);
    v150 = *((_QWORD *)DeviceExtension + 19);
    v179 = *(_DWORD *)(DiagnosticInfoArgs + 216);
    if ( (*(int (__fastcall **)(__int64, __int64))(v11 + 1344))(v150, DiagnosticInfoArgs) >= 0 )
    {
      if ( *(_DWORD *)(v149 + 220) > (unsigned int)v179 )
        *(_DWORD *)(v149 + 220) = 0;
      DxgCreateLiveDumpWithDriverBlob(
        *((struct _DEVICE_OBJECT **)DeviceExtension + 19),
        0x1B0u,
        *(int *)(v149 + 8),
        (int)started,
        v78,
        *(_QWORD *)(v11 + 152),
        (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v149);
      v175 = 0;
    }
    DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v149);
    if ( v175 )
    {
LABEL_260:
      if ( v11 )
        v151 = *(_QWORD *)(v11 + 152);
      else
        v151 = 0LL;
      DxgCreateLiveDumpWithWdLogs(0x193u, 0x804uLL, (int)started, v78, v151, 0);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( DeviceExtension[1154] && DeviceExtension[1152] )
    NotifyUserMSBDAIfApplicable();
  v79 = 0LL;
  v179 = 0;
  if ( v9 )
  {
    if ( DeviceExtension[1158] )
    {
      v152 = *(_QWORD *)(v9 + 1008);
      if ( v152 )
      {
        v153 = *(__int64 (__fastcall **)(__int64, _QWORD))(v9 + 1064);
        if ( v153 )
        {
          v154 = v153(v152, (unsigned int)started);
          v157 = v154;
          if ( v154 < 0 )
          {
            v158 = WdLogNewEntry5_WdError(v156, v155);
            *(_QWORD *)(v158 + 24) = *(_QWORD *)(v9 + 1064);
            *(_QWORD *)(v158 + 32) = v157;
            WdLogEvent5_WdError(v158);
          }
        }
        v159 = *(__int64 (__fastcall **)(__int64, __int128 *))(v9 + 1080);
        if ( v159 )
        {
          v196 = 0LL;
          v160 = *(_QWORD *)(v9 + 1008);
          v195 = 0LL;
          v161 = v159(v160, &v195);
          v164 = v161;
          if ( v161 < 0 )
          {
            v165 = WdLogNewEntry5_WdError(v163, v162);
            *(_QWORD *)(v165 + 24) = *(_QWORD *)(v9 + 1080);
            *(_QWORD *)(v165 + 32) = v164;
            WdLogEvent5_WdError(v165);
          }
          else
          {
            v79 = *((_QWORD *)&v195 + 1);
            *(_DWORD *)(v9 + 1164) = DWORD1(v195);
            v179 = v196;
          }
        }
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v9 + 152), PowerRelations);
      }
    }
    v80 = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x74727044u);
    v81 = v80;
    if ( v80 )
    {
      memset(v80, 0, 0x60uLL);
      *v81 = 41;
      v81[1] = 96;
      v81[13] = (unsigned int)a1 & 0xFFFF00;
      v81[12] = started;
      *((_QWORD *)v81 + 7) = *((_QWORD *)DeviceExtension + 334);
      v81[16] = DxgkDiagCalcDuration1us(&v185);
      v81[17] = *(_DWORD *)(v9 + 3912);
      v81[22] = v179;
      v81[18] = v78;
      *((_QWORD *)v81 + 10) = v79;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v81, *(_QWORD *)(v9 + 5936));
      ExFreePoolWithTag(v81, 0x74727044u);
    }
    if ( DeviceExtension[1152] )
    {
      if ( qword_1C00B0DC0 )
      {
        v93 = *(_QWORD *)(qword_1C00B0DC0 + 64);
        if ( v93 )
        {
          v94 = *(_QWORD *)(v93 + 40);
          if ( v94 )
          {
            if ( *(_QWORD *)(v94 + 408) )
              SendBDDDiagTelemetry(v93);
          }
        }
      }
    }
  }
  else
  {
    v166 = (char *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x74727044u);
    v167 = v166;
    if ( v166 )
    {
      memset(v166, 0, 0x40uLL);
      v168 = DxgkDiagCalcDuration1us(&v185);
      *((_DWORD *)v167 + 10) = 0;
      *((_QWORD *)v167 + 4) = 0LL;
      *(_DWORD *)v167 = 6;
      *((_DWORD *)v167 + 1) = 64;
      *(_OWORD *)(v167 + 8) = 0LL;
      *((_QWORD *)v167 + 3) = 0LL;
      *((_DWORD *)v167 + 12) = 35;
      *((_DWORD *)v167 + 13) = (unsigned int)a1 & 0xFFFF00;
      *((_DWORD *)v167 + 14) = v168;
      *((_DWORD *)v167 + 15) = started;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v167, 0x200000000LL);
      ExFreePoolWithTag(v167, 0x74727044u);
    }
  }
  return (unsigned int)started;
}
