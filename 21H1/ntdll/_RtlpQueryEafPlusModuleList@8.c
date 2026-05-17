/*
 * XREFs of _RtlpQueryEafPlusModuleList@8 @ 0x4B342700
 * Callers:
 *     _RtlQueryImageMitigationPolicy@20 @ 0x4B33FE30 (_RtlQueryImageMitigationPolicy@20.c)
 * Callees:
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall RtlpQueryEafPlusModuleList(int a1, _DWORD *a2)
{
  int result; // eax

  memset(a2, 0, 0x400u);
  result = RtlQueryImageFileKeyOption(a1, (int)L"EAFModules", 1, a2, 0x400u, 0);
  if ( result >= 0 || result == -1073741772 )
    return 0;
  return result;
}
