/*
 * XREFs of EnterPowerCrit @ 0x1C0063680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EnterPowerCrit()
{
  return ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpPowerRequestMutex);
}
