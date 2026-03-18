/*
 * XREFs of RtlSetPortableOperatingSystem @ 0x140586FA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlWriteRegistryValue @ 0x1406D6A00 (RtlWriteRegistryValue.c)
 */

NTSTATUS __fastcall RtlSetPortableOperatingSystem(char a1)
{
  BOOL ValueData; // [rsp+40h] [rbp+8h] BYREF

  ValueData = a1 != 0;
  return RtlWriteRegistryValue(2u, 0LL, L"PortableOperatingSystem", 4u, &ValueData, 4u);
}
