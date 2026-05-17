/*
 * XREFs of RtlpStdLockAcquire @ 0x180101B08
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x1801015C0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1801017D4 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1801018B4 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x180101990 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x180101B48 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpStdLockAcquire(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  if ( !byte_18016C508 )
    RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  return 1;
}
