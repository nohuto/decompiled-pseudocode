/*
 * XREFs of MiCompleteSecureProcessFault @ 0x140546684
 * Callers:
 *     MiAllocateWsle @ 0x140272FE0 (MiAllocateWsle.c)
 *     MiValidVirtualizationFault @ 0x14054745C (MiValidVirtualizationFault.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AD340 (MiSetOriginalPtePfnFromFreeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiTradeActivePage @ 0x140313B60 (MiTradeActivePage.c)
 *     MiMarkPfnVerified @ 0x1403156F4 (MiMarkPfnVerified.c)
 *     MiGetSlabPage @ 0x140332E88 (MiGetSlabPage.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiAbortCombineScan @ 0x140349794 (MiAbortCombineScan.c)
 *     MiIsPfnFromSlabAllocation @ 0x14034D190 (MiIsPfnFromSlabAllocation.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiCompleteSecureProcessFault(__int64 *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r15
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r8
  __int64 SlabPage; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  unsigned __int64 v20; // rax
  int v21; // [rsp+28h] [rbp-30h]
  int v22; // [rsp+60h] [rbp+8h] BYREF
  int v23; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a1;
  if ( !MI_PFN_IS_PROTO(*a1) )
  {
    v22 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v22, v7, v8, v9);
      while ( *(__int64 *)(v3 + 24) < 0 );
    }
    v10 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v3 + 40) >> 39) & 0x3FFLL));
    v11 = *(_QWORD *)(v3 + 8) | 0x8000000000000000uLL;
    v12 = (__int64)(v11 << 25) >> 16;
    if ( (*(_DWORD *)(v10 + 4) & 8) != 0 && !MiIsPfnFromSlabAllocation(v3) && v12 < 0xFFFF800000000000uLL )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), v13);
      SlabPage = MiGetSlabPage(v10, 0x18u, 0, a3, 0);
      if ( SlabPage == -1 )
      {
        if ( *a3 )
          return 0LL;
      }
      else
      {
        v18 = 48 * SlabPage - 0x58000000000LL;
        if ( (unsigned int)MiTradeActivePage(v3, v18, v12, 1u, 0, v21) )
        {
          *(_QWORD *)(v3 + 16) = ZeroPte;
          MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v3 + 16));
          MiReleaseFreshPage(v3);
          v3 = v18;
          *a2 = MI_READ_PTE_LOCK_FREE(v11);
          *a1 = v18;
        }
        else
        {
          MiReleaseFreshPage(v18);
        }
      }
      v23 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v23, v15, v16, v17);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
    }
    if ( ((*(_QWORD *)(v3 + 40) >> 60) & 7) != 3 )
    {
      MiAbortCombineScan(v3);
      MiMarkPfnVerified(v3, 4);
    }
    v20 = MiCaptureDirtyBitToPfn(v3);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v20 )
      MiReleasePageFileInfo(v10, v20, 1);
  }
  return 1LL;
}
