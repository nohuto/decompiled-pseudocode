/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x1403F6AE0
 * Callers:
 *     BiDeleteEfiVariable @ 0x14096E39C (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        PCGUID VendorGuid,
        PVOID Value,
        ULONG ValueLength,
        ULONG Attributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VariableName);
}
