/*
 * XREFs of MiInsertRecursiveTbFlushEntries @ 0x140228BCC
 * Callers:
 *     MiFlushValidPteFromTb @ 0x140227254 (MiFlushValidPteFromTb.c)
 *     MiDeleteNonPagedPoolPte @ 0x140228170 (MiDeleteNonPagedPoolPte.c)
 *     MiInitializeSystemPageTable @ 0x14027C784 (MiInitializeSystemPageTable.c)
 *     MiReplacePfnWithGapMapping @ 0x1403C92F4 (MiReplacePfnWithGapMapping.c)
 *     MiReplicatePfnDatabaseMappings @ 0x1405839A4 (MiReplicatePfnDatabaseMappings.c)
 *     MiWritePteHighLevel @ 0x1405AE144 (MiWritePteHighLevel.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 */

__int64 __fastcall MiInsertRecursiveTbFlushEntries(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 result; // rax

  if ( a2 >= 0 )
  {
    v5 = 1LL;
    v6 = (unsigned int)(a2 + 1);
    do
    {
      a3 = a3 << 25 >> 16;
      result = MiInsertTbFlushEntry(a1, a3, v5, 0LL);
      v5 <<= 9;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
