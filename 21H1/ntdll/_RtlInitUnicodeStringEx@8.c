/*
 * XREFs of _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0
 * Callers:
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 *     _RtlpProcessIFEOKeyFilter@12 @ 0x4B2AA107 (_RtlpProcessIFEOKeyFilter@12.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _LdrpFindKnownDll@16 @ 0x4B2D0FCB (_LdrpFindKnownDll@16.c)
 *     _RtlDosPathNameToNtPathName_U@16 @ 0x4B2D1B70 (_RtlDosPathNameToNtPathName_U@16.c)
 *     _RtlIsDosDeviceName_U@4 @ 0x4B2D1BB0 (_RtlIsDosDeviceName_U@4.c)
 *     _RtlDosPathNameToRelativeNtPathName_U@16 @ 0x4B2D1BE0 (_RtlDosPathNameToRelativeNtPathName_U@16.c)
 *     _RtlpDosPathNameToRelativeNtPathName_U@20 @ 0x4B2D1C18 (_RtlpDosPathNameToRelativeNtPathName_U@20.c)
 *     _CompatCachepLookupCdb@8 @ 0x4B2D1C4D (_CompatCachepLookupCdb@8.c)
 *     _LdrpResolveDllName@20 @ 0x4B2D1F2E (_LdrpResolveDllName@20.c)
 *     _RtlGetFullPathName_UEx@20 @ 0x4B2D22F0 (_RtlGetFullPathName_UEx@20.c)
 *     _RtlpComputeLangListCheckSum@4 @ 0x4B2D2774 (_RtlpComputeLangListCheckSum@4.c)
 *     _RtlDoesFileExists_UEx@8 @ 0x4B2E3164 (_RtlDoesFileExists_UEx@8.c)
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _RtlDosSearchPath_U@24 @ 0x4B32D140 (_RtlDosSearchPath_U@24.c)
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 *     _LdrpLoadDelegatedNtdll@4 @ 0x4B3331FC (_LdrpLoadDelegatedNtdll@4.c)
 *     _LdrpQueryIllegalCWDDevices@4 @ 0x4B33384B (_LdrpQueryIllegalCWDDevices@4.c)
 *     _LdrpAddRedirectedFunction@12 @ 0x4B333F08 (_LdrpAddRedirectedFunction@12.c)
 *     _RtlQueryImageMitigationPolicy@20 @ 0x4B33FE30 (_RtlQueryImageMitigationPolicy@20.c)
 *     _RtlSetImageMitigationPolicy@20 @ 0x4B3408F0 (_RtlSetImageMitigationPolicy@20.c)
 *     _RtlpIsEmptyImageFileOptionsKey@4 @ 0x4B342529 (_RtlpIsEmptyImageFileOptionsKey@4.c)
 *     _SbpResolveBasedOnName@4 @ 0x4B386048 (_SbpResolveBasedOnName@4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlInitUnicodeStringEx(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  PCWSTR v2; // eax
  unsigned int v4; // eax
  unsigned __int16 v5; // ax

  *(_DWORD *)&DestinationString->Length = 0;
  v2 = SourceString;
  DestinationString->Buffer = (wchar_t *)SourceString;
  if ( !SourceString )
    return 0;
  while ( *v2++ )
    ;
  v4 = v2 - (SourceString + 1);
  if ( v4 <= 0x7FFE )
  {
    v5 = 2 * v4;
    DestinationString->Length = v5;
    DestinationString->MaximumLength = v5 + 2;
    return 0;
  }
  return -1073741562;
}
