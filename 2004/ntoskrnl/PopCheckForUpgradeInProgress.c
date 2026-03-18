/*
 * XREFs of PopCheckForUpgradeInProgress @ 0x140A6F0C0
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F3800 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F38A0 (ZwQueryValueKey.c)
 *     PopLogSleepDisabled @ 0x14076C3F8 (PopLogSleepDisabled.c)
 */

NTSTATUS PopCheckForUpgradeInProgress()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+37h] BYREF
  int v7; // [rsp+90h] [rbp+47h]

  KeyHandle = 0LL;
  ResultLength = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyValueInformation = 0LL;
  v7 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"SystemSetupInProgress");
    v1 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength);
    result = ZwClose(KeyHandle);
    if ( v1 >= 0 && HIDWORD(KeyValueInformation) == 1 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      return PopLogSleepDisabled(15, 8, 0LL, 0LL);
  }
  return result;
}
