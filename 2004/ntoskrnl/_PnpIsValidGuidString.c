/*
 * XREFs of _PnpIsValidGuidString @ 0x1405DC108
 * Callers:
 *     _CmValidateInstallerClassName @ 0x1405DC058 (_CmValidateInstallerClassName.c)
 *     _CmValidateDeviceContainerName @ 0x1406C2BC0 (_CmValidateDeviceContainerName.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140798368 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140202C20 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1405DD3D0 (RtlGUIDFromString.c)
 */

bool __fastcall PnpIsValidGuidString(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF
  GUID Guid; // [rsp+30h] [rbp-28h] BYREF

  DestinationString = 0LL;
  Guid = 0LL;
  return RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
      && (DestinationString.MaximumLength & 0xFFFE) == 0x4E
      && RtlGUIDFromString(&DestinationString, &Guid) >= 0;
}
