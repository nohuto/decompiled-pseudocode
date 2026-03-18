/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::UseHWDrawListEntriesOnWARP__ @ 0x180003CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x180025D4C (-Load@-$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::UseHWDrawListEntriesOnWARP__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"UseHWDrawListEntriesOnWARP", 0LL, 0LL);
  CCommonRegistryData::UseHWDrawListEntriesOnWARP = result;
  return result;
}
