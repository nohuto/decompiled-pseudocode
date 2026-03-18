/*
 * XREFs of PsReturnSharedPoolQuota @ 0x1405F70FC
 * Callers:
 *     PspJobDelete @ 0x14035D490 (PspJobDelete.c)
 *     ObAdjustSecurityQuota @ 0x1405F5DA8 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1405F6F70 (ObpChargeQuotaForObject.c)
 *     ObpIncrementHandleCountEx @ 0x1406169E0 (ObpIncrementHandleCountEx.c)
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     RtlpFreeAtom @ 0x14068D0CC (RtlpFreeAtom.c)
 *     AlpcMessageDestroyProcedure @ 0x1406B3D50 (AlpcMessageDestroyProcedure.c)
 *     PspFreeRateControl @ 0x14071119C (PspFreeRateControl.c)
 * Callees:
 *     PspReturnQuota @ 0x1402175A0 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x1405F7148 (PspDereferenceQuotaBlock.c)
 */

__int64 __fastcall PsReturnSharedPoolQuota(char *P, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 result; // rax

  if ( P != (char *)1 )
  {
    if ( a2 )
      PspReturnQuota(P, 0LL, 1u, a2);
    if ( a3 )
      PspReturnQuota(P, 0LL, 0, a3);
    return PspDereferenceQuotaBlock(P);
  }
  return result;
}
