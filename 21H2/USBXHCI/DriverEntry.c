/*
 * XREFs of DriverEntry @ 0x1C0071878
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0017C04 (FxDriverEntryWorker.c)
 * Callees:
 *     McGenEventRegister_EtwRegister @ 0x1C0017D0C (McGenEventRegister_EtwRegister.c)
 *     InitializeTelemetryAssertsKM @ 0x1C0017D40 (InitializeTelemetryAssertsKM.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 *     wil_UninitializeFeatureStaging @ 0x1C006B008 (wil_UninitializeFeatureStaging.c)
 *     Counter_Register @ 0x1C0071C94 (Counter_Register.c)
 *     WppInitKm @ 0x1C0071DA4 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C0071E58 (WppLoadTracingSupport.c)
 *     WppCleanupKm @ 0x1C00775CC (WppCleanupKm.c)
 *     wil_InitializeFeatureStaging @ 0x1C007B03C (wil_InitializeFeatureStaging.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  _QWORD *v4; // rax
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  ULONG ReturnLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-B8h] BYREF
  __int64 SystemInformation; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v14[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+70h] [rbp-90h]
  int v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+7Ch] [rbp-84h]
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v19[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-60h]
  int v21; // [rsp+A8h] [rbp-58h]
  int v22; // [rsp+ACh] [rbp-54h]
  __int128 v23; // [rsp+B0h] [rbp-50h]
  void *v24; // [rsp+C0h] [rbp-40h]
  struct _OSVERSIONINFOW VersionInformation; // [rsp+D0h] [rbp-30h] BYREF

  DestinationString = 0LL;
  ReturnLength = 0;
  v11 = 0LL;
  v13 = 0LL;
  HIDWORD(v19[0]) = 0;
  v20 = 0LL;
  v23 = 0LL;
  HIDWORD(v14[0]) = 0;
  v15 = 0LL;
  v16 = 0;
  wil_InitializeFeatureStaging();
  *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = DriverObject;
  memset(&VersionInformation.dwMajorVersion, 0, 0x110uLL);
  VersionInformation.dwOSVersionInfoSize = 276;
  if ( RtlGetVersion(&VersionInformation) >= 0
    && (VersionInformation.dwMajorVersion > 6
     || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion >= 2) )
  {
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = (_LIST_ENTRY *)0x20040000000LL;
  }
  RtlInitUnicodeString(&DestinationString, L"KseQueryDeviceFlags");
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = MmGetSystemRoutineAddress(&DestinationString);
  RtlInitUnicodeString(&DestinationString, L"IoTryQueueWorkItem");
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = MmGetSystemRoutineAddress(&DestinationString);
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_USBXHCI;
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(DriverObject, RegistryPath);
  BYTE4(v11) = 0;
  LODWORD(v11) = 8;
  imp_WppRecorderConfigure(WPP_GLOBAL_Control, &v11);
  v24 = off_1C0061220;
  v19[1] = DriverCleanup;
  v19[0] = 56LL;
  v14[1] = Controller_WdfEvtDeviceAdd;
  v20 = 0LL;
  v23 = 0LL;
  v21 = 1;
  v22 = 1;
  v14[0] = 32LL;
  v15 = 0LL;
  v16 = 0;
  v17 = 1464027224;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _DRIVER_OBJECT *, PUNICODE_STRING, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01023 + 928))(
         WdfDriverGlobals,
         DriverObject,
         RegistryPath,
         v19,
         v14,
         &v13) < 0 )
  {
    WppCleanupKm(DriverObject);
    wil_UninitializeFeatureStaging();
  }
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   v13,
                   off_1C0061220);
  g_WdfDriverUsbXhciContext = (__int64)v4;
  v4[1] = v4;
  *v4 = v4;
  KeInitializeSpinLock(v4 + 2);
  *(_DWORD *)(g_WdfDriverUsbXhciContext + 24) = 0;
  SystemInformation = 8LL;
  v5 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength);
  if ( v5 >= 0 && (SystemInformation & 0x200000000LL) != 0 )
  {
    *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) = 1;
  }
  else
  {
    v5 = 0;
    *(_BYTE *)(g_WdfDriverUsbXhciContext + 28) = 0;
  }
  imp_WppRecorderGetTriageInfo(WPP_GLOBAL_Control, &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  dword_1C00614C8 = WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey;
  qword_1C00614CC = (__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  dword_1C00614D4 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 5);
  dword_1C00614D8 = (int)WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  qword_1C00614F0 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 3448))(WdfDriverGlobals);
  InitializeTelemetryAssertsKM((const void **)RegistryPath);
  McGenEventRegister_EtwRegister(v7, v6, &MS_USBXHCI_ETW_PROVIDER_Context, &MS_USBXHCI_ETW_PROVIDER_Context);
  v8 = g_WdfDriverUsbXhciContext;
  if ( RtlRunOnceExecuteOnce(&SleepstudyHelperInitializeRunOnce, SleepstudyHelperInitializeOnce, 0LL, 0LL) >= 0
    && qword_1C0062AA0 )
  {
    qword_1C0062AA0(v8 + 32, DriverObject);
  }
  else
  {
    *(_QWORD *)(v8 + 32) = &SleepstudyHelperUnsupportedHandle;
  }
  EtwSetInformation(
    MS_USBXHCI_ETW_PROVIDER_Context,
    EventProviderSetTraits,
    &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
    (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
  Counter_Register();
  return v5;
}
