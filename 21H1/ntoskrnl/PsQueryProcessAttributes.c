/*
 * XREFs of PsQueryProcessAttributes @ 0x1405E04C0
 * Callers:
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     PfpPrivSourceEnum @ 0x1405EEBC8 (PfpPrivSourceEnum.c)
 *     PspAssignProcessToJob @ 0x1406741DC (PspAssignProcessToJob.c)
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 *     PopCreateUserPowerRequest @ 0x1406FF730 (PopCreateUserPowerRequest.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     PsQueryProcessAttributesByToken @ 0x1405E0520 (PsQueryProcessAttributesByToken.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 */

void __fastcall PsQueryProcessAttributes(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  struct _DMA_ADAPTER *v6; // rbx

  v6 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  PsQueryProcessAttributesByToken(v6, a2, a3);
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], v6);
}
