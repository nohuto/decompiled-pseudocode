/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18011A028
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x18006F4B4 (OpenGlobalizationUserSettingsKey.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119D58 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1800102F0 (RtlCopyUnicodeString.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtOpenKey @ 0x18009D2F0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D390 (NtQueryValueKey.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForSingleUserModel(ACCESS_MASK DesiredAccess, PHANDLE KeyHandle)
{
  NTSTATUS v4; // ebx
  NTSTATUS v5; // eax
  WCHAR *Heap; // rsi
  HANDLE v7; // rax
  HANDLE v8; // rax
  HANDLE v10; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING SourceString; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING v12; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING v13; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING v14; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING ValueName; // [rsp+78h] [rbp-88h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  _OBJECT_ATTRIBUTES v18; // [rsp+C8h] [rbp-38h] BYREF
  _OBJECT_ATTRIBUTES v19; // [rsp+F8h] [rbp-8h] BYREF
  ULONG ResultLength; // [rsp+160h] [rbp+60h] BYREF
  HANDLE KeyHandlea; // [rsp+168h] [rbp+68h] BYREF

  if ( dword_180171544 )
  {
    RtlInitUnicodeString(&DestinationString, &word_18016DA90);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    return (unsigned int)ZwOpenKey(KeyHandle, DesiredAccess, &ObjectAttributes);
  }
  KeyHandlea = 0LL;
  RtlInitUnicodeString(&v13, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CommonGlobUserSettings\\");
  v18.RootDirectory = 0LL;
  v18.ObjectName = &v13;
  v18.Length = 48;
  v18.Attributes = 576;
  *(_OWORD *)&v18.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandlea, DesiredAccess, &v18);
  if ( v4 >= 0 )
  {
    ResultLength = 0;
    RtlInitUnicodeString(&ValueName, L"RedirectedKey");
    v5 = ZwQueryValueKey(KeyHandlea, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( !ResultLength || v5 != -1073741789 && v5 != -2147483643 )
    {
      *(_QWORD *)&v14.Length = 11141120LL;
      v14.Buffer = &word_18016DA90;
      if ( v13.Length <= 0xAAu )
      {
        RtlCopyUnicodeString(&v14, &v13);
        dword_180171544 = 1;
      }
      v8 = KeyHandlea;
      KeyHandlea = 0LL;
      v4 = 0;
      *KeyHandle = v8;
      goto LABEL_21;
    }
    Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ResultLength);
    if ( Heap )
    {
      v4 = ZwQueryValueKey(KeyHandlea, &ValueName, KeyValuePartialInformation, Heap, ResultLength, &ResultLength);
      if ( v4 >= 0 )
      {
        if ( *((_DWORD *)Heap + 1) != 1 )
        {
          v7 = KeyHandlea;
          KeyHandlea = 0LL;
LABEL_15:
          *KeyHandle = v7;
          goto LABEL_16;
        }
        RtlInitUnicodeString(&SourceString, Heap + 6);
        v19.RootDirectory = 0LL;
        v19.ObjectName = &SourceString;
        v19.Length = 48;
        v19.Attributes = 576;
        *(_OWORD *)&v19.SecurityDescriptor = 0LL;
        v4 = ZwOpenKey(&v10, DesiredAccess, &v19);
        if ( v4 >= 0 )
        {
          *(_QWORD *)&v12.Length = 11141120LL;
          v12.Buffer = &word_18016DA90;
          if ( SourceString.Length <= 0xAAu )
          {
            RtlCopyUnicodeString(&v12, &SourceString);
            dword_180171544 = 1;
          }
          v7 = v10;
          goto LABEL_15;
        }
      }
LABEL_16:
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
      goto LABEL_21;
    }
    v4 = -1073741801;
  }
LABEL_21:
  if ( KeyHandlea )
    ZwClose(KeyHandlea);
  return (unsigned int)v4;
}
