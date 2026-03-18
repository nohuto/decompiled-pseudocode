/*
 * XREFs of ZwResetEvent @ 0x1403F64C0
 * Callers:
 *     PfSnVolumeCheckSeekPenalty @ 0x1406BDE60 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140713820 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14078BE74 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408DD3DC (PfSnVolumeCheckIsSdBus.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwResetEvent(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
