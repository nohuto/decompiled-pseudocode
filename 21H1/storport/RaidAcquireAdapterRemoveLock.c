/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x1C000C534
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000C248 (RaidAdapterDeviceControlIrp.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000C420 (RaidpAdapterTimerDpcRoutine.c)
 *     StorpLogStatistics @ 0x1C000C5E0 (StorpLogStatistics.c)
 *     StorpLogPerAdapterStatistics @ 0x1C000CB68 (StorpLogPerAdapterStatistics.c)
 *     RaidAdapterPowerIrp @ 0x1C000EEA8 (RaidAdapterPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C000F464 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C000F748 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C0010394 (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C0010448 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPnpIrp @ 0x1C0013AB4 (RaidAdapterPnpIrp.c)
 *     RaidPnPAsyncStartCompleteWorker @ 0x1C00312B0 (RaidPnPAsyncStartCompleteWorker.c)
 *     RaUnitStorageFreeDumpInfo @ 0x1C00479F8 (RaUnitStorageFreeDumpInfo.c)
 *     StorEtwEnableCallback @ 0x1C004D878 (StorEtwEnableCallback.c)
 *     RaWmiDispatchIrp @ 0x1C0073E64 (RaWmiDispatchIrp.c)
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
