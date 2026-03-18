/*
 * XREFs of MiGetInPageSupportBlock @ 0x140224CB4
 * Callers:
 *     MiMigratePfn @ 0x140217F80 (MiMigratePfn.c)
 *     MiAllocateInPageSupport @ 0x1402B7B20 (MiAllocateInPageSupport.c)
 *     MiPfPutPagesInTransition @ 0x1402BA1E0 (MiPfPutPagesInTransition.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 *     MiPfAllocateMdls @ 0x14063E600 (MiPfAllocateMdls.c)
 *     MiCreateRotateView @ 0x1406E7820 (MiCreateRotateView.c)
 *     MiGetReadyInPageBlock @ 0x1408C3C64 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiInitializeInPageSupport @ 0x140224D70 (MiInitializeInPageSupport.c)
 *     MiAllocateInPageSupportBlock @ 0x14031975C (MiAllocateInPageSupportBlock.c)
 *     RtlpInterlockedPopEntrySList @ 0x1403FDD60 (RtlpInterlockedPopEntrySList.c)
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
