/*
 * XREFs of MiAllocateInPageSupportBlock @ 0x14024777C
 * Callers:
 *     MiGetInPageSupportBlock @ 0x1402E3774 (MiGetInPageSupportBlock.c)
 *     MiInitializePageFaultResources @ 0x1403CA918 (MiInitializePageFaultResources.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 */

__int64 __fastcall MiAllocateInPageSupportBlock(int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  return MiAllocatePool(64LL, a2 * ((-(__int64)(a1 != 0) & 0xFFFFFFFFFFFFF880uLL) + 2368), 1850305869LL, a4);
}
