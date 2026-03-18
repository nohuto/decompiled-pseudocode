/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::OverlayDisqualifyCount__ @ 0x180003110
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@I@details@@SAIPEBGIW4DwmRegistrySubkey@@@Z @ 0x1800DD3DC (-Load@-$CRegistryKeyLoader@I@details@@SAIPEBGIW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::OverlayDisqualifyCount__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned int>::Load(L"OverlayDisqualifyCount", 2LL);
  CCommonRegistryData::OverlayDisqualifyCount = result;
  return result;
}
