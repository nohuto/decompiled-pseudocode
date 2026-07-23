/*
 * XREFs of RtlpHpStackTraceDisable @ 0x180109034
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180108FC0 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x1800752CC (RtlpEnumProcessHeaps.c)
 *     RtlStackDbContextCleanup @ 0x180118524 (RtlStackDbContextCleanup.c)
 */

void RtlpHpStackTraceDisable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_18016D578 & 1) != 0 )
  {
    dword_18016D578 = 0;
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpHpStackTraceHeapDisable, 0LL, 2);
    RtlStackDbContextCleanup(&qword_18016D580);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
