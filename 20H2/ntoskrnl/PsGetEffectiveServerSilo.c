/*
 * XREFs of PsGetEffectiveServerSilo @ 0x14023CDA0
 * Callers:
 *     PsGetJobServerSilo @ 0x140201810 (PsGetJobServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetThreadServerSilo @ 0x140297450 (PsGetThreadServerSilo.c)
 *     PspIsSiloInServerSilo @ 0x14057F5B0 (PspIsSiloInServerSilo.c)
 *     NtSetInformationThread @ 0x14060E970 (NtSetInformationThread.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14062C78C (PspValidateJobAssignmentSiloPolicy.c)
 *     PspImplicitAssignProcessToJob @ 0x14062E4F0 (PspImplicitAssignProcessToJob.c)
 *     PspGetMemoryPartitionImplicit @ 0x140661524 (PspGetMemoryPartitionImplicit.c)
 *     PspEstimateNewProcessServerSilo @ 0x140690394 (PspEstimateNewProcessServerSilo.c)
 *     ObpSetSiloDeviceMap @ 0x140796B0C (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PsIsServerSilo @ 0x14023CE40 (PsIsServerSilo.c)
 */

__int64 __fastcall PsGetEffectiveServerSilo(__int64 a1)
{
  __int64 v2; // rcx

  if ( !a1 )
    return 0LL;
  while ( !(unsigned __int8)PsIsServerSilo() )
    ;
  return v2;
}
