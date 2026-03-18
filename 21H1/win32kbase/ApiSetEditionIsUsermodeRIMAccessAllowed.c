/*
 * XREFs of ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C009E9AC
 * Callers:
 *     NtRIMOnPnpNotification @ 0x1C009EA60 (NtRIMOnPnpNotification.c)
 *     NtRIMReadInput @ 0x1C00A4490 (NtRIMReadInput.c)
 *     NtRIMAreSiblingDevices @ 0x1C015C6A0 (NtRIMAreSiblingDevices.c)
 *     NtRIMDeviceIoControl @ 0x1C015C700 (NtRIMDeviceIoControl.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C015C7B0 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMFreeInputBuffer @ 0x1C015CC80 (NtRIMFreeInputBuffer.c)
 *     NtRIMGetDevicePreparsedData @ 0x1C015CCC0 (NtRIMGetDevicePreparsedData.c)
 *     NtRIMGetDeviceProperties @ 0x1C015CD50 (NtRIMGetDeviceProperties.c)
 *     NtRIMGetPhysicalDeviceRect @ 0x1C015CDD0 (NtRIMGetPhysicalDeviceRect.c)
 *     NtRIMGetSourceProcessId @ 0x1C015CE20 (NtRIMGetSourceProcessId.c)
 *     NtRIMOnTimerNotification @ 0x1C015CE90 (NtRIMOnTimerNotification.c)
 *     NtRIMSetTestModeStatus @ 0x1C015D6E0 (NtRIMSetTestModeStatus.c)
 *     NtRIMUnregisterForInput @ 0x1C015D710 (NtRIMUnregisterForInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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
  if ( qword_1C0258FF8 )
    v1 = qword_1C0258FF8();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0259000 )
    v0 = qword_1C0259000();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      155,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}
