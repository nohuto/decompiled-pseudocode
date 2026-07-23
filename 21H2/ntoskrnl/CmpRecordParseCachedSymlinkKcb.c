/*
 * XREFs of CmpRecordParseCachedSymlinkKcb @ 0x1407133D0
 * Callers:
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRecordParseCachedSymlinkKcb(__int64 a1, __int64 a2)
{
  if ( a1 )
    *(_QWORD *)(a1 + 216) = a2;
}
