/*
 * XREFs of MiWriteWsle @ 0x14026ED30
 * Callers:
 *     MiRemoveWsleList @ 0x140218310 (MiRemoveWsleList.c)
 *     MiSetWsleProtection @ 0x14026ECFC (MiSetWsleProtection.c)
 *     MiDeleteSystemPagableVm @ 0x14027E810 (MiDeleteSystemPagableVm.c)
 *     MiSetPagingOfDriver @ 0x1402D8F30 (MiSetPagingOfDriver.c)
 *     MiUnmapRetpolineStubs @ 0x1405A2A48 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x1405A2F88 (MiClearDriverHotPatchPtes.c)
 *     MmFreeLoaderBlock @ 0x140B190F0 (MmFreeLoaderBlock.c)
 *     MiCreatePteWsle @ 0x140B1A250 (MiCreatePteWsle.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x14033A510 (MiWriteValidPteVolatile.c)
 */

__int64 __fastcall MiWriteWsle(__int64 a1, unsigned __int64 a2)
{
  return MiWriteValidPteVolatile(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0x80000000LL);
}
