/*
 * XREFs of CmpRecordParseStartingKcb @ 0x140713020
 * Callers:
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRecordParseStartingKcb(__int64 a1, __int64 a2)
{
  if ( a1 )
  {
    *(_QWORD *)(a1 + 224) = a2;
    *(_QWORD *)(a1 + 248) = a2;
  }
}
