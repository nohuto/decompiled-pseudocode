/*
 * XREFs of Debug_FreAssertMsg @ 0x1C0007C5C
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C006E290 (Controller_WdfEvtDevicePrepareHardware.c)
 *     Interrupter_PrepareHardware @ 0x1C006EE90 (Interrupter_PrepareHardware.c)
 *     Interrupter_PrepareInterrupter @ 0x1C006FE08 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     WPP_RECORDER_SF_sds @ 0x1C0036B5C (WPP_RECORDER_SF_sds.c)
 */

void __fastcall Debug_FreAssertMsg(__int64 a1, char a2, int a3, int a4)
{
  if ( !a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
}
