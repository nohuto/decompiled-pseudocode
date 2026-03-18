/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x1402E08A0
 * Callers:
 *     PiUEventNotifyDeviceInstanceChange @ 0x1406DF998 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x1406E6000 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14078B9BC (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventHandleRegistration @ 0x14078D764 (PiUEventHandleRegistration.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     RtlHashUnicodeString @ 0x14078C240 (RtlHashUnicodeString.c)
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
