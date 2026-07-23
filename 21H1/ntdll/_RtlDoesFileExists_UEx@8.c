/*
 * XREFs of _RtlDoesFileExists_UEx@8 @ 0x4B2E3164
 * Callers:
 *     _RtlpAssemblyStorageMapResolutionDefaultCallback@12 @ 0x4B2E2BE0 (_RtlpAssemblyStorageMapResolutionDefaultCallback@12.c)
 *     _RtlDoesFileExists_U@4 @ 0x4B32D0C0 (_RtlDoesFileExists_U@4.c)
 *     _RtlDosSearchPath_U@24 @ 0x4B32D140 (_RtlDosSearchPath_U@24.c)
 *     _RtlpCheckDeviceName@12 @ 0x4B32D58D (_RtlpCheckDeviceName@12.c)
 *     _RtlpGetMUIRedirectedFilePathInternal@28 @ 0x4B354358 (_RtlpGetMUIRedirectedFilePathInternal@28.c)
 * Callees:
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlDoesFileExists_UstrEx@8 @ 0x4B2E318E (_RtlDoesFileExists_UstrEx@8.c)
 */

char __fastcall RtlDoesFileExists_UEx(PCWSTR SourceString, char a2)
{
  int v3; // edx
  _UNICODE_STRING DestinationString; // [esp+8h] [ebp-8h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  LOBYTE(v3) = a2;
  return RtlDoesFileExists_UstrEx(&DestinationString, v3);
}
