/*
 * XREFs of PsReturnProcessPageFileQuota @ 0x14062F31C
 * Callers:
 *     MiReturnFullProcessCharges @ 0x14027D4B0 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x1405EDAE0 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspReturnQuota @ 0x14024C650 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPageFileQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1384), a1, 2u, a2);
  return result;
}
