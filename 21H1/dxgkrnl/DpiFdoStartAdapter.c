/*
 * XREFs of DpiFdoStartAdapter @ 0x1C0171310
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x1C016F2E0 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiLdaStartAdapterInChain @ 0x1C02D3938 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0008898 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0011FD8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     DxgkDiagCalcDuration1us @ 0x1C001FDE4 (DxgkDiagCalcDuration1us.c)
 *     ?DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z @ 0x1C0021E58 (-DpiFdoSetAdapterLuid@@YAJPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiHybridInternalPanelOverride @ 0x1C0021F50 (DpiHybridInternalPanelOverride.c)
 *     DpiFdoInitializeMipiDsi @ 0x1C00220DC (DpiFdoInitializeMipiDsi.c)
 *     DpiFdoCleanupMipiDsi @ 0x1C0022174 (DpiFdoCleanupMipiDsi.c)
 *     DpiFdoInitializeDP @ 0x1C002219C (DpiFdoInitializeDP.c)
 *     DpiFdoInitializeDisplayDiagnostics @ 0x1C0022240 (DpiFdoInitializeDisplayDiagnostics.c)
 *     DpiFdoCleanupDisplayDiagnostics @ 0x1C00222BC (DpiFdoCleanupDisplayDiagnostics.c)
 *     SendBDDDiagTelemetry @ 0x1C0023D24 (SendBDDDiagTelemetry.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0038624 (McTemplateK0pq_EtwWriteTransfer.c)
 *     McTemplateK0pt_EtwWriteTransfer @ 0x1C0038C64 (McTemplateK0pt_EtwWriteTransfer.c)
 *     NotifyUserMSBDAIfApplicable @ 0x1C0050CD8 (NotifyUserMSBDAIfApplicable.c)
 *     DpiFdoCleanupDP @ 0x1C0050E08 (DpiFdoCleanupDP.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00E444C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C01271F0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C012746C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0161CE4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiDxgkDdiDisplayDetectControl @ 0x1C0165248 (DpiDxgkDdiDisplayDetectControl.c)
 *     MonitorInitializeAdapterDone @ 0x1C01684B0 (MonitorInitializeAdapterDone.c)
 *     DpiFdoConnectInterrupt @ 0x1C016F8B4 (DpiFdoConnectInterrupt.c)
 *     DpiKsrIsSoftBoot @ 0x1C016FA38 (DpiKsrIsSoftBoot.c)
 *     DpiDxgkDdiStartDevice @ 0x1C016FA58 (DpiDxgkDdiStartDevice.c)
 *     DxgkAddAdapter @ 0x1C016FB2C (DxgkAddAdapter.c)
 *     DpiFdoCreateRelatedObjects @ 0x1C0171238 (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoOpenDeviceFileObjectIfNeeded @ 0x1C0172044 (DpiFdoOpenDeviceFileObjectIfNeeded.c)
 *     DpiGetDevicePropertyString @ 0x1C017207C (DpiGetDevicePropertyString.c)
 *     DpiFdoInitializeGpuVirtualization @ 0x1C0172B1C (DpiFdoInitializeGpuVirtualization.c)
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0172DDC (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiQueryMiniportInterface @ 0x1C01759A8 (DpiQueryMiniportInterface.c)
 *     DpiOpenPnpRegistryKey @ 0x1C017A1D0 (DpiOpenPnpRegistryKey.c)
 *     DxgkRetrieveStringFromRegistry @ 0x1C017B620 (DxgkRetrieveStringFromRegistry.c)
 *     DpiFdoEnumChildDevices @ 0x1C0181324 (DpiFdoEnumChildDevices.c)
 *     DxgkAcquireGdiViewIds @ 0x1C0187C94 (DxgkAcquireGdiViewIds.c)
 *     DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C0188AAC (DpiFdoIsCompatibleWithHighResolutionBoot.c)
 *     DpiMiracastDdiMiracastQueryCaps @ 0x1C0188B28 (DpiMiracastDdiMiracastQueryCaps.c)
 *     ?StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ @ 0x1C020B6F0 (-StartRuntimePowerManagement@DXGADAPTER@@QEAAXXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C020B838 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 *     DxgkReleaseAdapterFdoReference @ 0x1C02137F8 (DxgkReleaseAdapterFdoReference.c)
 *     ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1C021CB68 (-DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYP.c)
 *     ?DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C021CC58 (-DxgCreateLiveDumpWithDriverBlob@@YAJPEAU_DEVICE_OBJECT@@K_K111PEAU_DXGKARG_COLLECTDIAGNOSTICINF.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C021CE50 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 *     ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C021CFC0 (-DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z.c)
 *     ?LPMDisplayRegisterInternalDisplay@@YAXPEAXI@Z @ 0x1C0271770 (-LPMDisplayRegisterInternalDisplay@@YAXPEAXI@Z.c)
 *     ?CommitSessionGdiViewIds@DXGSESSIONDATA@@QEAAJXZ @ 0x1C0299F44 (-CommitSessionGdiViewIds@DXGSESSIONDATA@@QEAAJXZ.c)
 *     DxgkReleaseGdiViewId @ 0x1C029B7E4 (DxgkReleaseGdiViewId.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C02C4000 (DpiFdoCleanupGpuVirtualization.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C02C42F4 (DpiFdoDestroyRelatedObjects.c)
 *     DpiFdoDisconnectInterrupt @ 0x1C02C439C (DpiFdoDisconnectInterrupt.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C02C727C (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoStopDeviceAndReleasePostDisplayOwnership @ 0x1C02C7D58 (DpiFdoStopDeviceAndReleasePostDisplayOwnership.c)
 *     DpiKsrRestoreAdapterDriverState @ 0x1C02CE58C (DpiKsrRestoreAdapterDriverState.c)
 *     DpiDxgkDdiStopDevice @ 0x1C02D4354 (DpiDxgkDdiStopDevice.c)
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
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rax
  int v67; // eax
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  int v73; // eax
  __int64 v74; // rbx
  int v75; // eax
  BOOLEAN v76; // dl
  NTSTATUS v77; // eax
  __int64 v78; // rdx
  __int64 v79; // rcx
  unsigned int v80; // ebx
  __int64 v81; // rdi
  _DWORD *v82; // rax
  _DWORD *v83; // r12
  __int64 v85; // rcx
  __int64 v86; // r8
  unsigned int v87; // eax
  bool v88; // cf
  bool v89; // zf
  int Caps; // eax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rbx
  unsigned int v94; // edx
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 (__fastcall *v97)(_QWORD, _QWORD, __int64); // rax
  int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rbx
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rax
  int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rbx
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rcx
  int DevicePropertyString; // eax
  _QWORD *v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  bool v125; // zf
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rcx
  NTSTATUS v130; // eax
  __int64 v131; // rax
  int v132; // eax
  __int64 v133; // rax
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  int v138; // eax
  __int64 v139; // rax
  struct _DEVICE_OBJECT *v140; // rcx
  int v141; // eax
  __int64 v142; // rcx
  __int64 v143; // r9
  int v144; // edi
  DXGADAPTER *v145; // rcx
  _QWORD *v146; // rax
  _QWORD *v147; // rdi
  int v148; // eax
  __int64 v149; // rdx
  __int64 DiagnosticInfoArgs; // rax
  __int64 v151; // rdi
  __int64 v152; // rcx
  unsigned __int64 v153; // rax
  __int64 v154; // rcx
  __int64 (__fastcall *v155)(__int64, _QWORD); // rax
  int v156; // eax
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r12
  __int64 v160; // rax
  __int64 (__fastcall *v161)(__int64, __int128 *); // rax
  __int64 v162; // rcx
  int v163; // eax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r12
  __int64 v167; // rax
  char *v168; // rax
  char *v169; // rbx
  int v170; // eax
  unsigned __int64 v171; // [rsp+20h] [rbp-158h]
  int v172; // [rsp+30h] [rbp-148h]
  char v173; // [rsp+40h] [rbp-138h]
  char v174; // [rsp+41h] [rbp-137h]
  char v175; // [rsp+42h] [rbp-136h]
  char v176; // [rsp+42h] [rbp-136h]
  char v177; // [rsp+43h] [rbp-135h]
  unsigned int *P; // [rsp+48h] [rbp-130h]
  char v179; // [rsp+50h] [rbp-128h]
  int v180; // [rsp+54h] [rbp-124h] BYREF
  char v181; // [rsp+58h] [rbp-120h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v182; // [rsp+60h] [rbp-118h]
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-110h] BYREF
  PVOID v184; // [rsp+70h] [rbp-108h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-100h] BYREF
  __int64 v186; // [rsp+80h] [rbp-F8h] BYREF
  int v187; // [rsp+88h] [rbp-F0h] BYREF
  __int64 v188; // [rsp+90h] [rbp-E8h]
  char v189; // [rsp+98h] [rbp-E0h]
  void *v190; // [rsp+A0h] [rbp-D8h]
  _QWORD *v191; // [rsp+A8h] [rbp-D0h]
  __int64 v192; // [rsp+B0h] [rbp-C8h]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-C0h] BYREF
  __int128 v194; // [rsp+C8h] [rbp-B0h] BYREF
  __int64 v195; // [rsp+D8h] [rbp-A0h]
  __int128 v196; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v197; // [rsp+F0h] [rbp-88h]
  unsigned int v198[8]; // [rsp+F8h] [rbp-80h] BYREF
  _OWORD v199[2]; // [rsp+118h] [rbp-60h] BYREF

  v191 = a7;
  v7 = a2;
  Handle = 0LL;
  v9 = 0LL;
  memset(v198, 0, 28);
  v182 = a4;
  DestinationString = 0LL;
  v190 = a3;
  v181 = a2;
  DeviceExtension = (char *)a1->DeviceExtension;
  v175 = 0;
  v177 = 0;
  v174 = 0;
  v89 = *((_DWORD *)DeviceExtension + 4) == 1953656900;
  v11 = *((_QWORD *)DeviceExtension + 5);
  v192 = v11;
  v173 = 0;
  v179 = 0;
  P = 0LL;
  v186 = MEMORY[0xFFFFF78000000320];
  if ( v89 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    v9 = (__int64)DeviceExtension;
    if ( (int)DpiQueryMiniportInterface(
                *((_QWORD *)DeviceExtension + 3),
                (unsigned int)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
                112,
                3) >= 0 )
    {
      if ( a6 )
      {
        v97 = (__int64 (__fastcall *)(_QWORD, _QWORD, __int64))*((_QWORD *)DeviceExtension + 131);
        if ( v97 )
        {
          v98 = v97(*((_QWORD *)DeviceExtension + 126), a5, a6);
          started = v98;
          if ( v98 < 0 )
          {
            v101 = WdLogNewEntry5_WdError(v100, v99);
            v102 = *((_QWORD *)DeviceExtension + 131);
LABEL_120:
            *(_QWORD *)(v101 + 24) = v102;
            *(_QWORD *)(v101 + 32) = started;
            goto LABEL_123;
          }
        }
      }
    }
    else
    {
      memset(DeviceExtension + 1000, 0, 0x70uLL);
    }
    v7 = v181;
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
      v104 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v104 + 24) = started;
      WdLogEvent5_WdError(v104);
      goto LABEL_74;
    }
    v175 = 1;
  }
  if ( DeviceExtension[1152] == 1 )
  {
    if ( DeviceExtension[1155] == 1
      && v7
      && byte_1C00AFA16
      && !(unsigned __int8)DpiFdoIsCompatibleWithHighResolutionBoot(a1) )
    {
      v187 = -1;
      v188 = 0LL;
      if ( (qword_1C00AE9B0 & 2) != 0 )
      {
        v189 = 1;
        v187 = 8006;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v85, &EventProfilerEnter, v86, 8006);
      }
      else
      {
        v189 = 0;
      }
      DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v187, 8006LL);
      memset(v199, 0, sizeof(v199));
      LODWORD(v199[0]) = 18;
      x86BiosCall(16LL, v199);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v187, v105);
      if ( v189 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v106, &EventProfilerExit, v107, v187);
    }
    if ( v9 )
    {
      v87 = *(_DWORD *)(v11 + 28);
      if ( byte_1C00AFA16 )
      {
        v88 = v87 < 0x300E;
        v89 = v87 == 12302;
      }
      else
      {
        v88 = v87 < 0x2005;
        v89 = v87 == 8197;
      }
      *(_BYTE *)(v9 + 3904) = *(_BYTE *)(v9 + 3904) & 0xFB | (4 * (!v88 && !v89));
    }
  }
  for ( Interval.QuadPart = 0LL; ; Interval.QuadPart = 0LL )
  {
    LODWORD(started) = ExUuidCreate((UUID *)DeviceExtension + 166);
    if ( (int)started >= 0 )
      break;
    if ( (_DWORD)started != -1073741267 )
    {
      v101 = WdLogNewEntry5_WdError(v18, v17);
      *(_QWORD *)(v101 + 24) = (int)started;
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
      v108 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v108 + 24) = v25;
      WdLogEvent5_WdError(v108);
    }
    if ( DpiKsrIsSoftBoot() )
    {
      v109 = DpiKsrRestoreAdapterDriverState((struct _FDO_CONTEXT *)v9);
      v112 = v109;
      if ( v109 < 0 )
      {
        v113 = WdLogNewEntry5_WdError(v111, v110);
        *(_QWORD *)(v113 + 24) = v112;
        WdLogEvent5_WdError(v113);
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
  v198[0] = 32;
  v34 = DeviceExtension + 2684;
  *(_OWORD *)&v198[1] = *((_OWORD *)DeviceExtension + 166);
  *(_QWORD *)&v198[5] = *((_QWORD *)DeviceExtension + 334);
  qword_1C00AFD70 = (__int64)KeGetCurrentThread();
  qword_1C00AFD78 = (__int64)a1;
  started = (int)DpiDxgkDdiStartDevice(
                   v11,
                   *((_QWORD *)DeviceExtension + 6),
                   v198,
                   (__int64)v31,
                   (_DWORD *)DeviceExtension + 671,
                   (_DWORD *)DeviceExtension + 670);
  ExFreePoolWithTag(v31, 0x74727044u);
  qword_1C00AFD78 = 0LL;
  qword_1C00AFD70 = 0LL;
  if ( (int)started < 0 )
  {
    v115 = WdLogNewEntry5_WdError(v36, v35);
    *(_QWORD *)(v115 + 24) = *(_QWORD *)(v11 + 152);
    *(_QWORD *)(v115 + 32) = started;
    WdLogEvent5_WdError(v115);
    if ( (_DWORD)started != -1071775735 )
    {
      if ( (_DWORD)started == -1071774944 && DeviceExtension[1152] )
      {
        v119 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v117, v116);
        v119[3] = 275LL;
        v119[4] = 26LL;
        v119[5] = v11;
        v120 = (unsigned __int8)byte_1C00AFA16;
        v119[7] = 0LL;
        v119[6] = v120;
        WdLogEvent5_WdCriticalError(v119);
      }
      goto LABEL_124;
    }
    v184 = 0LL;
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
                             (__int64)&v180);
    v103 = DevicePropertyString;
    if ( DevicePropertyString >= 0 )
    {
      WdDiagNotifyUser(8LL, 5LL, 1LL, &v184);
      if ( v184 )
        ExFreePoolWithTag(v184, 0);
      goto LABEL_124;
    }
LABEL_122:
    v101 = WdLogNewEntry5_WdError(v42, v20);
    *(_QWORD *)(v101 + 24) = v103;
    goto LABEL_123;
  }
  if ( DeviceExtension[1152] )
  {
    xmmword_1C00AFCD8 = 0LL;
    DWORD2(xmmword_1C00AFCD8) = -1;
    xmmword_1C00AFCC8 = 0LL;
    memset(&xmmword_1C00AFCE8, 0, 0x80uLL);
    dword_1C00AFD68 = 3;
  }
  if ( !*((_DWORD *)DeviceExtension + 672) && *v34 > 1u )
  {
    v121 = WdLogNewEntry5_WdWarning(v36, v35, v37);
    *(_QWORD *)(v121 + 24) = (unsigned int)*v34;
    WdLogEvent5_WdWarning(v121);
    *v34 = 1;
  }
  v177 = 1;
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
  v40 = DxgkAddAdapter(a1, v190, (struct _DXGK_ADAPTER_CAPS *)(v9 + 3904), v182);
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
    v122 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v122 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v122);
  }
  v174 = 1;
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
        v123 = WdLogNewEntry5_WdError(v42, v20);
        *(_QWORD *)(v123 + 24) = started;
        WdLogEvent5_WdError(v123);
        ExFreePoolWithTag(P, 0);
        P = 0LL;
        goto LABEL_74;
      }
      goto LABEL_32;
    }
LABEL_141:
    LODWORD(started) = -1073741670;
    v114 = WdLogNewEntry5_WdLowResource(v28, v27, v29, v30);
    *(_QWORD *)(v114 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v114);
    goto LABEL_124;
  }
LABEL_32:
  LOBYTE(v42) = *(_BYTE *)(v9 + 3905) ^ (*(_BYTE *)(v9 + 3905) ^ (2 * *(_BYTE *)(v9 + 3905))) & 8;
  *(_BYTE *)(v9 + 3905) = v42;
  v48 = v42;
  if ( (v42 & 4) != 0 && (!*(_QWORD *)(v11 + 1128) || !*(_QWORD *)(v11 + 1136)) )
  {
    v124 = WdLogNewEntry5_WdError(v42, v20);
    *(_QWORD *)(v124 + 24) = (int)started;
    WdLogEvent5_WdError(v124);
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
        v172);
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
        v172);
      *(_BYTE *)(v9 + 3905) |= 0x10u;
    }
    LOBYTE(v20) = *(_BYTE *)(v9 + 3905);
  }
  if ( ((unsigned __int8)v20 & 8) == 0 && !*(_QWORD *)(v11 + 208)
    || *(_BYTE *)(v9 + 2697) && ((unsigned __int8)v20 & 0x20) == 0 )
  {
    v103 = -1073741735LL;
    LODWORD(started) = -1073741735;
    goto LABEL_122;
  }
  if ( qword_1C00AFA28 )
  {
    if ( *(_BYTE *)(v9 + 2692) && ((unsigned __int8)v20 & 1) != 0 )
    {
      v125 = (_BYTE)word_1C00AFA1D == 0;
LABEL_173:
      if ( !v125 )
        goto LABEL_41;
      goto LABEL_174;
    }
  }
  else
  {
    if ( ((unsigned __int8)v20 & 1) != 0 )
    {
LABEL_174:
      qword_1C00AFA28 = (__int64)a1;
      goto LABEL_41;
    }
    if ( DpiHybridInternalPanelOverride() && (*v39 & 0x20) != 0 && *(_BYTE *)(v9 + 1152) )
    {
      v125 = (*v39 & 0x40) == 0;
      goto LABEL_173;
    }
  }
LABEL_41:
  if ( (*v39 & 0x40) != 0 )
  {
    v42 = qword_1C00AFA20;
    if ( qword_1C00AFA20 && (struct _DEVICE_OBJECT *)qword_1C00AFA20 != a1 )
    {
      if ( !*(_BYTE *)(v9 + 2692) || (_BYTE)word_1C00AFA1D )
      {
        *v39 &= ~0x40u;
        goto LABEL_42;
      }
      *(_BYTE *)(*(_QWORD *)(qword_1C00AFA20 + 64) + 3904LL) &= ~0x40u;
    }
    qword_1C00AFA20 = (__int64)a1;
    HIBYTE(word_1C00AFA1D) = (*(_BYTE *)(v9 + 3905) & 2) != 0;
  }
LABEL_42:
  if ( qword_1C00AFA28 )
  {
    v20 = (struct _LUID *)qword_1C00AFA20;
    if ( qword_1C00AFA20 )
    {
      if ( !(_BYTE)word_1C00AFA1D )
      {
        LOBYTE(v42) = *(_BYTE *)(*(_QWORD *)(qword_1C00AFA28 + 64) + 2692LL);
        if ( *(_BYTE *)(*(_QWORD *)(qword_1C00AFA20 + 64) + 2692LL) )
        {
          if ( !(_BYTE)v42 )
            goto LABEL_186;
        }
        else if ( (_BYTE)v42 )
        {
LABEL_186:
          LOBYTE(word_1C00AFA1D) = 0;
          goto LABEL_43;
        }
        LOBYTE(word_1C00AFA1D) = 1;
        *((_BYTE *)DXGGLOBAL::GetGlobal(v42, qword_1C00AFA20) + 649) = 1;
      }
    }
  }
LABEL_43:
  v21 = v191;
  if ( v191 )
  {
    *v191 = *(_QWORD *)v39;
    *((_DWORD *)v21 + 2) = *(_DWORD *)(v9 + 3912);
  }
  if ( *(_BYTE *)(v9 + 1152) && (*v39 & 1) == 0 && !DeviceExtension[2695] )
  {
    started = -1071775740LL;
LABEL_138:
    v101 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v101 + 24) = started;
LABEL_123:
    WdLogEvent5_WdError(v101);
    goto LABEL_124;
  }
  if ( *(_DWORD *)(v9 + 3480) )
  {
    v49 = *(_QWORD *)(v9 + 48);
    v50 = *(_QWORD *)(v9 + 40);
    v194 = 0LL;
    LODWORD(v194) = 67108861;
    v195 = 0LL;
    v51 = DpiDxgkDdiDisplayDetectControl(v9, v50, v49, (unsigned int *)&v194);
    started = v51;
    if ( v51 < 0 )
    {
      v101 = WdLogNewEntry5_WdError(v53, v52);
      v102 = *(_QWORD *)(v11 + 1128);
      goto LABEL_120;
    }
  }
  v47 = P;
  RelatedObjects = DpiFdoCreateRelatedObjects((__int64)a1, *(_DWORD *)(v9 + 2684), (__int64)P, (__int64)v182);
  started = RelatedObjects;
  if ( RelatedObjects < 0 )
    goto LABEL_126;
  if ( (*v39 & 1) != 0 && (int)DpiAcquireCoreSyncAccessSafe((__int64)a1, 1) >= 0 )
  {
    MonitorInitializeAdapterDone(*(PERESOURCE **)(v9 + 3896), v182, v55, v56);
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 1);
  }
  v173 = 1;
  if ( *(_DWORD *)(v9 + 3224) != -1 )
  {
    Caps = DpiMiracastDdiMiracastQueryCaps(v9, v13, v9 + 3216);
    v93 = Caps;
    if ( Caps < 0 )
    {
      v126 = WdLogNewEntry5_WdEvent(v92, v91);
      *(_QWORD *)(v126 + 24) = v93;
      WdLogEvent5_WdEvent(v126);
      *(_DWORD *)(v9 + 3224) = -1;
      memset((void *)(v9 + 3152), 0, 0x40uLL);
    }
  }
  v57 = DpiOpenPnpRegistryKey(a1, 2LL, 131097LL, &Handle);
  v60 = v57;
  if ( v57 < 0 )
  {
    v127 = WdLogNewEntry5_WdEvent(v59, v58);
    *(_QWORD *)(v127 + 24) = v60;
    WdLogEvent5_WdEvent(v127);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"MiracastDriverName");
    if ( (int)DxgkRetrieveStringFromRegistry(Handle, &DestinationString) < 0 )
    {
      v63 = WdLogNewEntry5_WdEvent(v62, v61);
      *(_QWORD *)(v63 + 24) = DxgkRetrieveStringFromRegistry;
      WdLogEvent5_WdEvent(v63);
    }
    ZwClose(Handle);
  }
  v66 = *(_QWORD *)(v9 + 4936);
  if ( v66 )
  {
    v128 = *(_QWORD *)(v9 + 4936);
    if ( *(_QWORD *)(v66 + 48) && *(_BYTE *)v66 )
    {
      *(_BYTE *)v66 = 0;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      {
        LODWORD(v171) = *(unsigned __int8 *)(*(_QWORD *)(v9 + 4936) + 2LL);
        McTemplateK0pt_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          &EventDpiFdoThermalActiveCooling,
          v65,
          a1,
          v171);
      }
      v129 = *(_QWORD *)(v9 + 4936);
      LOBYTE(v64) = *(_BYTE *)(v129 + 2);
      (*(void (__fastcall **)(_QWORD, __int64))(v129 + 48))(*(_QWORD *)(v129 + 16), v64);
      v128 = *(_QWORD *)(v9 + 4936);
    }
    if ( *(_QWORD *)(v128 + 56) && *(_BYTE *)(v128 + 1) )
    {
      *(_BYTE *)(v128 + 1) = 0;
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      {
        LODWORD(v171) = *(_DWORD *)(*(_QWORD *)(v9 + 4936) + 4LL);
        McTemplateK0pq_EtwWriteTransfer((unsigned int)v171, &EventDpiFdoThermalPassiveCooling, v65, a1, v171);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v9 + 4936) + 56LL))(
        *(_QWORD *)(*(_QWORD *)(v9 + 4936) + 16LL),
        *(unsigned int *)(*(_QWORD *)(v9 + 4936) + 4LL));
    }
  }
  v67 = DpiFdoInitializeGpuVirtualization(a1);
  started = v67;
  if ( v67 < 0 )
    goto LABEL_126;
  if ( *(_BYTE *)(v9 + 482) )
  {
    DXGADAPTER::StartRuntimePowerManagement(*(DXGADAPTER **)(v9 + 3896));
    if ( *(_BYTE *)(v9 + 5736) )
    {
      v130 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 5720), 1u);
      started = v130;
      if ( v130 < 0 )
        goto LABEL_126;
    }
  }
  if ( !*(_BYTE *)(v9 + 480) )
  {
    v94 = *(_DWORD *)(v9 + 3484);
    if ( v94 != -1 )
      LPMDisplayRegisterInternalDisplay(*(void **)(v9 + 3896), v94);
  }
  DpiBrightnessStartDevice(a1);
  DpiFdoInitializeMipiDsi((__int64)a1);
  DpiFdoInitializeDP((__int64)a1);
  DpiFdoInitializeDisplayDiagnostics((__int64)a1);
LABEL_62:
  v68 = DpiFdoOpenDeviceFileObjectIfNeeded(DeviceExtension);
  started = v68;
  if ( v68 < 0 )
  {
LABEL_210:
    v133 = WdLogNewEntry5_WdError(v70, v69);
    *(_QWORD *)(v133 + 24) = started;
    WdLogEvent5_WdError(v133);
    v173 = v174;
    goto LABEL_74;
  }
  DxgkMiracastQueryMiracastSupportInternal(0LL);
  v72 = *((_DWORD *)DeviceExtension + 69) & 7;
  *(_DWORD *)&DeviceExtension[4 * v72 + 244] = *((_DWORD *)DeviceExtension + 60);
  v73 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  *((_DWORD *)DeviceExtension + 60) = v73;
  *((_DWORD *)DeviceExtension + 59) = 2;
  if ( v9 && v47 )
  {
    v74 = *(_QWORD *)(v9 + 5936);
    if ( *(_BYTE *)(v9 + 2743) )
    {
      Global = DXGGLOBAL::GetGlobal(v72, v71);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                         *((DXGSESSIONMGR **)Global + 88),
                                         (unsigned int)v74);
      if ( !SessionDataForSpecifiedSession )
      {
        v131 = WdLogNewEntry5_WdError(v137, v136);
        *(_QWORD *)(v131 + 24) = (unsigned int)v74;
        *(_QWORD *)(v131 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v131);
LABEL_209:
        v132 = *((_DWORD *)DeviceExtension + 60);
        --*((_DWORD *)DeviceExtension + 69);
        *((_DWORD *)DeviceExtension + 59) = v132;
        *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7)
                                                                      + 244];
        goto LABEL_210;
      }
      v75 = DXGSESSIONDATA::CommitSessionGdiViewIds(SessionDataForSpecifiedSession);
    }
    else
    {
      v75 = DMgrWriteDeviceCountToRegistry();
    }
    if ( v75 >= 0 )
      goto LABEL_68;
    goto LABEL_209;
  }
LABEL_68:
  v173 = v174;
  if ( v9 )
  {
    v76 = !*(_BYTE *)(v9 + 1154) || !*(_BYTE *)(v9 + 480);
    v77 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2744), v76);
    started = v77;
    if ( v77 < 0 )
    {
      v138 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v138;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
      v139 = WdLogNewEntry5_WdError(v79, v78);
      *(_QWORD *)(v139 + 24) = started;
      WdLogEvent5_WdError(v139);
    }
    else
    {
      v179 = 1;
    }
    v173 = v174;
  }
LABEL_74:
  v80 = 0;
  if ( v9 )
    v80 = (*(unsigned __int8 *)(v9 + 3904) >> 1) & 0x21 | (2
                                                         * (*(_BYTE *)(v9 + 3904) & 1 | (2
                                                                                       * (*(_BYTE *)(v9 + 480) & 1 | (2 * (*(_BYTE *)(v9 + 1152) & 1 | (2 * (*(_BYTE *)(v9 + 2692) & 1 | (4 * (*(_BYTE *)(v9 + 3904) & 0x84 | *(_BYTE *)(v9 + 3905) & 1 | (2 * (*(_BYTE *)(v9 + 3904) & 0x38 | (*(_DWORD *)(v9 + 504) != 0 ? 4 : 0) | *(_BYTE *)(v9 + 1158) & 1))))))))))));
  if ( (int)started < 0 )
  {
    v140 = (struct _DEVICE_OBJECT *)*((_QWORD *)DeviceExtension + 19);
    DeviceExtension[232] = 1;
    IoInvalidateDeviceState(v140);
    if ( *((_DWORD *)DeviceExtension + 59) == 2 )
    {
      v141 = *((_DWORD *)DeviceExtension + 60);
      --*((_DWORD *)DeviceExtension + 69);
      *((_DWORD *)DeviceExtension + 59) = v141;
      *((_DWORD *)DeviceExtension + 60) = *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244];
    }
    if ( v9 )
    {
      if ( v179 == 1 )
        IoSetDeviceInterfaceState((PUNICODE_STRING)(v9 + 2744), 0);
      DpiFdoCleanupGpuVirtualization(v9);
      DpiFdoCleanupMipiDsi(v9);
      DpiFdoCleanupDP((_QWORD *)v9);
      DpiFdoCleanupDisplayDiagnostics(v9);
      if ( v173 == 1 )
        DpiFdoDestroyRelatedObjects(a1, v182);
      if ( v47 )
      {
        v144 = *(_DWORD *)(v9 + 2684);
        if ( v144 )
        {
          do
          {
            --v144;
            LOBYTE(v142) = *(_BYTE *)(v9 + 2743);
            LOBYTE(v143) = 1;
            DxgkReleaseGdiViewId(v142, *(_QWORD *)(v9 + 5936), P[v144], v143);
          }
          while ( v144 );
          v11 = v192;
        }
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C00AFA20 == a1 )
      {
        qword_1C00AFA20 = 0LL;
        word_1C00AFA1D = 0;
      }
      if ( (struct _DEVICE_OBJECT *)qword_1C00AFA28 == a1 )
      {
        LOBYTE(word_1C00AFA1D) = 0;
        qword_1C00AFA28 = 0LL;
      }
      if ( v174 == 1 )
      {
        if ( *((_QWORD *)DeviceExtension + 61) )
        {
          PoFxUnregisterDevice();
          *(_QWORD *)(*(_QWORD *)(v9 + 3896) + 2784LL) = 0LL;
          *((_QWORD *)DeviceExtension + 61) = 0LL;
        }
        v145 = *(DXGADAPTER **)(v9 + 3896);
        if ( v145 && *((_DWORD *)v145 + 50) != 2 && *((_DWORD *)v145 + 50) != 4 )
          DXGADAPTER::Stop(v145, 0, 0);
        DxgkReleaseAdapterFdoReference(*(_QWORD *)(v9 + 3896));
        *(_QWORD *)(v9 + 3896) = 0LL;
      }
      DpiFdoRemoveChildDescriptors(a1);
    }
    if ( v177 == 1 && v11 )
    {
      if ( !DeviceExtension[1152] )
        goto LABEL_247;
      v180 = DpiFdoStopDeviceAndReleasePostDisplayOwnership(a1);
      v146 = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x74727044u);
      v147 = v146;
      if ( v146 )
      {
        memset(v146, 0, 0x48uLL);
        v148 = v180;
        v147[8] = *((_QWORD *)DeviceExtension + 334);
        *(_DWORD *)v147 = 30;
        *((_DWORD *)v147 + 1) = 72;
        *((_DWORD *)v147 + 12) = 98;
        *((_DWORD *)v147 + 13) = 1;
        *((_DWORD *)v147 + 14) = v148;
        if ( v9 )
          v149 = *(_QWORD *)(v9 + 5936);
        else
          v149 = 0x200000000LL;
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v147, v149);
        ExFreePoolWithTag(v147, 0x74727044u);
      }
      if ( v180 < 0 )
      {
LABEL_247:
        if ( v9 )
          *(_BYTE *)(v9 + 3904) &= ~4u;
        DpiDxgkDdiStopDevice(v11, *((_QWORD *)DeviceExtension + 6));
      }
    }
    if ( v175 == 1 )
      DpiFdoDisconnectInterrupt(a1);
    v176 = 1;
    if ( v177 )
      goto LABEL_260;
    if ( !*(_QWORD *)(v11 + 1344) )
      goto LABEL_260;
    DiagnosticInfoArgs = DxgAllocateDiagnosticInfoArgs(2LL);
    v151 = DiagnosticInfoArgs;
    if ( !DiagnosticInfoArgs )
      goto LABEL_260;
    *(_QWORD *)DiagnosticInfoArgs = *((_QWORD *)DeviceExtension + 6);
    v152 = *((_QWORD *)DeviceExtension + 19);
    v180 = *(_DWORD *)(DiagnosticInfoArgs + 216);
    if ( (*(int (__fastcall **)(__int64, __int64))(v11 + 1344))(v152, DiagnosticInfoArgs) >= 0 )
    {
      if ( *(_DWORD *)(v151 + 220) > (unsigned int)v180 )
        *(_DWORD *)(v151 + 220) = 0;
      DxgCreateLiveDumpWithDriverBlob(
        *((struct _DEVICE_OBJECT **)DeviceExtension + 19),
        0x1B0u,
        *(int *)(v151 + 8),
        (int)started,
        v80,
        *(_QWORD *)(v11 + 152),
        (struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v151);
      v176 = 0;
    }
    DxgFreeDiagnosticInfoArgs((struct _DXGKARG_COLLECTDIAGNOSTICINFO *)v151);
    if ( v176 )
    {
LABEL_260:
      if ( v11 )
        v153 = *(_QWORD *)(v11 + 152);
      else
        v153 = 0LL;
      DxgCreateLiveDumpWithWdLogs(0x193u, 0x804uLL, (int)started, v80, v153, 0);
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( DeviceExtension[1154] && DeviceExtension[1152] )
    NotifyUserMSBDAIfApplicable();
  v81 = 0LL;
  v180 = 0;
  if ( v9 )
  {
    if ( DeviceExtension[1158] )
    {
      v154 = *(_QWORD *)(v9 + 1008);
      if ( v154 )
      {
        v155 = *(__int64 (__fastcall **)(__int64, _QWORD))(v9 + 1064);
        if ( v155 )
        {
          v156 = v155(v154, (unsigned int)started);
          v159 = v156;
          if ( v156 < 0 )
          {
            v160 = WdLogNewEntry5_WdError(v158, v157);
            *(_QWORD *)(v160 + 24) = *(_QWORD *)(v9 + 1064);
            *(_QWORD *)(v160 + 32) = v159;
            WdLogEvent5_WdError(v160);
          }
        }
        v161 = *(__int64 (__fastcall **)(__int64, __int128 *))(v9 + 1080);
        if ( v161 )
        {
          v197 = 0LL;
          v162 = *(_QWORD *)(v9 + 1008);
          v196 = 0LL;
          v163 = v161(v162, &v196);
          v166 = v163;
          if ( v163 < 0 )
          {
            v167 = WdLogNewEntry5_WdError(v165, v164);
            *(_QWORD *)(v167 + 24) = *(_QWORD *)(v9 + 1080);
            *(_QWORD *)(v167 + 32) = v166;
            WdLogEvent5_WdError(v167);
          }
          else
          {
            v81 = *((_QWORD *)&v196 + 1);
            *(_DWORD *)(v9 + 1164) = DWORD1(v196);
            v180 = v197;
          }
        }
        IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v9 + 152), PowerRelations);
      }
    }
    v82 = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x74727044u);
    v83 = v82;
    if ( v82 )
    {
      memset(v82, 0, 0x60uLL);
      *v83 = 41;
      v83[1] = 96;
      v83[13] = (unsigned int)a1 & 0xFFFF00;
      v83[12] = started;
      *((_QWORD *)v83 + 7) = *((_QWORD *)DeviceExtension + 334);
      v83[16] = DxgkDiagCalcDuration1us(&v186);
      v83[17] = *(_DWORD *)(v9 + 3912);
      v83[22] = v180;
      v83[18] = v80;
      *((_QWORD *)v83 + 10) = v81;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v83, *(_QWORD *)(v9 + 5936));
      ExFreePoolWithTag(v83, 0x74727044u);
    }
    if ( DeviceExtension[1152] )
    {
      if ( qword_1C00AFCC0 )
      {
        v95 = *(_QWORD *)(qword_1C00AFCC0 + 64);
        if ( v95 )
        {
          v96 = *(_QWORD *)(v95 + 40);
          if ( v96 )
          {
            if ( *(_QWORD *)(v96 + 408) )
              SendBDDDiagTelemetry(v95);
          }
        }
      }
    }
  }
  else
  {
    v168 = (char *)ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x74727044u);
    v169 = v168;
    if ( v168 )
    {
      memset(v168, 0, 0x40uLL);
      v170 = DxgkDiagCalcDuration1us(&v186);
      *((_DWORD *)v169 + 10) = 0;
      *((_QWORD *)v169 + 4) = 0LL;
      *(_DWORD *)v169 = 6;
      *((_DWORD *)v169 + 1) = 64;
      *(_OWORD *)(v169 + 8) = 0LL;
      *((_QWORD *)v169 + 3) = 0LL;
      *((_DWORD *)v169 + 12) = 35;
      *((_DWORD *)v169 + 13) = (unsigned int)a1 & 0xFFFF00;
      *((_DWORD *)v169 + 14) = v170;
      *((_DWORD *)v169 + 15) = started;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v169, 0x200000000LL);
      ExFreePoolWithTag(v169, 0x74727044u);
    }
  }
  return (unsigned int)started;
}
