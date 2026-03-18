/*
 * XREFs of MmGetHighestPhysicalPage @ 0x1403019A8
 * Callers:
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     PfpCopyUserPfnPrioRequest @ 0x1406CBF70 (PfpCopyUserPfnPrioRequest.c)
 *     PopAllocateHiberContext @ 0x140764C64 (PopAllocateHiberContext.c)
 *     PopEnableHiberFile @ 0x140783F90 (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x14078436C (PopPreallocateHibernateMemory.c)
 *     PopBuildMemoryImageHeader @ 0x1409934F4 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E448 + 8LL * a1) + 6920LL);
}
