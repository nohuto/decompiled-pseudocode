/*
 * XREFs of DriverEntry @ 0x1C0307D3C
 * Callers:
 *     GsDriverEntry @ 0x1C0307010 (GsDriverEntry.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C0023810 (-DxgkInitializeTelemetry@@YAXXZ.c)
 *     McGenEventRegister_EtwRegister @ 0x1C0024898 (McGenEventRegister_EtwRegister.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_DxgkrnlPrereleaseDiagnostic__private_ReportDeviceUsage @ 0x1C0027844 (Feature_DxgkrnlPrereleaseDiagnostic__private_ReportDeviceUsage.c)
 *     MonitorCleanupGlobal @ 0x1C005DF7C (MonitorCleanupGlobal.c)
 *     wil_UninitializeFeatureStaging @ 0x1C00DC03C (wil_UninitializeFeatureStaging.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C018AD9C (WdmlibIoCreateDeviceSecure.c)
 *     MonitorInitializeGlobal @ 0x1C0192224 (MonitorInitializeGlobal.c)
 *     DxgkInitIoMmu @ 0x1C019250C (DxgkInitIoMmu.c)
 *     ?DxgDbgInit@@YAXXZ @ 0x1C0192544 (-DxgDbgInit@@YAXXZ.c)
 *     ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C01925BC (-CreateGlobal@DXGGLOBAL@@SAJXZ.c)
 *     ?TdrInit@@YAXXZ @ 0x1C0192994 (-TdrInit@@YAXXZ.c)
 *     ?CreateGlobal@CCD_BTL@@SAJXZ @ 0x1C019EA98 (-CreateGlobal@CCD_BTL@@SAJXZ.c)
 *     DxgkInitialPower @ 0x1C019FCF8 (DxgkInitialPower.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0268F44 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     DxgkCleanupPower @ 0x1C02C7C18 (DxgkCleanupPower.c)
 *     wil_InitializeFeatureStaging @ 0x1C0307078 (wil_InitializeFeatureStaging.c)
 *     DpiInitializeGlobalState @ 0x1C03071EC (DpiInitializeGlobalState.c)
 *     ?LPMDisplayInitializeGlobal@@YAJXZ @ 0x1C0307C60 (-LPMDisplayInitializeGlobal@@YAJXZ.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  NTSTATUS ProcessNotifyRoutine; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int8 v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  NTSTATUS v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // r9
  int v34; // eax
  NTSTATUS v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  NTSTATUS v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  PVOID v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // r8
  _QWORD v55[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v56; // [rsp+68h] [rbp-A0h]
  _QWORD v57[2]; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING DefaultSDDLString; // [rsp+80h] [rbp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-60h] BYREF
  int v61; // [rsp+B0h] [rbp-58h]
  const wchar_t *v62; // [rsp+B8h] [rbp-50h]
  unsigned __int8 *v63; // [rsp+C0h] [rbp-48h]
  int v64; // [rsp+C8h] [rbp-40h]
  unsigned __int8 *v65; // [rsp+D0h] [rbp-38h]
  int v66; // [rsp+D8h] [rbp-30h]
  __int64 v67; // [rsp+E0h] [rbp-28h]
  int v68; // [rsp+E8h] [rbp-20h]
  __int128 v69; // [rsp+F0h] [rbp-18h]
  __int128 v70; // [rsp+100h] [rbp-8h]
  __int64 v71; // [rsp+110h] [rbp+8h]
  __int64 SystemInformation; // [rsp+138h] [rbp+30h] BYREF

  v3 = wil_InitializeFeatureStaging();
  v6 = v3;
  if ( v3 < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
    return v6;
  }
  g_pDriverObject = DriverObject;
  ProcessNotifyRoutine = PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 0);
  v11 = ProcessNotifyRoutine;
  if ( ProcessNotifyRoutine < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
  }
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
    || (v13 = 1, (SystemInformation & 0x200000000LL) == 0) )
  {
    v13 = 0;
  }
  g_OSTestSigningEnabled = v13;
  Feature_DxgkrnlPrereleaseDiagnostic__private_ReportDeviceUsage();
  v60 = 0LL;
  v61 = 288;
  v62 = L"IsInternalRelease";
  v64 = 67108868;
  v63 = &g_IsInternalRelease;
  v65 = &g_IsInternalRelease;
  v66 = 4;
  v67 = 0LL;
  v68 = 0;
  v69 = 0LL;
  v71 = 0LL;
  v70 = 0LL;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v60, 0LL, 0LL);
  g_IsInternalRelease = g_IsInternalRelease != 0;
  g_IsInternalReleaseOrDbg = g_IsInternalRelease;
  g_bSkuSupportMultipleUsers = (RtlGetSuiteMask() & 0x110) == 16;
  WdInitialize();
  LODWORD(v6) = DpiInitializeGlobalState();
  if ( (int)v6 < 0
    || (LODWORD(v6) = DXGGLOBAL::CreateGlobal(v15, v14, v16, v17), (int)v6 < 0)
    || (LODWORD(v6) = CCD_BTL::CreateGlobal(v19, v18), (int)v6 < 0) )
  {
    wil_UninitializeFeatureStaging();
    return v6;
  }
  DxgkInitializeTelemetry();
  v20 = ExSubscribeWnfStateChange(&gScreenStudyEventSubscription, &WNF_SRUM_SCREENONSTUDY_SESSION, 1LL);
  v23 = v20;
  if ( v20 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v24 + 24) = v23;
    WdLogEvent5_WdError(v24);
    gScreenStudyEventSubscription = 0LL;
  }
  bTracingEnabled = 0;
  McGenEventRegister_EtwRegister(&DxgkControlGuid, v21, &DxgkControlGuid_Context, (ULONGLONG *)&DxgkControlGuid_Context);
  LODWORD(v55[0]) = -1;
  v55[1] = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    LOBYTE(v56) = 1;
    LODWORD(v55[0]) = 0;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerEnter, v26, 0);
  }
  else
  {
    LOBYTE(v56) = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)v55, 0LL);
  v57[0] = &DxgkControlGuid;
  v57[1] = &Dxgk_WDI_NotifyUser;
  WdDiagInit(v57);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\DxgKrnl");
  DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)DxgkCreateClose;
  DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)DxgkCreateClose;
  DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)DxgkDeviceIoctl;
  DriverObject->MajorFunction[15] = (PDRIVER_DISPATCH)DxgkInternalDeviceIoctl;
  DriverObject->MajorFunction[16] = (PDRIVER_DISPATCH)DxgkShutdown;
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)DxgkUnload;
  DefaultSDDLString = 0LL;
  RtlInitUnicodeString(
    &DefaultSDDLString,
    L"D:P(A;;GRGW;;;S-1-5-83-0)(A;;GRGW;;;S-1-15-3-1024-2268835264-3721307629-241982045-173645152-1490879176-104643441-291"
     "5960892-1612460704)");
  v27 = WdmlibIoCreateDeviceSecure(
          DriverObject,
          0,
          &DestinationString,
          0x22u,
          0x100u,
          0,
          &DefaultSDDLString,
          &GUID_SD_DXGKRNL_DRIVER_OBJECT,
          (PDEVICE_OBJECT *)&g_pDeviceObject);
  v6 = v27;
  if ( v27 < 0
    || (v32 = DxgkInitialPower(), v6 = v32, v32 < 0)
    || (v34 = MonitorInitializeGlobal(v29, v28, v30, v33), v6 = v34, v34 < 0)
    || (v35 = LPMDisplayInitializeGlobal(), v6 = v35, v35 < 0) )
  {
    v31 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v31 + 24) = v6;
    WdLogEvent5_WdWarning(v31);
LABEL_27:
    DxgkCleanupPower();
    MonitorCleanupGlobal(v47, v46, v48, v49);
    v51 = g_pDeviceObject;
    if ( g_pDeviceObject )
    {
      IoDeleteDevice((PDEVICE_OBJECT)g_pDeviceObject);
      g_pDeviceObject = 0LL;
    }
    DXGGLOBAL::DestroyGlobal((__int64)v51, v50);
    wil_UninitializeFeatureStaging();
    goto LABEL_31;
  }
  DxgkInitIoMmu();
  DxgDbgInit(v37, v36);
  TdrInit();
  v38 = SMgrRegisterSessionChangeCallout(DxgkNotifySessionStateChange);
  v6 = v38;
  if ( v38 < 0 )
  {
    v41 = WdLogNewEntry5_WdError(v40, v39);
    *(_QWORD *)(v41 + 24) = v6;
    WdLogEvent5_WdError(v41);
    goto LABEL_27;
  }
  v42 = IoRegisterShutdownNotification((PDEVICE_OBJECT)g_pDeviceObject);
  v6 = v42;
  if ( v42 < 0 )
  {
    v45 = WdLogNewEntry5_WdError(v44, v43);
    *(_QWORD *)(v45 + 24) = v6;
    WdLogEvent5_WdError(v45);
    SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
    goto LABEL_27;
  }
  LODWORD(v6) = 0;
LABEL_31:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v55, v43);
  if ( (_BYTE)v56 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v52, &EventProfilerExit, v53, v55[0]);
  return v6;
}
