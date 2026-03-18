/*
 * XREFs of PsReturnProcessPageFileQuota @ 0x140625D4C
 * Callers:
 *     MiReturnFullProcessCharges @ 0x1402303D0 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x14067BD20 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspReturnQuota @ 0x1402175A0 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPageFileQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1384), a1, 2u, a2);
  return result;
}
