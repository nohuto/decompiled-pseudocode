/*
 * XREFs of PsIsServerSilo @ 0x14023CE40
 * Callers:
 *     PsGetEffectiveServerSilo @ 0x14023CDA0 (PsGetEffectiveServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x14023F0F0 (PsGetCurrentServerSilo.c)
 *     PspJobIsAppSilo @ 0x14057F5CC (PspJobIsAppSilo.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     PspTerminateProcessesJobCallback @ 0x14062C030 (PspTerminateProcessesJobCallback.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x14062C78C (PspValidateJobAssignmentSiloPolicy.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14062CB7C (IopAllocateFoExtensionsOnCreate.c)
 *     PspGetNextSilo @ 0x140665070 (PspGetNextSilo.c)
 *     PsIsProcessInAppSilo @ 0x140908390 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x140908550 (PsTerminateServerSilo.c)
 *     PspConvertSiloToServerSilo @ 0x1409088A4 (PspConvertSiloToServerSilo.c)
 *     PspDeleteSilo @ 0x140908C68 (PspDeleteSilo.c)
 *     PspSetJobMemoryPartition @ 0x14090BD8C (PspSetJobMemoryPartition.c)
 * Callees:
 *     <none>
 */

bool __fastcall PsIsServerSilo(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1272) != 0LL;
}
