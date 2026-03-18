/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingMinHeight__ @ 0x180002E60
 * Callers:
 *     <none>
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x1800DD6A8 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::Scene::ImageProcessingMinHeight__()
{
  __int64 result; // rax
  int v1; // ecx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  result = RegGetDwmDwordHelper(L"ImageProcessingMinHeight", &v2, 1LL);
  v1 = 200;
  if ( (_BYTE)result )
    v1 = v2;
  CCommonRegistryData::Scene::ImageProcessingMinHeight = v1;
  return result;
}
