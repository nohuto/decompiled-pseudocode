/*
 * XREFs of RtlpStdLockAcquire @ 0x180101968
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x180101420 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x180101634 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x180101714 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1801017F0 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1801019A8 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpStdLockAcquire(_RTL_SRWLOCK *a1)
{
  if ( !byte_18016C508 )
    RtlAcquireSRWLockExclusive(a1);
  return 1;
}
