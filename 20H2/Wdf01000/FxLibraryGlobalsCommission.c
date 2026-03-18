/*
 * XREFs of FxLibraryGlobalsCommission @ 0x1C00568A0
 * Callers:
 *     FxLibraryCommonCommission @ 0x1C0040E98 (FxLibraryCommonCommission.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C001B60C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?MxGetSystemRoutineAddress@Mx@@SAPEAXPEBG@Z @ 0x1C00561C0 (-MxGetSystemRoutineAddress@Mx@@SAPEAXPEBG@Z.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1C0056DCC (FxLibraryGlobalsQueryRegistrySettings.c)
 *     FxLibraryGlobalsVerifyVersion @ 0x1C005705C (FxLibraryGlobalsVerifyVersion.c)
 *     FxInitializeBugCheckDriverInfo @ 0x1C008FCE8 (FxInitializeBugCheckDriverInfo.c)
 */

NTSTATUS __fastcall FxLibraryGlobalsCommission(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // r8d
  int v5; // r9d
  PVOID SystemRoutineAddress; // rax
  void (__fastcall *v7)(void **); // rax
  NTSTATUS result; // eax
  _UNICODE_STRING funcName; // [rsp+40h] [rbp-10h] BYREF

  unk_1C00A9F89 = 0;
  unk_1C00A9FD0 = 0;
  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_WdfDirectedPowerTransition_DefaultOptIn__private_reporting,
    0x132D035u,
    a3,
    a4,
    &Feature_WdfDirectedPowerTransition_DefaultOptIn_logged_traits,
    0);
  unk_1C00A9FD2 = 0;
  wil_details_FeatureReporting_ReportUsageToService(
    &Feature_WdfAllowBindToPreReleaseVersion__private_reporting,
    0x11D68E7u,
    v4,
    v5,
    &Feature_WdfAllowBindToPreReleaseVersion_logged_traits,
    1);
  unk_1C00A9FD3 = 1;
  FxLibraryGlobalsQueryRegistrySettings();
  funcName = 0LL;
  RtlInitUnicodeString(&funcName, L"IoConnectInterruptEx");
  WPP_GLOBAL_WDF_Control.Queue.ListEntry.Flink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoDisconnectInterruptEx");
  WPP_GLOBAL_WDF_Control.Queue.ListEntry.Blink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"KeQueryActiveProcessors");
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.Queue.Wcb.NumberOfChannels = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"KeSetTargetProcessorDpc");
  WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceRoutine = (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"KeQueryActiveGroupCount");
  if ( MmGetSystemRoutineAddress(&funcName) )
    unk_1C00A9F60 = 1;
  RtlInitUnicodeString(&funcName, L"KeSetCoalescableTimer");
  WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceContext = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoUnregisterPlugPlayNotificationEx");
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.Queue.Wcb.NumberOfMapRegisters = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxRegisterDevice");
  WPP_GLOBAL_WDF_Control.Queue.Wcb.DeviceObject = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxStartDevicePowerManagement");
  WPP_GLOBAL_WDF_Control.Queue.Wcb.CurrentIrp = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxUnregisterDevice");
  WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc = (_KDPC *)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxActivateComponent");
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.AlignmentRequirement = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxIdleComponent");
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.DeviceQueue.Type = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxReportDevicePoweredOn");
  WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Flink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxCompleteIdleState");
  WPP_GLOBAL_WDF_Control.DeviceQueue.DeviceListHead.Blink = (_LIST_ENTRY *)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxCompleteIdleCondition");
  WPP_GLOBAL_WDF_Control.DeviceQueue.Lock = (unsigned __int64)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxCompleteDevicePowerNotRequired");
  WPP_GLOBAL_WDF_Control.DeviceQueue.1 = ($18E3EACC1E717291AA7C720ECCD5C45C)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"PoFxSetDeviceIdleTimeout");
  *(_QWORD *)&WPP_GLOBAL_WDF_Control.Dpc.TargetInfoAsUlong = MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoReportInterruptActive");
  WPP_GLOBAL_WDF_Control.Dpc.DpcListEntry.Next = (_SINGLE_LIST_ENTRY *)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"IoReportInterruptInactive");
  WPP_GLOBAL_WDF_Control.Dpc.ProcessorHistory = (unsigned __int64)MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"VfCheckNxPoolType");
  WPP_GLOBAL_WDF_Control.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))MmGetSystemRoutineAddress(&funcName);
  RtlInitUnicodeString(&funcName, L"VfIsRuleClassEnabled");
  SystemRoutineAddress = MmGetSystemRoutineAddress(&funcName);
  LODWORD(WPP_GLOBAL_WDF_Control.Dpc.SystemArgument1) = 284;
  WPP_GLOBAL_WDF_Control.Dpc.DeferredContext = SystemRoutineAddress;
  v7 = (void (__fastcall *)(void **))Mx::MxGetSystemRoutineAddress(L"RtlGetVersion");
  v7(&WPP_GLOBAL_WDF_Control.Dpc.SystemArgument1);
  FxLibraryGlobalsVerifyVersion();
  SpinLock = 0LL;
  unk_1C00A9F8B = 0;
  unk_1C00A9F8D = 0;
  unk_1C00A9F18 = &FxDriverGlobals;
  FxDriverGlobals = (_FX_DRIVER_GLOBALS *)&FxDriverGlobals;
  unk_1C00A9F00 = 1;
  FxInitializeBugCheckDriverInfo();
  stru_1C00A9F68.m_DriverUsage = 0LL;
  stru_1C00A9F68.m_PoolToFree = 0LL;
  *(_QWORD *)&stru_1C00A9F68.m_EntrySize = 0LL;
  ImageSectionHandle = 0LL;
  unk_1C00A9F98 = 0;
  result = WmiQueryTraceInformation(WdfNotifyRoutinesClass, &qword_1C00A9FA0, 8u, 0LL, 0LL);
  if ( result < 0 )
  {
    xmmword_1C00A9FA8 = 0LL;
    qword_1C00A9FA0 = &xmmword_1C00A9FA8;
    result = 0;
    LODWORD(xmmword_1C00A9FA8) = 32;
    unk_1C00A9FB8 = 0LL;
  }
  return result;
}
