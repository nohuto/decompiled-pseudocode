/*
 * XREFs of RtlpStdLockRelease @ 0x1801019C8
 * Callers:
 *     RtlStdReleaseStackTrace @ 0x180101460 (RtlStdReleaseStackTrace.c)
 *     RtlpStdExtendLowerWatermark @ 0x180101674 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x180101754 (RtlpStdExtendUpperWatermark.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x180101830 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1801019E8 (RtlpStdLogCapturedStackTrace.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpStdLockRelease(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  if ( !byte_18016C508 )
    return RtlReleaseSRWLockExclusive(a1);
  return result;
}
