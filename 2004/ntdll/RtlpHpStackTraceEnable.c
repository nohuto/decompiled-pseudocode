/*
 * XREFs of RtlpHpStackTraceEnable @ 0x180108D18
 * Callers:
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800F29D8 (RtlSetLowFragHeapGlobalFlags.c)
 *     RtlpHpStackTraceConfig @ 0x180108C50 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 */

__int64 RtlpHpStackTraceEnable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_18016B568 & 1) == 0 )
  {
    dword_18016B568 = 3;
    qword_18016B570 = 0LL;
    qword_18016B5A0 = (__int64)RtlpHpStackDbAllocRoutine;
    qword_18016B5A8 = (__int64)RtlpHpStackDbFreeRoutine;
    qword_18016B578 = 0LL;
    qword_18016B580 = 0LL;
    qword_18016B588 = 0LL;
    qword_18016B598 = 0LL;
    qword_18016B590 = 0LL;
    qword_18016B5B0 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
  return 1LL;
}
