/*
 * XREFs of MmGetHighestPhysicalPage @ 0x1402ED9C8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14069F070 (PfpCopyUserPfnPrioRequest.c)
 *     PopAllocateHiberContext @ 0x140773C94 (PopAllocateHiberContext.c)
 *     PopPreallocateHibernateMemory @ 0x140791ECC (PopPreallocateHibernateMemory.c)
 *     PopBuildMemoryImageHeader @ 0x140999654 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E4C8 + 8LL * a1) + 6920LL);
}
