/*
 * XREFs of RtlTraceDatabaseUnlock @ 0x1405890B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseReleaseLock @ 0x1405893E8 (RtlpTraceDatabaseReleaseLock.c)
 */

__int64 __fastcall RtlTraceDatabaseUnlock(__int64 a1)
{
  return RtlpTraceDatabaseReleaseLock(a1);
}
