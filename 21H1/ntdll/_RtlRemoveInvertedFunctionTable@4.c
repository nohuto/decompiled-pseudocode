/*
 * XREFs of _RtlRemoveInvertedFunctionTable@4 @ 0x4B2E680E
 * Callers:
 *     _LdrpUnmapModule@4 @ 0x4B2E67DF (_LdrpUnmapModule@4.c)
 *     _RtlCreateInvertedFunctionTableCacheEntry@8 @ 0x4B36D377 (_RtlCreateInvertedFunctionTableCacheEntry@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlxRemoveInvertedFunctionTable@8 @ 0x4B2E6831 (_RtlxRemoveInvertedFunctionTable@8.c)
 */

void RtlRemoveInvertedFunctionTable()
{
  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  RtlxRemoveInvertedFunctionTable();
  RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
