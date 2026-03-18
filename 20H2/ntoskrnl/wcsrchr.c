/*
 * XREFs of wcsrchr @ 0x1403D3790
 * Callers:
 *     EtwpGenerateFileName @ 0x140711F88 (EtwpGenerateFileName.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14072975C (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDqDeleteUserObject @ 0x140729E58 (PiDqDeleteUserObject.c)
 *     PiLookupInDDBCache @ 0x14073B630 (PiLookupInDDBCache.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14073EA70 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     SdbGetDatabaseMatchEx @ 0x140752C38 (SdbGetDatabaseMatchEx.c)
 *     PiIsDriverBlocked @ 0x14077A524 (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x14077A6AC (PiUpdateDriverDBCache.c)
 *     AslPathSplit @ 0x14077B8E8 (AslPathSplit.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14077F114 (PopBcdSetDefaultResumeObjectElements.c)
 *     BiTranslateSymbolicLinkFile @ 0x1409728B4 (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14097A79C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14097F27C (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097F68C (DrvDbDeleteObjectSubKey.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A919F0 (CmpGetSystemRelativeRegistryHiveFilePath.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r9
  wchar_t *v3; // r8
  __int16 v5; // ax

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    v5 = *--Str;
  while ( Str != v2 && v5 != Ch );
  if ( v5 == Ch )
    return (wchar_t *)Str;
  return v3;
}
