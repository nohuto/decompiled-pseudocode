/*
 * XREFs of MiMakeVaRangePhysicallyContiguous @ 0x14054C484
 * Callers:
 *     MiProcessVaContiguityInformation @ 0x14054C7D0 (MiProcessVaContiguityInformation.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140223360 (MiSetOriginalPtePfnFromFreeList.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiLockTransitionLeafPage @ 0x1402ACD48 (MiLockTransitionLeafPage.c)
 *     MiGetNextPageTable @ 0x1402AF130 (MiGetNextPageTable.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiTradeActivePage @ 0x1402F16A8 (MiTradeActivePage.c)
 *     MiFreePageChain @ 0x140341758 (MiFreePageChain.c)
 *     MiReplaceTransitionPage @ 0x14034B1EC (MiReplaceTransitionPage.c)
 *     MiReturnFreeZeroPage @ 0x14034B8A8 (MiReturnFreeZeroPage.c)
 *     MiCheckContiguityTradeEligible @ 0x1405410A4 (MiCheckContiguityTradeEligible.c)
 */

__int64 __fastcall MiMakeVaRangePhysicallyContiguous(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // r8
  char v10; // r12
  unsigned __int64 NextPageTable; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v15; // rbx
  __int64 v16; // rax
  ULONG_PTR v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  int v24; // [rsp+28h] [rbp-40h]
  int v25; // [rsp+78h] [rbp+10h] BYREF
  int v26; // [rsp+80h] [rbp+18h] BYREF
  __int64 v27; // [rsp+88h] [rbp+20h] BYREF

  v26 = 0;
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v7 = (((a2 + 0x1FFFFF) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = 0LL;
  v10 = MiLockWorkingSetShared(a1);
  if ( v6 <= v7 )
  {
    do
    {
      if ( !v8 )
        goto LABEL_45;
      if ( (v6 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(a1, v8, v9);
        v8 = 0LL;
      }
      if ( !v8 )
      {
LABEL_45:
        NextPageTable = MiGetNextPageTable(v6, v7, 0LL, v10, 1, &v26);
        if ( !NextPageTable )
          break;
        v8 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( NextPageTable != v6 )
          break;
      }
      v12 = MI_READ_PTE_LOCK_FREE(v6);
      v27 = v12;
      v13 = v12;
      if ( (v12 & 1) != 0 )
      {
        if ( MiPteInShadowRange((unsigned __int64)&v27)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
        {
          Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( Flink )
          {
            if ( ((__int64)*(&Flink->Flink + (((unsigned __int64)&v27 >> 3) & 0x1FF)) & 0x20) != 0 )
              v13 |= 0x20uLL;
          }
        }
        v15 = 48 * ((v13 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      }
      else
      {
        if ( (v12 & 0x400) != 0 )
          break;
        if ( (v12 & 0x800) == 0 )
          break;
        v15 = MiLockTransitionLeafPage(v6, 0LL);
        if ( !v15 )
          break;
      }
      if ( !(unsigned int)MiCheckContiguityTradeEligible(v15) )
        break;
      v16 = *(_QWORD *)(a4 + 24) & 0xFFFFFFFFFLL;
      v17 = a4;
      if ( v16 == 0xFFFFFFFFFLL )
        a4 = 0LL;
      else
        a4 = 48 * v16 - 0x58000000000LL;
      if ( (*(_BYTE *)(v15 + 34) & 7) == 6 )
      {
        MiTradeActivePage(v15, v17, (__int64)(v6 << 25) >> 16, 1u, 0, v24);
        v25 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v25, v18, v19, v20);
          while ( *(__int64 *)(v15 + 24) < 0 );
        }
      }
      else
      {
        MiReplaceTransitionPage(v15, v17, 0, 0LL);
      }
      *(_QWORD *)(v15 + 16) = ZeroPte;
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v15 + 16));
      MiReturnFreeZeroPage(v15);
      _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v6 & 0x78) == 0 && MiWorkingSetIsContended(a1) || KeShouldYieldProcessor() )
      {
        if ( v8 )
        {
          MiUnlockPageTableInternal(a1, v8, v9);
          v8 = 0LL;
        }
        MiUnlockWorkingSetShared(a1, v10);
        MiLockWorkingSetShared(a1);
      }
      v6 += 8LL;
    }
    while ( v6 <= v7 );
    if ( v8 )
      MiUnlockPageTableInternal(a1, v8, v9);
  }
  MiUnlockWorkingSetShared(a1, v10);
  if ( a4 )
    MiFreePageChain(a4, v21, v22);
  return a4 != 0 ? 0xC0000001 : 0;
}
