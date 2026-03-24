/*
 * XREFs of ExTraceTimerResolution @ 0x14067E874
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14067D270 (PopDiagTraceControlCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     PoRundownSystemTimer @ 0x14067E8D4 (PoRundownSystemTimer.c)
 *     ExAcquireTimeRefreshLock @ 0x1406DBD14 (ExAcquireTimeRefreshLock.c)
 *     PoTraceSystemTimerResolution @ 0x1406DC934 (PoTraceSystemTimerResolution.c)
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
