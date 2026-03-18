/*
 * XREFs of MiLargeFreePageToMdl @ 0x140316020
 * Callers:
 *     MiTradePage @ 0x14027DFE0 (MiTradePage.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x140228500 (MiUpdatePageFileHighInPte.c)
 *     MiUnlockPage @ 0x1402FFA3C (MiUnlockPage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140316270 (MiTryUnlinkNodeLargePage.c)
 *     MiIsFreeZeroPfnCold @ 0x14034B978 (MiIsFreeZeroPfnCold.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403EEC18 (MiConvertEntireLargePageToSmall.c)
 *     MiChangePageHeatImmediate @ 0x1403F0CA0 (MiChangePageHeatImmediate.c)
 *     MiLockPage @ 0x140549E14 (MiLockPage.c)
 */

__int64 __fastcall MiLargeFreePageToMdl(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 v6; // r9
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14; // r8
  unsigned __int64 v15; // r8
  _QWORD *v16; // r8
  int v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = 0;
  v6 = 0LL;
  if ( KeGetCurrentIrql() < 2u && (a5 & 8) == 0 )
    v6 = 16LL;
  v8 = MiLargePageSizes[a3];
  v9 = a2 & ~(v8 - 1);
  result = MiTryUnlinkNodeLargePage(a1, v9, a3, v6, &v17);
  if ( (_DWORD)result )
  {
    if ( (unsigned int)MiIsFreeZeroPfnCold(48 * v9 - 0x58000000000LL, v11, v12, v13) )
    {
      MiChangePageHeatImmediate(v9, a3, 1LL);
      MiLockPage(48 * v9 - 0x58000000000LL);
      *(_QWORD *)(48 * v9 - 0x58000000000LL + 16) = MiUpdatePageFileHighInPte(
                                                      *(_QWORD *)(48 * v9 - 0x58000000000LL + 16),
                                                      0LL);
      MiUnlockPage(48 * v9 - 0x58000000000LL, v14);
    }
    MiConvertEntireLargePageToSmall(48 * v9, a3, 0, 1, 0LL, 0LL);
    if ( a4 )
    {
      v15 = ((unsigned __int64)*(unsigned int *)(a4 + 40) >> 12) + 6;
      *(_DWORD *)(a4 + 40) += (_DWORD)v8 << 12;
      v16 = (_QWORD *)(a4 + 8 * v15);
      do
      {
        *v16++ = v9++;
        --v8;
      }
      while ( v8 );
    }
    return 1LL;
  }
  return result;
}
