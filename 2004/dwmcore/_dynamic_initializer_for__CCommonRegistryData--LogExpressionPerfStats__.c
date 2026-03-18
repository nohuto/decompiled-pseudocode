/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::LogExpressionPerfStats__ @ 0x180002FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Load@?$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z @ 0x180031700 (-Load@-$CRegistryKeyLoader@_N@details@@SA_NPEBG_NW4DwmRegistrySubkey@@@Z.c)
 */

__int64 dynamic_initializer_for__CCommonRegistryData::LogExpressionPerfStats__()
{
  __int64 result; // rax

  result = details::CRegistryKeyLoader<bool>::Load(L"LogExpressionPerfStats", 0LL, 0LL);
  CCommonRegistryData::LogExpressionPerfStats = result;
  return result;
}
