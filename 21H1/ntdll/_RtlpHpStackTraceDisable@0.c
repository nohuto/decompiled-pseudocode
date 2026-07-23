/*
 * XREFs of _RtlpHpStackTraceDisable@0 @ 0x4B36E2C6
 * Callers:
 *     _RtlpHpStackTraceConfig@4 @ 0x4B36E268 (_RtlpHpStackTraceConfig@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpEnumProcessHeaps@12 @ 0x4B35791E (_RtlpEnumProcessHeaps@12.c)
 *     _RtlStackDbContextCleanup@4 @ 0x4B389E9A (_RtlStackDbContextCleanup@4.c)
 */

void __stdcall RtlpHpStackTraceDisable()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_4B3A6834 & 1) != 0 )
  {
    dword_4B3A6834 = 0;
    RtlpEnumProcessHeaps((int (__stdcall *)(void *, int))RtlpHpStackTraceHeapDisable, 0, 2);
    RtlStackDbContextCleanup(&dword_4B3A6838);
  }
  RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
