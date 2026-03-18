/*
 * XREFs of MiGetPfnChannel @ 0x14031A534
 * Callers:
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 *     MiZeroPage @ 0x14023C480 (MiZeroPage.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiPrivateFixup @ 0x140314F08 (MiPrivateFixup.c)
 *     MiReplaceNumaStandbyPage @ 0x1403184A0 (MiReplaceNumaStandbyPage.c)
 *     MiLargePageFreeToZero @ 0x14031A0B0 (MiLargePageFreeToZero.c)
 *     MiStealPage @ 0x14031A7E0 (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x14031D0D8 (MiTradeTransitionPage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140353DE8 (MiTryUnlinkNodeLargePage.c)
 *     MiSwapStackPage @ 0x140354AAC (MiSwapStackPage.c)
 *     MiAllocateMdlPagesByLists @ 0x140372634 (MiAllocateMdlPagesByLists.c)
 *     MiUnlinkNumaStandbyPage @ 0x140399CB4 (MiUnlinkNumaStandbyPage.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403EFD9C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403F10E8 (MiLargePagePromote.c)
 *     MiReplaceLockedPage @ 0x14053829C (MiReplaceLockedPage.c)
 *     MiFreeListPageContentsChanged @ 0x14054997C (MiFreeListPageContentsChanged.c)
 *     MiPruneStandbyPages @ 0x14054B934 (MiPruneStandbyPages.c)
 *     MiSwapNumaStandbyPage @ 0x14054BF30 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPageToChannel @ 0x140317238 (MiPageToChannel.c)
 */

__int64 __fastcall MiGetPfnChannel(__int64 a1)
{
  if ( qword_140C4DCD0 )
    return MiPageToChannel((a1 + 0x58000000000LL) / 48);
  else
    return 0LL;
}
