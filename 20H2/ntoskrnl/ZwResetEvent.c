/*
 * XREFs of ZwResetEvent @ 0x1403FB090
 * Callers:
 *     PfSnVolumeCheckSeekPenalty @ 0x1406E87A8 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140721510 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1407A2124 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408E321C (PfSnVolumeCheckIsSdBus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwResetEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
