/*
 * XREFs of MmGetHighestPhysicalPage @ 0x1402E4F70
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14069E720 (PfpCopyUserPfnPrioRequest.c)
 *     PopAllocateHiberContext @ 0x140763244 (PopAllocateHiberContext.c)
 *     PopEnableHiberFile @ 0x14077B590 (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x14077B96C (PopPreallocateHibernateMemory.c)
 *     PopBuildMemoryImageHeader @ 0x140991EB4 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetHighestPhysicalPage(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E588 + 8LL * a1) + 6920LL);
}
