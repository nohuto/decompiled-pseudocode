/*
 * XREFs of MiPageToNode @ 0x14057F520
 * Callers:
 *     MiAddPhysicalMemoryChunks @ 0x140968AF4 (MiAddPhysicalMemoryChunks.c)
 *     MiMapNewPfns @ 0x140969514 (MiMapNewPfns.c)
 *     MiAddRuns @ 0x14096A868 (MiAddRuns.c)
 *     MiMapSystemImageWithLargePage @ 0x14098325C (MiMapSystemImageWithLargePage.c)
 *     MiCreateKernelHalSlabRange @ 0x140B04C20 (MiCreateKernelHalSlabRange.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 */

__int64 __fastcall MiPageToNode(ULONG_PTR a1)
{
  return *((unsigned int *)MiSearchNumaNodeTable(a1) + 2);
}
