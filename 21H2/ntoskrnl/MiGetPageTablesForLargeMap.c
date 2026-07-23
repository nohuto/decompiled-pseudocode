/*
 * XREFs of MiGetPageTablesForLargeMap @ 0x1403B8F34
 * Callers:
 *     MiInsertInSystemSpace @ 0x140305B30 (MiInsertInSystemSpace.c)
 *     MiMapContiguousMemoryLarge @ 0x1403B89C4 (MiMapContiguousMemoryLarge.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA530 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiObtainSystemVa @ 0x140231990 (MiObtainSystemVa.c)
 *     MiReturnSystemVa @ 0x140305338 (MiReturnSystemVa.c)
 *     MiMakeZeroedPageTablesEx @ 0x140307B4C (MiMakeZeroedPageTablesEx.c)
 */

unsigned __int64 __fastcall MiGetPageTablesForLargeMap(unsigned __int64 a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // ecx
  unsigned __int64 v7; // r12
  int v9; // r13d
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rsi
  unsigned int v14; // r8d
  int v16; // [rsp+68h] [rbp+10h]

  v5 = 13;
  if ( a2 != 9 )
    v5 = a2;
  v16 = v5;
  v7 = a1 & 0xFFFFFFFFFFFFFE00uLL;
  v9 = a3;
  v10 = (a1 >> 9) + 1;
  if ( (a1 & 0x1FF) == 0 )
    v10 = a1 >> 9;
  v11 = MiObtainSystemVa(v10, v5, a3);
  v12 = v11;
  if ( v11 )
  {
    v13 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v14 = 3 - (a2 != 12);
    if ( !v9 )
      v14 = 7 - (a2 != 12);
    if ( (unsigned int)MiMakeZeroedPageTablesEx(v13, v13 + 8 * v7 - 8, v14, a2, a4)
      && (a1 == v7 || (unsigned int)MiMakeZeroedPageTablesEx(v13 + 8 * v7, v13 + 8 * (a1 - 1), a2 == 12, a2, a4)) )
    {
      return v12;
    }
    MiReturnSystemVa(v12, v12 + (v10 << 21), v16);
  }
  return 0LL;
}
