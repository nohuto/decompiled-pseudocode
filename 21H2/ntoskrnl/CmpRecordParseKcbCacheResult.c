/*
 * XREFs of CmpRecordParseKcbCacheResult @ 0x1407137C0
 * Callers:
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRecordParseKcbCacheResult(__int64 a1, __int64 a2, char a3)
{
  if ( a1 )
  {
    *(_QWORD *)(a1 + 232) = a2;
    *(_BYTE *)(a1 + 256) = a3;
    *(_QWORD *)(a1 + 248) = a2;
  }
}
