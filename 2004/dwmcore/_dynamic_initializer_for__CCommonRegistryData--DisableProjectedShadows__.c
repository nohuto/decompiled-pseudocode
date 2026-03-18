/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::DisableProjectedShadows__ @ 0x180002BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x180031700 (-Load@-$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::DisableProjectedShadows__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"DisableProjectedShadows", 0LL, 0LL);
  CCommonRegistryData::DisableProjectedShadows = result;
  return result;
}
