/*
 * XREFs of MmGetHighestPhysicalPage @ 0x14035E068
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     PfpCopyUserPfnPrioRequest @ 0x140718100 (PfpCopyUserPfnPrioRequest.c)
 *     PopAllocateHiberContext @ 0x140777E04 (PopAllocateHiberContext.c)
 *     PopPreallocateHibernateMemory @ 0x140792BEC (PopPreallocateHibernateMemory.c)
 *     PopBuildMemoryImageHeader @ 0x140997724 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8LL * a1) + 6920LL);
}
