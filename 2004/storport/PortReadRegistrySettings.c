/*
 * XREFs of PortReadRegistrySettings @ 0x1C007B3F4
 * Callers:
 *     PortGetRegistrySettings @ 0x1C007B25C (PortGetRegistrySettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 *     PortpReadMaximumLogicalUnitEntry @ 0x1C007B96C (PortpReadMaximumLogicalUnitEntry.c)
 *     PortpReadMaximumUCXAddressEntry @ 0x1C007BA18 (PortpReadMaximumUCXAddressEntry.c)
 *     PortpReadMinimumUCXAddressEntry @ 0x1C007BAC8 (PortpReadMinimumUCXAddressEntry.c)
 *     PortpReadNumberOfRequestsEntry @ 0x1C007BB84 (PortpReadNumberOfRequestsEntry.c)
 *     PortpReadUncachedExtAlignmentEntry @ 0x1C007BC3C (PortpReadUncachedExtAlignmentEntry.c)
 */

__int64 __fastcall PortReadRegistrySettings(HANDLE KeyHandle)
{
  _BYTE KeyValueInformation[512]; // [rsp+20h] [rbp-218h] BYREF

  PortpReadMaximumLogicalUnitEntry(KeyHandle, KeyValueInformation);
  PortpReadMaximumUCXAddressEntry(KeyHandle, KeyValueInformation);
  PortpReadMinimumUCXAddressEntry(KeyHandle, KeyValueInformation);
  PortpReadNumberOfRequestsEntry(KeyHandle, KeyValueInformation);
  return PortpReadUncachedExtAlignmentEntry(KeyHandle, KeyValueInformation);
}
