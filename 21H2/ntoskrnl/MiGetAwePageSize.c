/*
 * XREFs of MiGetAwePageSize @ 0x1405AAF90
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x14097BD88 (MiAllocateUserPhysicalPages.c)
 *     MiComputeAweCharges @ 0x14097CA4C (MiComputeAweCharges.c)
 *     MiCreateAweInfoBitMap @ 0x14097CAE8 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x14097CD04 (MiCreateUserPhysicalView.c)
 *     MiDeleteAweInfoPages @ 0x14097D034 (MiDeleteAweInfoPages.c)
 *     MiGetAweVadPageSize @ 0x14097D244 (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x14097D2A0 (MiReferenceIncomingPhysicalPages.c)
 *     MiScrubProcessPhysicalPages @ 0x14097D7F8 (MiScrubProcessPhysicalPages.c)
 *     NtFreeUserPhysicalPages @ 0x14097D9E0 (NtFreeUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x14097DFA0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14097E270 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAwePageSize(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
