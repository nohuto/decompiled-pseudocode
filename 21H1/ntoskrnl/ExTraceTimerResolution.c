/*
 * XREFs of ExTraceTimerResolution @ 0x1405CECD8
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1406FF180 (PopDiagTraceControlCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     PoRundownSystemTimer @ 0x1405CED38 (PoRundownSystemTimer.c)
 *     PoTraceSystemTimerResolution @ 0x1405CF338 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLock @ 0x1405D0D58 (ExAcquireTimeRefreshLock.c)
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
