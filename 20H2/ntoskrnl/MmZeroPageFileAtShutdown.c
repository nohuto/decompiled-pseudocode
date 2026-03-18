/*
 * XREFs of MmZeroPageFileAtShutdown @ 0x1408C7434
 * Callers:
 *     PopEnableHiberFile @ 0x140791980 (PopEnableHiberFile.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 *     PopGracefulShutdown @ 0x1409B4060 (PopGracefulShutdown.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F8450 (ZwQueryValueKey.c)
 *     ObCloseHandle @ 0x140627D70 (ObCloseHandle.c)
 */

__int64 MmZeroPageFileAtShutdown()
{
  int v0; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v4[2]; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+90h] [rbp+37h] BYREF
  int v8; // [rsp+A0h] [rbp+47h]

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  ResultLength = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  v8 = 0;
  v0 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  v4[1] = L"\\registry\\machine\\SYSTEM\\CurrentControlSet\\Control\\Session Manager\\Memory Management";
  ObjectAttributes.Length = 48;
  ValueName.Buffer = L"ClearPageFileAtShutdown";
  v4[0] = 11141288LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v4;
  KeyValueInformation = 0LL;
  *(_QWORD *)&ValueName.Length = 3145774LL;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
    && DWORD1(KeyValueInformation) == 4 )
  {
    v0 = HIDWORD(KeyValueInformation);
  }
  ObCloseHandle(KeyHandle, 0);
  if ( !v0 )
    return 0LL;
  byte_140C4E542 = 1;
  return 1LL;
}
