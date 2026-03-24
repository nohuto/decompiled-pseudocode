/*
 * XREFs of MiGetPfnChannel @ 0x1403041C4
 * Callers:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiZeroPage @ 0x140233310 (MiZeroPage.c)
 *     MiReplaceNumaStandbyPage @ 0x14026B4EC (MiReplaceNumaStandbyPage.c)
 *     MiTradeTransitionPage @ 0x14026B6E8 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiPrivateFixup @ 0x14028CA28 (MiPrivateFixup.c)
 *     MiTryUnlinkNodeLargePage @ 0x14029195C (MiTryUnlinkNodeLargePage.c)
 *     MiSwapStackPage @ 0x1402C605C (MiSwapStackPage.c)
 *     MiTradePage @ 0x140300BE0 (MiTradePage.c)
 *     MiLargePageFreeToZero @ 0x140303D40 (MiLargePageFreeToZero.c)
 *     MiAllocateMdlPagesByLists @ 0x140374714 (MiAllocateMdlPagesByLists.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039CA44 (MiUnlinkNumaStandbyPage.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F5A4C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403F6D98 (MiLargePagePromote.c)
 *     MiReplaceLockedPage @ 0x14053D76C (MiReplaceLockedPage.c)
 *     MiFreeListPageContentsChanged @ 0x14054EE4C (MiFreeListPageContentsChanged.c)
 *     MiPruneStandbyPages @ 0x140550DD4 (MiPruneStandbyPages.c)
 *     MiSwapNumaStandbyPage @ 0x1405513D0 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPageToChannel @ 0x1402FF108 (MiPageToChannel.c)
 */

__int64 __fastcall MiGetPfnChannel(__int64 a1)
{
  if ( qword_140C4DED0 )
    return MiPageToChannel((a1 + 0x58000000000LL) / 48);
  else
    return 0LL;
}
