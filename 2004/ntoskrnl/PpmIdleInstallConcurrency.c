/*
 * XREFs of PpmIdleInstallConcurrency @ 0x140561570
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     PpmIdleUpdateConcurrency @ 0x140561B80 (PpmIdleUpdateConcurrency.c)
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
