/*
 * XREFs of MiMakeZeroedPageTables @ 0x14039DF90
 * Callers:
 *     MiSplitBitmapPages @ 0x1402322A0 (MiSplitBitmapPages.c)
 *     MiMapSystemImage @ 0x14075D284 (MiMapSystemImage.c)
 *     MiReserveDriverPtes @ 0x140760064 (MiReserveDriverPtes.c)
 *     MiSessionCreate @ 0x1407863CC (MiSessionCreate.c)
 *     MiInitializeDynamicBitmap @ 0x140786A9C (MiInitializeDynamicBitmap.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C9358 (MiApplyHotPatchToLoadedDriver.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x1408D78F0 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiExpandPartitionIds @ 0x1408DAFB8 (MiExpandPartitionIds.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x140307B4C (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  return MiMakeZeroedPageTablesEx(a1, a2, a3, a4, 0);
}
