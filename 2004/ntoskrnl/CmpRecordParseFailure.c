/*
 * XREFs of CmpRecordParseFailure @ 0x1405ECAE0
 * Callers:
 *     CmpWalkOneLevel @ 0x1405EC120 (CmpWalkOneLevel.c)
 *     CmpCreateKeyBody @ 0x1405ED820 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405EF010 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpDoWritethroughReparse @ 0x1406932A0 (CmpDoWritethroughReparse.c)
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x14077B810 (CmpCreateHiveRootCell.c)
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
