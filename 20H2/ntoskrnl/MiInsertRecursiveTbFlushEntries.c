/*
 * XREFs of MiInsertRecursiveTbFlushEntries @ 0x140301C90
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x1403015D0 (MiDeleteNonPagedPoolPte.c)
 *     MiInitializeSystemPageTable @ 0x140336364 (MiInitializeSystemPageTable.c)
 *     MiFlushValidPteFromTb @ 0x140378EF0 (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x1403B954C (MiReplacePfnWithGapMapping.c)
 *     MiReplicatePfnDatabaseMappings @ 0x14052D42C (MiReplicatePfnDatabaseMappings.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 */

unsigned __int64 __fastcall MiInsertRecursiveTbFlushEntries(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 result; // rax

  if ( a2 >= 0 )
  {
    v5 = 1LL;
    v6 = (unsigned int)(a2 + 1);
    do
    {
      a3 = (__int64)(a3 << 25) >> 16;
      result = MiInsertTbFlushEntry(a1, a3, v5, 0);
      v5 <<= 9;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
