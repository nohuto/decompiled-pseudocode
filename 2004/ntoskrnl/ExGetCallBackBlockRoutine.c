/*
 * XREFs of ExGetCallBackBlockRoutine @ 0x14037FCA0
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1408D16E8 (MiAllocateUserPhysicalPages.c)
 *     MiComputeAweCharges @ 0x1408D2300 (MiComputeAweCharges.c)
 *     MiCreateAweInfoBitMap @ 0x1408D238C (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x1408D25A8 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x1408D288C (MiDeleteAweInfoPages.c)
 *     MiGetAweVadPageSize @ 0x1408D2AA8 (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408D2B04 (MiReferenceIncomingPhysicalPages.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D3040 (MiScrubProcessPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D3200 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408D36E0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D39A0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockRoutine(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}
