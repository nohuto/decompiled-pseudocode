/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x140644560
 * Callers:
 *     ExpGetSystemEmulationBasicInformation @ 0x14023B778 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x140269A6C (ExpGetSystemBasicInformation.c)
 *     ExpDetermineLargePagePolicy @ 0x1403C4178 (ExpDetermineLargePagePolicy.c)
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 *     PopWriteHiberPages @ 0x140991EBC (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140994DB4 (PopRequestWrite.c)
 *     ExInitializePoolTracker @ 0x140A69AF4 (ExInitializePoolTracker.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140A733C4 (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8LL * a1) + 6928LL);
}
