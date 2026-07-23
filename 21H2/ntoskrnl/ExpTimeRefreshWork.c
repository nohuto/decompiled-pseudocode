/*
 * XREFs of ExpTimeRefreshWork @ 0x140990840
 * Callers:
 *     <none>
 * Callees:
 *     KeSetTimer2 @ 0x1402D0DD0 (KeSetTimer2.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExReleaseTimeRefreshLock @ 0x1406B2FD0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406B2FF4 (ExAcquireTimeRefreshLock.c)
 *     ExUpdateSystemTimeFromCmos @ 0x1409908C4 (ExUpdateSystemTimeFromCmos.c)
 */

_BOOL8 ExpTimeRefreshWork()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  do
  {
    ExAcquireTimeRefreshLock(1u);
    if ( KeTimeSynchronization )
      ExUpdateSystemTimeFromCmos(0LL, 0LL);
    ExReleaseTimeRefreshLock();
    v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals(v1, v0) + 113);
    if ( qword_140D2D4D0 )
      qword_140D2D4D0(v2);
  }
  while ( _InterlockedExchangeAdd(&ExpOkToTimeRefresh, 0xFFFFFFFF) != 1 );
  v4[0] = 0LL;
  v4[1] = -1LL;
  return KeSetTimer2((__int64)&ExpTimeRefreshTimer, ExpTimeRefreshInterval, 0LL, (__int64)v4);
}
