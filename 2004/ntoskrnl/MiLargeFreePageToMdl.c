/*
 * XREFs of MiLargeFreePageToMdl @ 0x140353B98
 * Callers:
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x1402BB180 (MiUpdatePageFileHighInPte.c)
 *     MiIsFreeZeroPfnCold @ 0x14031C638 (MiIsFreeZeroPfnCold.c)
 *     MiUnlockPage @ 0x14033C33C (MiUnlockPage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140353DE8 (MiTryUnlinkNodeLargePage.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403EFF78 (MiConvertEntireLargePageToSmall.c)
 *     MiChangePageHeatImmediate @ 0x1403F2000 (MiChangePageHeatImmediate.c)
 *     MiLockPage @ 0x14054A464 (MiLockPage.c)
 */

__int64 __fastcall MiLargeFreePageToMdl(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 v6; // r9
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 result; // rax
  int v11; // eax
  unsigned __int8 v12; // r8
  unsigned __int64 v13; // r8
  _QWORD *v14; // r8
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = 0;
  v6 = 0LL;
  if ( KeGetCurrentIrql() < 2u && (a5 & 8) == 0 )
    v6 = 16LL;
  v8 = MiLargePageSizes[a3];
  v9 = a2 & ~(v8 - 1);
  result = MiTryUnlinkNodeLargePage(a1, v9, a3, v6, &v15);
  if ( (_DWORD)result )
  {
    LOBYTE(v11) = MiIsFreeZeroPfnCold(48 * v9 - 0x58000000000LL);
    if ( v11 )
    {
      MiChangePageHeatImmediate(v9, a3, 1LL);
      MiLockPage(48 * v9 - 0x58000000000LL);
      *(_QWORD *)(48 * v9 - 0x58000000000LL + 16) = MiUpdatePageFileHighInPte(
                                                      *(_QWORD *)(48 * v9 - 0x58000000000LL + 16),
                                                      0LL);
      MiUnlockPage(48 * v9 - 0x58000000000LL, v12);
    }
    MiConvertEntireLargePageToSmall(48 * v9, a3, 0, 1, 0LL, 0LL);
    if ( a4 )
    {
      v13 = ((unsigned __int64)*(unsigned int *)(a4 + 40) >> 12) + 6;
      *(_DWORD *)(a4 + 40) += (_DWORD)v8 << 12;
      v14 = (_QWORD *)(a4 + 8 * v13);
      do
      {
        *v14++ = v9++;
        --v8;
      }
      while ( v8 );
    }
    return 1LL;
  }
  return result;
}
