/*
 * XREFs of MiMakeVaRangePhysicallyContiguous @ 0x1405504A4
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x1405507F0 (MiProcessVaContiguityInformation.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiGetNextPageTable @ 0x140235D70 (MiGetNextPageTable.c)
 *     MiLockTransitionLeafPage @ 0x14023681C (MiLockTransitionLeafPage.c)
 *     MiFreePageChain @ 0x14023C1C4 (MiFreePageChain.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AD340 (MiSetOriginalPtePfnFromFreeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KeShouldYieldProcessor @ 0x1402F80C0 (KeShouldYieldProcessor.c)
 *     MiTradeActivePage @ 0x140313B60 (MiTradeActivePage.c)
 *     MiReturnFreeZeroPage @ 0x14034D2F0 (MiReturnFreeZeroPage.c)
 *     MiReplaceTransitionPage @ 0x140351C54 (MiReplaceTransitionPage.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiCheckContiguityTradeEligible @ 0x1405450C4 (MiCheckContiguityTradeEligible.c)
 */

__int64 __fastcall MiMakeVaRangePhysicallyContiguous(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
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
  ULONG_PTR v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  int v22; // [rsp+28h] [rbp-40h]
  int v23; // [rsp+78h] [rbp+10h] BYREF
  int v24; // [rsp+80h] [rbp+18h] BYREF
  __int64 v25; // [rsp+88h] [rbp+20h] BYREF

  v24 = 0;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((a2 + 0x1FFFFF) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  v9 = MiLockWorkingSetShared(a1);
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
        NextPageTable = MiGetNextPageTable(v6, v7, 0LL, v9, 1u, &v24);
        if ( !NextPageTable )
          break;
        v8 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != v6 )
          break;
      }
      v11 = MI_READ_PTE_LOCK_FREE(v6);
      v25 = v11;
      v12 = v11;
      if ( (v11 & 1) != 0 )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v25)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v25 >> 3) & 0x1FF)) & 0x20) != 0 )
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
      v15 = *(_QWORD *)(a4 + 24) & 0xFFFFFFFFFLL;
      v16 = a4;
      if ( v15 == 0xFFFFFFFFFLL )
        a4 = 0LL;
      else
        a4 = 48 * v15 - 0x58000000000LL;
      if ( (*(_BYTE *)(v14 + 34) & 7) == 6 )
      {
        MiTradeActivePage(v14, v16, (__int64)(v6 << 25) >> 16, 1u, 0, v22);
        v23 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v23, v17, v18, v19);
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
        MiLockWorkingSetShared(a1);
      }
      v6 += 8LL;
    }
    while ( v6 <= v7 );
    if ( v8 )
      MiUnlockPageTableInternal(a1, v8);
  }
  MiUnlockWorkingSetShared(a1, v9);
  if ( a4 )
    MiFreePageChain(a4, v20);
  return a4 != 0 ? 0xC0000001 : 0;
}
