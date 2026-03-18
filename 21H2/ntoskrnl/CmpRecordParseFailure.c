/*
 * XREFs of CmpRecordParseFailure @ 0x14068038C
 * Callers:
 *     CmpDoWritethroughReparse @ 0x140680100 (CmpDoWritethroughReparse.c)
 *     CmpCreateHiveRootCell @ 0x1406C9FA0 (CmpCreateHiveRootCell.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     CmpCreateKeyBody @ 0x14072E210 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407350A0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x1407C8AE0 (CmpWalkOneLevel.c)
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
