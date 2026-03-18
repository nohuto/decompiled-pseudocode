/*
 * XREFs of VfCheckPagePriority @ 0x1409CAC24
 * Callers:
 *     VfCheckNxPagePriority @ 0x14059ED50 (VfCheckNxPagePriority.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1409E9BF0 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405A03C4 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1409CAE60 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x1409DA51C (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPagePriority(int a1, ULONG_PTR a2)
{
  ULONG_PTR v3; // rbx

  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 0x40000000) == 0 )
  {
    v3 = a1;
    ViCiPreprocessOptions(
      byte_140C12C88,
      "The caller 0x%p specified an executable MDL mapping (priority 0x%x).",
      (const void *)0x2002,
      a2);
    VfReportIssueWithOptions(0xC4u, 0x2002uLL, a2, v3, 0LL, byte_140C12C88);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 280LL);
    _InterlockedIncrement(&dword_140C2A778);
  }
}
