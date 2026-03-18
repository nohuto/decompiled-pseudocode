/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::Scene::SceneVisualCutoffCountOfConsecutiveIncidentsAllowed__ @ 0x180003310
 * Callers:
 *     <none>
 * Callees:
 *     ?RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z @ 0x180088334 (-RegGetDwmDwordHelper@@YA_NPEBGPEAKW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::Scene::SceneVisualCutoffCountOfConsecutiveIncidentsAllowed__()
{
  __int64 result; // rax
  int v1; // ecx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  result = RegGetDwmDwordHelper(L"SceneVisualCutoffCountOfConsecutiveIncidentsAllowed", &v2, 1LL);
  v1 = 5;
  if ( (_BYTE)result )
    v1 = v2;
  CCommonRegistryData::Scene::SceneVisualCutoffCountOfConsecutiveIncidentsAllowed = v1;
  return result;
}
