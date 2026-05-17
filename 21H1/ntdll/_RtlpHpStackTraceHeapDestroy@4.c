/*
 * XREFs of _RtlpHpStackTraceHeapDestroy@4 @ 0x4B2AFD4E
 * Callers:
 *     _RtlDestroyHeap@4 @ 0x4B2AF870 (_RtlDestroyHeap@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpPerHeapStackTraceCleanup@12 @ 0x4B36DA1B (_RtlpHpPerHeapStackTraceCleanup@12.c)
 */

int RtlpHpStackTraceHeapDestroy()
{
  RtlAcquireSRWLockExclusive(&RtlpHpStackTrackingContext);
  if ( (dword_4B3A6834 & 1) != 0 && (dword_4B3A6834 & 2) != 0 )
    RtlpHpPerHeapStackTraceCleanup(0);
  return RtlReleaseSRWLockExclusive(&RtlpHpStackTrackingContext);
}
