/*
 * XREFs of MiLockVad @ 0x14022E378
 * Callers:
 *     MiDeleteEmptyPageTables @ 0x1403F3750 (MiDeleteEmptyPageTables.c)
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x1406242E8 (MmCleanProcessAddressSpace.c)
 *     MiReserveUserMemory @ 0x140625E30 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 *     MiLockVadRange @ 0x14062E080 (MiLockVadRange.c)
 *     MiAllocateVirtualMemory @ 0x14067B2A0 (MiAllocateVirtualMemory.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140686200 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406C37D0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCfgInitializeProcess @ 0x1406EF6BC (MiCfgInitializeProcess.c)
 *     MiMapLockedPagesInUserSpace @ 0x140767510 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407BE808 (MiMapViewOfPhysicalSection.c)
 *     MiPerformImageHotPatch @ 0x1408CF704 (MiPerformImageHotPatch.c)
 *     MiAllocateEnclaveVad @ 0x1408D4698 (MiAllocateEnclaveVad.c)
 *     MiInitializeVsmEnclave @ 0x1408D58D8 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D5DB0 (MiLoadSectionIntoVsmEnclave.c)
 *     MiTerminateEnclave @ 0x1408D6398 (MiTerminateEnclave.c)
 *     MiDeleteInsertedCloneVads @ 0x1408DBBF4 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockVad(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
  *(_BYTE *)(a1 + 1304) |= 0x80u;
}
