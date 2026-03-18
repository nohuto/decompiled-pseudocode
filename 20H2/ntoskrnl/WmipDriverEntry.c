/*
 * XREFs of WmipDriverEntry @ 0x140A6C660
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x140203350 (IoDeleteDevice.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x14023DB90 (RtlInitAnsiString.c)
 *     KeInitializeMutex @ 0x140360900 (KeInitializeMutex.c)
 *     IoCreateDevice @ 0x1405D91C0 (IoCreateDevice.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405DFB00 (RtlAnsiStringToUnicodeString.c)
 *     IoWMIRegistrationControl @ 0x14074E0D0 (IoWMIRegistrationControl.c)
 *     IoCreateSymbolicLink @ 0x140769BE0 (IoCreateSymbolicLink.c)
 *     IoRegisterShutdownNotification @ 0x1407BA050 (IoRegisterShutdownNotification.c)
 *     WmipInitializeSecurity @ 0x140A6C7EC (WmipInitializeSecurity.c)
 *     WmipInitializeDataStructs @ 0x140A6CA7C (WmipInitializeDataStructs.c)
 *     WmipInitializeRegistration @ 0x140A6CBF8 (WmipInitializeRegistration.c)
 */

NTSTATUS __fastcall WmipDriverEntry(PDRIVER_OBJECT DriverObject)
{
  __int64 v2; // rdx
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx
  UNICODE_STRING DeviceName; // [rsp+40h] [rbp-38h] BYREF
  STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+60h] [rbp-18h] BYREF

  DeviceName = 0LL;
  SymbolicLinkName = 0LL;
  DestinationString = 0LL;
  KeInitializeMutex(&WmipSMMutex, 0);
  WmipInitializeRegistration(0LL, v2);
  WmipEventWorkQueueItem.Parameter = 0LL;
  WmipEventWorkQueueItem.List.Flink = 0LL;
  WmipNPNotificationSpinlock = 0LL;
  WmipEventWorkQueueItem.WorkerRoutine = (void (__fastcall *)(void *))WmipEventNotification;
  result = WmipInitializeDataStructs();
  if ( result >= 0 )
  {
    RtlInitAnsiString(&DestinationString, "\\Registry\\Machine\\System\\CurrentControlSet\\Services\\WMI");
    RtlAnsiStringToUnicodeString(&WmipRegistryPath, &DestinationString, 1u);
    result = WmipInitializeSecurity();
    if ( result >= 0 )
    {
      RtlInitUnicodeString(&DeviceName, L"\\Device\\WMIDataDevice");
      result = IoCreateDevice(DriverObject, 0, &DeviceName, 0x22u, 0x100u, 0, &WmipServiceDeviceObject);
      if ( result >= 0 )
      {
        RtlInitUnicodeString(&SymbolicLinkName, L"\\DosDevices\\WMIDataDevice");
        v4 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
        if ( v4 < 0 )
        {
          IoDeleteDevice(WmipServiceDeviceObject);
        }
        else
        {
          WmipServiceDeviceObject->StackSize = 2;
          DriverObject->MajorFunction[14] = (PDRIVER_DISPATCH)WmipIoControl;
          DriverObject->MajorFunction[23] = (PDRIVER_DISPATCH)WmipSystemControl;
          DriverObject->MajorFunction[0] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          DriverObject->MajorFunction[2] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          DriverObject->MajorFunction[18] = (PDRIVER_DISPATCH)WmipOpenCloseCleanup;
          WmipServiceDeviceObject->Flags &= ~0x80u;
          IoWMIRegistrationControl(WmipServiceDeviceObject, 1u);
          IoRegisterShutdownNotification(WmipServiceDeviceObject);
        }
        return v4;
      }
    }
  }
  return result;
}
