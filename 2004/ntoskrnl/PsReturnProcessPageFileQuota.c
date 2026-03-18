/*
 * XREFs of PsReturnProcessPageFileQuota @ 0x1405FA2DC
 * Callers:
 *     MiReturnFullProcessCharges @ 0x140224460 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x140696FE0 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspReturnQuota @ 0x140288EF0 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPageFileQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1384), a1, 2u, a2);
  return result;
}
