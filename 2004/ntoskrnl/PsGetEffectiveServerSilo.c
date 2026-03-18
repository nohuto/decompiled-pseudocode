/*
 * XREFs of PsGetEffectiveServerSilo @ 0x14027B2E0
 * Callers:
 *     PsGetJobServerSilo @ 0x1402017B0 (PsGetJobServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetThreadServerSilo @ 0x1402BE900 (PsGetThreadServerSilo.c)
 *     PspIsSiloInServerSilo @ 0x14057BB80 (PspIsSiloInServerSilo.c)
 *     PspEstimateNewProcessServerSilo @ 0x1406176C8 (PspEstimateNewProcessServerSilo.c)
 *     PspGetMemoryPartitionImplicit @ 0x140617BF8 (PspGetMemoryPartitionImplicit.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14065828C (PspValidateJobAssignmentSiloPolicy.c)
 *     PspImplicitAssignProcessToJob @ 0x1406599D0 (PspImplicitAssignProcessToJob.c)
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     ObpSetSiloDeviceMap @ 0x140788DFC (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PsIsServerSilo @ 0x14027B380 (PsIsServerSilo.c)
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
