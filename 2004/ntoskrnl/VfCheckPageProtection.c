/*
 * XREFs of VfCheckPageProtection @ 0x1409C4CAC
 * Callers:
 *     VfCheckNxPageProtection @ 0x14059B2D0 (VfCheckNxPageProtection.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1409E3100 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmCreateSection @ 0x1409E3750 (VerifierMmCreateSection.c)
 *     VerifierMmMapIoSpaceEx @ 0x1409E3A90 (VerifierMmMapIoSpaceEx.c)
 *     VerifierMmMapViewOfSection @ 0x1409E3CF0 (VerifierMmMapViewOfSection.c)
 *     VerifierMmProtectMdlSystemAddress @ 0x1409E3FA0 (VerifierMmProtectMdlSystemAddress.c)
 *     VerifierNtCreateSection @ 0x1409E4380 (VerifierNtCreateSection.c)
 *     VerifierNtMapViewOfSection @ 0x1409E4410 (VerifierNtMapViewOfSection.c)
 *     VfZwAllocateVirtualMemory @ 0x1409E5360 (VfZwAllocateVirtualMemory.c)
 *     VfZwCreateSection @ 0x1409E60F0 (VfZwCreateSection.c)
 *     VfZwMapViewOfSection @ 0x1409E6CE0 (VfZwMapViewOfSection.c)
 *     VfZwProtectVirtualMemory @ 0x1409E7950 (VfZwProtectVirtualMemory.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14059C924 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1409C4E40 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x1409D44FC (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPageProtection(unsigned int a1, ULONG_PTR a2)
{
  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0xF0) != 0 )
  {
    ViCiPreprocessOptions(
      byte_140C12C90,
      "The caller 0x%p specified an executable page protection 0x%x.",
      (const void *)0x2001,
      a2);
    VfReportIssueWithOptions(0xC4u, 0x2001uLL, a2, a1, 0LL, byte_140C12C90);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 276LL);
    _InterlockedIncrement(&dword_140C2A674);
  }
}
