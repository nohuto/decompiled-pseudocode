/*
 * XREFs of MiGetInPageSupportBlock @ 0x14033C424
 * Callers:
 *     MiPrivateFixup @ 0x14024076C (MiPrivateFixup.c)
 *     MiPfPutPagesInTransition @ 0x1402715A0 (MiPfPutPagesInTransition.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MiAllocateInPageSupport @ 0x140339CA0 (MiAllocateInPageSupport.c)
 *     MiCreateRotateView @ 0x1406E97B4 (MiCreateRotateView.c)
 *     MiPfAllocateMdls @ 0x1406F4A80 (MiPfAllocateMdls.c)
 *     MiGetReadyInPageBlock @ 0x14096D038 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiAllocateInPageSupportBlock @ 0x140251B4C (MiAllocateInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x14033C4D0 (MiInitializeInPageSupport.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 */

__int64 __fastcall MiGetInPageSupportBlock(unsigned int a1)
{
  __int64 v2; // rsi
  BOOL v3; // ebp
  __int64 v4; // rbx

  v2 = 2LL * ((a1 & 1) == 0);
  v3 = (a1 & 1) == 0;
  v4 = (__int64)RtlpInterlockedPopEntrySList((PSLIST_HEADER)&MiState[v2 + 2100]);
  if ( v4 || (v4 = (__int64)RtlpInterlockedPopEntrySList((PSLIST_HEADER)&MiState[v2 + 2104])) != 0 )
  {
LABEL_2:
    MiInitializeInPageSupport(v4, a1);
    return v4;
  }
  if ( (a1 & 4) == 0 )
  {
    v4 = MiAllocateInPageSupportBlock(v3, 1u);
    if ( !v4 )
      return v4;
    goto LABEL_2;
  }
  return 0LL;
}
