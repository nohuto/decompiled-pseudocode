/*
 * XREFs of RtlSetPortableOperatingSystem @ 0x140583640
 * Callers:
 *     <none>
 * Callees:
 *     RtlWriteRegistryValue @ 0x1407038F0 (RtlWriteRegistryValue.c)
 */

NTSTATUS __fastcall RtlSetPortableOperatingSystem(char a1)
{
  BOOL ValueData; // [rsp+40h] [rbp+8h] BYREF

  ValueData = a1 != 0;
  return RtlWriteRegistryValue(2u, 0LL, L"PortableOperatingSystem", 4u, &ValueData, 4u);
}
