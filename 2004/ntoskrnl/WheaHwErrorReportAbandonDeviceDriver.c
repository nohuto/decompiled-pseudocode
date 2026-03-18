/*
 * XREFs of WheaHwErrorReportAbandonDeviceDriver @ 0x1405B6830
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x1405B6AE0 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x1405B6C00 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapErrorHandleIsValid @ 0x1405B6DA0 (WheapErrorHandleIsValid.c)
 *     WheapFreeDriverPacketBuffer @ 0x1405B6DBC (WheapFreeDriverPacketBuffer.c)
 */

__int64 WheaHwErrorReportAbandonDeviceDriver()
{
  ULONG_PTR v0; // rcx

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  WheapFreeDriverPacketBuffer(v0);
  return 0LL;
}
