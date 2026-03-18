/*
 * XREFs of KeGetIdealNodeNumberThread @ 0x14056D710
 * Callers:
 *     MmAllocateNonCachedMemory @ 0x14096A490 (MmAllocateNonCachedMemory.c)
 *     MiCreateHardwareEnclave @ 0x140979A34 (MiCreateHardwareEnclave.c)
 *     MiAllocateUserPhysicalPages @ 0x14097BD88 (MiAllocateUserPhysicalPages.c)
 *     MmManagePartitionMoveMemory @ 0x140982688 (MmManagePartitionMoveMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeGetIdealNodeNumberThread(__int64 a1)
{
  return *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[*(unsigned int *)(a1 + 588)] + 192) + 138LL);
}
