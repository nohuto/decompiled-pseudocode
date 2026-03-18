/*
 * XREFs of PspSetRedirectionTrustPolicy @ 0x1405CD634
 * Callers:
 *     PspApplyMitigationOptions @ 0x140698088 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     SeTokenSetRedirectionTrustPolicy @ 0x1403F72CC (SeTokenSetRedirectionTrustPolicy.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 */

void __fastcall PspSetRedirectionTrustPolicy(struct _KPROCESS *a1, int a2)
{
  struct _DMA_ADAPTER *v4; // rdi

  v4 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  SeTokenSetRedirectionTrustPolicy((__int64)v4, a2 == 2);
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], v4);
}
