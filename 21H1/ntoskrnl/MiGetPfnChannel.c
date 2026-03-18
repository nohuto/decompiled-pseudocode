/*
 * XREFs of MiGetPfnChannel @ 0x140349874
 * Callers:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiTradePage @ 0x14027DFE0 (MiTradePage.c)
 *     MiZeroPage @ 0x1402954B0 (MiZeroPage.c)
 *     MiTryUnlinkNodeLargePage @ 0x140316270 (MiTryUnlinkNodeLargePage.c)
 *     MiSwapStackPage @ 0x140316FFC (MiSwapStackPage.c)
 *     MiPrivateFixup @ 0x140344248 (MiPrivateFixup.c)
 *     MiReplaceNumaStandbyPage @ 0x1403477E0 (MiReplaceNumaStandbyPage.c)
 *     MiLargePageFreeToZero @ 0x1403493F0 (MiLargePageFreeToZero.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x14034C418 (MiTradeTransitionPage.c)
 *     MiAllocateMdlPagesByLists @ 0x140371824 (MiAllocateMdlPagesByLists.c)
 *     MiUnlinkNumaStandbyPage @ 0x140399524 (MiUnlinkNumaStandbyPage.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403EEA3C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403EFD88 (MiLargePagePromote.c)
 *     MiReplaceLockedPage @ 0x140537C4C (MiReplaceLockedPage.c)
 *     MiFreeListPageContentsChanged @ 0x14054932C (MiFreeListPageContentsChanged.c)
 *     MiPruneStandbyPages @ 0x14054B2E4 (MiPruneStandbyPages.c)
 *     MiSwapNumaStandbyPage @ 0x14054B8E0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPageToChannel @ 0x140346578 (MiPageToChannel.c)
 */

__int64 __fastcall MiGetPfnChannel(__int64 a1)
{
  if ( qword_140C4DE10 )
    return MiPageToChannel((a1 + 0x58000000000LL) / 48);
  else
    return 0LL;
}
