/*
 * XREFs of VmSetVpHostProcess @ 0x140931A00
 * Callers:
 *     <none>
 * Callees:
 *     PsSetVmProcessorHostProcess @ 0x14090C5F8 (PsSetVmProcessorHostProcess.c)
 */

NTSTATUS __fastcall VmSetVpHostProcess(_QWORD *a1)
{
  return PsSetVmProcessorHostProcess(a1);
}
