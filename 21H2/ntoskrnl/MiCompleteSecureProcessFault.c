/*
 * XREFs of MiCompleteSecureProcessFault @ 0x1405483C4
 * Callers:
 *     MiAllocateWsle @ 0x1402B65C0 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x14054919C (MiValidVirtualizationFault.c)
 * Callees:
 *     MiTradeActivePage @ 0x1402347D0 (MiTradeActivePage.c)
 *     MiMarkPfnVerified @ 0x140236C14 (MiMarkPfnVerified.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiGetSlabPage @ 0x14029938C (MiGetSlabPage.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MiAbortCombineScan @ 0x14030E4C0 (MiAbortCombineScan.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiCompleteSecureProcessFault(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  unsigned __int64 v11; // rbp
  __int64 v12; // r8
  unsigned __int64 v13; // rdi
  __int64 SlabPage; // rax
  __int64 v15; // r9
  __int64 v16; // rsi
  unsigned __int64 v18; // rax
  int v19; // [rsp+28h] [rbp-30h]
  int v20; // [rsp+60h] [rbp+8h] BYREF
  int v21; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a1;
  if ( !MI_PFN_IS_PROTO(*a1) )
  {
    v20 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v20, v7, v8, v9);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    v10 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v3 + 40) >> 39) & 0x3FFLL));
    v11 = *(_QWORD *)(v3 + 8) | 0x8000000000000000uLL;
    v12 = 0x7FFFFFFFFFFFFFFFLL;
    v13 = (__int64)(v11 << 25) >> 16;
    if ( (*(_DWORD *)(v10 + 4) & 8) != 0 && !MiIsPfnFromSlabAllocation(v3) && v13 < 0xFFFF800000000000uLL )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), v12);
      SlabPage = MiGetSlabPage(v10, 0x18u, 0, a3, 0);
      if ( SlabPage == -1 )
      {
        if ( *a3 )
          return 0LL;
      }
      else
      {
        v16 = 48 * SlabPage - 0x58000000000LL;
        if ( (unsigned int)MiTradeActivePage(v3, v16, v13, 1u, 0, v19) )
        {
          *(_QWORD *)(v3 + 16) = ZeroPte;
          MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v3 + 16));
          MiReleaseFreshPage(v3);
          v3 = v16;
          *a2 = MI_READ_PTE_LOCK_FREE(v11);
          *a1 = v16;
        }
        else
        {
          MiReleaseFreshPage(v16);
        }
      }
      v21 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v21, v7, v12, v15);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
    }
    if ( ((*(_QWORD *)(v3 + 40) >> 60) & 7) != 3 )
    {
      MiAbortCombineScan(v3, v7, v12);
      MiMarkPfnVerified(v3, 4);
    }
    v18 = MiCaptureDirtyBitToPfn(v3);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v18 )
      MiReleasePageFileInfo(v10, v18, 1);
  }
  return 1LL;
}
