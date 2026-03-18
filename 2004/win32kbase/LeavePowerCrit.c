/*
 * XREFs of LeavePowerCrit @ 0x1C00636B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 LeavePowerCrit()
{
  return ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
}
