/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x14024016C
 * Callers:
 *     PiUEventNotifyTargetDeviceChange @ 0x140649C48 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventHandleRegistration @ 0x140718598 (PiUEventHandleRegistration.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140768634 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14076C93C (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlHashUnicodeString @ 0x14063EED0 (RtlHashUnicodeString.c)
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
