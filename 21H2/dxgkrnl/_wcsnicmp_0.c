/*
 * XREFs of _wcsnicmp_0 @ 0x1C002B232
 * Callers:
 *     SepSddlGetAclForString @ 0x1C0385144 (SepSddlGetAclForString.c)
 *     SepSddlGetSidForString @ 0x1C03854C0 (SepSddlGetSidForString.c)
 *     SepSddlLookupAccessMaskInTable @ 0x1C0385594 (SepSddlLookupAccessMaskInTable.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEA_N@Z @ 0x1C03B8C30 (-_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HD.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsnicmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return _wcsnicmp(Str1, Str2, MaxCount);
}
