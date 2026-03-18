/*
 * XREFs of CmpRecordParseFailure @ 0x140622100
 * Callers:
 *     CmpDoWritethroughReparse @ 0x1405E9D60 (CmpDoWritethroughReparse.c)
 *     CmpWalkOneLevel @ 0x140621740 (CmpWalkOneLevel.c)
 *     CmpCreateKeyBody @ 0x140622E40 (CmpCreateKeyBody.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140624630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x140779400 (CmpCreateHiveRootCell.c)
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
