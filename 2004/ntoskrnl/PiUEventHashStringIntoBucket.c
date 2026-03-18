/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x140272B3C
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x140648658 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventHandleRegistration @ 0x1406F35B0 (PiUEventHandleRegistration.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140759E74 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14075E2CC (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     RtlHashUnicodeString @ 0x1405DA5F0 (RtlHashUnicodeString.c)
 */

__int64 __fastcall PiUEventHashStringIntoBucket(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  ULONG HashValue; // [rsp+48h] [rbp+10h] BYREF

  HashValue = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  RtlHashUnicodeString(&DestinationString, 1u, 0, &HashValue);
  return HashValue % 0xD;
}
