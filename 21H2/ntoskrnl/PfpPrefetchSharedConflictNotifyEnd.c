/*
 * XREFs of PfpPrefetchSharedConflictNotifyEnd @ 0x1408DFD50
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     PfpPrefetchSharedDeref @ 0x140675528 (PfpPrefetchSharedDeref.c)
 */

void __fastcall PfpPrefetchSharedConflictNotifyEnd(volatile signed __int64 *a1, _RTL_BALANCED_NODE *a2)
{
  ULONG_PTR *v4; // rbx

  if ( a2 )
  {
    v4 = (ULONG_PTR *)a1;
    if ( !a1 )
      v4 = &PfGlobals;
    KeAbPreAcquire((ULONG_PTR)v4, a2, 0);
    KeAbPostReleaseEx((ULONG_PTR)v4, (ULONG_PTR)a2);
  }
  if ( a1 )
    PfpPrefetchSharedDeref(a1);
}
