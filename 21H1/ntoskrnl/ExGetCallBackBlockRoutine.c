/*
 * XREFs of ExGetCallBackBlockRoutine @ 0x14037F340
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1408D0398 (MiAllocateUserPhysicalPages.c)
 *     MiComputeAweCharges @ 0x1408D0FB0 (MiComputeAweCharges.c)
 *     MiCreateAweInfoBitMap @ 0x1408D103C (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x1408D1258 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x1408D153C (MiDeleteAweInfoPages.c)
 *     MiGetAweVadPageSize @ 0x1408D1758 (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408D17B4 (MiReferenceIncomingPhysicalPages.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D1CF0 (MiScrubProcessPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D1EB0 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408D2390 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D2650 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockRoutine(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}
