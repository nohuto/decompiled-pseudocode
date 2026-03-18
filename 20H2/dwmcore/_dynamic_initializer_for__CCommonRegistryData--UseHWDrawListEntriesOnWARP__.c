/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::UseHWDrawListEntriesOnWARP__ @ 0x180003490
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x1800DD678 (-Load@-$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::UseHWDrawListEntriesOnWARP__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"UseHWDrawListEntriesOnWARP", 0LL, 0LL);
  CCommonRegistryData::UseHWDrawListEntriesOnWARP = result;
  return result;
}
