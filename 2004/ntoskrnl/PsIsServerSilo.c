/*
 * XREFs of PsIsServerSilo @ 0x14027B380
 * Callers:
 *     PsGetEffectiveServerSilo @ 0x14027B2E0 (PsGetEffectiveServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x14027D7E0 (PsGetCurrentServerSilo.c)
 *     PspJobIsAppSilo @ 0x14057BB9C (PspJobIsAppSilo.c)
 *     PspGetNextSilo @ 0x140657710 (PspGetNextSilo.c)
 *     PspTerminateProcessesJobCallback @ 0x140657A70 (PspTerminateProcessesJobCallback.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14065828C (PspValidateJobAssignmentSiloPolicy.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14065867C (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     PsIsProcessInAppSilo @ 0x140902780 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x140902940 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x140902C94 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x140903040 (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x14090616C (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1272) != 0LL;
}
