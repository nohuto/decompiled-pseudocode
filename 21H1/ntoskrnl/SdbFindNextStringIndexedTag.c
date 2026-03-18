/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x1407AB87C
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1407424D8 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x140769830 (SdbpSearchDB.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x1407AB8C0 (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x1407AB96C (SdbpGetNextIndexedRecord.c)
 */

__int64 __fastcall SdbFindNextStringIndexedTag(__int64 a1, unsigned int *a2)
{
  unsigned int NextIndexedRecord; // eax

  NextIndexedRecord = SdbpGetNextIndexedRecord(a1, *a2, a2);
  if ( NextIndexedRecord )
    return SdbpFindMatchingName(a1, NextIndexedRecord, a2);
  else
    return 0LL;
}
