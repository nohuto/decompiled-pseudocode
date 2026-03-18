/*
 * XREFs of wcsrchr @ 0x1403D0B00
 * Callers:
 *     EtwpGenerateFileName @ 0x1406C6434 (EtwpGenerateFileName.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x14071B76C (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDqDeleteUserObject @ 0x14071BE68 (PiDqDeleteUserObject.c)
 *     PiLookupInDDBCache @ 0x14072CBB4 (PiLookupInDDBCache.c)
 *     SdbGetDatabaseMatchEx @ 0x140744058 (SdbGetDatabaseMatchEx.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1407594CC (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiIsDriverBlocked @ 0x14076B764 (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x14076B8EC (PiUpdateDriverDBCache.c)
 *     AslPathSplit @ 0x14076CEB8 (AslPathSplit.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140770B14 (PopBcdSetDefaultResumeObjectElements.c)
 *     BiTranslateSymbolicLinkFile @ 0x14096CAE4 (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1409749CC (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x1409794AC (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1409798BC (DrvDbDeleteObjectSubKey.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A8BCE0 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
