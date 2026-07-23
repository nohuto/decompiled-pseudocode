/*
 * XREFs of MiGetLargePagesDemoteAsNeeded @ 0x1403F5870
 * Callers:
 *     MiGetLargePageChain @ 0x14023D194 (MiGetLargePageChain.c)
 *     MiFindLargeNodePage @ 0x140395020 (MiFindLargeNodePage.c)
 *     MiTimeSingleLargePageZeroWorker @ 0x1403B0898 (MiTimeSingleLargePageZeroWorker.c)
 *     MiGetFastLargePages @ 0x1403F7B20 (MiGetFastLargePages.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiGetLargePage @ 0x14030E784 (MiGetLargePage.c)
 *     MiGetFreeZeroLargePages @ 0x1403F6914 (MiGetFreeZeroLargePages.c)
 */

__int64 __fastcall MiGetLargePagesDemoteAsNeeded(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        int a7)
{
  int v8; // r10d
  __int64 v9; // r12
  int v10; // ebx
  unsigned int v11; // r14d
  __int64 v12; // rsi
  int v13; // r15d
  __int64 *v14; // r13
  unsigned int v15; // ebp
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned __int64 v19; // rax
  __int64 result; // rax
  signed __int32 v21; // eax
  __int64 v22; // r10
  __int64 v23; // r11
  __int128 v24; // [rsp+40h] [rbp-48h] BYREF
  int v25; // [rsp+90h] [rbp+8h]
  unsigned __int64 v26; // [rsp+A0h] [rbp+18h]
  unsigned __int64 v27; // [rsp+A8h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  v25 = a1;
  v8 = a1;
  v9 = *(_QWORD *)(a1 + 16) + 4544LL * a2;
  if ( !*(_QWORD *)(v9 + 4176) && (_DWORD)InitializationPhase )
    return 0LL;
  v10 = a6;
  v11 = 0;
  v12 = 0LL;
  v13 = !(a6 & 1) + 1;
  if ( (a6 & 1) == 0 )
    v10 = a6 | 1;
  while ( 1 )
  {
    v14 = MiLargePageSizes;
    v15 = 0;
    v16 = (_QWORD *)(v9 + 16 * (v12 + 1));
    do
    {
      v17 = *v14;
      if ( a3 >= *v14 )
      {
        if ( v17 < a4 )
          break;
        v18 = v15;
        if ( v11 )
          v18 = v11;
        v11 = v18;
        if ( v16[1] || *v16 )
        {
          if ( a5 )
            v19 = a3 / v17;
          else
            LODWORD(v19) = 1;
          result = MiGetFreeZeroLargePages(v8, v15, v19, v10, a2, 0, 4, a7);
          if ( result )
            return result;
          v8 = v25;
          a3 = v26;
          a4 = v27;
        }
      }
      ++v15;
      ++v14;
      v16 += 134;
    }
    while ( v15 < 3 );
    if ( v11 )
    {
      v24 = 0LL;
      MiInitializePageColorBase(0LL, a2 + 1, (__int64)&v24);
      v21 = _InterlockedExchangeAdd((volatile signed __int32 *)v24, 1u);
      result = MiGetLargePage(v22, v11, a7, HIDWORD(v24) | (unsigned int)v21 & DWORD2(v24), v10, v23);
      if ( result )
        return result;
    }
    if ( !--v13 )
      return 0LL;
    v8 = v25;
    v10 &= ~1u;
    a3 = v26;
    v12 = 1LL;
    a4 = v27;
  }
}
