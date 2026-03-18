/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1405B914C
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1403A3F8C (OpenGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405B8EBC (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14020D870 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     ExFreeHeapPool @ 0x1402176E0 (ExFreeHeapPool.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F83B0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1403F8450 (ZwQueryValueKey.c)
 *     AllocateMemory @ 0x1405B8E70 (AllocateMemory.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForSingleUserModel(ULONG a1, HANDLE *a2)
{
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  WCHAR *Memory; // rdi
  HANDLE v6; // rax
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-39h] BYREF
  UNICODE_STRING v9; // [rsp+40h] [rbp-29h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  ULONG ResultLength; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE v15; // [rsp+E8h] [rbp+7Fh] BYREF

  ResultLength = a1;
  if ( dword_140CF9F94 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, &word_140CF74B0);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return (unsigned int)ZwOpenKey(a2, 8u, &ObjectAttributes);
  }
  KeyHandle = 0LL;
  v9 = 0LL;
  RtlInitUnicodeString(&v9, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &v9;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
  if ( v3 >= 0 )
  {
    ResultLength = 0;
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"RedirectedKey");
    v4 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( !ResultLength || v4 != -1073741789 && v4 != -2147483643 )
    {
      *(_QWORD *)&DestinationString.Length = 11141120LL;
      DestinationString.Buffer = &word_140CF74B0;
      if ( v9.Length <= 0xAAu )
      {
        RtlCopyUnicodeString(&DestinationString, &v9);
        dword_140CF9F94 = 1;
      }
      v3 = 0;
      *a2 = KeyHandle;
      KeyHandle = 0LL;
      goto LABEL_21;
    }
    Memory = (WCHAR *)AllocateMemory(ResultLength);
    if ( Memory )
    {
      v3 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Memory, ResultLength, &ResultLength);
      if ( v3 >= 0 )
      {
        if ( *((_DWORD *)Memory + 1) != 1 )
        {
          v6 = KeyHandle;
          KeyHandle = 0LL;
LABEL_15:
          *a2 = v6;
          goto LABEL_16;
        }
        v15 = 0LL;
        SourceString = 0LL;
        RtlInitUnicodeString(&SourceString, Memory + 6);
        *(_QWORD *)&ObjectAttributes.Length = 48LL;
        ObjectAttributes.ObjectName = &SourceString;
        *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
        ObjectAttributes.RootDirectory = 0LL;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v3 = ZwOpenKey(&v15, 8u, &ObjectAttributes);
        if ( v3 >= 0 )
        {
          *(_QWORD *)&DestinationString.Length = 11141120LL;
          DestinationString.Buffer = &word_140CF74B0;
          if ( SourceString.Length <= 0xAAu )
          {
            RtlCopyUnicodeString(&DestinationString, &SourceString);
            dword_140CF9F94 = 1;
          }
          v6 = v15;
          goto LABEL_15;
        }
      }
LABEL_16:
      ExFreeHeapPool((ULONG_PTR)Memory);
      goto LABEL_21;
    }
    v3 = -1073741801;
  }
LABEL_21:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
