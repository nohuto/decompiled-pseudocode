/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::OverlayQualifyCount__ @ 0x180003190
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@I@details@@SAIPEBGIW4DwmRegistrySubkey@@@Z @ 0x180031464 (-Load@-$CRegistryKeyLoader@I@details@@SAIPEBGIW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::OverlayQualifyCount__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<unsigned int>::Load(L"OverlayQualifyCount", 1LL);
  CCommonRegistryData::OverlayQualifyCount = result;
  return result;
}
