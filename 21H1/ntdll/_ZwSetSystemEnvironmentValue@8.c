/*
 * XREFs of _ZwSetSystemEnvironmentValue@8 @ 0x4B2F4400
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwSetSystemEnvironmentValue(PUNICODE_STRING VariableName, PUNICODE_STRING VariableValue)
{
  return Wow64SystemServiceCall();
}
