/*
 * XREFs of VfCheckPageProtection @ 0x1409C4C9C
 * Callers:
 *     VfCheckNxPageProtection @ 0x14059ABE0 (VfCheckNxPageProtection.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1409E30A0 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmCreateSection @ 0x1409E36F0 (VerifierMmCreateSection.c)
 *     VerifierMmMapIoSpaceEx @ 0x1409E3A30 (VerifierMmMapIoSpaceEx.c)
 *     VerifierMmMapViewOfSection @ 0x1409E3C90 (VerifierMmMapViewOfSection.c)
 *     VerifierMmProtectMdlSystemAddress @ 0x1409E3F40 (VerifierMmProtectMdlSystemAddress.c)
 *     VerifierNtCreateSection @ 0x1409E4320 (VerifierNtCreateSection.c)
 *     VerifierNtMapViewOfSection @ 0x1409E43B0 (VerifierNtMapViewOfSection.c)
 *     VfZwAllocateVirtualMemory @ 0x1409E5300 (VfZwAllocateVirtualMemory.c)
 *     VfZwCreateSection @ 0x1409E6090 (VfZwCreateSection.c)
 *     VfZwMapViewOfSection @ 0x1409E6C80 (VfZwMapViewOfSection.c)
 *     VfZwProtectVirtualMemory @ 0x1409E78F0 (VfZwProtectVirtualMemory.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14059C234 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1409C4E30 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x1409D449C (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPageProtection(unsigned int a1, ULONG_PTR a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0xF0) != 0 )
  {
    ViCiPreprocessOptions(
      byte_140C12C60,
      "The caller 0x%p specified an executable page protection 0x%x.",
      (const void *)0x2001,
      a2);
    VfReportIssueWithOptions(0xC4u, 0x2001uLL, a2, a1, 0LL, byte_140C12C60);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 276LL);
    _InterlockedIncrement(&dword_140C2A894);
  }
}
