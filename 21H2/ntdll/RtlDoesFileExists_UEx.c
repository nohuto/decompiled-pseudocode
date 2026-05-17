/*
 * XREFs of RtlDoesFileExists_UEx @ 0x180046798
 * Callers:
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x1800463F4 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180047690 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlDoesFileExists_U @ 0x180086220 (RtlDoesFileExists_U.c)
 *     RtlDosSearchPath_U @ 0x1800894A0 (RtlDosSearchPath_U.c)
 *     RtlpCheckDeviceName @ 0x18008ABFC (RtlpCheckDeviceName.c)
 * Callees:
 *     RtlDoesFileExists_UstrEx @ 0x18001A1F0 (RtlDoesFileExists_UstrEx.c)
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 */

bool __fastcall RtlDoesFileExists_UEx(__int64 a1, char a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  return (int)RtlInitUnicodeStringEx((__int64)v4, a1) >= 0 && RtlDoesFileExists_UstrEx((int)v4, a2);
}
