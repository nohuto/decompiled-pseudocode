/*
 * XREFs of WmipDriverEntry @ 0x140A65390
 * Callers:
 *     <none>
 * Callees:
 *     IoDeleteDevice @ 0x14026F700 (IoDeleteDevice.c)
 *     RtlInitAnsiString @ 0x1402770E0 (RtlInitAnsiString.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     KeInitializeMutex @ 0x1402FF760 (KeInitializeMutex.c)
 *     IoCreateDevice @ 0x140634290 (IoCreateDevice.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063D070 (RtlAnsiStringToUnicodeString.c)
 *     IoWMIRegistrationControl @ 0x14073F4F0 (IoWMIRegistrationControl.c)
 *     IoCreateSymbolicLink @ 0x14075B2F0 (IoCreateSymbolicLink.c)
 *     IoRegisterShutdownNotification @ 0x1407AC110 (IoRegisterShutdownNotification.c)
 *     WmipInitializeSecurity @ 0x140A6551C (WmipInitializeSecurity.c)
 *     WmipInitializeDataStructs @ 0x140A657AC (WmipInitializeDataStructs.c)
 *     WmipInitializeRegistration @ 0x140A65928 (WmipInitializeRegistration.c)
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
