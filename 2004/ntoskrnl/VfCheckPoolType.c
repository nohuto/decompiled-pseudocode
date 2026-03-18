/*
 * XREFs of VfCheckPoolType @ 0x1409C4D54
 * Callers:
 *     VfCheckNxPoolType @ 0x14059B2F0 (VfCheckNxPoolType.c)
 *     VerifierExAllocatePool @ 0x1409D18E0 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePool2 @ 0x1409D19D0 (VerifierExAllocatePool2.c)
 *     VerifierExAllocatePool3 @ 0x1409D1B00 (VerifierExAllocatePool3.c)
 *     VerifierExAllocatePoolEx @ 0x1409D1C40 (VerifierExAllocatePoolEx.c)
 *     VerifierExAllocatePoolWithQuota @ 0x1409D1CF0 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x1409D1E60 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTag @ 0x1409D1FD0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x1409D20A0 (VerifierExAllocatePoolWithTagPriority.c)
 *     VerifierExInitializeLookasideListEx @ 0x1409DE190 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1409DE2E0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExAllocateCacheAwareRundownProtection @ 0x1409E18B0 (VerifierExAllocateCacheAwareRundownProtection.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14059C924 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x1409C4E40 (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x1409D44FC (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPoolType(int a1, ULONG_PTR a2, unsigned int a3)
{
  ULONG_PTR v4; // rbx
  ULONG_PTR v5; // rdi
  const char *v6; // rdx

  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 1) == 0 && (a1 & 0x200) == 0 )
  {
    v4 = a3;
    v5 = a1;
    v6 = "The caller 0x%p specified an executable pool type 0x%x.";
    if ( a3 )
      v6 = "The caller 0x%p specified an executable pool type 0x%x (tag 0x%x).";
    ViCiPreprocessOptions(byte_140C12C8C, v6, 0x2000LL, a2, a1, a3);
    VfReportIssueWithOptions(0xC4u, 0x2000uLL, a2, v5, v4, byte_140C12C8C);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 272LL);
    _InterlockedIncrement(&dword_140C2A670);
  }
}
