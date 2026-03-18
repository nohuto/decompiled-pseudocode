/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::MousewheelScrollingMode__ @ 0x1800038E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x180025D7C (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

char dynamic_initializer_for__CCommonRegistryData::MousewheelScrollingMode__()
{
  char result; // al
  int v1; // [rsp+30h] [rbp+8h] BYREF

  result = -(char)RegGetDwmDwordHelper(L"MousewheelScrollingMode", &v1, 0LL);
  CCommonRegistryData::MousewheelScrollingMode = result != 0 ? v1 : 0;
  return result;
}
