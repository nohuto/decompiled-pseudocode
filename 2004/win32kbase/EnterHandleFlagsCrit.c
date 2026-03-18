/*
 * XREFs of EnterHandleFlagsCrit @ 0x1C003FC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EnterHandleFlagsCrit()
{
  return ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
}
