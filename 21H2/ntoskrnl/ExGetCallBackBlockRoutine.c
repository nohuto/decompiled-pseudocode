/*
 * XREFs of ExGetCallBackBlockRoutine @ 0x140381CB0
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1408D4E48 (MiAllocateUserPhysicalPages.c)
 *     MiComputeAweCharges @ 0x1408D5A60 (MiComputeAweCharges.c)
 *     MiCreateAweInfoBitMap @ 0x1408D5AEC (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x1408D5D08 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x1408D5FEC (MiDeleteAweInfoPages.c)
 *     MiGetAweVadPageSize @ 0x1408D6208 (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408D6264 (MiReferenceIncomingPhysicalPages.c)
 *     MiScrubProcessPhysicalPages @ 0x1408D67A0 (MiScrubProcessPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x1408D6960 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408D6E40 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408D7100 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockRoutine(__int64 a1)
{
  return *(_QWORD *)(a1 + 8);
}
