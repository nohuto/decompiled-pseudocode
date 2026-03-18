/*
 * XREFs of VmSetVpHostProcess @ 0x14092BBD0
 * Callers:
 *     <none>
 * Callees:
 *     PsSetVmProcessorHostProcess @ 0x1409069D8 (PsSetVmProcessorHostProcess.c)
 */

NTSTATUS __fastcall VmSetVpHostProcess(_QWORD *a1)
{
  return PsSetVmProcessorHostProcess(a1);
}
