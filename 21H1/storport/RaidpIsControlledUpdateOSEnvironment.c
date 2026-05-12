/*
 * XREFs of RaidpIsControlledUpdateOSEnvironment @ 0x1C004BB04
 * Callers:
 *     DllInitialize @ 0x1C004ADE0 (DllInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 */

char RaidpIsControlledUpdateOSEnvironment()
{
  char v0; // bl
  const WCHAR *v1; // rsi
  const WCHAR *v2; // rdi
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *DestinationString[3]; // [rsp+40h] [rbp-C8h] BYREF
  UNICODE_STRING String1; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING String2; // [rsp+68h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v9[2]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD KeyValueInformation[132]; // [rsp+C8h] [rbp-40h] BYREF

  v0 = 0;
  *(_QWORD *)&String1.Length = 2097182LL;
  memset(DestinationString, 0, sizeof(DestinationString));
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ResultLength[0] = 0;
  String2 = 0LL;
  String1.Buffer = (wchar_t *)v9;
  v9[0] = *(_OWORD *)L"OneCoreUpdateOS";
  v9[1] = *(_OWORD *)L"pdateOS";
  RtlInitUnicodeString(
    (PUNICODE_STRING)&DestinationString[1],
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\ProductOptions");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(DestinationString, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], L"ProductSuite");
    memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
    if ( ZwQueryValueKey(
           DestinationString[0],
           (PUNICODE_STRING)&DestinationString[1],
           KeyValuePartialInformation,
           KeyValueInformation,
           0x210u,
           ResultLength) >= 0
      && KeyValueInformation[1] == 7 )
    {
      v1 = (const WCHAR *)((char *)&KeyValueInformation[3] + KeyValueInformation[2]);
      v2 = (const WCHAR *)&KeyValueInformation[3];
      if ( &KeyValueInformation[3] < (_DWORD *)v1 )
      {
        while ( *v2 )
        {
          RtlInitUnicodeString(&String2, v2);
          if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
          {
            v0 = 1;
            break;
          }
          v2 += ((unsigned __int64)String2.Length >> 1) + 1;
          if ( v2 >= v1 )
            break;
        }
      }
    }
    ZwClose(DestinationString[0]);
  }
  return v0;
}
