/*
 * XREFs of SdbFindNextStringIndexedTag @ 0x1407BC91C
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x140752C38 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x14077A9D0 (SdbpSearchDB.c)
 * Callees:
 *     SdbpFindMatchingName @ 0x1407BC960 (SdbpFindMatchingName.c)
 *     SdbpGetNextIndexedRecord @ 0x1407BCA0C (SdbpGetNextIndexedRecord.c)
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
