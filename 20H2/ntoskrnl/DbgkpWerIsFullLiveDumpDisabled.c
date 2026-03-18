/*
 * XREFs of DbgkpWerIsFullLiveDumpDisabled @ 0x14088C028
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1404ECD78 (DbgkCaptureLiveKernelDump.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14088B590 (DbgkWerCaptureLiveKernelDump.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F8450 (ZwQueryValueKey.c)
 */

bool DbgkpWerIsFullLiveDumpDisabled()
{
  HANDLE KeyHandle; // [rsp+30h] [rbp-29h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v3[2]; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp+37h] BYREF
  int v7; // [rsp+A0h] [rbp+47h]

  KeyHandle = 0LL;
  ResultLength = 0;
  HIDWORD(ObjectAttributes.RootDirectory) = 0;
  *(_QWORD *)(&ObjectAttributes.Length + 1) = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  v7 = 0;
  v3[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\FullLiveKernelReports";
  ValueName.Buffer = L"FullLiveReportsMax";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v3;
  KeyValueInformation = 0LL;
  v3[0] = 11272362LL;
  *(_QWORD *)&ValueName.Length = 2490404LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
      && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      ZwClose(KeyHandle);
      return HIDWORD(KeyValueInformation) == 0;
    }
    ZwClose(KeyHandle);
  }
  return 0;
}
