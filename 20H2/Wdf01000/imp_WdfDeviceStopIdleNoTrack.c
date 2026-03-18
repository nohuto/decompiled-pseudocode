/*
 * XREFs of imp_WdfDeviceStopIdleNoTrack @ 0x1C00481B0
 * Callers:
 *     <none>
 * Callees:
 *     StopIdleWorker @ 0x1C0016D28 (StopIdleWorker.c)
 */

__int64 __fastcall imp_WdfDeviceStopIdleNoTrack(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        unsigned __int8 WaitForD0)
{
  return StopIdleWorker(DriverGlobals, Device, WaitForD0, 0LL, 0, 0LL);
}
