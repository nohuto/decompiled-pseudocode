/*
 * XREFs of ExpTimeRefreshWork @ 0x14098CD60
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     KeSetTimer2 @ 0x14027EDC0 (KeSetTimer2.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExAcquireTimeRefreshLock @ 0x1406AA348 (ExAcquireTimeRefreshLock.c)
 *     ExReleaseTimeRefreshLock @ 0x1406ABD00 (ExReleaseTimeRefreshLock.c)
 *     ExUpdateSystemTimeFromCmos @ 0x14098CDE4 (ExUpdateSystemTimeFromCmos.c)
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
    if ( qword_140D2D4E8 )
      qword_140D2D4E8(v0);
  }
  while ( _InterlockedExchangeAdd(&ExpOkToTimeRefresh, 0xFFFFFFFF) != 1 );
  v2[0] = 0LL;
  v2[1] = -1LL;
  return KeSetTimer2((__int64)&ExpTimeRefreshTimer, ExpTimeRefreshInterval, 0LL, (__int64)v2);
}
