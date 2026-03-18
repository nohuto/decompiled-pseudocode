/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::UniformSpaceDpiMode__ @ 0x180003480
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x180088304 (-Load@-$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::UniformSpaceDpiMode__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"UniformSpaceDpiMode", 0LL, 0LL);
  CCommonRegistryData::UniformSpaceDpiMode = result;
  return result;
}
