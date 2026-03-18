/*
 * XREFs of MiCompleteSecureProcessFault @ 0x140542CB4
 * Callers:
 *     MiAllocateWsle @ 0x1402A3CA0 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x140543A8C (MiValidVirtualizationFault.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x1402272A0 (MiIsPfnFromSlabAllocation.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiGetSlabPage @ 0x1402E1028 (MiGetSlabPage.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiAbortCombineScan @ 0x1402F7290 (MiAbortCombineScan.c)
 *     MiTradeActivePage @ 0x14032D448 (MiTradeActivePage.c)
 *     MiMarkPfnVerified @ 0x14034461C (MiMarkPfnVerified.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
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
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v21; // r8
  _DWORD *v22; // r9
  unsigned __int64 v23; // rax
  int v24; // [rsp+28h] [rbp-30h]
  int v25; // [rsp+60h] [rbp+8h] BYREF
  int v26; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a1;
  if ( !MI_PFN_IS_PROTO(*a1) )
  {
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v25, v7, v8, v9);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    v10 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v3 + 40) >> 39) & 0x3FFLL));
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
        if ( (unsigned int)MiTradeActivePage(v3, v16, v13, 1u, 0, v24) )
        {
          *(_QWORD *)(v3 + 16) = ZeroPte;
          MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v3 + 16), v17, v18, v19);
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
      v26 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v26, v7, v12, v15);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
    }
    if ( ((*(_QWORD *)(v3 + 40) >> 60) & 7) != 3 )
    {
      MiAbortCombineScan(v3, v7, v12);
      MiMarkPfnVerified(v3, 4, v21, v22);
    }
    v23 = MiCaptureDirtyBitToPfn(v3);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v23 )
      MiReleasePageFileInfo(v10, v23, 1);
  }
  return 1LL;
}
