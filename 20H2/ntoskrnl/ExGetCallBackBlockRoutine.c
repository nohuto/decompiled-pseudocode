/*
 * XREFs of ExGetCallBackBlockRoutine @ 0x140381A60
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1408D7528 (MiAllocateUserPhysicalPages.c)
 *     MiComputeAweCharges @ 0x1408D8140 (MiComputeAweCharges.c)
 *     MiCreateAweInfoBitMap @ 0x1408D81CC (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x1408D83E8 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x1408D86CC (MiDeleteAweInfoPages.c)
 *     MiGetAweVadPageSize @ 0x1408D88E8 (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408D8944 (MiReferenceIncomingPhysicalPages.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D8E80 (MiScrubProcessPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D9040 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408D9520 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D97E0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockRoutine(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}
