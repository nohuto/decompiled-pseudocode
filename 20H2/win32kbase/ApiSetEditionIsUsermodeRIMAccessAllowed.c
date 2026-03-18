/*
 * XREFs of ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C00289E8
 * Callers:
 *     NtRIMReadInput @ 0x1C0022C20 (NtRIMReadInput.c)
 *     NtRIMOnPnpNotification @ 0x1C0025C30 (NtRIMOnPnpNotification.c)
 *     NtRIMAreSiblingDevices @ 0x1C0153DF0 (NtRIMAreSiblingDevices.c)
 *     NtRIMDeviceIoControl @ 0x1C0153E50 (NtRIMDeviceIoControl.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C0153F00 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMFreeInputBuffer @ 0x1C01543D0 (NtRIMFreeInputBuffer.c)
 *     NtRIMGetDevicePreparsedData @ 0x1C0154410 (NtRIMGetDevicePreparsedData.c)
 *     NtRIMGetDeviceProperties @ 0x1C01544A0 (NtRIMGetDeviceProperties.c)
 *     NtRIMGetPhysicalDeviceRect @ 0x1C0154520 (NtRIMGetPhysicalDeviceRect.c)
 *     NtRIMGetSourceProcessId @ 0x1C0154570 (NtRIMGetSourceProcessId.c)
 *     NtRIMOnTimerNotification @ 0x1C01545E0 (NtRIMOnTimerNotification.c)
 *     NtRIMSetTestModeStatus @ 0x1C0154E30 (NtRIMSetTestModeStatus.c)
 *     NtRIMUnregisterForInput @ 0x1C0154E60 (NtRIMUnregisterForInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
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
  if ( qword_1C0251038 )
    v1 = qword_1C0251038();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0251040 )
    v0 = qword_1C0251040();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      155,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}
