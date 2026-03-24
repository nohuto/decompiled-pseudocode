/*
 * XREFs of ExGetCallBackBlockRoutine @ 0x140382160
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1408D4CE8 (MiAllocateUserPhysicalPages.c)
 *     MiComputeAweCharges @ 0x1408D5900 (MiComputeAweCharges.c)
 *     MiCreateAweInfoBitMap @ 0x1408D598C (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x1408D5BA8 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x1408D5E8C (MiDeleteAweInfoPages.c)
 *     MiGetAweVadPageSize @ 0x1408D60A8 (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408D6104 (MiReferenceIncomingPhysicalPages.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D6640 (MiScrubProcessPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6800 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408D6CE0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D6FA0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockRoutine(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}
