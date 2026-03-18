/*
 * XREFs of GreLockDynamicModeChange @ 0x1C0050450
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C000F390 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 */

__int64 GreLockDynamicModeChange()
{
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
}
