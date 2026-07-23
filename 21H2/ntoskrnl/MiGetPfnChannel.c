/*
 * XREFs of MiGetPfnChannel @ 0x14030EF14
 * Callers:
 *     MiPrivateFixup @ 0x140209BC8 (MiPrivateFixup.c)
 *     MiTryUnlinkNodeLargePage @ 0x14020F8CC (MiTryUnlinkNodeLargePage.c)
 *     MiSwapStackPage @ 0x14024483C (MiSwapStackPage.c)
 *     MiReplaceNumaStandbyPage @ 0x14025948C (MiReplaceNumaStandbyPage.c)
 *     MiTradeTransitionPage @ 0x140259688 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiZeroPage @ 0x1402D7B60 (MiZeroPage.c)
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 *     MiLargePageFreeToZero @ 0x14030EA90 (MiLargePageFreeToZero.c)
 *     MiAllocateMdlPagesByLists @ 0x140374264 (MiAllocateMdlPagesByLists.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039CB94 (MiUnlinkNumaStandbyPage.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F5A4C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403F6D98 (MiLargePagePromote.c)
 *     MiReplaceLockedPage @ 0x14053D9AC (MiReplaceLockedPage.c)
 *     MiFreeListPageContentsChanged @ 0x14054F08C (MiFreeListPageContentsChanged.c)
 *     MiPruneStandbyPages @ 0x140551014 (MiPruneStandbyPages.c)
 *     MiSwapNumaStandbyPage @ 0x140551610 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPageToChannel @ 0x140309E58 (MiPageToChannel.c)
 */

__int64 __fastcall MiGetPfnChannel(__int64 a1)
{
  if ( qword_140C4DF10 )
    return MiPageToChannel((a1 + 0x58000000000LL) / 48);
  else
    return 0LL;
}
