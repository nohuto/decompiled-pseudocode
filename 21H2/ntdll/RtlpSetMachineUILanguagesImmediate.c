/*
 * XREFs of RtlpSetMachineUILanguagesImmediate @ 0x1800F1068
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800F1230 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     OpenGlobalizationUserSettingsKey @ 0x1800704E4 (OpenGlobalizationUserSettingsKey.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     ZwCreateKey @ 0x18009D9A0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x18009E1F0 (ZwSetValueKey.c)
 */

__int64 __fastcall RtlpSetMachineUILanguagesImmediate(__int64 a1)
{
  NTSTATUS v2; // ebx
  __int64 v3; // rdx
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE v9; // [rsp+B8h] [rbp+38h] BYREF

  Handle = 0LL;
  v9 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  ObjectAttributes.RootDirectory = 0LL;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  v2 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    v2 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 7u, *(PVOID *)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
    if ( v2 >= 0 && OpenGlobalizationUserSettingsKey(0x2000000u, v3, &v9) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
      ObjectAttributes.RootDirectory = v9;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v2 = ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL);
      if ( v2 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
        v2 = ZwSetValueKey(Handle, &DestinationString, 0, 7u, *(PVOID *)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
      }
    }
  }
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v9 )
    NtClose(v9);
  return (unsigned int)v2;
}
