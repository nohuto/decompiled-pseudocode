/*
 * XREFs of MiFinalizePageAttribute @ 0x1402E5708
 * Callers:
 *     MiConvertStandbyToProto @ 0x140227490 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiMapPagesToZero @ 0x1402C5D00 (MiMapPagesToZero.c)
 *     MiInitializeTransitionPfn @ 0x1402E4724 (MiInitializeTransitionPfn.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiTradeActivePage @ 0x1402EA95C (MiTradeActivePage.c)
 *     MiMigratePfn @ 0x140327C60 (MiMigratePfn.c)
 *     MiAllocateKernelStackPages @ 0x14033B770 (MiAllocateKernelStackPages.c)
 *     MiSplitDirectMapPage @ 0x1405A0B10 (MiSplitDirectMapPage.c)
 *     MiSwapNumaStandbyPage @ 0x1405B4024 (MiSwapNumaStandbyPage.c)
 *     MiBuildForkPte @ 0x1405B88D8 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1405BB090 (MiHandleForkTransitionPte.c)
 *     MxSwapPages @ 0x140AF3FFC (MxSwapPages.c)
 *     MiInitializeCacheFlushing @ 0x140B08B40 (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiChangePageAttribute @ 0x140267E78 (MiChangePageAttribute.c)
 *     MiSetPfnTbFlushStamp @ 0x14033C33C (MiSetPfnTbFlushStamp.c)
 */

__int64 __fastcall MiFinalizePageAttribute(__int64 a1, unsigned int a2, unsigned int a3)
{
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != a2 )
    MiChangePageAttribute(a1, a2, a3 != 0);
  return MiSetPfnTbFlushStamp(a1, 0LL, a3);
}
