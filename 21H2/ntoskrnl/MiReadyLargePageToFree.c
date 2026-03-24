/*
 * XREFs of MiReadyLargePageToFree @ 0x140329D30
 * Callers:
 *     MiFreeLargePageMemory @ 0x1402FE654 (MiFreeLargePageMemory.c)
 * Callees:
 *     MiClearPfnImageVerified @ 0x1402A3214 (MiClearPfnImageVerified.c)
 *     MiUnlockPage @ 0x1402AF34C (MiUnlockPage.c)
 *     MiBadRefCount @ 0x1403F48DC (MiBadRefCount.c)
 *     MiLockPage @ 0x14054F904 (MiLockPage.c)
 */

__int64 __fastcall MiReadyLargePageToFree(unsigned __int64 a1, int a2, char a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // r13
  _QWORD *v7; // r14
  ULONG_PTR v8; // rbx
  unsigned __int8 v9; // al
  unsigned __int64 v10; // r15
  unsigned __int8 v11; // dl
  unsigned __int64 v12; // rcx
  unsigned __int8 v13; // di
  __int64 v14; // r8
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  __int64 v17; // rbx

  v4 = a1;
  v5 = 0LL;
  v6 = MiLargePageSizes[a2];
  v7 = (_QWORD *)(48 * a1 - 0x58000000000LL);
  v8 = (ULONG_PTR)v7;
  v9 = MiLockPage(v7);
  *v7 ^= (v6 ^ *v7) & 0xFFFFFFFFFLL;
  MiUnlockPage((__int64)v7, v9);
  v10 = v4 + v6;
  if ( v4 >= v4 + v6 )
    return 0LL;
  do
  {
    if ( *(_WORD *)(v8 + 32) != 2 )
    {
      v11 = MiLockPage(v8);
      if ( *(_WORD *)(v8 + 32) != 2 )
      {
        *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
        MiUnlockPage(v8, v11);
        if ( (a3 & 4) != 0 )
          MiBadRefCount(v8);
        goto LABEL_12;
      }
      MiUnlockPage(v8, v11);
    }
    v12 = *(_QWORD *)(v8 + 40);
    if ( ((v12 >> 60) & 7) == 3 )
    {
      v13 = MiLockPage(v8);
      MiClearPfnImageVerified(v8, 12LL, v14);
      MiUnlockPage(v8, v13);
      v12 = *(_QWORD *)(v8 + 40);
    }
    if ( ((v12 >> 60) & 7) == 1 )
    {
      v15 = MiLockPage(v8);
      *(_QWORD *)(v8 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
      MiUnlockPage(v8, v15);
    }
    ++v5;
LABEL_12:
    v8 += 48LL;
    ++v4;
  }
  while ( v4 < v10 );
  if ( v5 )
  {
    if ( v5 == v6 )
      return 1LL;
    v16 = MiLockPage(v7);
    v17 = (*v7 & 0xFFFFFFFFFLL) - v5;
    *v7 ^= (v17 ^ *v7) & 0xFFFFFFFFFLL;
    MiUnlockPage((__int64)v7, v16);
    if ( !v17 )
      return 1LL;
  }
  return 0LL;
}
