/*
 * XREFs of imp_WdfDeviceStopIdleNoTrack @ 0x1C0010EE0
 * Callers:
 *     <none>
 * Callees:
 *     StopIdleWorker @ 0x1C0010F38 (StopIdleWorker.c)
 */

int __fastcall imp_WdfDeviceStopIdleNoTrack(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        unsigned __int8 WaitForD0)
{
  return StopIdleWorker(DriverGlobals, Device, WaitForD0, 0LL, 0, 0LL);
}
