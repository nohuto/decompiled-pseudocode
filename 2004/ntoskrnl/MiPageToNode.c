/*
 * XREFs of MiPageToNode @ 0x14035DBD4
 * Callers:
 *     MiChangePageAttributeLargeFreeZeroPage @ 0x1403EFD9C (MiChangePageAttributeLargeFreeZeroPage.c)
 *     MiLargePagePromote @ 0x1403F10E8 (MiLargePagePromote.c)
 *     MiAddPhysicalMemoryChunks @ 0x1408C1E2C (MiAddPhysicalMemoryChunks.c)
 *     MiMapNewPfns @ 0x1408C26D4 (MiMapNewPfns.c)
 *     MiMapSystemImageWithLargePage @ 0x1408D6DD0 (MiMapSystemImageWithLargePage.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 */

__int64 __fastcall MiPageToNode(ULONG_PTR a1)
{
  return *((unsigned int *)MiSearchNumaNodeTable(a1) + 2);
}
