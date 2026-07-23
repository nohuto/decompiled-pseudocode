/*
 * XREFs of _RtlSetPortableOperatingSystem@4 @ 0x4B3510C0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlWriteRegistryValue@24 @ 0x4B3513B0 (_RtlWriteRegistryValue@24.c)
 */

NTSTATUS __cdecl RtlSetPortableOperatingSystem(BOOLEAN IsPortable)
{
  BOOL ValueData; // [esp+0h] [ebp-4h] BYREF

  ValueData = IsPortable != 0;
  return RtlWriteRegistryValue(2u, 0, L"PortableOperatingSystem", 4u, &ValueData, 4u);
}
