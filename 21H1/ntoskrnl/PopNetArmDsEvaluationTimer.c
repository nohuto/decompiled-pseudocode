/*
 * XREFs of PopNetArmDsEvaluationTimer @ 0x1408ED4A4
 * Callers:
 *     PdcPoNetworkResiliency @ 0x1408EB200 (PdcPoNetworkResiliency.c)
 * Callees:
 *     KeSetTimer2 @ 0x1402426C0 (KeSetTimer2.c)
 */

_BOOL8 PopNetArmDsEvaluationTimer()
{
  __int64 v0; // rdx
  __int64 v1; // r9

  v0 = 0LL;
  v1 = 10000000LL * (unsigned int)PopStandbyConnectivityGracePeriod;
  if ( MEMORY[0xFFFFF78000000008] < (unsigned __int64)(qword_140C4FE48 + v1) )
    v0 = v1 + qword_140C4FE48 - MEMORY[0xFFFFF78000000008];
  return KeSetTimer2((__int64)&PopNetEvaluationTimer, -v0, 0LL, 0LL);
}
