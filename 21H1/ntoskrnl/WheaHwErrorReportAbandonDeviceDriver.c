/*
 * XREFs of WheaHwErrorReportAbandonDeviceDriver @ 0x1405B6110
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x1405B63C0 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x1405B64E0 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapErrorHandleIsValid @ 0x1405B6680 (WheapErrorHandleIsValid.c)
 *     WheapFreeDriverPacketBuffer @ 0x1405B669C (WheapFreeDriverPacketBuffer.c)
 */

__int64 WheaHwErrorReportAbandonDeviceDriver()
{
  ULONG_PTR v0; // rcx

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  WheapFreeDriverPacketBuffer(v0);
  return 0LL;
}
