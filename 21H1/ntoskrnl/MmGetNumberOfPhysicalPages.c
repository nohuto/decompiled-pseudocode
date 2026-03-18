/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x1405E3130
 * Callers:
 *     ExpGetSystemBasicInformation @ 0x14020538C (ExpGetSystemBasicInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14030CBF0 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpDetermineLargePagePolicy @ 0x1403BFFB8 (ExpDetermineLargePagePolicy.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     PopWriteHiberPages @ 0x14098D6B4 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x14098FFF4 (PopRequestWrite.c)
 *     ExInitializePoolTracker @ 0x140A64A0C (ExInitializePoolTracker.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140A6E56C (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E588 + 8LL * a1) + 6928LL);
}
