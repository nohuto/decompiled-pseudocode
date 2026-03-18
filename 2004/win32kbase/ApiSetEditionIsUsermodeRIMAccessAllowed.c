/*
 * XREFs of ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C00506D8
 * Callers:
 *     NtRIMReadInput @ 0x1C00503D0 (NtRIMReadInput.c)
 *     NtRIMOnPnpNotification @ 0x1C0050460 (NtRIMOnPnpNotification.c)
 *     NtRIMAreSiblingDevices @ 0x1C0156350 (NtRIMAreSiblingDevices.c)
 *     NtRIMDeviceIoControl @ 0x1C01563B0 (NtRIMDeviceIoControl.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C0156460 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMFreeInputBuffer @ 0x1C0156930 (NtRIMFreeInputBuffer.c)
 *     NtRIMGetDevicePreparsedData @ 0x1C0156970 (NtRIMGetDevicePreparsedData.c)
 *     NtRIMGetDeviceProperties @ 0x1C0156A00 (NtRIMGetDeviceProperties.c)
 *     NtRIMGetPhysicalDeviceRect @ 0x1C0156A80 (NtRIMGetPhysicalDeviceRect.c)
 *     NtRIMGetSourceProcessId @ 0x1C0156AD0 (NtRIMGetSourceProcessId.c)
 *     NtRIMOnTimerNotification @ 0x1C0156B40 (NtRIMOnTimerNotification.c)
 *     NtRIMSetTestModeStatus @ 0x1C0157390 (NtRIMSetTestModeStatus.c)
 *     NtRIMUnregisterForInput @ 0x1C01573C0 (NtRIMUnregisterForInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionIsUsermodeRIMAccessAllowed()
{
  unsigned int v0; // ebx
  int v1; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      154,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v0 = 0;
  if ( qword_1C0253038 )
    v1 = qword_1C0253038();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0253040 )
    v0 = qword_1C0253040();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      155,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}
