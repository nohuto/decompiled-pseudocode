/*
 * XREFs of MiGetPageTablesForLargeMap @ 0x1403C736C
 * Callers:
 *     MiInsertInSystemSpace @ 0x14026D460 (MiInsertInSystemSpace.c)
 *     MiMapContiguousMemoryLarge @ 0x1403C6E24 (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemImageWithLargePage @ 0x14098325C (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiObtainSystemVa @ 0x14026B32C (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x14026DAB0 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x14026DC5C (MiMakeZeroedPageTablesEx.c)
 */

unsigned __int64 __fastcall MiGetPageTablesForLargeMap(unsigned __int64 a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // r15d
  unsigned __int64 v8; // r13
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // r14
  int v13; // r8d
  int v15; // [rsp+70h] [rbp+18h]

  v15 = a3;
  v6 = 13;
  if ( a2 != 9 )
    v6 = a2;
  v8 = a1 & 0xFFFFFFFFFFFFFE00uLL;
  v9 = (a1 >> 9) + 1;
  if ( (a1 & 0x1FF) == 0 )
    v9 = a1 >> 9;
  v10 = MiObtainSystemVa(v9, v6, a3);
  v11 = v10;
  if ( v10 )
  {
    v12 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = 3 - (a2 != 12);
    if ( !v15 )
      v13 = 7 - (a2 != 12);
    if ( (unsigned int)MiMakeZeroedPageTablesEx(v12, v12 + 8 * (v8 - 1), v13, a2, a4)
      && (a1 == v8 || (unsigned int)MiMakeZeroedPageTablesEx(v12 + 8 * v8, v12 + 8 * (a1 - 1), a2 == 12, a2, a4)) )
    {
      return v11;
    }
    MiReturnSystemVa(v11, v11 + (v9 << 21), v6);
  }
  return 0LL;
}
