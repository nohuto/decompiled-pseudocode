/*
 * XREFs of PsQueryProcessAttributes @ 0x1406667C0
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 *     PopCreateUserPowerRequest @ 0x14064E058 (PopCreateUserPowerRequest.c)
 *     PspAssignProcessToJob @ 0x140658924 (PspAssignProcessToJob.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     PfpPrivSourceEnum @ 0x1406980C8 (PfpPrivSourceEnum.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140299050 (ObFastDereferenceObject.c)
 *     PsQueryProcessAttributesByToken @ 0x140666820 (PsQueryProcessAttributesByToken.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 */

void __fastcall PsQueryProcessAttributes(struct _KPROCESS *a1, __int64 a2, __int64 a3)
{
  struct _DMA_ADAPTER *v6; // rbx

  v6 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(a1);
  PsQueryProcessAttributesByToken(v6, a2, a3);
  ObFastDereferenceObject((signed __int64 *)&a1[1].Affinity.Bitmap[5], v6);
}
