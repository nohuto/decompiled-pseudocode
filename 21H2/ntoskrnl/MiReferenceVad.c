/*
 * XREFs of MiReferenceVad @ 0x14030EB64
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x140693498 (MiMapLockedPagesInUserSpace.c)
 *     MiLockVadRange @ 0x1406F7D78 (MiLockVadRange.c)
 *     MmCleanProcessAddressSpace @ 0x1406F89A4 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140709A08 (MiAllocateFromSubAllocatedRegion.c)
 *     MiCommitInitialVadMetadataBits @ 0x140755920 (MiCommitInitialVadMetadataBits.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 *     MmQueryVirtualMemory @ 0x1407BA750 (MmQueryVirtualMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x140852834 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x14096D8A8 (MiCoalescePlaceholderAllocations.c)
 *     MiHotPatchProcess @ 0x1409736EC (MiHotPatchProcess.c)
 *     MiAllocateEnclaveVad @ 0x140978F40 (MiAllocateEnclaveVad.c)
 *     MiPreparePlaceholderVadReplacement @ 0x14097F038 (MiPreparePlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x140980A20 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReferenceVad(__int64 a1)
{
  if ( !_InterlockedIncrement((volatile signed __int32 *)(a1 + 36)) )
    __fastfail(0xEu);
}
