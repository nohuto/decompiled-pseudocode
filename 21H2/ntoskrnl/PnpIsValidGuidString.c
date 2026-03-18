/*
 * XREFs of PnpIsValidGuidString @ 0x1406E87E8
 * Callers:
 *     _CmValidateDeviceContainerName @ 0x14076D788 (_CmValidateDeviceContainerName.c)
 *     PiPnpRtlCmActionCallback @ 0x140779F10 (PiPnpRtlCmActionCallback.c)
 *     _CmValidateInstallerClassName @ 0x1407871A0 (_CmValidateInstallerClassName.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14083DEC8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x1407814E0 (RtlGUIDFromString.c)
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
