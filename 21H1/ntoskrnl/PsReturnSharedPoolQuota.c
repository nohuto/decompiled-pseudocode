/*
 * XREFs of PsReturnSharedPoolQuota @ 0x14061551C
 * Callers:
 *     PspJobDelete @ 0x1402D96F0 (PspJobDelete.c)
 *     RtlpFreeAtom @ 0x1405D5D5C (RtlpFreeAtom.c)
 *     ObAdjustSecurityQuota @ 0x1406141C8 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x140615390 (ObpChargeQuotaForObject.c)
 *     ObpIncrementHandleCountEx @ 0x140629320 (ObpIncrementHandleCountEx.c)
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspFreeRateControl @ 0x140676188 (PspFreeRateControl.c)
 *     AlpcMessageDestroyProcedure @ 0x1406BA3C0 (AlpcMessageDestroyProcedure.c)
 * Callees:
 *     PspReturnQuota @ 0x14024C650 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x140615568 (PspDereferenceQuotaBlock.c)
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
