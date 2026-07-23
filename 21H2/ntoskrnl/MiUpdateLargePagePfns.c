/*
 * XREFs of MiUpdateLargePagePfns @ 0x14055EE3C
 * Callers:
 *     MiFindLargePageMemory @ 0x1408DA244 (MiFindLargePageMemory.c)
 * Callees:
 *     MiInsertMdlPageNeedsZero @ 0x140295398 (MiInsertMdlPageNeedsZero.c)
 *     MiPfnZeroingNeeded @ 0x1402DD3B0 (MiPfnZeroingNeeded.c)
 */

__int64 __fastcall MiUpdateLargePagePfns(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  unsigned int v9; // r10d

  v5 = a2;
  v7 = 48 * a2 - 0x58000000000LL;
  v8 = v7 + 48 * a3;
  do
  {
    if ( MiPfnZeroingNeeded(v7, a4) )
    {
      MiInsertMdlPageNeedsZero(a1, v5, 1LL);
      v9 = 1;
    }
    ++v5;
    v7 += 48LL;
  }
  while ( v7 != v8 );
  return v9;
}
