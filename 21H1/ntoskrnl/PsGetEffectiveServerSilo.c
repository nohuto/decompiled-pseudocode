/*
 * XREFs of PsGetEffectiveServerSilo @ 0x1402D95B0
 * Callers:
 *     PsGetJobServerSilo @ 0x1402017B0 (PsGetJobServerSilo.c)
 *     PsGetThreadServerSilo @ 0x14022BC80 (PsGetThreadServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     PspIsSiloInServerSilo @ 0x14057B540 (PspIsSiloInServerSilo.c)
 *     NtSetInformationThread @ 0x1405FBA80 (NtSetInformationThread.c)
 *     PspEstimateNewProcessServerSilo @ 0x14066BEE0 (PspEstimateNewProcessServerSilo.c)
 *     PspGetMemoryPartitionImplicit @ 0x14066F318 (PspGetMemoryPartitionImplicit.c)
 *     PspImplicitAssignProcessToJob @ 0x140671ACC (PspImplicitAssignProcessToJob.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x1406746F4 (PspValidateJobAssignmentSiloPolicy.c)
 *     ObpSetSiloDeviceMap @ 0x140783478 (ObpSetSiloDeviceMap.c)
 * Callees:
 *     PsIsServerSilo @ 0x1402D9650 (PsIsServerSilo.c)
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
