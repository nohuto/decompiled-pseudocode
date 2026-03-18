/*
 * XREFs of MiAllocateInPageSupportBlock @ 0x140251B4C
 * Callers:
 *     MiGetInPageSupportBlock @ 0x14033C424 (MiGetInPageSupportBlock.c)
 *     MiInitializePageFaultResources @ 0x1403B7B80 (MiInitializePageFaultResources.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 */

__int64 __fastcall MiAllocateInPageSupportBlock(int a1, unsigned int a2)
{
  return MiAllocatePool(64LL, a2 * ((-(__int64)(a1 != 0) & 0xFFFFFFFFFFFFF880uLL) + 2368), 1850305869LL);
}
