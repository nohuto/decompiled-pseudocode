/*
 * XREFs of WerpEscalationIsWMRSendStringSet @ 0x1800DE55C
 * Callers:
 *     WerEscalationLazyInit @ 0x1800DE068 (WerEscalationLazyInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtOpenKey @ 0x18009D050 (NtOpenKey.c)
 *     WerpEscalationReadUlongFromKey @ 0x1800DE60C (WerpEscalationReadUlongFromKey.c)
 */

__int64 WerpEscalationIsWMRSendStringSet()
{
  unsigned int v0; // ebx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp+18h] BYREF

  v0 = 0;
  KeyHandle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\SQMClient\\Windows\\WMR");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 0x20119u, &ObjectAttributes) >= 0 )
    WerpEscalationReadUlongFromKey(KeyHandle);
  if ( KeyHandle )
    NtClose(KeyHandle);
  LOBYTE(v0) = 0;
  return v0;
}
