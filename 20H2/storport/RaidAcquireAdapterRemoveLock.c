/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x1C000B9E4
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B6F8 (RaidAdapterDeviceControlIrp.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000B8D0 (RaidpAdapterTimerDpcRoutine.c)
 *     StorpLogStatistics @ 0x1C000C8B8 (StorpLogStatistics.c)
 *     StorpLogPerAdapterStatistics @ 0x1C000E678 (StorpLogPerAdapterStatistics.c)
 *     RaidAdapterPowerIrp @ 0x1C0012168 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0012770 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0012A54 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C001375C (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0013810 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPnpIrp @ 0x1C0015DB4 (RaidAdapterPnpIrp.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x1C0032670 (RaidPnPAsyncStartCompleteWorker.c)
 *     StorpQueueWorkItem @ 0x1C003CF48 (StorpQueueWorkItem.c)
 *     RaUnitStorageFreeDumpInfo @ 0x1C0048F18 (RaUnitStorageFreeDumpInfo.c)
 *     StorEtwEnableCallback @ 0x1C004EE40 (StorEtwEnableCallback.c)
 *     RaWmiDispatchIrp @ 0x1C00750B4 (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAcquireAdapterRemoveLock(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 280)) )
    return (unsigned int)-1073741738;
  return v1;
}
