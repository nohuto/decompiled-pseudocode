/*
 * XREFs of MiReferenceVad @ 0x14027C900
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x140640FA0 (MiAllocateFromSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     MiLockVadRange @ 0x140687890 (MiLockVadRange.c)
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 *     MiCfgInitializeProcess @ 0x1406C072C (MiCfgInitializeProcess.c)
 *     MiReserveUserMemory @ 0x1407018B0 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x14070262C (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076B860 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C3128 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408C8904 (MiCoalescePlaceholderAllocations.c)
 *     MiHotPatchProcess @ 0x1408CA7B8 (MiHotPatchProcess.c)
 *     MiAllocateEnclaveVad @ 0x1408D1FB8 (MiAllocateEnclaveVad.c)
 *     MiPreparePlaceholderVadReplacement @ 0x1408D8610 (MiPreparePlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D9514 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReferenceVad(__int64 a1)
{
  if ( !_InterlockedIncrement((volatile signed __int32 *)(a1 + 36)) )
    __fastfail(0xEu);
}
