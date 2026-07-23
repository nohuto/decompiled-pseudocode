/*
 * XREFs of RtlpHpStackTraceDisable @ 0x1801091D4
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180109160 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x18007429C (RtlpEnumProcessHeaps.c)
 *     RtlStackDbContextCleanup @ 0x18011865C (RtlStackDbContextCleanup.c)
 */

void RtlpHpStackTraceDisable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_18016D588 & 1) != 0 )
  {
    dword_18016D588 = 0;
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpHpStackTraceHeapDisable, 0LL, 2);
    RtlStackDbContextCleanup(&qword_18016D590);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
