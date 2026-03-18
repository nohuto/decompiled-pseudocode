/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::RefreshRatePercentage__ @ 0x180003290
 * Callers:
 *     <none>
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x180088334 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::RefreshRatePercentage__()
{
  __int64 result; // rax
  int v1; // ecx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  result = RegGetDwmDwordHelper(L"RefreshRatePercentage", &v2, 2LL);
  v1 = 10;
  if ( (_BYTE)result )
    v1 = v2;
  CCommonRegistryData::SuperWetTiming::RefreshRatePercentage = v1;
  return result;
}
