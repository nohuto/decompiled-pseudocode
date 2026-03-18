/*
 * XREFs of MiReferenceVad @ 0x14024B6B0
 * Callers:
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x1405FE978 (MmCleanProcessAddressSpace.c)
 *     MiReserveUserMemory @ 0x1405FF360 (MiReserveUserMemory.c)
 *     MmQueryVirtualMemory @ 0x1405FF9D0 (MmQueryVirtualMemory.c)
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 *     MiLockVadRange @ 0x1406022F8 (MiLockVadRange.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406045E8 (MiAllocateFromSubAllocatedRegion.c)
 *     MiCfgInitializeProcess @ 0x1406B4E54 (MiCfgInitializeProcess.c)
 *     MiMapLockedPagesInUserSpace @ 0x1407588D0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407B08C8 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408C51A4 (MiCoalescePlaceholderAllocations.c)
 *     MiHotPatchProcess @ 0x1408C7058 (MiHotPatchProcess.c)
 *     MiAllocateEnclaveVad @ 0x1408CE858 (MiAllocateEnclaveVad.c)
 *     MiPreparePlaceholderVadReplacement @ 0x1408D4EB0 (MiPreparePlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D5DB4 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReferenceVad(__int64 a1)
{
  if ( !_InterlockedIncrement((volatile signed __int32 *)(a1 + 36)) )
    __fastfail(0xEu);
}
