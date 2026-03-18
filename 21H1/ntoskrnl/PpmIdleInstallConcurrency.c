/*
 * XREFs of PpmIdleInstallConcurrency @ 0x140560F20
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     PpmIdleUpdateConcurrency @ 0x140561530 (PpmIdleUpdateConcurrency.c)
 */

__int64 __fastcall PpmIdleInstallConcurrency(__int64 a1, KSPIN_LOCK *a2, KSPIN_LOCK *a3)
{
  KeQueryPerformanceCounter(0LL);
  PpmIdleUpdateConcurrency(a2);
  *(_QWORD *)(a1 + 33192) = a2;
  if ( a3 )
  {
    PpmIdleUpdateConcurrency(a3);
    *(_QWORD *)(a1 + 33200) = a3;
  }
  return 0LL;
}
