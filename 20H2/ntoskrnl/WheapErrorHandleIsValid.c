/*
 * XREFs of WheapErrorHandleIsValid @ 0x1405BA900
 * Callers:
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x1405BA260 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportAbandonDeviceDriver @ 0x1405BA390 (WheaHwErrorReportAbandonDeviceDriver.c)
 *     WheaHwErrorReportGetLogDataBufferDeviceDriver @ 0x1405BA3C0 (WheaHwErrorReportGetLogDataBufferDeviceDriver.c)
 *     WheaHwErrorReportMarkAsCriticalDeviceDriver @ 0x1405BA410 (WheaHwErrorReportMarkAsCriticalDeviceDriver.c)
 *     WheaHwErrorReportSetFatalSeverityDeviceDriver @ 0x1405BA440 (WheaHwErrorReportSetFatalSeverityDeviceDriver.c)
 *     WheaHwErrorReportSetSeverityDeviceDriver @ 0x1405BA4F0 (WheaHwErrorReportSetSeverityDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1405BA530 (WheaHwErrorReportSubmitDeviceDriver.c)
 * Callees:
 *     <none>
 */

bool __fastcall WheapErrorHandleIsValid(_DWORD *a1)
{
  return a1 && *a1 == 1095059543;
}
