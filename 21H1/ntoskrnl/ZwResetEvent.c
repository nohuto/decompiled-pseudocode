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

__int64 __fastcall ZwResetEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
