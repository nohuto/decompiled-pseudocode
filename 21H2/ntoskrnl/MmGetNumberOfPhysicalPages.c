/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x14064F740
 * Callers:
 *     ExpGetSystemBasicInformation @ 0x14027BACC (ExpGetSystemBasicInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x1402BD0C8 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpDetermineLargePagePolicy @ 0x1403C3D48 (ExpDetermineLargePagePolicy.c)
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 *     PopWriteHiberPages @ 0x140990EBC (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140993DB4 (PopRequestWrite.c)
 *     ExInitializePoolTracker @ 0x140A68AF4 (ExInitializePoolTracker.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140A723C4 (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E648 + 8LL * a1) + 6928LL);
}
