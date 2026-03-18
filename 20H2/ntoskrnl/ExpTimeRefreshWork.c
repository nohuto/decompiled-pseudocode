/*
 * XREFs of ExpTimeRefreshWork @ 0x140992AF0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     KeSetTimer2 @ 0x1402E0AF0 (KeSetTimer2.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExAcquireTimeRefreshLock @ 0x1406F5A38 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1406F73F0 (ExReleaseTimeRefreshLock.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140992B74 (ExUpdateSystemTimeFromCmos.c)
 */

_BOOL8 ExpTimeRefreshWork()
{
  __int64 v0; // rcx
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF

  do
  {
    ExAcquireTimeRefreshLock(1u);
    if ( KeTimeSynchronization )
      ExUpdateSystemTimeFromCmos(0LL, 0LL);
    ExReleaseTimeRefreshLock();
    v0 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 113);
    if ( qword_140D2D4F0 )
      qword_140D2D4F0(v0);
  }
  while ( _InterlockedExchangeAdd(&ExpOkToTimeRefresh, 0xFFFFFFFF) != 1 );
  v2[0] = 0LL;
  v2[1] = -1LL;
  return KeSetTimer2((__int64)&ExpTimeRefreshTimer, ExpTimeRefreshInterval, 0LL, (__int64)v2);
}
