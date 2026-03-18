/*
 * XREFs of MiAllocateInPageSupportBlock @ 0x14035734C
 * Callers:
 *     MiGetInPageSupportBlock @ 0x1402B7934 (MiGetInPageSupportBlock.c)
 *     MiInitializePageFaultResources @ 0x1403C7198 (MiInitializePageFaultResources.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 */

PVOID __fastcall MiAllocateInPageSupportBlock(int a1, unsigned int a2)
{
  return MiAllocatePool(64, a2 * ((-(__int64)(a1 != 0) & 0xFFFFFFFFFFFFF880uLL) + 2368), 0x6E496D4Du);
}
