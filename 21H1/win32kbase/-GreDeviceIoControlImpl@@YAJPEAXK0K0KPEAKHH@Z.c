/*
 * XREFs of ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C0096544
 * Callers:
 *     ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x1C0042B70 (-GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C0047A7C (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     bSetDeviceSessionUsage @ 0x1C00492D0 (bSetDeviceSessionUsage.c)
 *     DrvSetMonitorsDimState @ 0x1C0053EF8 (DrvSetMonitorsDimState.c)
 *     DrvSetMonitorBrightness @ 0x1C0054054 (DrvSetMonitorBrightness.c)
 *     xxxRemoteConnect @ 0x1C0054D30 (xxxRemoteConnect.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0093390 (DrvUpdateGraphicsDeviceList.c)
 *     UpdateMonitorDevices @ 0x1C0096760 (UpdateMonitorDevices.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C00978D8 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00C8320 (DrvSetWddmDeviceMonitorPowerState.c)
 *     GreGdoDeviceIoControlEx @ 0x1C00CB9F0 (GreGdoDeviceIoControlEx.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00CBAEC (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvSetVideoParameters @ 0x1C0151C90 (DrvSetVideoParameters.c)
 *     EngDeviceIoControl @ 0x1C0154B30 (EngDeviceIoControl.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C0096410 (UserRemoteConnectedSessionUsingXddm.c)
 */

__int64 __fastcall GreDeviceIoControlImpl(
        PDEVICE_OBJECT DeviceObject,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        unsigned int *a7,
        BOOLEAN InternalDeviceIoControl,
        int a9)
{
  unsigned int Status; // ebx
  PIRP v14; // rdi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  Status = -1073741822;
  IoStatusBlock = 0LL;
  if ( !DeviceObject )
    return 3221225480LL;
  if ( InputBufferLength >= 0x2710000
    || OutputBufferLength >= 0x2710000
    || InputBufferLength + OutputBufferLength >= 0x2710000 )
  {
    return 3221225485LL;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v14 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          DeviceObject,
          InputBuffer,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          InternalDeviceIoControl,
          &Event,
          &IoStatusBlock);
  if ( v14 )
  {
    if ( a9 && (unsigned int)UserRemoteConnectedSessionUsingXddm() )
      v14->Tail.Overlay.CurrentStackLocation[-1].FileObject = FileObject;
    Status = IofCallDriver(DeviceObject, v14);
    if ( Status == 259 )
    {
      while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
        ;
      Status = IoStatusBlock.Status;
    }
    *a7 = IoStatusBlock.Information;
  }
  return Status;
}
