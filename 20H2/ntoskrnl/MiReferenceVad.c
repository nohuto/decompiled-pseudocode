/*
 * XREFs of MiReferenceVad @ 0x14022C1B0
 * Callers:
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x140622CE0 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x1406242E8 (MmCleanProcessAddressSpace.c)
 *     MiReserveUserMemory @ 0x140625E30 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x140626CE0 (MiMapViewOfImageSection.c)
 *     MiLockVadRange @ 0x14062E080 (MiLockVadRange.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140686200 (MiAllocateFromSubAllocatedRegion.c)
 *     MiCfgInitializeProcess @ 0x1406EF6BC (MiCfgInitializeProcess.c)
 *     MiMapLockedPagesInUserSpace @ 0x140767510 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407BE808 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408CAFE4 (MiCoalescePlaceholderAllocations.c)
 *     MiHotPatchProcess @ 0x1408CCE98 (MiHotPatchProcess.c)
 *     MiAllocateEnclaveVad @ 0x1408D4698 (MiAllocateEnclaveVad.c)
 *     MiPreparePlaceholderVadReplacement @ 0x1408DACF0 (MiPreparePlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x1408DBBF4 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReferenceVad(__int64 a1)
{
  if ( !_InterlockedIncrement((volatile signed __int32 *)(a1 + 36)) )
    __fastfail(0xEu);
}
