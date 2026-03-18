/*
 * XREFs of DpiFdoStartAdapter @ 0x1C01FB06C
 * Callers:
 *     DpiFdoStartNonLdaAdapter @ 0x1C01F5830 (DpiFdoStartNonLdaAdapter.c)
 *     DpiLdaStartAdapterInChain @ 0x1C0396848 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     DxgkDiagCalcDuration1us @ 0x1C0024A38 (DxgkDiagCalcDuration1us.c)
 *     DpiFdoInitializeMipiDsi @ 0x1C0026160 (DpiFdoInitializeMipiDsi.c)
 *     DpiFdoCleanupMipiDsi @ 0x1C00261F4 (DpiFdoCleanupMipiDsi.c)
 *     DpiFdoInitializeDP @ 0x1C002621C (DpiFdoInitializeDP.c)
 *     DpiFdoInitializeDisplayDiagnostics @ 0x1C00262E8 (DpiFdoInitializeDisplayDiagnostics.c)
 *     SendBDDDiagTelemetry @ 0x1C002A430 (SendBDDDiagTelemetry.c)
 *     ?DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z @ 0x1C002ABD0 (-DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiFdoCleanupDisplayDiagnostics @ 0x1C002B080 (DpiFdoCleanupDisplayDiagnostics.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0044CF4 (McTemplateK0pt_EtwWriteTransfer.c)
 *     DpiHybridInternalPanelOverride @ 0x1C005FE84 (DpiHybridInternalPanelOverride.c)
 *     NotifyUserMSBDAIfApplicable @ 0x1C00604F4 (NotifyUserMSBDAIfApplicable.c)
 *     DpiFdoCleanupDP @ 0x1C0060624 (DpiFdoCleanupDP.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01B40A0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C01B445C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01DCED0 (DpiOpenPnpRegistryKey.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C01EECBC (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C01F3488 (DpiDxgkDdiDisplayDetectControl.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C01F7F8C (DpiFdoInitializeGpuVirtualization.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01F9868 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiQueryMiniportInterface @ 0x1C01FA410 (DpiQueryMiniportInterface.c)
 *     DpiGetDevicePropertyString @ 0x1C01FAF64 (DpiGetDevicePropertyString.c)
 *     DpiFdoOpenDeviceFileObjectIfNeeded @ 0x1C01FBED0 (DpiFdoOpenDeviceFileObjectIfNeeded.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C01FBF08 (DpiFdoCreateRelatedObjects.c)
 *     DxgkAddAdapter @ 0x1C01FC084 (DxgkAddAdapter.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C01FE9D0 (DxgkRetrieveStringFromRegistry.c)
 *     DpiFdoEnumChildDevices @ 0x1C020E59C (DpiFdoEnumChildDevices.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C0215198 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     MonitorInitializeAdapterDone @ 0x1C0218564 (MonitorInitializeAdapterDone.c)
 *     DpiFdoConnectInterrupt @ 0x1C02198D8 (DpiFdoConnectInterrupt.c)
 *     DpiDxgkDdiStartDevice @ 0x1C0219A50 (DpiDxgkDdiStartDevice.c)
 *     DxgkAcquireGdiViewIds @ 0x1C021AD08 (DxgkAcquireGdiViewIds.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C021BD54 (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x1C021BDC0 (DpiMiracastDdiMiracastQueryCaps.c)
 *     DpiKsrIsSoftBoot @ 0x1C021BECC (DpiKsrIsSoftBoot.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C02BE1F8 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C02C5358 (DxgkReleaseAdapterFdoReference.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C02CE778 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02CE860 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C02CEAA0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C02CECB4 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     ?CommitSessionGdiViewIds@DXGSESSIONDATA@@QEAAJXZ @ 0x1C034795C (-CommitSessionGdiViewIds@DXGSESSIONDATA@@QEAAJXZ.c)
 *     DxgkReleaseGdiViewId @ 0x1C03496C8 (DxgkReleaseGdiViewId.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C0388D24 (DpiFdoCleanupGpuVirtualization.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0389018 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C03890C0 (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C038B16C (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C038BB74 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiKsrGetSavedAdapterState @ 0x1C03940D8 (DpiKsrGetSavedAdapterState.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1C039431C (DpiKsrRestoreAdapterDriverState.c)
 *     DpiDxgkDdiStopDevice @ 0x1C039727C (DpiDxgkDdiStopDevice.c)
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
  char *DeviceExtension; // r15
  __int64 v11; // r12
  int v12; // eax
  __int64 started; // r14
  NTSTATUS LocallyUniqueId; // eax
  int v15; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ecx
  int v21; // eax
  _DWORD *v22; // rdi
  int v23; // eax
  _BYTE *v24; // rbx
  int v25; // eax
  struct _LUID *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // eax
  PVOID v31; // rax
  __int64 v32; // rcx
  int v33; // eax
  char v34; // cl
  char v35; // dl
  _QWORD *v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  int v39; // eax
  PVOID v40; // rdi
  int RelatedObjects; // eax
  __int64 v42; // rdx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  __int64 v50; // rbx
  int v51; // eax
  BOOLEAN v52; // dl
  NTSTATUS v53; // eax
  unsigned __int64 v54; // rdi
  __int64 v55; // rbx
  __int64 v56; // rcx
  __int64 v57; // r8
  unsigned int v58; // eax
  bool v59; // cf
  bool v60; // zf
  int Caps; // eax
  __int64 v62; // rcx
  unsigned int v63; // ebx
  __int64 v64; // rdi
  _DWORD *v65; // rax
  _DWORD *v66; // r12
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 (__fastcall *v70)(_QWORD, _QWORD, __int64); // rax
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // r8
  int SavedAdapterState; // eax
  int v77; // edx
  int DevicePropertyString; // eax
  int v79; // eax
  bool v80; // zf
  char v81; // cl
  __int64 v82; // rcx
  __int64 v83; // rcx
  NTSTATUS v84; // eax
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int v87; // eax
  struct _DEVICE_OBJECT *v88; // rcx
  __int64 v89; // rdx
  int v90; // eax
  __int64 v91; // rcx
  __int64 v92; // r9
  unsigned int *v93; // r15
  int v94; // r12d
  DXGADAPTER *v95; // rcx
  _QWORD *v96; // rax
  _QWORD *v97; // r12
  int v98; // eax
  __int64 v99; // rdx
  __int64 DiagnosticInfoArgs; // rax
  __int64 v101; // r12
  __int64 v102; // rcx
  __int64 v103; // rcx
  __int64 (__fastcall *v104)(__int64, _QWORD); // rax
  int v105; // eax
  __int64 (__fastcall *v106)(__int64, __int128 *); // rax
  __int64 v107; // rcx
  int v108; // eax
  char *v109; // rax
  char *v110; // rbx
  int v111; // eax
  unsigned __int64 v112; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v113; // [rsp+20h] [rbp-E0h]
  char v114; // [rsp+50h] [rbp-B0h]
  char v115; // [rsp+51h] [rbp-AFh]
  char v116; // [rsp+52h] [rbp-AEh]
  char v117; // [rsp+52h] [rbp-AEh]
  char v118; // [rsp+53h] [rbp-ADh]
  char v119; // [rsp+54h] [rbp-ACh]
  int v120; // [rsp+58h] [rbp-A8h] BYREF
  char v121; // [rsp+5Ch] [rbp-A4h]
  PVOID P; // [rsp+60h] [rbp-A0h]
  __int64 v123; // [rsp+68h] [rbp-98h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v124; // [rsp+70h] [rbp-90h]
  union _LARGE_INTEGER Interval; // [rsp+78h] [rbp-88h] BYREF
  PVOID v126; // [rsp+80h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-78h] BYREF
  __int64 v128; // [rsp+90h] [rbp-70h] BYREF
  int v129; // [rsp+98h] [rbp-68h] BYREF
  __int64 v130; // [rsp+A0h] [rbp-60h]
  char v131; // [rsp+A8h] [rbp-58h]
  __int64 v132; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v133; // [rsp+B8h] [rbp-48h] BYREF
  void *v134; // [rsp+C0h] [rbp-40h]
  _QWORD *v135; // [rsp+C8h] [rbp-38h]
  char *v136; // [rsp+D0h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v138; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v139; // [rsp+F8h] [rbp-8h]
  __int128 v140; // [rsp+100h] [rbp+0h] BYREF
  __int64 v141; // [rsp+110h] [rbp+10h]
  _OWORD v142[2]; // [rsp+118h] [rbp+18h] BYREF
  _OWORD v143[2]; // [rsp+138h] [rbp+38h] BYREF

  v135 = a7;
  v7 = a2;
  Handle = 0LL;
  v9 = 0LL;
  memset(v142, 0, 28);
  v124 = a4;
  DestinationString = 0LL;
  v134 = a3;
  v121 = a2;
  DeviceExtension = (char *)a1->DeviceExtension;
  v116 = 0;
  v119 = 0;
  v115 = 0;
  v60 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  v11 = *((_QWORD *)DeviceExtension + 5);
  v123 = v11;
  v114 = 0;
  v118 = 0;
  P = 0LL;
  v128 = MEMORY[0xFFFFF78000000320];
  v136 = DeviceExtension;
  if ( v60 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v9 = (__int64)DeviceExtension;
    if ( *(_BYTE *)(v11 + 134)
      && (int)DpiQueryMiniportInterface(
                *((_QWORD *)DeviceExtension + 3),
                (__int64)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
                112,
                3,
                v112,
                (__int64)(DeviceExtension + 1000)) >= 0 )
    {
      if ( a6 )
      {
        v70 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))*((_QWORD *)DeviceExtension + 131);
        if ( v70 )
        {
          v71 = v70(*((_QWORD *)DeviceExtension + 126), a5, a6);
          LODWORD(started) = v71;
          if ( v71 < 0 )
          {
            WdLogSingleEntry2(2LL, *((_QWORD *)DeviceExtension + 131), v71);
            goto LABEL_105;
          }
        }
      }
    }
    else
    {
      memset(DeviceExtension + 1000, 0, 0x70uLL);
    }
    v7 = v121;
    *((_DWORD *)DeviceExtension + 996) = 0;
  }
  v12 = DpiFdoConnectInterrupt(a1);
  started = v12;
  if ( v12 == -1073741275 )
  {
    WdLogSingleEntry1(4LL, a1);
  }
  else
  {
    if ( v12 < 0 )
    {
LABEL_132:
      v72 = started;
      goto LABEL_134;
    }
    v116 = 1;
  }
  if ( DeviceExtension[1152] == 1 )
  {
    if ( DeviceExtension[1156] == 1
      && v7
      && byte_1C0130495
      && !(unsigned __int8)DpiFdoIsCompatibleWithHighResolutionBoot(a1) )
    {
      v129 = -1;
      v130 = 0LL;
      if ( (qword_1C012F870 & 2) != 0 )
      {
        v131 = 1;
        v129 = 8006;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v56, &EventProfilerEnter, v57, 8006);
      }
      else
      {
        v131 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v129, 8006);
      memset(v143, 0, sizeof(v143));
      LODWORD(v143[0]) = 18;
      x86BiosCall(16LL, v143);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v129);
      if ( v131 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v74, &EventProfilerExit, v75, v129);
    }
    if ( v9 )
    {
      v58 = *(_DWORD *)(v11 + 28);
      if ( byte_1C0130495 )
      {
        v59 = v58 < 0x300E;
        v60 = v58 == 12302;
      }
      else
      {
        v59 = v58 < 0x2005;
        v60 = v58 == 8197;
      }
      *(_BYTE *)(v9 + 3904) = *(_BYTE *)(v9 + 3904) & 0xFB | (4 * (!v59 && !v60));
    }
  }
  while ( 1 )
  {
    Interval.QuadPart = 0LL;
    LODWORD(started) = ExUuidCreate((UUID *)DeviceExtension + 166);
    if ( (int)started >= 0 )
    {
      LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)DeviceExtension + 334);
      started = LocallyUniqueId;
      if ( LocallyUniqueId < 0 )
        goto LABEL_132;
      if ( v9 )
      {
        if ( (unsigned __int8)DpiKsrIsSoftBoot() )
        {
          SavedAdapterState = DpiKsrRestoreAdapterDriverState((struct _FDO_CONTEXT *)v9);
          if ( SavedAdapterState < 0
            || (v120 = 0,
                v133 = 0LL,
                SavedAdapterState = DpiKsrGetSavedAdapterState(a1, &v120, &v133),
                SavedAdapterState < 0) )
          {
            WdLogSingleEntry1(2LL, SavedAdapterState);
          }
        }
        v15 = DpiFdoSetAdapterLuid((struct _FDO_CONTEXT *)v9);
        if ( v15 < 0 )
          WdLogSingleEntry1(2LL, v15);
      }
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x238uLL, 0x74727044u);
      v17 = PoolWithTag;
      if ( !PoolWithTag )
      {
        LODWORD(started) = -1073741670;
        v72 = -1073741670LL;
        v73 = 6LL;
        goto LABEL_136;
      }
      memset(PoolWithTag, 0, 0x238uLL);
      v20 = *(_DWORD *)(v11 + 28);
      if ( v20 >= 0xD001 )
      {
        *v17 = 568;
LABEL_18:
        v21 = *((_DWORD *)DeviceExtension + 681);
        goto LABEL_19;
      }
      v21 = 40971;
      if ( v20 > 0xA00B )
      {
        *v17 = 480;
        goto LABEL_18;
      }
      v77 = 36870;
      if ( v20 > 0x9006 )
      {
        *v17 = 464;
        goto LABEL_19;
      }
      v21 = 32769;
      if ( v20 <= 0x8001 )
      {
        v77 = 28682;
        if ( v20 > 0x700A )
        {
          *v17 = 368;
          goto LABEL_19;
        }
        v21 = 24579;
        if ( v20 <= 0x6003 )
        {
          v77 = 20515;
          if ( v20 > 0x5023 )
          {
            *v17 = 328;
            goto LABEL_19;
          }
          v21 = 16387;
          if ( v20 <= 0x4003 )
          {
            v77 = 12302;
            if ( v20 > 0x300E )
            {
              *v17 = 264;
              goto LABEL_19;
            }
            v21 = 8197;
            if ( v20 <= 0x2005 )
            {
              *v17 = 184;
LABEL_19:
              v17[1] = v21;
              *((_QWORD *)v17 + 2) = DpEvalAcpiMethod;
              *((_QWORD *)v17 + 3) = &DpGetDeviceInformation;
              *((_QWORD *)v17 + 4) = DpIndicateChildStatus;
              *((_QWORD *)v17 + 5) = &DpMapMemory;
              *((_QWORD *)v17 + 6) = DpQueueDpc;
              *((_QWORD *)v17 + 7) = DpQueryServices;
              *((_QWORD *)v17 + 8) = DpReadDeviceSpace;
              *((_QWORD *)v17 + 9) = DpSynchronizeExecution;
              *((_QWORD *)v17 + 10) = DpUnmapMemory;
              *((_QWORD *)v17 + 11) = DpWriteDeviceSpace;
              *((_QWORD *)v17 + 12) = DpIsDevicePresent;
              *((_QWORD *)v17 + 13) = DxgGetHandleDataCB;
              *((_QWORD *)v17 + 14) = DxgGetHandleParentCB;
              *((_QWORD *)v17 + 15) = DxgEnumHandleChildrenCB;
              *((_QWORD *)v17 + 16) = DxgNotifyInterruptCB;
              *((_QWORD *)v17 + 17) = DxgNotifyDpcCB;
              *((_QWORD *)v17 + 18) = DxgMiniportQueryVidPnInterfaceCB;
              *((_QWORD *)v17 + 19) = DxgMiniportQueryMonitorInterfaceCB;
              *((_QWORD *)v17 + 20) = DxgGetCaptureAddressCB;
              *((_QWORD *)v17 + 21) = DxgLogEtwEventCb;
              *((_QWORD *)v17 + 22) = DpExcludeAdapterAccess;
              *((_QWORD *)v17 + 23) = DxgCreateContextAllocationCB;
              *((_QWORD *)v17 + 24) = DxgDestroyContextAllocationCB;
              *((_QWORD *)v17 + 25) = DxgSetPowerComponentActiveCB;
              *((_QWORD *)v17 + 26) = DxgSetPowerComponentIdleCB;
              *((_QWORD *)v17 + 28) = DxgkPowerRuntimeControlRequestCB;
              *((_QWORD *)v17 + 29) = DxgkSetPowerComponentLatencyCB;
              *((_QWORD *)v17 + 30) = DxgkSetPowerComponentResidencyCB;
              *((_QWORD *)v17 + 31) = DxgkCompleteFStateTransitionCB;
              *((_QWORD *)v17 + 32) = DxgkCompletePStateTransitionCB;
              *((_QWORD *)v17 + 27) = DpAcquirePostDisplayOwnership;
              *((_QWORD *)v17 + 33) = DxgkMapContextAllocationCB;
              *((_QWORD *)v17 + 34) = DxgkUpdateContextAllocationCB;
              *((_QWORD *)v17 + 35) = DxgkReserveGpuVirtualAddressRangeCB;
              *((_QWORD *)v17 + 36) = DxgkAcquireHandleDataCB;
              *((_QWORD *)v17 + 37) = DxgkReleaseHandleDataCB;
              *((_QWORD *)v17 + 38) = DxgkHardwareContentProtectionTeardownCB;
              *((_QWORD *)v17 + 39) = DxgkMultiPlaneOverlayDisabledCB;
              *((_QWORD *)v17 + 40) = DxgkMitigatedRangeUpdateCB;
              *((_QWORD *)v17 + 1) = a1;
              *((_QWORD *)v17 + 42) = DpIndicateConnectorChange;
              *((_QWORD *)v17 + 43) = DxgkUnblockUEFIFrameBufferRangesCB;
              *((_QWORD *)v17 + 44) = DpAcquirePostDisplayOwnership2;
              *((_QWORD *)v17 + 45) = DxgkSetProtectedSessionStatusCB;
              *((_QWORD *)v17 + 50) = DxgkPinFrameBufferForSaveCB;
              *((_QWORD *)v17 + 51) = DxgkUnpinFrameBufferForSaveCB;
              *((_QWORD *)v17 + 52) = DxgkMapFrameBufferPointerCB;
              *((_QWORD *)v17 + 53) = DxgkUnmapFrameBufferPointerCB;
              *((_QWORD *)v17 + 46) = DxgkAllocateContiguousMemoryCB;
              *((_QWORD *)v17 + 47) = DxgkFreePagesFromMdlCB;
              *((_QWORD *)v17 + 48) = DxgkAllocatePagesForMdlCB;
              *((_QWORD *)v17 + 49) = DxgkFreePagesFromMdlCB;
              *((_QWORD *)v17 + 54) = DxgkMapMdlToIoMmuCB;
              *((_QWORD *)v17 + 55) = DxgkUnmapMdlFromIoMmuCB;
              *((_QWORD *)v17 + 56) = DxgkCbReportDiagnostic;
              *((_QWORD *)v17 + 41) = DxgkInvalidateHwContextCB;
              *((_QWORD *)v17 + 57) = DxgkSignalEventCB;
              *((_QWORD *)v17 + 58) = DpIsFeatureEnabled;
              *((_QWORD *)v17 + 59) = DpSaveMemoryForHotUpdateCB;
              *((_QWORD *)v17 + 60) = DxgkNotifyCursorSupportChangeCB;
              *((_QWORD *)v17 + 61) = DpQueryFeatureSupport;
              wil_details_FeatureReporting_ReportUsageToService(
                (__int64)&Feature_DmaRemapping__private_reporting,
                0x1BA00F9u,
                v18,
                v19,
                (const struct FEATURE_LOGGED_TRAITS *)Feature_DmaRemapping_logged_traits,
                1);
              *((_QWORD *)v17 + 62) = DxgkCreatePhysicalMemoryObjectCB;
              *((_QWORD *)v17 + 63) = DxgkDestroyPhysicalMemoryObjectCB;
              *((_QWORD *)v17 + 64) = DxgkMapPhysicalMemoryCB;
              *((_QWORD *)v17 + 65) = DxgkUnmapPhysicalMemoryCB;
              *((_QWORD *)v17 + 66) = DxgkAllocateAdlCB;
              *((_QWORD *)v17 + 67) = DxgkFreeAdlCB;
              *((_QWORD *)v17 + 68) = DxgkOpenPhysicalMemoryObjectCB;
              *((_QWORD *)v17 + 69) = DxgkClosePhysicalMemoryObjectCB;
              *((_QWORD *)v17 + 70) = DxgkPinFrameBufferForSave2CB;
              LODWORD(v142[0]) = 32;
              v22 = DeviceExtension + 2684;
              *(_OWORD *)((char *)v142 + 4) = *((_OWORD *)DeviceExtension + 166);
              *(_QWORD *)((char *)&v142[1] + 4) = *((_QWORD *)DeviceExtension + 334);
              qword_1C01307F8 = (__int64)KeGetCurrentThread();
              qword_1C0130800 = (__int64)a1;
              started = (int)DpiDxgkDdiStartDevice(
                               v11,
                               *((_QWORD *)DeviceExtension + 6),
                               (unsigned int)v142,
                               (_DWORD)v17,
                               (__int64)(DeviceExtension + 2684),
                               (__int64)(DeviceExtension + 2680));
              ExFreePoolWithTag(v17, 0x74727044u);
              qword_1C0130800 = 0LL;
              qword_1C01307F8 = 0LL;
              if ( (int)started < 0 )
              {
                WdLogSingleEntry2(2LL, *(_QWORD *)(v11 + 152), started);
                if ( (_DWORD)started == -1071775735 )
                {
                  v126 = 0LL;
                  if ( DeviceExtension[1152] )
                  {
                    DevicePropertyString = DpiGetDevicePropertyString(
                                             *((PDEVICE_OBJECT *)DeviceExtension + 19),
                                             DevicePropertyHardwareID,
                                             PagedPool,
                                             &v126,
                                             &v132);
                    if ( DevicePropertyString < 0 )
                    {
                      v72 = DevicePropertyString;
                      v73 = 2LL;
                      goto LABEL_136;
                    }
                    WdDiagNotifyUser(8LL, 5LL, 1LL, &v126);
                    if ( v126 )
                      ExFreePoolWithTag(v126, 0);
                  }
                }
                else if ( (_DWORD)started == -1071774944 && DeviceExtension[1152] )
                {
                  WdLogSingleEntry5(0LL, 275LL, 26LL, v11, (unsigned __int8)byte_1C0130495, 0LL);
                }
                goto LABEL_105;
              }
              if ( DeviceExtension[1152] )
              {
                xmmword_1C0130760 = 0LL;
                DWORD2(xmmword_1C0130760) = -1;
                xmmword_1C0130750 = 0LL;
                memset(&xmmword_1C0130770, 0, 0x80uLL);
                dword_1C01307F0 = 3;
              }
              if ( !*((_DWORD *)DeviceExtension + 672) && *v22 > 1u )
              {
                WdLogSingleEntry1(3LL, (unsigned int)*v22);
                *v22 = 1;
              }
              v119 = 1;
              if ( !v9 )
              {
                v40 = 0LL;
                goto LABEL_65;
              }
              if ( *(_DWORD *)(v9 + 2680) )
              {
                v23 = DpiFdoEnumChildDevices(a1);
                started = v23;
                if ( v23 < 0 )
                  goto LABEL_180;
              }
              v24 = (_BYTE *)(v9 + 3904);
              v25 = DxgkAddAdapter(a1, v134, (struct _DXGK_ADAPTER_CAPS *)(v9 + 3904), v124);
              started = v25;
              if ( v25 < 0 )
                goto LABEL_180;
              v27 = *(_QWORD *)(v9 + 3896);
              if ( v27 )
              {
                _InterlockedIncrement64((volatile signed __int64 *)(v27 + 24));
              }
              else
              {
                WdLogSingleEntry1(2LL, -1073741811LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  0x40000,
                  -1,
                  (__int64)L"No pAdapter specified, returning 0x%I64x",
                  -1073741811LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              v115 = 1;
              *(_BYTE *)(v9 + 2743) = DXGADAPTER::IsAdapterSessionized(
                                        *(DXGADAPTER **)(v9 + 3896),
                                        v26,
                                        0LL,
                                        (unsigned __int64 *)(v9 + 5728));
              v30 = *(_DWORD *)(v9 + 2684);
              if ( v30 )
              {
                v31 = ExAllocatePoolWithTag((POOL_TYPE)(v28 + 1), 4LL * v30, 0x74727044u);
                P = v31;
                if ( !v31 )
                {
                  v54 = -1073741670LL;
                  LODWORD(started) = -1073741670;
                  WdLogSingleEntry1(6LL, -1073741670LL);
                  v55 = -1073741670LL;
                  goto LABEL_106;
                }
                LOBYTE(v32) = *(_BYTE *)(v9 + 2743);
                v33 = DxgkAcquireGdiViewIds(v32, *(_QWORD *)(v9 + 5728), v9 + 2684, v31);
                started = v33;
                if ( v33 < 0 )
                {
                  WdLogSingleEntry1(2LL, v33);
                  ExFreePoolWithTag(P, 0);
                  P = 0LL;
                  goto LABEL_183;
                }
              }
              v34 = *(_BYTE *)(v9 + 3905) ^ (*(_BYTE *)(v9 + 3905) ^ (2 * *(_BYTE *)(v9 + 3905))) & 8;
              *(_BYTE *)(v9 + 3905) = v34;
              LOBYTE(v28) = v34;
              if ( (v34 & 4) != 0 && (!*(_QWORD *)(v11 + 1128) || !*(_QWORD *)(v11 + 1136)) )
              {
                WdLogSingleEntry1(2LL, (unsigned int)started);
                *(_BYTE *)(v9 + 3905) &= ~8u;
                LOBYTE(v28) = *(_BYTE *)(v9 + 3905);
                v34 = v28;
              }
              v35 = v34;
              if ( (*v24 & 1) != 0 && *(int *)(v9 + 3912) >= 0x2000 && !*(_BYTE *)(v9 + 1159) )
              {
                if ( (v28 & 8) != 0 )
                {
                  wil_details_FeatureReporting_ReportUsageToService(
                    (__int64)&Feature_HPDWakeFiltering__private_reporting,
                    0x10C5B21u,
                    v28,
                    v29,
                    (const struct FEATURE_LOGGED_TRAITS *)&Feature_MockDriverValidation_logged_traits,
                    0);
                }
                else
                {
                  wil_details_FeatureReporting_ReportUsageToService(
                    (__int64)&Feature_LegacyHPDFiltering__private_reporting,
                    0xEF666Fu,
                    v28,
                    v29,
                    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
                    1);
                  *(_BYTE *)(v9 + 3905) |= 0x10u;
                }
                v35 = *(_BYTE *)(v9 + 3905);
              }
              if ( (v35 & 8) == 0 && !*(_QWORD *)(v11 + 208) || *(_BYTE *)(v9 + 2697) && (v35 & 0x20) == 0 )
              {
                v55 = -1073741735LL;
                LODWORD(started) = -1073741735;
                WdLogSingleEntry1(2LL, -1073741735LL);
                v54 = -1073741735LL;
                goto LABEL_106;
              }
              if ( qword_1C01304B0 )
              {
                if ( !*(_BYTE *)(v9 + 2692) || (v35 & 1) == 0 )
                  goto LABEL_44;
                v80 = (_BYTE)word_1C013049C == 0;
              }
              else
              {
                if ( (v35 & 1) != 0 )
                {
LABEL_95:
                  qword_1C01304B0 = (__int64)a1;
                  goto LABEL_44;
                }
                if ( !DpiHybridInternalPanelOverride() || (*v24 & 0x20) == 0 || !*(_BYTE *)(v9 + 1152) )
                {
LABEL_44:
                  if ( (*v24 & 0x40) != 0 )
                  {
                    if ( qword_1C01304A8 && (struct _DEVICE_OBJECT *)qword_1C01304A8 != a1 )
                    {
                      if ( !*(_BYTE *)(v9 + 2692) || (_BYTE)word_1C013049C )
                      {
                        *v24 &= ~0x40u;
                        goto LABEL_45;
                      }
                      *(_BYTE *)(*(_QWORD *)(qword_1C01304A8 + 64) + 3904LL) &= ~0x40u;
                    }
                    qword_1C01304A8 = (__int64)a1;
                    HIBYTE(word_1C013049C) = (*(_BYTE *)(v9 + 3905) & 2) != 0;
                  }
LABEL_45:
                  if ( !qword_1C01304B0 || !qword_1C01304A8 || (_BYTE)word_1C013049C )
                    goto LABEL_47;
                  v81 = *(_BYTE *)(*(_QWORD *)(qword_1C01304B0 + 64) + 2692LL);
                  if ( *(_BYTE *)(*(_QWORD *)(qword_1C01304A8 + 64) + 2692LL) )
                  {
                    if ( !v81 )
                      goto LABEL_210;
                  }
                  else if ( v81 )
                  {
LABEL_210:
                    LOBYTE(word_1C013049C) = 0;
LABEL_47:
                    v36 = v135;
                    if ( v135 )
                    {
                      *v135 = *(_QWORD *)v24;
                      *((_DWORD *)v36 + 2) = *(_DWORD *)(v9 + 3912);
                    }
                    if ( *(_BYTE *)(v9 + 1152) && (*v24 & 1) == 0 && !DeviceExtension[2695] )
                    {
                      started = -1071775740LL;
LABEL_180:
                      WdLogSingleEntry1(2LL, started);
LABEL_183:
                      v54 = started;
LABEL_77:
                      v55 = started;
                      goto LABEL_106;
                    }
                    if ( *(_DWORD *)(v9 + 3480) )
                    {
                      v37 = *(_QWORD *)(v9 + 48);
                      v38 = *(_QWORD *)(v9 + 40);
                      v138 = 0LL;
                      LODWORD(v138) = 67108861;
                      v139 = 0LL;
                      v39 = DpiDxgkDdiDisplayDetectControl(v9, v38, v37, (unsigned int *)&v138);
                      started = v39;
                      if ( v39 < 0 )
                      {
                        WdLogSingleEntry2(2LL, *(_QWORD *)(v11 + 1128), v39);
                        goto LABEL_183;
                      }
                    }
                    DpiFdoInitializeMipiDsi((__int64)a1);
                    v40 = P;
                    RelatedObjects = DpiFdoCreateRelatedObjects(a1, *(unsigned int *)(v9 + 2684), P, v124);
                    started = RelatedObjects;
                    if ( RelatedObjects < 0 )
                      goto LABEL_180;
                    if ( (*v24 & 1) != 0 && (int)DpiAcquireCoreSyncAccessSafe((__int64)a1, 1) >= 0 )
                    {
                      MonitorInitializeAdapterDone(*(DXGADAPTER **)(v9 + 3896), v124);
                      DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
                    }
                    v114 = 1;
                    if ( *(_DWORD *)(v9 + 3224) != -1 )
                    {
                      Caps = DpiMiracastDdiMiracastQueryCaps(v9, v42, v9 + 3216);
                      if ( Caps < 0 )
                      {
                        WdLogSingleEntry1(4LL, Caps);
                        *(_DWORD *)(v9 + 3224) = -1;
                        memset((void *)(v9 + 3152), 0, 0x40uLL);
                      }
                    }
                    v43 = DpiOpenPnpRegistryKey((__int64)a1, 2u, 0x20019u, &Handle);
                    if ( v43 < 0 )
                    {
                      WdLogSingleEntry1(4LL, v43);
                    }
                    else
                    {
                      RtlInitUnicodeString(&DestinationString, L"MiracastDriverName");
                      if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
                        WdLogSingleEntry1(4LL, DxgkRetrieveStringFromRegistry);
                      ZwClose(Handle);
                    }
                    v46 = *(_QWORD *)(v9 + 4864);
                    if ( v46 )
                    {
                      v82 = *(_QWORD *)(v9 + 4864);
                      if ( *(_QWORD *)(v46 + 48) && *(_BYTE *)v46 )
                      {
                        *(_BYTE *)v46 = 0;
                        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                        {
                          LODWORD(v113) = *(unsigned __int8 *)(*(_QWORD *)(v9 + 4864) + 2LL);
                          McTemplateK0pt_EtwWriteTransfer(
                            (REGHANDLE *)&DxgkControlGuid_Context,
                            &EventDpiFdoThermalActiveCooling,
                            v45,
                            a1,
                            v113);
                        }
                        v83 = *(_QWORD *)(v9 + 4864);
                        LOBYTE(v44) = *(_BYTE *)(v83 + 2);
                        (*(void (__fastcall **)(_QWORD, __int64))(v83 + 48))(*(_QWORD *)(v83 + 16), v44);
                        v82 = *(_QWORD *)(v9 + 4864);
                      }
                      if ( *(_QWORD *)(v82 + 56) && *(_BYTE *)(v82 + 1) )
                      {
                        *(_BYTE *)(v82 + 1) = 0;
                        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
                        {
                          LODWORD(v113) = *(_DWORD *)(*(_QWORD *)(v9 + 4864) + 4LL);
                          McTemplateK0pt_EtwWriteTransfer(
                            (REGHANDLE *)&DxgkControlGuid_Context,
                            &EventDpiFdoThermalPassiveCooling,
                            v45,
                            a1,
                            v113);
                        }
                        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v9 + 4864) + 56LL))(
                          *(_QWORD *)(*(_QWORD *)(v9 + 4864) + 16LL),
                          *(unsigned int *)(*(_QWORD *)(v9 + 4864) + 4LL));
                      }
                    }
                    v47 = DpiFdoInitializeGpuVirtualization((__int64)a1, v44, v45);
                    started = v47;
                    if ( v47 < 0 )
                      goto LABEL_180;
                    if ( *(_BYTE *)(v9 + 482) )
                    {
                      DXGADAPTER::StartRuntimePowerManagement(*(DXGADAPTER **)(v9 + 3896));
                      if ( *(_BYTE *)(v9 + 5664) )
                      {
                        v84 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 5648), 1u);
                        started = v84;
                        if ( v84 < 0 )
                          goto LABEL_180;
                      }
                    }
                    DpiBrightnessStartDevice(a1);
                    DpiFdoInitializeDP((__int64)a1);
                    DpiFdoInitializeDisplayDiagnostics((__int64)a1);
LABEL_65:
                    v48 = DpiFdoOpenDeviceFileObjectIfNeeded(DeviceExtension);
                    started = v48;
                    if ( v48 < 0 )
                    {
                      WdLogSingleEntry1(2LL, v48);
                      v114 = v115;
                      goto LABEL_105;
                    }
                    DxgkMiracastQueryMiracastSupportInternal(0LL);
                    *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
                    v49 = *((_DWORD *)DeviceExtension + 59);
                    ++*((_DWORD *)DeviceExtension + 69);
                    *((_DWORD *)DeviceExtension + 60) = v49;
                    *((_DWORD *)DeviceExtension + 59) = 2;
                    if ( !v9 || !v40 )
                      goto LABEL_71;
                    v50 = *(_QWORD *)(v9 + 5728);
                    if ( *(_BYTE *)(v9 + 2743) )
                    {
                      Global = DXGGLOBAL_GetGlobal();
                      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                         *((DXGSESSIONMGR **)Global + 122),
                                                         v50);
                      if ( !SessionDataForSpecifiedSession )
                      {
                        WdLogSingleEntry2(2LL, (unsigned int)v50, -1073741811LL);
                        DxgkLogInternalTriageEvent(
                          0LL,
                          0x40000,
                          -1,
                          (__int64)L"Cannot find the session data for session 0x%I64x, returning 0x%I64x.",
                          (unsigned int)v50,
                          -1073741811LL,
                          0LL,
                          0LL,
                          0LL);
                        goto LABEL_182;
                      }
                      v51 = DXGSESSIONDATA::CommitSessionGdiViewIds(SessionDataForSpecifiedSession);
                    }
                    else
                    {
                      v51 = DMgrWriteDeviceCountToRegistry();
                    }
                    if ( v51 >= 0 )
                    {
LABEL_71:
                      v114 = v115;
                      if ( !v9 )
                        goto LABEL_105;
                      v52 = !*(_BYTE *)(v9 + 1154) || !*(_BYTE *)(v9 + 480);
                      v53 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2744), v52);
                      started = v53;
                      v54 = v53;
                      if ( v53 < 0 )
                      {
                        v87 = *((_DWORD *)DeviceExtension + 60);
                        --*((_DWORD *)DeviceExtension + 69);
                        *((_DWORD *)DeviceExtension + 59) = v87;
                        *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4
                                                                                      * (*((_DWORD *)DeviceExtension + 69) & 7)
                                                                                      + 244];
                        WdLogSingleEntry1(2LL, started);
                      }
                      else
                      {
                        v118 = 1;
                      }
                      v114 = v115;
                      goto LABEL_77;
                    }
LABEL_182:
                    v79 = *((_DWORD *)DeviceExtension + 60);
                    --*((_DWORD *)DeviceExtension + 69);
                    *((_DWORD *)DeviceExtension + 59) = v79;
                    *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4
                                                                                  * (*((_DWORD *)DeviceExtension + 69) & 7)
                                                                                  + 244];
                    WdLogSingleEntry1(2LL, started);
                    v114 = v115;
                    goto LABEL_183;
                  }
                  LOBYTE(word_1C013049C) = 1;
                  *((_BYTE *)DXGGLOBAL_GetGlobal() + 921) = 1;
                  goto LABEL_47;
                }
                v80 = (*v24 & 0x40) == 0;
              }
              if ( v80 )
                goto LABEL_95;
              goto LABEL_44;
            }
            *v17 = 256;
          }
          else
          {
            *v17 = 312;
          }
        }
        else
        {
          *v17 = 360;
        }
      }
      else
      {
        *v17 = 456;
      }
      v21 = v77;
      goto LABEL_19;
    }
    if ( (_DWORD)started != -1073741267 )
      break;
    Interval.QuadPart = -10000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v72 = (int)started;
LABEL_134:
  v73 = 2LL;
LABEL_136:
  WdLogSingleEntry1(v73, v72);
LABEL_105:
  v54 = (int)started;
  v118 = 0;
  v55 = (int)started;
  if ( v9 )
  {
LABEL_106:
    v62 = *(_QWORD *)(v9 + 3896);
  }
  else
  {
    v62 = 0LL;
    v118 = 0;
  }
  DxgkLogInternalTriageEvent(
    v62,
    131076,
    -1,
    (__int64)L"Adapter StartDevice has completed with status %1",
    v55,
    0LL,
    0LL,
    0LL,
    0LL);
  v63 = 0;
  if ( v9 )
    v63 = (*(unsigned __int8 *)(v9 + 3904) >> 1) & 0x21 | (2
                                                         * (*(_BYTE *)(v9 + 3904) & 1 | (2
                                                                                       * (*(_BYTE *)(v9 + 480) & 1 | (2 * (*(_BYTE *)(v9 + 1152) & 1 | (2 * (*(_BYTE *)(v9 + 2692) & 1 | (4 * (*(_BYTE *)(v9 + 3904) & 0x84 | *(_BYTE *)(v9 + 3905) & 1 | (2 * (*(_BYTE *)(v9 + 3904) & 0x38 | (*(_DWORD *)(v9 + 504) != 0 ? 4 : 0) | *(_BYTE *)(v9 + 1159) & 1))))))))))));
  if ( (int)started < 0 )
  {
    v88 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
    DeviceExtension[232] = 1;
    IoInvalidateDeviceState(v88);
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
    {
      v90 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v90;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
    }
    if ( v9 )
    {
      if ( v118 == 1 )
        IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2744), 0);
      DpiFdoCleanupGpuVirtualization(v9);
      DpiFdoCleanupMipiDsi(v9);
      DpiFdoCleanupDP((_QWORD *)v9);
      DpiFdoCleanupDisplayDiagnostics(v9);
      if ( v114 == 1 )
        DpiFdoDestroyRelatedObjects(a1, v124);
      if ( P && *(_DWORD *)(v9 + 2684) )
      {
        v93 = (unsigned int *)P;
        v94 = *(_DWORD *)(v9 + 2684);
        do
        {
          --v94;
          LOBYTE(v91) = *(_BYTE *)(v9 + 2743);
          LOBYTE(v92) = 1;
          DxgkReleaseGdiViewId(v91, *(_QWORD *)(v9 + 5728), v93[v94], v92);
        }
        while ( v94 );
        DeviceExtension = v136;
        v11 = v123;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C01304A8 == a1 )
      {
        word_1C013049C = 0;
        qword_1C01304A8 = 0LL;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C01304B0 == a1 )
      {
        LOBYTE(word_1C013049C) = 0;
        qword_1C01304B0 = 0LL;
      }
      if ( v115 == 1 )
      {
        if ( *((_QWORD *)DeviceExtension + 61) )
        {
          PoFxUnregisterDevice();
          *(_QWORD *)(*(_QWORD *)(v9 + 3896) + 2904LL) = 0LL;
          *((_QWORD *)DeviceExtension + 61) = 0LL;
        }
        v95 = *(DXGADAPTER **)(v9 + 3896);
        if ( v95 && *((_DWORD *)v95 + 50) != 2 && *((_DWORD *)v95 + 50) != 4 )
          DXGADAPTER::Stop(v95, 0, 0);
        DxgkReleaseAdapterFdoReference(*(DXGADAPTER **)(v9 + 3896));
        *(_QWORD *)(v9 + 3896) = 0LL;
      }
      DpiFdoRemoveChildDescriptors(a1);
    }
    if ( v119 == 1 && v11 )
    {
      if ( !DeviceExtension[1152] )
        goto LABEL_271;
      v120 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      v96 = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x74727044u);
      v97 = v96;
      if ( v96 )
      {
        memset(v96, 0, 0x48uLL);
        v98 = v120;
        v97[8] = *((_QWORD *)DeviceExtension + 334);
        *(_DWORD *)v97 = 30;
        *((_DWORD *)v97 + 1) = 72;
        *((_DWORD *)v97 + 12) = 98;
        *((_DWORD *)v97 + 13) = 1;
        *((_DWORD *)v97 + 14) = v98;
        if ( v9 )
          v99 = *(_QWORD *)(v9 + 5728);
        else
          v99 = 0x200000000LL;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v97, v99);
        ExFreePoolWithTag(v97, 0x74727044u);
      }
      v11 = v123;
      if ( v120 < 0 )
      {
LABEL_271:
        if ( v9 )
          *(_BYTE *)(v9 + 3904) &= ~4u;
        DpiDxgkDdiStopDevice(v11, *((_QWORD *)DeviceExtension + 6));
      }
    }
    if ( v116 == 1 )
      DpiFdoDisconnectInterrupt(a1);
    v117 = 1;
    if ( v119 )
      goto LABEL_284;
    if ( !*(_QWORD *)(v11 + 1344) )
      goto LABEL_284;
    DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(2LL, v89);
    v101 = DiagnosticInfoArgs;
    if ( !DiagnosticInfoArgs )
      goto LABEL_284;
    *(_QWORD *)DiagnosticInfoArgs = *((_QWORD *)DeviceExtension + 6);
    v102 = *((_QWORD *)DeviceExtension + 19);
    v120 = *(_DWORD *)(DiagnosticInfoArgs + 216);
    if ( (*(int (__fastcall **)(__int64, __int64))(v123 + 1344))(v102, DiagnosticInfoArgs) >= 0 )
    {
      if ( *(_DWORD *)(v101 + 220) > (unsigned int)v120 )
        *(_DWORD *)(v101 + 220) = 0;
      DxgCreateLiveDumpWithDriverBlob(
        *((struct _DEVICE_OBJECT **)DeviceExtension + 19),
        0x1B0u,
        *(int *)(v101 + 8),
        v54,
        v63,
        *(_QWORD *)(v123 + 152),
        (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v101);
      v117 = 0;
    }
    DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v101);
    if ( v117 )
LABEL_284:
      DxgCreateLiveDumpWithWdLogs(403LL, 2052LL);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( DeviceExtension[1154] && DeviceExtension[1152] )
    NotifyUserMSBDAIfApplicable();
  v64 = 0LL;
  v120 = 0;
  if ( v9 )
  {
    if ( DeviceExtension[1159] )
    {
      v103 = *(_QWORD *)(v9 + 1008);
      if ( v103 )
      {
        v104 = *(__int64 (__fastcall **)(__int64, _QWORD))(v9 + 1064);
        if ( v104 )
        {
          v105 = v104(v103, (unsigned int)started);
          if ( v105 < 0 )
            WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 1064), v105);
        }
        v106 = *(__int64 (__fastcall **)(__int64, __int128 *))(v9 + 1080);
        if ( v106 )
        {
          v141 = 0LL;
          v107 = *(_QWORD *)(v9 + 1008);
          v140 = 0LL;
          v108 = v106(v107, &v140);
          if ( v108 < 0 )
          {
            WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 1080), v108);
          }
          else
          {
            v64 = *((_QWORD *)&v140 + 1);
            *(_DWORD *)(v9 + 1164) = DWORD1(v140);
            v120 = v141;
          }
        }
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v9 + 152), PowerRelations);
      }
    }
    v65 = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x74727044u);
    v66 = v65;
    if ( v65 )
    {
      memset(v65, 0, 0x60uLL);
      *v66 = 41;
      v66[1] = 96;
      v66[13] = (unsigned int)a1 & 0xFFFF00;
      v66[12] = started;
      *((_QWORD *)v66 + 7) = *((_QWORD *)DeviceExtension + 334);
      v66[16] = DxgkDiagCalcDuration1us(&v128);
      v66[17] = *(_DWORD *)(v9 + 3912);
      v66[22] = v120;
      v66[18] = v63;
      *((_QWORD *)v66 + 10) = v64;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v66, *(_QWORD *)(v9 + 5728));
      ExFreePoolWithTag(v66, 0x74727044u);
    }
    if ( DeviceExtension[1152] )
    {
      if ( qword_1C0130748 )
      {
        v68 = *(_QWORD *)(qword_1C0130748 + 64);
        if ( v68 )
        {
          v69 = *(_QWORD *)(v68 + 40);
          if ( v69 )
          {
            if ( *(_QWORD *)(v69 + 408) )
              SendBDDDiagTelemetry(v68);
          }
        }
      }
    }
  }
  else
  {
    v109 = (char *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x74727044u);
    v110 = v109;
    if ( v109 )
    {
      memset(v109, 0, 0x40uLL);
      v111 = DxgkDiagCalcDuration1us(&v128);
      *((_DWORD *)v110 + 10) = 0;
      *((_QWORD *)v110 + 4) = 0LL;
      *(_DWORD *)v110 = 6;
      *((_DWORD *)v110 + 1) = 64;
      *(_OWORD *)(v110 + 8) = 0LL;
      *((_QWORD *)v110 + 3) = 0LL;
      *((_DWORD *)v110 + 12) = 35;
      *((_DWORD *)v110 + 13) = (unsigned int)a1 & 0xFFFF00;
      *((_DWORD *)v110 + 14) = v111;
      *((_DWORD *)v110 + 15) = started;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v110, 0x200000000LL);
      ExFreePoolWithTag(v110, 0x74727044u);
    }
  }
  return (unsigned int)started;
}
