/*
 * XREFs of DriverEntry @ 0x1C008C008
 * Callers:
 *     FxDriverEntryWorker @ 0x1C003F314 (FxDriverEntryWorker.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C00010B0 (RtlStringCchPrintfA.c)
 *     McGenEventRegister_EtwRegister @ 0x1C00012B4 (McGenEventRegister_EtwRegister.c)
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     HUBREG_QueryGlobalUsbLtmSettings @ 0x1C0032A48 (HUBREG_QueryGlobalUsbLtmSettings.c)
 *     InitializeTelemetryAssertsKM @ 0x1C003FA50 (InitializeTelemetryAssertsKM.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0043B00 (memset.c)
 *     WppLoadTracingSupport @ 0x1C0073008 (WppLoadTracingSupport.c)
 *     WppInitKm @ 0x1C00733B0 (WppInitKm.c)
 *     WppCleanupKm @ 0x1C007348C (WppCleanupKm.c)
 *     HUBREG_QueryGlobalHubValues @ 0x1C00800F0 (HUBREG_QueryGlobalHubValues.c)
 *     HUBREG_QueryGlobalUsb20HardwareLpmSettings @ 0x1C0081780 (HUBREG_QueryGlobalUsb20HardwareLpmSettings.c)
 *     SleepstudyHelper_Initialize @ 0x1C008A434 (SleepstudyHelper_Initialize.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS v4; // edi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // [rsp+28h] [rbp-D8h]
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h]
  __int64 v17; // [rsp+78h] [rbp-88h]
  __int128 v18; // [rsp+80h] [rbp-80h]
  void *v19; // [rsp+90h] [rbp-70h]
  __int64 v20; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v21[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-50h]
  int v23; // [rsp+B8h] [rbp-48h]
  int v24; // [rsp+BCh] [rbp-44h]
  __int128 v25; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v26; // [rsp+D0h] [rbp-30h]
  char pszDest[16]; // [rsp+E0h] [rbp-20h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [rsp+F0h] [rbp-10h] BYREF

  g_Usbhub3DriverObject = (__int64)DriverObject;
  HIDWORD(v21[0]) = 0;
  v22 = 0LL;
  v23 = 0;
  DWORD1(v15) = 0;
  v16 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v18 = 0LL;
  DestinationString = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  memset(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    ExDefaultNonPagedPoolType = 512;
    ExDefaultMdlProtection = 0x40000000;
  }
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_USBHUB3;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm((__int64)DriverObject, (__int64)RegistryPath);
  LODWORD(v12) = 8;
  BYTE4(v12) = 0;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v12);
  v21[0] = 32LL;
  v21[1] = HUBFDO_EvtDeviceAdd;
  v19 = off_1C00671E8;
  *((_QWORD *)&v15 + 1) = DriverCleanup;
  v22 = 0LL;
  v23 = 0;
  v24 = 1999849557;
  *(_QWORD *)&v15 = 56LL;
  v16 = 0LL;
  v18 = 0LL;
  v17 = 0x100000001LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, __int128 *, _QWORD *, unsigned __int64 *))(WdfFunctions_01015 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         &v15,
         v21,
         &v13);
  if ( v4 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           v13,
           off_1C00671E8);
    *(_QWORD *)&v25 = 48LL;
    HIDWORD(v26) = 16;
    pszDest[0] = 0;
    v6 = v5;
    *(_QWORD *)&v26 = 0LL;
    BYTE8(v26) = 0;
    *((_QWORD *)&v25 + 1) = 0x20000000400LL;
    RtlStringCchPrintfA(pszDest, 0x10uLL, "hub driver");
    v4 = imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v25, v6 + 64);
    if ( v4 >= 0 )
    {
      v19 = 0LL;
      v16 = 0LL;
      v17 = 0x100000001LL;
      v18 = v13;
      v15 = 0LL;
      LODWORD(v15) = 56;
      v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64))(WdfFunctions_01015 + 2496))(
             WdfDriverGlobals,
             &v15,
             v6 + 32);
      if ( v4 >= 0 )
      {
        *(_QWORD *)(v6 + 24) = v6 + 16;
        *(_QWORD *)(v6 + 16) = v6 + 16;
        v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64))(WdfFunctions_01015 + 2496))(
               WdfDriverGlobals,
               &v15,
               v6 + 56);
        if ( v4 >= 0 )
        {
          *(_QWORD *)(v6 + 48) = v6 + 40;
          *(_QWORD *)(v6 + 40) = v6 + 40;
          McGenEventRegister_EtwRegister(v8, v7, &MS_USBHUB3_ETW_PROVIDER_Context, &MS_USBHUB3_ETW_PROVIDER_Context);
          v9 = SleepstudyHelper_Initialize((_QWORD *)(v6 + 96), (__int64)DriverObject);
          if ( v9 < 0 )
          {
            *(_BYTE *)(v6 + 92) = 0;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v11) = v9;
              WPP_RECORDER_SF_d(
                *(_QWORD *)(v6 + 64),
                4u,
                2u,
                0xAu,
                (__int64)&WPP_f9b1a8cb5bdd371c5b58bcce0e83dd79_Traceguids,
                v11);
            }
          }
          else
          {
            *(_BYTE *)(v6 + 92) = 1;
          }
          InitializeTelemetryAssertsKM((const void **)RegistryPath);
          EtwSetInformation(
            MS_USBHUB3_ETW_PROVIDER_Context,
            EventProviderSetTraits,
            &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
            (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
          HUBREG_QueryGlobalHubValues(v6);
          HUBREG_QueryGlobalUsb20HardwareLpmSettings(v6);
          HUBREG_QueryGlobalUsbLtmSettings(v6);
          RtlInitUnicodeString(&DestinationString, L"KseQueryDeviceFlags");
          WPP_MAIN_CB.Queue.ListEntry.Flink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&DestinationString);
          RtlInitUnicodeString(&DestinationString, L"IoGetActivityIdIrp");
          *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = MmGetSystemRoutineAddress(&DestinationString);
          RtlInitUnicodeString(&DestinationString, L"IoSetActivityIdIrp");
          g_IoSetActivityIdIrp = (__int64 (__fastcall *)(_QWORD, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
          v20 = 0LL;
          if ( WPP_MAIN_CB.Queue.ListEntry.Flink )
          {
            ((void (__fastcall *)(const wchar_t *, const wchar_t *, __int64 *))WPP_MAIN_CB.Queue.ListEntry.Flink)(
              L"USBHUB:GLOBAL_FLAGS",
              L"USBHUB",
              &v20);
            if ( (v20 & 1) != 0 )
              _InterlockedOr((volatile signed __int32 *)(v6 + 4), 0x20000u);
          }
          imp_WppRecorderGetTriageInfo(WPP_GLOBAL_Control, &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
          qword_1C006A6F0 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 3448))(WdfDriverGlobals);
          dword_1C006A6C0 = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
          qword_1C006A6C4 = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
          dword_1C006A6CC = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
          dword_1C006A6D0 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
          if ( v6 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v11) = *(_DWORD *)(v6 + 4);
            WPP_RECORDER_SF_d(
              *(_QWORD *)(v6 + 64),
              4u,
              2u,
              0xBu,
              (__int64)&WPP_f9b1a8cb5bdd371c5b58bcce0e83dd79_Traceguids,
              v11);
          }
        }
      }
    }
  }
  else
  {
    WppCleanupKm((__int64)DriverObject);
  }
  return v4;
}
