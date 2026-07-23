/*
 * XREFs of RtlpHpStackTraceEnable @ 0x180109228
 * Callers:
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800F2EE8 (RtlSetLowFragHeapGlobalFlags.c)
 *     RtlpHpStackTraceConfig @ 0x180109160 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

__int64 RtlpHpStackTraceEnable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_18016D588 & 1) == 0 )
  {
    dword_18016D588 = 3;
    qword_18016D590 = 0LL;
    qword_18016D5C0 = (__int64)RtlpHpStackDbAllocRoutine;
    qword_18016D5C8 = (__int64)RtlpHpStackDbFreeRoutine;
    qword_18016D598 = 0LL;
    qword_18016D5A0 = 0LL;
    qword_18016D5A8 = 0LL;
    qword_18016D5B8 = 0LL;
    qword_18016D5B0 = 0LL;
    qword_18016D5D0 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
  return 1LL;
}
