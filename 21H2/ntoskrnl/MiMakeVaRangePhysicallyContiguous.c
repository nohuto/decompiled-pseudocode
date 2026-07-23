/*
 * XREFs of MiMakeVaRangePhysicallyContiguous @ 0x1405521B4
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x140552500 (MiProcessVaContiguityInformation.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiFreePageChain @ 0x140209074 (MiFreePageChain.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MiTradeActivePage @ 0x1402347D0 (MiTradeActivePage.c)
 *     MiReplaceTransitionPage @ 0x14025B310 (MiReplaceTransitionPage.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiReturnFreeZeroPage @ 0x14030DDA0 (MiReturnFreeZeroPage.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiGetNextPageTable @ 0x140318570 (MiGetNextPageTable.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiCheckContiguityTradeEligible @ 0x140546E04 (MiCheckContiguityTradeEligible.c)
 */

__int64 __fastcall MiMakeVaRangePhysicallyContiguous(__int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rdi
  char v9; // r12
  unsigned __int64 NextPageTable; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // r9
  int v24; // [rsp+28h] [rbp-40h]
  int v25; // [rsp+78h] [rbp+10h] BYREF
  int v26; // [rsp+80h] [rbp+18h] BYREF
  __int64 v27; // [rsp+88h] [rbp+20h] BYREF

  v26 = 0;
  v5 = (__int64)a4;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((a2 + 0x1FFFFF) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  v9 = MiLockWorkingSetShared(a1, a2, a3, a4);
  if ( v6 <= v7 )
  {
    do
    {
      if ( !v8 )
        goto LABEL_45;
      if ( (v6 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(a1, v8);
        v8 = 0LL;
      }
      if ( !v8 )
      {
LABEL_45:
        NextPageTable = MiGetNextPageTable(v6, v7, 0LL, v9, 1, &v26);
        if ( !NextPageTable )
          break;
        v8 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != v6 )
          break;
      }
      v11 = MI_READ_PTE_LOCK_FREE(v6);
      v27 = v11;
      v12 = v11;
      if ( (v11 & 1) != 0 )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v27)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v27 >> 3) & 0x1FF)) & 0x20) != 0 )
              v12 |= 0x20uLL;
          }
        }
        v14 = 48 * ((v12 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      }
      else
      {
        if ( (v11 & 0x400) != 0 )
          break;
        if ( (v11 & 0x800) == 0 )
          break;
        v14 = MiLockTransitionLeafPage(v6, 0LL);
        if ( !v14 )
          break;
      }
      if ( !(unsigned int)MiCheckContiguityTradeEligible(v14) )
        break;
      v15 = *(_QWORD *)(v5 + 24) & 0xFFFFFFFFFLL;
      v16 = v5;
      if ( v15 == 0xFFFFFFFFFLL )
        v5 = 0LL;
      else
        v5 = 48 * v15 - 0x58000000000LL;
      if ( (*(_BYTE *)(v14 + 34) & 7) == 6 )
      {
        MiTradeActivePage(v14, v16, (__int64)(v6 << 25) >> 16, 1u, 0, v24);
        v25 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v25, v17, v18, v19);
          while ( *(__int64 *)(v14 + 24) < 0 );
        }
      }
      else
      {
        MiReplaceTransitionPage(v14, v16, 0, 0LL);
      }
      *(_QWORD *)(v14 + 16) = ZeroPte;
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v14 + 16));
      MiReturnFreeZeroPage(v14);
      _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v6 & 0x78) == 0 && MiWorkingSetIsContended(a1) || KeShouldYieldProcessor() )
      {
        if ( v8 )
        {
          MiUnlockPageTableInternal(a1, v8);
          v8 = 0LL;
        }
        MiUnlockWorkingSetShared(a1, v9);
        MiLockWorkingSetShared(a1, v20, v21, v22);
      }
      v6 += 8LL;
    }
    while ( v6 <= v7 );
    if ( v8 )
      MiUnlockPageTableInternal(a1, v8);
  }
  MiUnlockWorkingSetShared(a1, v9);
  if ( v5 )
    MiFreePageChain(v5);
  return v5 != 0 ? 0xC0000001 : 0;
}
