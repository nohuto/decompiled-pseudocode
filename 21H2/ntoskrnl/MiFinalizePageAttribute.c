/*
 * XREFs of MiFinalizePageAttribute @ 0x14026E434
 * Callers:
 *     MiMapPagesToZero @ 0x140234070 (MiMapPagesToZero.c)
 *     MiStealPage @ 0x14026BCA4 (MiStealPage.c)
 *     MiReplaceTransitionPage @ 0x14026D370 (MiReplaceTransitionPage.c)
 *     MiInitializeTransitionPfn @ 0x14026E22C (MiInitializeTransitionPfn.c)
 *     MiTradeActivePage @ 0x1402B65F0 (MiTradeActivePage.c)
 *     MiConvertStandbyToProto @ 0x140366F78 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14036A050 (MiConvertPrivateToProto.c)
 *     MiSplitDirectMapPage @ 0x14054213C (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1405513D0 (MiSwapNumaStandbyPage.c)
 *     MiBuildForkPte @ 0x1405582BC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x14055AA64 (MiHandleForkTransitionPte.c)
 *     MiInitializeCacheFlushing @ 0x140A54B0C (MiInitializeCacheFlushing.c)
 *     MxSwapPages @ 0x140A57120 (MxSwapPages.c)
 * Callees:
 *     MiSetPfnTbFlushStamp @ 0x140240160 (MiSetPfnTbFlushStamp.c)
 *     MiChangePageAttribute @ 0x1403041E4 (MiChangePageAttribute.c)
 */

unsigned __int64 __fastcall MiFinalizePageAttribute(__int64 a1, __int64 a2, int a3)
{
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != (_DWORD)a2 )
    MiChangePageAttribute(a1, a2, a3 == 1);
  return MiSetPfnTbFlushStamp(a1, 0, a3);
}
