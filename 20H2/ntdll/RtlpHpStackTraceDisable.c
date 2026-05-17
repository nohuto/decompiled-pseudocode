/*
 * XREFs of RtlpHpStackTraceDisable @ 0x1801091D4
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180109160 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x18007429C (RtlpEnumProcessHeaps.c)
 *     RtlStackDbContextCleanup @ 0x18011865C (RtlStackDbContextCleanup.c)
 */

signed __int64 __fastcall RtlpHpStackTraceDisable(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpHpStackTrackingContext, a2, a3, a4);
  if ( (dword_18016D588 & 1) != 0 )
  {
    dword_18016D588 = 0;
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpHpStackTraceHeapDisable, 0LL, 2LL);
    RtlStackDbContextCleanup(&qword_18016D590);
  }
  return RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
