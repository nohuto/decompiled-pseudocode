/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::MegaRectSearchCount__ @ 0x180003000
 * Callers:
 *     <none>
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x180031730 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::MegaRectSearchCount__()
{
  __int64 result; // rax
  int v1; // ecx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  result = RegGetDwmDwordHelper(L"MegaRectSearchCount", &v2, 0LL);
  v1 = 100;
  if ( (_BYTE)result )
    v1 = v2;
  CCommonRegistryData::MegaRectSearchCount = v1;
  return result;
}
