/*
 * XREFs of _RtlGetNtSystemRoot@0 @ 0x4B2C0180
 * Callers:
 *     _LdrpBuildSystem32FileName@8 @ 0x4B2A6BD1 (_LdrpBuildSystem32FileName@8.c)
 *     _RtlQueryResourcePolicy@16 @ 0x4B2AFE50 (_RtlQueryResourcePolicy@16.c)
 *     _IsSystemRootPath@8 @ 0x4B2B8E93 (_IsSystemRootPath@8.c)
 *     _LdrStandardizeSystemPath@4 @ 0x4B2BFCB0 (_LdrStandardizeSystemPath@4.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _RtlpAssemblyStorageMapResolutionDefaultCallback@12 @ 0x4B2E2BE0 (_RtlpAssemblyStorageMapResolutionDefaultCallback@12.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _AVrfpLoadAndInitializeProvider@4 @ 0x4B33908C (_AVrfpLoadAndInitializeProvider@4.c)
 *     _RtlpDiskSpeedInitialize@12 @ 0x4B389B30 (_RtlpDiskSpeedInitialize@12.c)
 * Callees:
 *     <none>
 */

PWSTR RtlGetNtSystemRoot(void)
{
  _DWORD *SharedData; // eax

  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    return (PWSTR)((char *)NtCurrentPeb()->SharedData + 30);
  else
    return (PWSTR)2147352624;
}
