/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds__ @ 0x180003220
 * Callers:
 *     <none>
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x180031730 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds__()
{
  __int64 result; // rax
  int v1; // ecx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  result = RegGetDwmDwordHelper(L"PeriodicFenceMinDifferenceMicroseconds", &v2, 2LL);
  v1 = 500;
  if ( (_BYTE)result )
    v1 = v2;
  CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds = v1;
  return result;
}
