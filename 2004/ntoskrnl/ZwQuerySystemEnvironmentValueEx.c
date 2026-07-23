/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x1403F61C0
 * Callers:
 *     SepRmVerifyLsaProtectionLevel @ 0x140795578 (SepRmVerifyLsaProtectionLevel.c)
 *     BiDeleteEfiVariable @ 0x14096E39C (BiDeleteEfiVariable.c)
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
