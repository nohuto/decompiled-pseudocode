/*
 * XREFs of MiMakeVaRangePhysicallyContiguous @ 0x1405B4BA8
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x1405B4EA0 (MiProcessVaContiguityInformation.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiReturnFreeZeroPage @ 0x14026845C (MiReturnFreeZeroPage.c)
 *     MiGetNextPageTable @ 0x14028F080 (MiGetNextPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiTradeActivePage @ 0x1402EA95C (MiTradeActivePage.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MiLockTransitionLeafPageEx @ 0x140315D60 (MiLockTransitionLeafPageEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
 *     MiFreePageChain @ 0x1403936C0 (MiFreePageChain.c)
 *     MiCheckContiguityTradeEligible @ 0x1405A5F5C (MiCheckContiguityTradeEligible.c)
 */

__int64 __fastcall MiMakeVaRangePhysicallyContiguous(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rsi
  char v10; // r13
  unsigned __int64 NextPageTable; // rax
  __int64 v12; // rax
  __m128i *v13; // rdi
  __int64 v14; // rax
  __m128i *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // [rsp+78h] [rbp+10h] BYREF
  int v21; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v21 = 0;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = (((a2 + 0x1FFFFF) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0LL;
  v10 = MiLockWorkingSetShared(a1);
  if ( v7 > v8 )
    goto LABEL_31;
  do
  {
    if ( v9 )
    {
      if ( (v7 & 0xFFF) != 0 )
        goto LABEL_7;
      MiUnlockPageTableInternal(a1, v9);
    }
    NextPageTable = MiGetNextPageTable(v7, v8, 0LL, v10, 1, &v21);
    if ( !NextPageTable )
      goto LABEL_31;
    v9 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( NextPageTable != v7 )
      break;
LABEL_7:
    v12 = MI_READ_PTE_LOCK_FREE(v7);
    v22 = v12;
    if ( (v12 & 1) != 0 )
    {
      v13 = (__m128i *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v22) >> 12) & 0xFFFFFFFFFFLL)
                      - 0x220000000000LL);
    }
    else
    {
      if ( (v12 & 0x400) != 0 )
        break;
      if ( (v12 & 0x800) == 0 )
        break;
      v13 = (__m128i *)MiLockTransitionLeafPageEx(v7, 0LL, 0);
      if ( !v13 )
        break;
    }
    if ( !(unsigned int)MiCheckContiguityTradeEligible((__int64)v13) )
      break;
    v14 = *(_QWORD *)(a4 + 24) & 0xFFFFFFFFFFLL;
    v15 = (__m128i *)a4;
    if ( v14 == 0x3FFFFFFFFFLL )
      a4 = 0LL;
    else
      a4 = 48 * v14 - 0x220000000000LL;
    if ( (v13[2].m128i_i8[2] & 7) == 6 )
    {
      MiTradeActivePage(v13, v15, (__int64)(v7 << 25) >> 16, 1u, 0, 0);
      v20 = 0;
      while ( _interlockedbittestandset64(&v13[1].m128i_i32[2], 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v20, v16, v17, v18);
        while ( v13[1].m128i_i64[1] < 0 );
      }
    }
    else
    {
      MiReplaceTransitionPage((ULONG_PTR)v13, (__int64)v15, 0, 0LL);
    }
    v13[1].m128i_i64[0] = ZeroPte;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v13[1]);
    MiReturnFreeZeroPage((__int64)v13, 0LL);
    _InterlockedAnd64(&v13[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v7 & 0x78) == 0 && MiWorkingSetIsContended(a1) || KeShouldYieldProcessor() )
    {
      if ( v9 )
      {
        MiUnlockPageTableInternal(a1, v9);
        v9 = 0LL;
      }
      MiUnlockWorkingSetShared(a1, v10);
      MiLockWorkingSetShared(a1);
    }
    v7 += 8LL;
  }
  while ( v7 <= v8 );
  if ( v9 )
    MiUnlockPageTableInternal(a1, v9);
LABEL_31:
  MiUnlockWorkingSetShared(a1, v10);
  if ( a4 )
  {
    MiFreePageChain(a4);
    return (unsigned int)-1073741823;
  }
  return v4;
}
