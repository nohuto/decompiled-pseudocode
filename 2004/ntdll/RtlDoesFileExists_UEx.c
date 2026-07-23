/*
 * XREFs of RtlDoesFileExists_UEx @ 0x180046788
 * Callers:
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800463E4 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180081C50 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlDoesFileExists_U @ 0x180085B20 (RtlDoesFileExists_U.c)
 *     RtlDosSearchPath_U @ 0x180088DA0 (RtlDosSearchPath_U.c)
 *     RtlpCheckDeviceName @ 0x18008A4FC (RtlpCheckDeviceName.c)
 * Callees:
 *     RtlDoesFileExists_UstrEx @ 0x18001A1F0 (RtlDoesFileExists_UstrEx.c)
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 */

bool __fastcall RtlDoesFileExists_UEx(PCWSTR SourceString, char a2)
{
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
      && RtlDoesFileExists_UstrEx((int)&DestinationString, a2);
}
