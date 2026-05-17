/*
 * XREFs of _RtlSetPortableOperatingSystem@4 @ 0x4B3510C0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlWriteRegistryValue@24 @ 0x4B3513B0 (_RtlWriteRegistryValue@24.c)
 */

int __stdcall RtlSetPortableOperatingSystem(char a1)
{
  int v2; // [esp+0h] [ebp-4h] BYREF

  v2 = a1 != 0;
  return RtlWriteRegistryValue(2, 0, L"PortableOperatingSystem", 4, (int)&v2, 4);
}
