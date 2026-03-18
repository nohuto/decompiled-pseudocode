/*
 * XREFs of MiWriteWsle @ 0x140325190
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x1402AB670 (MiDeleteSystemPagableVm.c)
 *     MiRemoveWsleList @ 0x1402E8870 (MiRemoveWsleList.c)
 *     MiSetPagingOfDriver @ 0x140324D70 (MiSetPagingOfDriver.c)
 *     MiSetWsleProtection @ 0x1403685D0 (MiSetWsleProtection.c)
 *     MiUnmapRetpolineStubs @ 0x14053E728 (MiUnmapRetpolineStubs.c)
 *     MmFreeLoaderBlock @ 0x140A3F76C (MmFreeLoaderBlock.c)
 *     MiCreatePteWsle @ 0x140A5F060 (MiCreatePteWsle.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x14029EE60 (MiWriteValidPteVolatile.c)
 */

signed __int64 __fastcall MiWriteWsle(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  return MiWriteValidPteVolatile(
           (volatile signed __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           0x80000000,
           a3);
}
