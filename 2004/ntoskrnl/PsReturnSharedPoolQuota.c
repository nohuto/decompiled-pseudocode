/*
 * XREFs of PsReturnSharedPoolQuota @ 0x14066A7FC
 * Callers:
 *     PspJobDelete @ 0x14027ABB0 (PspJobDelete.c)
 *     ObpIncrementHandleCountEx @ 0x1405F3DB0 (ObpIncrementHandleCountEx.c)
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     ObAdjustSecurityQuota @ 0x1406694A8 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x14066A670 (ObpChargeQuotaForObject.c)
 *     AlpcMessageDestroyProcedure @ 0x1406DB6D0 (AlpcMessageDestroyProcedure.c)
 *     PspFreeRateControl @ 0x1406F10FC (PspFreeRateControl.c)
 *     RtlpFreeAtom @ 0x1406F1D5C (RtlpFreeAtom.c)
 * Callees:
 *     PspReturnQuota @ 0x140288EF0 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x14066A848 (PspDereferenceQuotaBlock.c)
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
