/*
 * XREFs of MiInsertRecursiveTbFlushEntries @ 0x14021B470
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x14021ADB0 (MiDeleteNonPagedPoolPte.c)
 *     MiInitializeSystemPageTable @ 0x1402967D4 (MiInitializeSystemPageTable.c)
 *     MiFlushValidPteFromTb @ 0x140378C4C (MiFlushValidPteFromTb.c)
 *     MiReplacePfnWithGapMapping @ 0x1403BA0BC (MiReplacePfnWithGapMapping.c)
 *     MiReplicatePfnDatabaseMappings @ 0x14052F16C (MiReplicatePfnDatabaseMappings.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
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
