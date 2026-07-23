/*
 * XREFs of MiAddMdlPageToTradeBlock @ 0x14030A1D8
 * Callers:
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x1402DD3B0 (MiPfnZeroingNeeded.c)
 */

void __fastcall MiAddMdlPageToTradeBlock(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r9

  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    *(_QWORD *)(v3 + 8 * ((unsigned __int64)*(unsigned int *)(v3 + 40) >> 12) + 48) = a2;
    *(_DWORD *)(v3 + 40) += 4096;
    if ( a3 || MiPfnZeroingNeeded(48 * a2 - 0x58000000000LL, *(_DWORD *)(a1 + 32)) )
      *(_QWORD *)(v3 + 24) = 1LL;
  }
}
