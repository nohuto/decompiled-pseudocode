/*
 * XREFs of RtlpHpStackTraceDisable @ 0x180108CC4
 * Callers:
 *     RtlpHpStackTraceConfig @ 0x180108C50 (RtlpHpStackTraceConfig.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpEnumProcessHeaps @ 0x18007419C (RtlpEnumProcessHeaps.c)
 *     RtlStackDbContextCleanup @ 0x18011814C (RtlStackDbContextCleanup.c)
 */

signed __int64 __fastcall RtlpHpStackTraceDisable(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpHpStackTrackingContext, a2, a3, a4);
  if ( (dword_18016B568 & 1) != 0 )
  {
    dword_18016B568 = 0;
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpHpStackTraceHeapDisable, 0LL, 2LL);
    RtlStackDbContextCleanup(&qword_18016B570);
  }
  return RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
