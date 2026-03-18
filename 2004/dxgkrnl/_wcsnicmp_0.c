/*
 * XREFs of _wcsnicmp_0 @ 0x1C0024412
 * Callers:
 *     SepSddlGetAclForString @ 0x1C02C4094 (SepSddlGetAclForString.c)
 *     SepSddlGetSidForString @ 0x1C02C4424 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1C02C44F8 (SepSddlLookupAccessMaskInTable.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z @ 0x1C02F55D0 (-_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return _wcsnicmp(Str1, Str2, MaxCount);
}
