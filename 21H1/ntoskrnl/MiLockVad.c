/*
 * XREFs of MiLockVad @ 0x1402A2E28
 * Callers:
 *     MiDeleteEmptyPageTables @ 0x1403EDF80 (MiDeleteEmptyPageTables.c)
 *     MiAllocateVirtualMemory @ 0x1405ED060 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x140632720 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x1406339B8 (MmCleanProcessAddressSpace.c)
 *     MiReserveUserMemory @ 0x1406343A0 (MiReserveUserMemory.c)
 *     MmQueryVirtualMemory @ 0x140634A10 (MmQueryVirtualMemory.c)
 *     MiMapViewOfImageSection @ 0x1406362B0 (MiMapViewOfImageSection.c)
 *     MiLockVadRange @ 0x140637338 (MiLockVadRange.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140639628 (MiAllocateFromSubAllocatedRegion.c)
 *     MiCfgInitializeProcess @ 0x14064EC3C (MiCfgInitializeProcess.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406CEA44 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x140756C50 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407AD768 (MiMapViewOfPhysicalSection.c)
 *     MiPerformImageHotPatch @ 0x1408C8574 (MiPerformImageHotPatch.c)
 *     MiAllocateEnclaveVad @ 0x1408CD508 (MiAllocateEnclaveVad.c)
 *     MiInitializeVsmEnclave @ 0x1408CE748 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CEC20 (MiLoadSectionIntoVsmEnclave.c)
 *     MiTerminateEnclave @ 0x1408CF208 (MiTerminateEnclave.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D4A64 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockVad(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
  *(_BYTE *)(a1 + 1304) |= 0x80u;
}
