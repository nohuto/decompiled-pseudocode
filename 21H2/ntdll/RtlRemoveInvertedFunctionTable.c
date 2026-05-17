/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x180071E24
 * Callers:
 *     LdrpUnmapModule @ 0x180071DE0 (LdrpUnmapModule.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E0AF4 (RtlCreateInvertedFunctionTableCacheEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180071E58 (RtlxRemoveInvertedFunctionTable.c)
 */

signed __int64 __fastcall RtlRemoveInvertedFunctionTable(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v5; // rcx

  RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpInvertedFunctionTableSRWLock, a2, a3, a4);
  RtlxRemoveInvertedFunctionTable(v5, a1);
  return RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
