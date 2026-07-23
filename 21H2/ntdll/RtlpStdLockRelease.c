/*
 * XREFs of RtlpStdLockRelease @ 0x180101988
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x180101420 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x180101634 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x180101714 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1801017F0 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1801019A8 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 */

void __fastcall RtlpStdLockRelease(_RTL_SRWLOCK *a1)
{
  if ( !byte_18016C508 )
    RtlReleaseSRWLockExclusive(a1);
}
