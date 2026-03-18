/*
 * XREFs of MiWriteWsle @ 0x1402E0090
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140252640 (MiDeleteSystemPagableVm.c)
 *     MiSetPagingOfDriver @ 0x1402DFC70 (MiSetPagingOfDriver.c)
 *     MiRemoveWsleList @ 0x1403234F0 (MiRemoveWsleList.c)
 *     MiSetWsleProtection @ 0x140368F90 (MiSetWsleProtection.c)
 *     MiUnmapRetpolineStubs @ 0x14053ED78 (MiUnmapRetpolineStubs.c)
 *     MmFreeLoaderBlock @ 0x140A44F90 (MmFreeLoaderBlock.c)
 *     MiCreatePteWsle @ 0x140A5E100 (MiCreatePteWsle.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x140245E30 (MiWriteValidPteVolatile.c)
 */

signed __int64 __fastcall MiWriteWsle(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  return MiWriteValidPteVolatile(
           (volatile signed __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           0x80000000,
           a3);
}
