/*
 * XREFs of RtlpStdLockAcquire @ 0x1801015F8
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x1801010B0 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x1801012C4 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1801013A4 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x180101480 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x180101638 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpStdLockAcquire(_RTL_SRWLOCK *a1)
{
  if ( !byte_18016A508 )
    RtlAcquireSRWLockExclusive(a1);
  return 1;
}
