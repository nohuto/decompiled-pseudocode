/*
 * XREFs of MiReadyLargePageToFree @ 0x1402AD140
 * Callers:
 *     MiFreeLargePageMemory @ 0x1402F19BC (MiFreeLargePageMemory.c)
 * Callees:
 *     MiUnlockPage @ 0x14030EF8C (MiUnlockPage.c)
 *     MiClearPfnImageVerified @ 0x140349B58 (MiClearPfnImageVerified.c)
 *     MiBadRefCount @ 0x1403F3094 (MiBadRefCount.c)
 *     MiLockPage @ 0x14054DE34 (MiLockPage.c)
 */

__int64 __fastcall MiReadyLargePageToFree(unsigned __int64 a1, int a2, char a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // r13
  _QWORD *v7; // r14
  _QWORD *v8; // rbx
  unsigned __int8 v9; // al
  unsigned __int64 v10; // r15
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int8 v13; // di
  unsigned __int8 v14; // al
  unsigned __int8 v15; // al
  __int64 v16; // rbx

  v4 = a1;
  v5 = 0LL;
  v6 = MiLargePageSizes[a2];
  v7 = (_QWORD *)(48 * a1 - 0x58000000000LL);
  v8 = v7;
  v9 = MiLockPage(v7);
  *v7 ^= (v6 ^ *v7) & 0xFFFFFFFFFLL;
  MiUnlockPage(v7, v9);
  v10 = v4 + v6;
  if ( v4 >= v4 + v6 )
    return 0LL;
  do
  {
    if ( *((_WORD *)v8 + 16) != 2 )
    {
      v11 = (unsigned __int8)MiLockPage(v8);
      if ( *((_WORD *)v8 + 16) != 2 )
      {
        v8[3] |= 0x4000000000000000uLL;
        MiUnlockPage(v8, v11);
        if ( (a3 & 4) != 0 )
          MiBadRefCount(v8);
        goto LABEL_12;
      }
      MiUnlockPage(v8, v11);
    }
    v12 = v8[5];
    if ( ((v12 >> 60) & 7) == 3 )
    {
      v13 = MiLockPage(v8);
      MiClearPfnImageVerified(v8, 12LL);
      MiUnlockPage(v8, v13);
      v12 = v8[5];
    }
    if ( ((v12 >> 60) & 7) == 1 )
    {
      v14 = MiLockPage(v8);
      v8[5] &= 0x8FFFFFFFFFFFFFFFuLL;
      MiUnlockPage(v8, v14);
    }
    ++v5;
LABEL_12:
    v8 += 6;
    ++v4;
  }
  while ( v4 < v10 );
  if ( v5 )
  {
    if ( v5 == v6 )
      return 1LL;
    v15 = MiLockPage(v7);
    v16 = (*v7 & 0xFFFFFFFFFLL) - v5;
    *v7 ^= (v16 ^ *v7) & 0xFFFFFFFFFLL;
    MiUnlockPage(v7, v15);
    if ( !v16 )
      return 1LL;
  }
  return 0LL;
}
