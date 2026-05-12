/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x1C000CB24
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000C838 (RaidAdapterDeviceControlIrp.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000CA10 (RaidpAdapterTimerDpcRoutine.c)
 *     StorpLogStatistics @ 0x1C000CBD0 (StorpLogStatistics.c)
 *     StorpLogPerAdapterStatistics @ 0x1C000D158 (StorpLogPerAdapterStatistics.c)
 *     RaidAdapterPowerIrp @ 0x1C0010C68 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0011224 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0011508 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C0012208 (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C00122BC (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPnpIrp @ 0x1C0015924 (RaidAdapterPnpIrp.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x1C0031800 (RaidPnPAsyncStartCompleteWorker.c)
 *     RaUnitStorageFreeDumpInfo @ 0x1C0048108 (RaUnitStorageFreeDumpInfo.c)
 *     StorEtwEnableCallback @ 0x1C004DF88 (StorEtwEnableCallback.c)
 *     RaWmiDispatchIrp @ 0x1C00741A4 (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAcquireAdapterRemoveLock(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 264)) )
    return (unsigned int)-1073741738;
  return v1;
}
