/*
 * XREFs of RtlTraceDatabaseFind @ 0x140589020
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTraceDatabaseAcquireLock @ 0x140589110 (RtlpTraceDatabaseAcquireLock.c)
 *     RtlpTraceDatabaseInternalFind @ 0x140589334 (RtlpTraceDatabaseInternalFind.c)
 *     RtlpTraceDatabaseReleaseLock @ 0x1405893E8 (RtlpTraceDatabaseReleaseLock.c)
 */

char __fastcall RtlTraceDatabaseFind(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  char v8; // bl

  RtlpTraceDatabaseAcquireLock();
  v8 = RtlpTraceDatabaseInternalFind(a1, a2, a3, a4);
  if ( v8 )
    ++*(_QWORD *)(a1 + 144);
  RtlpTraceDatabaseReleaseLock(a1);
  return v8;
}
