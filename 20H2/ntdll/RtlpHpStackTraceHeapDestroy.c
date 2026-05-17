/*
 * XREFs of RtlpHpStackTraceHeapDestroy @ 0x180009638
 * Callers:
 *     RtlDestroyHeap @ 0x180009680 (RtlDestroyHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x180108710 (RtlpHpPerHeapStackTraceCleanup.c)
 */

__int64 __fastcall RtlpHpStackTraceHeapDestroy(__int64 a1)
{
  __int64 v3; // rcx

  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_18016D588 & 1) != 0 && (dword_18016D588 & 2) != 0 )
  {
    v3 = 104LL;
    if ( *(_DWORD *)(a1 + 16) != -571548178 )
      v3 = 368LL;
    RtlpHpPerHeapStackTraceCleanup(a1 + v3, 0LL, 0LL);
  }
  return RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
