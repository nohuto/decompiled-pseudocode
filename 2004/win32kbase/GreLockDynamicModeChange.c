/*
 * XREFs of GreLockDynamicModeChange @ 0x1C005DF10
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 */

__int64 GreLockDynamicModeChange()
{
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  return EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
}
