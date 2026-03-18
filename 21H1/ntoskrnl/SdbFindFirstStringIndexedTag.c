/*
 * XREFs of SdbFindFirstStringIndexedTag @ 0x1407426D0
 * Callers:
 *     SdbGetDatabaseMatchEx @ 0x1407424D8 (SdbGetDatabaseMatchEx.c)
 *     SdbpSearchDB @ 0x140769830 (SdbpSearchDB.c)
 *     KsepDbGetShimInfo @ 0x1408BAFDC (KsepDbGetShimInfo.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbpGetFirstIndexedRecord @ 0x14074277C (SdbpGetFirstIndexedRecord.c)
 *     SdbMakeIndexKeyFromStringEx @ 0x140742FA0 (SdbMakeIndexKeyFromStringEx.c)
 *     SdbGetIndex @ 0x1407430E4 (SdbGetIndex.c)
 *     SdbpFindMatchingName @ 0x1407AB8C0 (SdbpFindMatchingName.c)
 */

__int64 __fastcall SdbFindFirstStringIndexedTag(void *a1, __int64 a2, __int16 a3, __int64 a4, unsigned int *a5)
{
  unsigned int Index; // eax
  __int64 IndexKeyFromString; // rax
  __int64 v10; // rdx
  unsigned int FirstIndexedRecord; // eax

  Index = SdbGetIndex(a1);
  *a5 = Index;
  if ( !Index )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  a5[5] = 0;
  *((_WORD *)a5 + 6) = a3;
  *((_QWORD *)a5 + 4) = a4;
  IndexKeyFromString = SdbMakeIndexKeyFromStringEx(a4);
  v10 = *a5;
  *((_QWORD *)a5 + 3) = IndexKeyFromString;
  FirstIndexedRecord = SdbpGetFirstIndexedRecord(a1, v10, IndexKeyFromString, a5);
  if ( !FirstIndexedRecord )
    return 0LL;
  return SdbpFindMatchingName(a1, FirstIndexedRecord, a5);
}
