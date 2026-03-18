/*
 * XREFs of PspSetNoChildProcessRestrictedPolicy @ 0x1406E0058
 * Callers:
 *     PspApplyMitigationOptions @ 0x140698088 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140210E40 (ObFastDereferenceObject.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x14032F8D0 (SeTokenSetNoChildProcessRestricted.c)
 *     PsReferencePrimaryToken @ 0x14067EEB0 (PsReferencePrimaryToken.c)
 */

void __fastcall PspSetNoChildProcessRestrictedPolicy(struct _KPROCESS *a1, int a2)
{
  struct _DMA_ADAPTER *v4; // rdi

  v4 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  SeTokenSetNoChildProcessRestricted((__int64)v4, a2 == 2, a2 == 3);
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], v4);
}
