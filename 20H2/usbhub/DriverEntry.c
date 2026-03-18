/*
 * XREFs of DriverEntry @ 0x1C0041468
 * Callers:
 *     GsDriverEntry @ 0x1C0074010 (GsDriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     memset @ 0x1C001D340 (memset.c)
 *     USBHUB_InitBugCheck @ 0x1C0041764 (USBHUB_InitBugCheck.c)
 *     UsbhInitGlobal @ 0x1C0043508 (UsbhInitGlobal.c)
 *     UsbhModuleDispatch @ 0x1C00438A0 (UsbhModuleDispatch.c)
 *     UsbhInitializeHighResTimer @ 0x1C005CC24 (UsbhInitializeHighResTimer.c)
 *     WppInitKm @ 0x1C00730BC (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C0073198 (WppLoadTracingSupport.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  unsigned int v4; // ebx
  int v5; // edx
  __int64 (__fastcall *v6)(PDRIVER_OBJECT, PDEVICE_OBJECT); // rcx
  int v7; // edx
  NTSTATUS v8; // edi
  NTSTATUS result; // eax
  struct _OSVERSIONINFOW VersionInformation; // [rsp+30h] [rbp-148h] BYREF

  v4 = 1;
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
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_usbhub;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WPP_MAIN_CB.DeviceExtension = 0LL;
  WPP_MAIN_CB.DeviceType = 0;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm(DriverObject, RegistryPath);
  UsbhInitGlobal();
  WPP_MAIN_CB.Queue.ListEntry.Blink = (_LIST_ENTRY *)DriverObject;
  if ( (unsigned __int8)UsbhInitializeHighResTimer() )
    dword_1C006B694 = 1;
  DriverObject->MajorFunction[15] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  v6 = UsbhAddDevice;
  DriverObject->MajorFunction[22] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[27] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[23] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[14] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[2] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->MajorFunction[0] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))UsbhGenDispatch;
  DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))UsbhDriverUnload;
  DriverObject->DriverExtension->AddDevice = (int (__fastcall *)(_DRIVER_OBJECT *, _DEVICE_OBJECT *))UsbhAddDevice;
  LOBYTE(v6) = 1;
  DriverObject->MajorFunction[16] = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *))&UsbhDeviceShutdown;
  v8 = UsbhModuleDispatch((_DWORD)v6, v5, 0, 3, (__int64)RegistryPath, 0LL);
  if ( WPP_MAIN_CB.Dpc.TargetInfoAsUlong > 1 )
  {
    do
    {
      if ( v4 > 0x10 )
        break;
      v4 *= 2;
    }
    while ( v4 < WPP_MAIN_CB.Dpc.TargetInfoAsUlong );
  }
  WPP_MAIN_CB.Dpc.TargetInfoAsUlong = v4;
  if ( (v8 & 0xC0000000) == 0xC0000000 )
    UsbhModuleDispatch(0, v7, 0, 4, 0LL, 0LL);
  USBHUB_BugCheckPortArray = (PVOID)USBHUB_InitBugCheck(USBHUB_BugCheckSavePortArrayData);
  USBHUB_BugCheckHubExt = (PVOID)USBHUB_InitBugCheck(USBHUB_BugCheckSaveHubExtData);
  result = v8;
  WPP_MAIN_CB.Queue.ListEntry.Flink = 0LL;
  return result;
}
