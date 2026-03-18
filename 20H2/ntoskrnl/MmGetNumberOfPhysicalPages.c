/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x1406B7280
 * Callers:
 *     ExpGetSystemEmulationBasicInformation @ 0x14030B974 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x14030BB10 (ExpGetSystemBasicInformation.c)
 *     ExpDetermineLargePagePolicy @ 0x1403C35E8 (ExpDetermineLargePagePolicy.c)
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     PopWriteHiberPages @ 0x140993EBC (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140996DB4 (PopRequestWrite.c)
 *     ExInitializePoolTracker @ 0x140A6B6BC (ExInitializePoolTracker.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140A75444 (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E4C8 + 8LL * a1) + 6928LL);
}
