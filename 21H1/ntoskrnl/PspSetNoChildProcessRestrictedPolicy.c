/*
 * XREFs of PspSetNoChildProcessRestrictedPolicy @ 0x1406E9E58
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x1406F5FD0 (PspApplyMitigationOptions.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     SeTokenSetNoChildProcessRestricted @ 0x140321120 (SeTokenSetNoChildProcessRestricted.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 */

void __fastcall PspSetNoChildProcessRestrictedPolicy(struct _KPROCESS *a1, int a2)
{
  struct _DMA_ADAPTER *v4; // rdi

  v4 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  SeTokenSetNoChildProcessRestricted((__int64)v4, a2 == 2, a2 == 3);
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], v4);
}
