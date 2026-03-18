/*
 * XREFs of MiWriteWsle @ 0x14030D2E4
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140236D90 (MiDeleteSystemPagableVm.c)
 *     MiRemoveWsleList @ 0x14029DF00 (MiRemoveWsleList.c)
 *     MiSetPagingOfDriver @ 0x14030CEC4 (MiSetPagingOfDriver.c)
 *     MiSetWsleProtection @ 0x14036AF70 (MiSetWsleProtection.c)
 *     MiUnmapRetpolineStubs @ 0x140542748 (MiUnmapRetpolineStubs.c)
 *     MmFreeLoaderBlock @ 0x140A4B230 (MmFreeLoaderBlock.c)
 *     MiCreatePteWsle @ 0x140A65460 (MiCreatePteWsle.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x14028F7D0 (MiWriteValidPteVolatile.c)
 */

signed __int64 __fastcall MiWriteWsle(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  return MiWriteValidPteVolatile(
           (volatile signed __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           0x80000000,
           a3);
}
