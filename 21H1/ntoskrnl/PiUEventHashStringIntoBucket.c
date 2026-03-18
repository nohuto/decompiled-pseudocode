/*
 * XREFs of PiUEventHashStringIntoBucket @ 0x1402DF6A8
 * Callers:
 *     PiUEventHandleRegistration @ 0x1406801D8 (PiUEventHandleRegistration.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140684930 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x14075841C (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14075BDEC (PiUEventNotifyDeviceInstancePropertyChange.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlHashUnicodeString @ 0x1406A8C20 (RtlHashUnicodeString.c)
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
