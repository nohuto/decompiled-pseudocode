/*
 * XREFs of CmpRecordParseFailure @ 0x14068A510
 * Callers:
 *     CmpWalkOneLevel @ 0x1405F63C0 (CmpWalkOneLevel.c)
 *     CmpDoWritethroughReparse @ 0x140655080 (CmpDoWritethroughReparse.c)
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406FC410 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCreateKeyBody @ 0x1406FC690 (CmpCreateKeyBody.c)
 *     CmpCreateHiveRootCell @ 0x14078DBF0 (CmpCreateHiveRootCell.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRecordParseFailure(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax

  if ( a1 )
  {
    v3 = *(unsigned __int8 *)(a1 + 258);
    if ( (unsigned __int8)v3 < 4u )
    {
      *(_DWORD *)(a1 + 8 * v3 + 260) = a3;
      *(_DWORD *)(a1 + 8LL * (unsigned __int8)(*(_BYTE *)(a1 + 258))++ + 264) = a2;
    }
  }
}
