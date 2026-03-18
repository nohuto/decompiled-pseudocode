/*
 * XREFs of wcsrchr @ 0x1403CFCC0
 * Callers:
 *     EtwpGenerateFileName @ 0x140677150 (EtwpGenerateFileName.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1407193DC (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDqDeleteUserObject @ 0x140719AD8 (PiDqDeleteUserObject.c)
 *     PiLookupInDDBCache @ 0x1407232E0 (PiLookupInDDBCache.c)
 *     SdbGetDatabaseMatchEx @ 0x1407424D8 (SdbGetDatabaseMatchEx.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x140757A28 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiIsDriverBlocked @ 0x140769384 (PiIsDriverBlocked.c)
 *     PiUpdateDriverDBCache @ 0x14076950C (PiUpdateDriverDBCache.c)
 *     AslPathSplit @ 0x14076A718 (AslPathSplit.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14076E704 (PopBcdSetDefaultResumeObjectElements.c)
 *     BiTranslateSymbolicLinkFile @ 0x14096B744 (BiTranslateSymbolicLinkFile.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x14097362C (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14097810C (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14097851C (DrvDbDeleteObjectSubKey.c)
 *     CmpGetSystemRelativeRegistryHiveFilePath @ 0x140A8C748 (CmpGetSystemRelativeRegistryHiveFilePath.c)
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
