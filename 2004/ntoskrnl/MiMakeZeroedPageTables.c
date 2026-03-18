/*
 * XREFs of MiMakeZeroedPageTables @ 0x14039B0B0
 * Callers:
 *     MiMapSystemImage @ 0x140747630 (MiMapSystemImage.c)
 *     MiReserveDriverPtes @ 0x14074A39C (MiReserveDriverPtes.c)
 *     MiSessionCreate @ 0x140773E2C (MiSessionCreate.c)
 *     MiInitializeDynamicBitmap @ 0x1407744FC (MiInitializeDynamicBitmap.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C5BF8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x1408D4190 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiExpandPartitionIds @ 0x1408D7858 (MiExpandPartitionIds.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x1402509D0 (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  return MiMakeZeroedPageTablesEx(a1, a2, a3, a4, 0);
}
