/*
 * XREFs of MiGetPfnChannel @ 0x14034E084
 * Callers:
 *     MiPrivateFixup @ 0x140239840 (MiPrivateFixup.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiZeroPage @ 0x1402C1B30 (MiZeroPage.c)
 *     MiTryUnlinkNodeLargePage @ 0x1402F27F8 (MiTryUnlinkNodeLargePage.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     MiTradePage @ 0x14034AE80 (MiTradePage.c)
 *     MiLargePageFreeToZero @ 0x14034DC00 (MiLargePageFreeToZero.c)
 *     MiTradeTransitionPage @ 0x140350BC0 (MiTradeTransitionPage.c)
 *     MiReplaceNumaStandbyPage @ 0x14035149C (MiReplaceNumaStandbyPage.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiAllocateMdlPagesByLists @ 0x140374584 (MiAllocateMdlPagesByLists.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039C174 (MiUnlinkNumaStandbyPage.c)
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F42B0 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403F55FC (MiLargePagePromote.c)
 *     MiReplaceLockedPage @ 0x14053BC6C (MiReplaceLockedPage.c)
 *     MiFreeListPageContentsChanged @ 0x14054D34C (MiFreeListPageContentsChanged.c)
 *     MiPruneStandbyPages @ 0x14054F304 (MiPruneStandbyPages.c)
 *     MiSwapNumaStandbyPage @ 0x14054F900 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     MiPageToChannel @ 0x1402F2478 (MiPageToChannel.c)
 */

__int64 __fastcall MiGetPfnChannel(__int64 a1)
{
  if ( qword_140C4DD50 )
    return MiPageToChannel((a1 + 0x58000000000LL) / 48);
  else
    return 0LL;
}
