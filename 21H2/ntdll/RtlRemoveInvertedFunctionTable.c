/*
 * XREFs of RtlRemoveInvertedFunctionTable @ 0x180071E24
 * Callers:
 *     LdrpUnmapModule @ 0x180071DE0 (LdrpUnmapModule.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x1800E0AB4 (RtlCreateInvertedFunctionTableCacheEntry.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180071E58 (RtlxRemoveInvertedFunctionTable.c)
 */

void __fastcall RtlRemoveInvertedFunctionTable(__int64 a1)
{
  __int64 v2; // rcx

  RtlAcquireSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
  RtlxRemoveInvertedFunctionTable(v2, a1);
  RtlReleaseSRWLockExclusive(&LdrpInvertedFunctionTableSRWLock);
}
