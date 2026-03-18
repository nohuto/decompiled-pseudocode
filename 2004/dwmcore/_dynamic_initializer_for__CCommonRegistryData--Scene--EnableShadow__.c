/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::Scene::EnableShadow__ @ 0x180002D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x180031700 (-Load@-$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::Scene::EnableShadow__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"EnableShadow", 0LL, 1LL);
  CCommonRegistryData::Scene::EnableShadow = result;
  return result;
}
