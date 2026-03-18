/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x1406DF440
 * Callers:
 *     ExpGetSystemEmulationBasicInformation @ 0x140339028 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x1403391C4 (ExpGetSystemBasicInformation.c)
 *     ExpDetermineLargePagePolicy @ 0x1403C0E78 (ExpDetermineLargePagePolicy.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     PopWriteHiberPages @ 0x14098DECC (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140990D44 (PopRequestWrite.c)
 *     ExInitializePoolTracker @ 0x140A643EC (ExInitializePoolTracker.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140A6EC64 (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E448 + 8LL * a1) + 6928LL);
}
