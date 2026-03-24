/*
 * XREFs of MiMakeZeroedPageTables @ 0x14039DE40
 * Callers:
 *     MiSplitBitmapPages @ 0x1402B40F0 (MiSplitBitmapPages.c)
 *     MiMapSystemImage @ 0x14075D0C4 (MiMapSystemImage.c)
 *     MiReserveDriverPtes @ 0x14075FEA4 (MiReserveDriverPtes.c)
 *     MiSessionCreate @ 0x14078620C (MiSessionCreate.c)
 *     MiInitializeDynamicBitmap @ 0x1407868DC (MiInitializeDynamicBitmap.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C91F8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x1408D7790 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiExpandPartitionIds @ 0x1408DAE58 (MiExpandPartitionIds.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x1402FCDFC (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  return MiMakeZeroedPageTablesEx(a1, a2, a3, a4, 0);
}
