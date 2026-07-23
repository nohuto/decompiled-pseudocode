/*
 * XREFs of MiGetInPageSupportBlock @ 0x1402E3774
 * Callers:
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     MiMigratePfn @ 0x1402BCEF0 (MiMigratePfn.c)
 *     MiPfPutPagesInTransition @ 0x140306370 (MiPfPutPagesInTransition.c)
 *     MiAllocateInPageSupport @ 0x1403248F0 (MiAllocateInPageSupport.c)
 *     MiCreateRotateView @ 0x14061CAB0 (MiCreateRotateView.c)
 *     MiPfAllocateMdls @ 0x140700080 (MiPfAllocateMdls.c)
 *     MiGetReadyInPageBlock @ 0x1408C8714 (MiGetReadyInPageBlock.c)
 * Callees:
 *     MiAllocateInPageSupportBlock @ 0x14024777C (MiAllocateInPageSupportBlock.c)
 *     MiInitializeInPageSupport @ 0x1402E3830 (MiInitializeInPageSupport.c)
 *     RtlpInterlockedPopEntrySList @ 0x140407B10 (RtlpInterlockedPopEntrySList.c)
 */

ULONG_PTR __fastcall MiGetInPageSupportBlock(char a1)
{
  __int64 v2; // rsi
  BOOL v3; // ebp
  ULONG_PTR v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9

  v2 = 2LL * ((a1 & 1) == 0);
  v3 = (a1 & 1) == 0;
  v4 = (ULONG_PTR)RtlpInterlockedPopEntrySList((PSLIST_HEADER)&MiState[v2 + 1154]);
  if ( v4 || (v4 = (ULONG_PTR)RtlpInterlockedPopEntrySList((PSLIST_HEADER)&MiState[v2 + 1158])) != 0 )
  {
LABEL_3:
    MiInitializeInPageSupport(v4);
    return v4;
  }
  if ( (a1 & 4) == 0 )
  {
    v4 = MiAllocateInPageSupportBlock(v3, 1u, v5, v6);
    if ( !v4 )
      return v4;
    goto LABEL_3;
  }
  return 0LL;
}
