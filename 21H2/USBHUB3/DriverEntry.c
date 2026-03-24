/*
 * XREFs of DriverEntry @ 0x1C0088008
 * Callers:
 *     FxDriverEntryWorker @ 0x1C003EA34 (FxDriverEntryWorker.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00010B0 (RtlStringCchPrintfA.c)
 *     McGenEventRegister_EtwRegister @ 0x1C00012B4 (McGenEventRegister_EtwRegister.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     HUBREG_QueryGlobalUsbLtmSettings @ 0x1C00321E0 (HUBREG_QueryGlobalUsbLtmSettings.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
 *     WppLoadTracingSupport @ 0x1C0072008 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1C00723B0 (WppInitKm.c)
 *     WppCleanupKm @ 0x1C007248C (WppCleanupKm.c)
 *     HUBREG_QueryGlobalHubValues @ 0x1C007EB84 (HUBREG_QueryGlobalHubValues.c)
 *     HUBREG_QueryGlobalUsb20HardwareLpmSettings @ 0x1C0080214 (HUBREG_QueryGlobalUsb20HardwareLpmSettings.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v4; // rbx
  NTSTATUS v5; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // [rsp+28h] [rbp-D8h]
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v16; // [rsp+70h] [rbp-90h]
  __int128 v17; // [rsp+80h] [rbp-80h]
  void *v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h] BYREF
  __int128 v20; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v21; // [rsp+B0h] [rbp-50h]
  __int128 v22; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v23; // [rsp+D0h] [rbp-30h]
  char pszDest[16]; // [rsp+E0h] [rbp-20h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+F0h] [rbp-10h] BYREF

  g_Usbhub3DriverObject = (__int64)DriverObject;
  v13 = 0LL;
  v12 = 0LL;
  v18 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  DestinationString = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  memset(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    ExDefaultNonPagedPoolType = NonPagedPoolNx;
    ExDefaultMdlProtection = 0x40000000;
  }
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_USBHUB3;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  LODWORD(v12) = 8;
  BYTE4(v12) = 0;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v12);
  *(_QWORD *)&v20 = 32LL;
  *((_QWORD *)&v20 + 1) = HUBFDO_EvtDeviceAdd;
  v18 = off_1C00661C0;
  *((_QWORD *)&v15 + 1) = DriverCleanup;
  *(_QWORD *)&v21 = 0LL;
  *((_QWORD *)&v21 + 1) = 0x7733485500000000LL;
  *(_QWORD *)&v15 = 56LL;
  *(_QWORD *)&v16 = 0LL;
  v17 = 0LL;
  *((_QWORD *)&v16 + 1) = 0x100000001LL;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, __int128 *, __int128 *, unsigned __int64 *))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         &v15,
         &v20,
         &v13);
  if ( v5 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v13,
           off_1C00661C0);
    *(_QWORD *)&v22 = 48LL;
    HIDWORD(v23) = 16;
    pszDest[0] = 0;
    v4 = v6;
    *(_QWORD *)&v23 = 0LL;
    BYTE8(v23) = 0;
    *((_QWORD *)&v22 + 1) = 0x20000000400LL;
    RtlStringCchPrintfA(pszDest, 0x10uLL, "hub driver");
    v5 = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v22, v4 + 64);
    if ( v5 < 0 )
      return v5;
    v18 = 0LL;
    *(_QWORD *)&v16 = 0LL;
    *((_QWORD *)&v16 + 1) = 0x100000001LL;
    v17 = v13;
    v15 = 0LL;
    LODWORD(v15) = 56;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64))(WdfFunctions_01015 + 2496))(
           WdfDriverGlobals,
           &v15,
           v4 + 32);
    if ( v5 < 0 )
      return v5;
    *(_QWORD *)(v4 + 24) = v4 + 16;
    *(_QWORD *)(v4 + 16) = v4 + 16;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64))(WdfFunctions_01015 + 2496))(
           WdfDriverGlobals,
           &v15,
           v4 + 56);
    if ( v5 < 0 )
      return v5;
    *(_QWORD *)(v4 + 48) = v4 + 40;
    *(_QWORD *)(v4 + 40) = v4 + 40;
    McGenEventRegister_EtwRegister(v8, v7, &MS_USBHUB3_ETW_PROVIDER_Context, &MS_USBHUB3_ETW_PROVIDER_Context);
    v9 = SleepstudyHelper_Initialize(v4 + 96, DriverObject);
    if ( v9 < 0 )
    {
      *(_BYTE *)(v4 + 92) = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v11) = v9;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v4 + 64),
          4u,
          2u,
          0xAu,
          (__int64)&WPP_3d0ac69ccf5c3e0a14694fbbc3afede7_Traceguids,
          v11);
      }
    }
    else
    {
      *(_BYTE *)(v4 + 92) = 1;
    }
    EtwSetInformation(
      MS_USBHUB3_ETW_PROVIDER_Context,
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
    HUBREG_QueryGlobalHubValues(v4);
    HUBREG_QueryGlobalUsb20HardwareLpmSettings(v4);
    HUBREG_QueryGlobalUsbLtmSettings(v4);
    RtlInitUnicodeString(&DestinationString, L"KseQueryDeviceFlags");
    WPP_MAIN_CB.Queue.ListEntry.Flink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
    RtlInitUnicodeString(&DestinationString, L"IoGetActivityIdIrp");
    *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = MmGetSystemRoutineAddress(&DestinationString);
    RtlInitUnicodeString(&DestinationString, L"IoSetActivityIdIrp");
    g_IoSetActivityIdIrp = (__int64 (__fastcall *)(_QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
    v19 = 0LL;
    if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
    {
      ((void (__fastcall *)(const wchar_t *, const wchar_t *, __int64 *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
        L"USBHUB:GLOBAL_FLAGS",
        L"USBHUB",
        &v19);
      if ( (v19 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)(v4 + 4), 0x20000u);
    }
    imp_WppRecorderGetTriageInfo(WPP_GLOBAL_Control, &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    qword_1C0069670 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 3448))(WdfDriverGlobals);
    dword_1C0069640 = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
    qword_1C0069644 = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
    dword_1C006964C = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
    dword_1C0069650 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  }
  else
  {
    WppCleanupKm((__int64)DriverObject);
  }
  if ( v5 >= 0 && v4 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v11) = *(_DWORD *)(v4 + 4);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v4 + 64),
      4u,
      2u,
      0xBu,
      (__int64)&WPP_3d0ac69ccf5c3e0a14694fbbc3afede7_Traceguids,
      v11);
  }
  return v5;
}
