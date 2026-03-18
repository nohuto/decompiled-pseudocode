/*
 * XREFs of MiAllocateInPageSupportBlock @ 0x14031975C
 * Callers:
 *     MiGetInPageSupportBlock @ 0x140224CB4 (MiGetInPageSupportBlock.c)
 *     MiInitializePageFaultResources @ 0x1403C6228 (MiInitializePageFaultResources.c)
 * Callees:
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 */

PVOID __fastcall MiAllocateInPageSupportBlock(int a1, unsigned int a2)
{
  return MiAllocatePool(64, a2 * ((-(__int64)(a1 != 0) & 0xFFFFFFFFFFFFF880uLL) + 2368), 0x6E496D4Du);
}
