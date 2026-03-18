/*
 * XREFs of MiPageToNode @ 0x14032E6F4
 * Callers:
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F42B0 (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403F55FC (MiLargePagePromote.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C7C6C (MiAddPhysicalMemoryChunks.c)
 *     MiMapNewPfns @ 0x1408C8514 (MiMapNewPfns.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DCC10 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 */

__int64 __fastcall MiPageToNode(ULONG_PTR a1)
{
  return *((unsigned int *)MiSearchNumaNodeTable(a1) + 2);
}
