/*
 * XREFs of MiLockVad @ 0x14030B7F0
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x140693498 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406BF9AC (MiAllocateNewSubAllocatedRegion.c)
 *     MiLockVadRange @ 0x1406F7D78 (MiLockVadRange.c)
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140709A08 (MiAllocateFromSubAllocatedRegion.c)
 *     MiCommitInitialVadMetadataBits @ 0x140755920 (MiCommitInitialVadMetadataBits.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1407BE3C0 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x140852834 (MiMapViewOfPhysicalSection.c)
 *     MiApplyImageHotPatchRequest @ 0x140971DC0 (MiApplyImageHotPatchRequest.c)
 *     MiDeleteVadHotPatchState @ 0x140972F98 (MiDeleteVadHotPatchState.c)
 *     MiPrepareToHotPatchVad @ 0x140976DFC (MiPrepareToHotPatchVad.c)
 *     MiAllocateEnclaveVad @ 0x140978F40 (MiAllocateEnclaveVad.c)
 *     MiInitializeVsmEnclave @ 0x14097A228 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14097A714 (MiLoadSectionIntoVsmEnclave.c)
 *     MiTerminateEnclave @ 0x14097AB60 (MiTerminateEnclave.c)
 *     MiDeleteInsertedCloneVads @ 0x140980A20 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockVad(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
  *(_BYTE *)(a1 + 1384) |= 0x80u;
}
