/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::Scene::MsaaQualityMode__ @ 0x1800030C0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x180088334 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::Scene::MsaaQualityMode__()
{
  __int64 result; // rax
  int v1; // ecx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  result = RegGetDwmDwordHelper(L"MsaaQualityMode", &v2, 1LL);
  v1 = 2;
  if ( (_BYTE)result )
    v1 = v2;
  CCommonRegistryData::Scene::MsaaQualityMode = v1;
  return result;
}
