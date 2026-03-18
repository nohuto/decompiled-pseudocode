/*
 * XREFs of MiGetInPageSupportBlock @ 0x1402320A0
 * Callers:
 *     MiAllocateInPageSupport @ 0x140231FD0 (MiAllocateInPageSupport.c)
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiMigratePfn @ 0x140279DD0 (MiMigratePfn.c)
 *     MiPfAllocateMdls @ 0x1406585B0 (MiPfAllocateMdls.c)
 *     MiCreateRotateView @ 0x1406DD978 (MiCreateRotateView.c)
 *     MiGetReadyInPageBlock @ 0x1408CADF4 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiInitializeInPageSupport @ 0x140232150 (MiInitializeInPageSupport.c)
 *     MiAllocateInPageSupportBlock @ 0x140327D4C (MiAllocateInPageSupportBlock.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404052C0 (RtlpInterlockedPopEntrySList.c)
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
