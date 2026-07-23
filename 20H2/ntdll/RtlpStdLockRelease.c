/*
 * XREFs of RtlpStdLockRelease @ 0x180101B28
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x1801015C0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1801017D4 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1801018B4 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x180101990 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x180101B48 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpStdLockRelease(_RTL_SRWLOCK *a1)
{
  if ( !byte_18016C508 )
    RtlReleaseSRWLockExclusive(a1);
}
