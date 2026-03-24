/*
 * XREFs of MiLargeFreePageToMdl @ 0x14029167C
 * Callers:
 *     MiTradePage @ 0x140300BE0 (MiTradePage.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14023DD80 (MiUpdatePageFileHighInPte.c)
 *     MiTryUnlinkNodeLargePage @ 0x14029195C (MiTryUnlinkNodeLargePage.c)
 *     MiUnlockPage @ 0x1402AF34C (MiUnlockPage.c)
 *     MiIsFreeZeroPfnCold @ 0x140303120 (MiIsFreeZeroPfnCold.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     MiChangePageHeatImmediate @ 0x1403F7CB0 (MiChangePageHeatImmediate.c)
 *     MiLockPage @ 0x14054F904 (MiLockPage.c)
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
  __int64 v14; // rdi
  __int64 updated; // rax
  char v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  _QWORD *v19; // r8
  int v20; // [rsp+60h] [rbp+18h] BYREF

  v20 = 0;
  v6 = 0LL;
  if ( KeGetCurrentIrql() < 2u && (a5 & 8) == 0 )
    v6 = 16LL;
  v8 = MiLargePageSizes[a3];
  v9 = a2 & ~(v8 - 1);
  result = MiTryUnlinkNodeLargePage(a1, v9, a3, v6, &v20);
  if ( (_DWORD)result )
  {
    v14 = 48 * v9 - 0x58000000000LL;
    if ( (unsigned int)MiIsFreeZeroPfnCold(v14, v11, v12, v13) )
    {
      MiChangePageHeatImmediate(v9, a3, 1LL);
      MiLockPage(48 * v9 - 0x58000000000LL);
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v14 + 16), 0LL);
      LOBYTE(v17) = v16;
      *(_QWORD *)(v14 + 16) = updated;
      MiUnlockPage(48 * v9 - 0x58000000000LL, v17);
    }
    MiConvertEntireLargePageToSmall(48 * v9, a3, 0, 1, 0LL, 0LL);
    if ( a4 )
    {
      v18 = ((unsigned __int64)*(unsigned int *)(a4 + 40) >> 12) + 6;
      *(_DWORD *)(a4 + 40) += (_DWORD)v8 << 12;
      v19 = (_QWORD *)(a4 + 8 * v18);
      do
      {
        *v19++ = v9++;
        --v8;
      }
      while ( v8 );
    }
    return 1LL;
  }
  return result;
}
