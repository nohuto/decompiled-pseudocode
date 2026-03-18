/*
 * XREFs of _wcsnicmp_0 @ 0x1C00243C2
 * Callers:
 *     SepSddlGetAclForString @ 0x1C02BFB54 (SepSddlGetAclForString.c)
 *     SepSddlGetSidForString @ 0x1C02BFEE4 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1C02BFFB8 (SepSddlLookupAccessMaskInTable.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z @ 0x1C02F1060 (-_ReadDisplayHdrSupportFromPnpRegistry@DXGMONITOR@@QEAAJPEA_N00@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return _wcsnicmp(Str1, Str2, MaxCount);
}
