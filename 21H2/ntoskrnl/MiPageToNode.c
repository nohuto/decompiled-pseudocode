/*
 * XREFs of MiPageToNode @ 0x1402D03D4
 * Callers:
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403F5A4C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403F6D98 (MiLargePagePromote.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C542C (MiAddPhysicalMemoryChunks.c)
 *     MiMapNewPfns @ 0x1408C5CD4 (MiMapNewPfns.c)
 *     MiMapSystemImageWithLargePage @ 0x1408DA3D0 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 */

__int64 __fastcall MiPageToNode(ULONG_PTR a1)
{
  return *(unsigned int *)(MiSearchNumaNodeTable(a1) + 8);
}
