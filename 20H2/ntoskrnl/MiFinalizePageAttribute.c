/*
 * XREFs of MiFinalizePageAttribute @ 0x140350B14
 * Callers:
 *     MiMapPagesToZero @ 0x1402C2890 (MiMapPagesToZero.c)
 *     MiTradeActivePage @ 0x140313B60 (MiTradeActivePage.c)
 *     MiInitializeTransitionPfn @ 0x14035090C (MiInitializeTransitionPfn.c)
 *     MiReplaceTransitionPage @ 0x140351C54 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiSplitDirectMapPage @ 0x14054063C (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x14054F900 (MiSwapNumaStandbyPage.c)
 *     MiBuildForkPte @ 0x1405567EC (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140558F94 (MiHandleForkTransitionPte.c)
 *     MiInitializeCacheFlushing @ 0x140A53504 (MiInitializeCacheFlushing.c)
 *     MxSwapPages @ 0x140A55AFC (MxSwapPages.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 *     MiSetPfnTbFlushStamp @ 0x140290710 (MiSetPfnTbFlushStamp.c)
 */

unsigned __int64 __fastcall MiFinalizePageAttribute(__int64 a1, unsigned int a2, int a3)
{
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != a2 )
    MiChangePageAttribute(a1, a2, a3 == 1);
  return MiSetPfnTbFlushStamp(a1, 0, a3);
}
