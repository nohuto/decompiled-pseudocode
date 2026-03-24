/*
 * XREFs of MmGetHighestPhysicalPage @ 0x140353318
 * Callers:
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 *     PfpCopyUserPfnPrioRequest @ 0x140700D20 (PfpCopyUserPfnPrioRequest.c)
 *     PopAllocateHiberContext @ 0x140777C44 (PopAllocateHiberContext.c)
 *     PopPreallocateHibernateMemory @ 0x14079163C (PopPreallocateHibernateMemory.c)
 *     PopBuildMemoryImageHeader @ 0x140996724 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E648 + 8LL * a1) + 6920LL);
}
