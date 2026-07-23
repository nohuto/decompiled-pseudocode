/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x1403F4F30
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x1407957C8 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x14096CFFC (BiDeleteEfiVariable.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        PCGUID VendorGuid,
        PVOID Value,
        PULONG ValueLength,
        PULONG Attributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(VariableName);
}
