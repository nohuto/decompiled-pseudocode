/*
 * XREFs of MiMakeZeroedPageTables @ 0x14039A920
 * Callers:
 *     MiMapSystemImage @ 0x140745AB0 (MiMapSystemImage.c)
 *     MiReserveDriverPtes @ 0x14074881C (MiReserveDriverPtes.c)
 *     MiSessionCreate @ 0x140771A1C (MiSessionCreate.c)
 *     MiInitializeDynamicBitmap @ 0x1407720EC (MiInitializeDynamicBitmap.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C48A8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x1408D2E40 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiExpandPartitionIds @ 0x1408D6508 (MiExpandPartitionIds.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x1402A9A00 (MiMakeZeroedPageTablesEx.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  return MiMakeZeroedPageTablesEx(a1, a2, a3, a4, 0);
}
