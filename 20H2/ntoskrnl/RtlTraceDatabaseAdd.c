/*
 * XREFs of RtlTraceDatabaseAdd @ 0x14058CE50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x14058D230 (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x14058D298 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x14058D508 (RtlpTraceDatabaseReleaseLock.c)
 */

char __fastcall RtlTraceDatabaseAdd(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  RtlpTraceDatabaseAcquireLock();
  LOBYTE(a4) = RtlpTraceDatabaseInternalAdd(a1, a2, a3, a4);
  RtlpTraceDatabaseReleaseLock(a1);
  return a4;
}
