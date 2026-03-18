/*
 * XREFs of ExTraceTimerResolution @ 0x1409F7C6C
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14081CBF0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PoTraceSystemTimerResolution @ 0x1407D6EC0 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLock @ 0x1407D6F54 (ExAcquireTimeRefreshLock.c)
 *     PoRundownSystemTimer @ 0x140990A90 (PoRundownSystemTimer.c)
 */

void ExTraceTimerResolution()
{
  __int64 *i; // rbx

  ExAcquireTimeRefreshLock(1u);
  PoRundownSystemTimer();
  for ( i = (__int64 *)ExpTimerResolutionListHead; i != &ExpTimerResolutionListHead; i = (__int64 *)*i )
    PoTraceSystemTimerResolution(1, (__int64)(i - 260));
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
