/*
 * XREFs of RtlpHpStackTraceEnable @ 0x180109088
 * Callers:
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800F2D38 (RtlSetLowFragHeapGlobalFlags.c)
 *     RtlpHpStackTraceConfig @ 0x180108FC0 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800A4740 (memset.c)
 */

__int64 RtlpHpStackTraceEnable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_18016D578 & 1) == 0 )
  {
    dword_18016D578 = 3;
    qword_18016D580 = 0LL;
    qword_18016D5B0 = (__int64)RtlpHpStackDbAllocRoutine;
    qword_18016D5B8 = (__int64)RtlpHpStackDbFreeRoutine;
    qword_18016D588 = 0LL;
    qword_18016D590 = 0LL;
    qword_18016D598 = 0LL;
    qword_18016D5A8 = 0LL;
    qword_18016D5A0 = 0LL;
    qword_18016D5C0 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
  return 1LL;
}
