/*
 * XREFs of _RtlpQueryEafPlusModuleList@8 @ 0x4B342700
 * Callers:
 *     _RtlQueryImageMitigationPolicy@20 @ 0x4B33FE30 (_RtlQueryImageMitigationPolicy@20.c)
 * Callees:
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

NTSTATUS __fastcall RtlpQueryEafPlusModuleList(HANDLE KeyHandle, PULONG Value)
{
  NTSTATUS result; // eax
  size_t v5; // [esp-4h] [ebp-10h]

  LODWORD(v5) = 1024;
  memset(Value, 0, v5);
  result = RtlQueryImageFileKeyOption(KeyHandle, L"EAFModules", 1, Value, 0x400u, 0);
  if ( result >= 0 || result == -1073741772 )
    return 0;
  return result;
}
