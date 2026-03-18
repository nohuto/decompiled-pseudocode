/*
 * XREFs of PsIsServerSilo @ 0x1402D9650
 * Callers:
 *     PsGetCurrentServerSilo @ 0x1402044D0 (PsGetCurrentServerSilo.c)
 *     PsGetEffectiveServerSilo @ 0x1402D95B0 (PsGetEffectiveServerSilo.c)
 *     PspJobIsAppSilo @ 0x14057B55C (PspJobIsAppSilo.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     PspGetNextSilo @ 0x1406158F4 (PspGetNextSilo.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x1406746F4 (PspValidateJobAssignmentSiloPolicy.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140674ADC (IopAllocateFoExtensionsOnCreate.c)
 *     PspTerminateProcessesJobCallback @ 0x1406751B0 (PspTerminateProcessesJobCallback.c)
 *     PsIsProcessInAppSilo @ 0x140901920 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x140901AE0 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x140901E34 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x140902240 (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x140904E8C (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1272) != 0LL;
}
