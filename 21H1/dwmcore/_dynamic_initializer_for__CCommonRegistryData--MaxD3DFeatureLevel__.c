/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::MaxD3DFeatureLevel__ @ 0x180002FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x180088334 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

char dynamic_initializer_for__CCommonRegistryData::MaxD3DFeatureLevel__()
{
  char result; // al
  int v1; // [rsp+30h] [rbp+8h] BYREF

  result = -(char)RegGetDwmDwordHelper(L"MaxD3DFeatureLevel", &v1, 0LL);
  CCommonRegistryData::MaxD3DFeatureLevel = result != 0 ? v1 : 0;
  return result;
}
