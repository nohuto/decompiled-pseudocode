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

char __fastcall RtlpStdLockAcquire(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  if ( !byte_18016A508 )
    RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  return 1;
}
