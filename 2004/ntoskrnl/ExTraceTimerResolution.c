/*
 * XREFs of ExTraceTimerResolution @ 0x14064F7B4
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14064EB10 (PopDiagTraceControlCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     PoRundownSystemTimer @ 0x14064F814 (PoRundownSystemTimer.c)
 *     PoTraceSystemTimerResolution @ 0x1406A98C8 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLock @ 0x1406AA348 (ExAcquireTimeRefreshLock.c)
 */

void __fastcall ExTraceTimerResolution(__int64 a1)
{
  __int64 v1; // rcx
  __int64 *i; // rbx

  LOBYTE(a1) = 1;
  ExAcquireTimeRefreshLock(a1);
  PoRundownSystemTimer();
  for ( i = (__int64 *)ExpTimerResolutionListHead; i != &ExpTimerResolutionListHead; i = (__int64 *)*i )
  {
    LOBYTE(v1) = 1;
    PoTraceSystemTimerResolution(v1, i - 260);
  }
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
}
