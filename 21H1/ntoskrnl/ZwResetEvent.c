/*
 * XREFs of ZwResetEvent @ 0x1403F5230
 * Callers:
 *     PfSnVolumeCheckSeekPenalty @ 0x1406E3BEC (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140711970 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140793044 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408DC06C (PfSnVolumeCheckIsSdBus.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResetEvent(HANDLE EventHandle, PLONG PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
