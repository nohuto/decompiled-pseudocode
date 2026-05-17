/*
 * XREFs of RtlpStdLockAcquire @ 0x1801019A8
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x180101460 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x180101674 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x180101754 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x180101830 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1801019E8 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpStdLockAcquire(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  if ( !byte_18016C508 )
    RtlAcquireSRWLockExclusive(a1, a2, a3, a4);
  return 1;
}
