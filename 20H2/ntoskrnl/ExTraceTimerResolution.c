/*
 * XREFs of ExTraceTimerResolution @ 0x1406E3474
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14071C0D0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     PoRundownSystemTimer @ 0x1406E34D4 (PoRundownSystemTimer.c)
 *     PoTraceSystemTimerResolution @ 0x1406F3F48 (PoTraceSystemTimerResolution.c)
 *     ExAcquireTimeRefreshLock @ 0x1406F5A38 (ExAcquireTimeRefreshLock.c)
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
