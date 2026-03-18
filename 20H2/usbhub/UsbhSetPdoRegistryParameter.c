/*
 * XREFs of UsbhSetPdoRegistryParameter @ 0x1C00469A4
 * Callers:
 *     UsbhExtPropDescSemaphorePresent @ 0x1C003246C (UsbhExtPropDescSemaphorePresent.c)
 *     UsbhSetHubOvercurrentDetectedKey @ 0x1C0046920 (UsbhSetHubOvercurrentDetectedKey.c)
 *     UsbhSetHubSelectiveSuspend @ 0x1C0046960 (UsbhSetHubSelectiveSuspend.c)
 *     UsbhSetPdoSelectiveSuspendedKey @ 0x1C0046AF0 (UsbhSetPdoSelectiveSuspendedKey.c)
 *     UsbhSetSqmEnumerationData @ 0x1C0046B28 (UsbhSetSqmEnumerationData.c)
 *     UsbhUpdateRegHubHardResetCount @ 0x1C0046BC0 (UsbhUpdateRegHubHardResetCount.c)
 *     UsbhSetWmiDataBlock @ 0x1C0049BA0 (UsbhSetWmiDataBlock.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C00554E0 (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdo_ReportPnPFailureProblem @ 0x1C0057A60 (UsbhPdo_ReportPnPFailureProblem.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C002E62C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C003B2A0 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall UsbhSetPdoRegistryParameter(
        PDEVICE_OBJECT DeviceObject,
        PCWSTR SourceString,
        ULONG Type,
        PVOID Data,
        ULONG DataSize)
{
  NTSTATUS v9; // ebx
  void *DeviceRegKey; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-30h] BYREF

  DeviceRegKey = 0LL;
  DestinationString = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)SourceString,
        1u,
        0x59u,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        DeviceObject,
        DeviceRegKey,
        *(_QWORD *)&DestinationString.Length,
        DestinationString.Buffer);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)SourceString,
        Type,
        90,
        (__int64)&WPP_290dcc7ac903398322657943f635c8d9_Traceguids,
        (__int64)SourceString);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  v9 = IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x1F0000u, &DeviceRegKey);
  if ( v9 >= 0 )
  {
    v9 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, Type, Data, DataSize);
    ZwClose(DeviceRegKey);
  }
  return (unsigned int)v9;
}
