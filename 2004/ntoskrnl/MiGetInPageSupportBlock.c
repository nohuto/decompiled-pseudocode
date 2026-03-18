/*
 * XREFs of MiGetInPageSupportBlock @ 0x1402B7934
 * Callers:
 *     MiAllocateInPageSupport @ 0x14025EAF0 (MiAllocateInPageSupport.c)
 *     MiPfPutPagesInTransition @ 0x1402611B0 (MiPfPutPagesInTransition.c)
 *     MiMigratePfn @ 0x1402AAA90 (MiMigratePfn.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiPfAllocateMdls @ 0x1406094B0 (MiPfAllocateMdls.c)
 *     MiCreateRotateView @ 0x14070B750 (MiCreateRotateView.c)
 *     MiGetReadyInPageBlock @ 0x1408C4FB4 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiInitializeInPageSupport @ 0x1402B79F0 (MiInitializeInPageSupport.c)
 *     MiAllocateInPageSupportBlock @ 0x14035734C (MiAllocateInPageSupportBlock.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FEFF0 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiGetInPageSupportBlock(char a1)
{
  __int64 v2; // rsi
  BOOL v3; // ebp
  PSLIST_ENTRY v4; // rbx

  v2 = 2LL * ((a1 & 1) == 0);
  v3 = (a1 & 1) == 0;
  v4 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&MiState[v2 + 1154]);
  if ( v4 || (v4 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)&MiState[v2 + 1158])) != 0LL )
  {
LABEL_3:
    MiInitializeInPageSupport((ULONG_PTR)v4);
    return v4;
  }
  if ( (a1 & 4) == 0 )
  {
    v4 = (PSLIST_ENTRY)MiAllocateInPageSupportBlock(v3, 1LL);
    if ( !v4 )
      return v4;
    goto LABEL_3;
  }
  return 0LL;
}
