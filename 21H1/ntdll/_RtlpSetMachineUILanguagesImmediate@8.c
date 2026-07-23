/*
 * XREFs of _RtlpSetMachineUILanguagesImmediate@8 @ 0x4B35519D
 * Callers:
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 * Callees:
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwCreateKey@28 @ 0x4B2F2B50 (_ZwCreateKey@28.c)
 *     _ZwSetValueKey@24 @ 0x4B2F2F80 (_ZwSetValueKey@24.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

NTSTATUS __stdcall RtlpSetMachineUILanguagesImmediate(int a1, PVOID Data)
{
  NTSTATUS v2; // esi
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-2Ch] BYREF
  _UNICODE_STRING DestinationString; // [esp+24h] [ebp-14h] BYREF
  HANDLE CurrentUserKey; // [esp+2Ch] [ebp-Ch] BYREF
  HANDLE Handle; // [esp+30h] [ebp-8h] BYREF
  HANDLE KeyHandle; // [esp+34h] [ebp-4h] BYREF

  Handle = 0;
  CurrentUserKey = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  KeyHandle = 0;
  v2 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0, 0, 0);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    v2 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 7u, Data, HIWORD(a1));
    if ( v2 >= 0 && OpenGlobalizationUserSettingsKey(0x2000000u, &CurrentUserKey) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
      ObjectAttributes.RootDirectory = CurrentUserKey;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 24;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      v2 = ZwCreateKey(&Handle, 0xF003Fu, &ObjectAttributes, 0, 0, 1u, 0);
      if ( v2 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
        v2 = ZwSetValueKey(Handle, &DestinationString, 0, 7u, Data, HIWORD(a1));
      }
    }
  }
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    KeyHandle = 0;
  }
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0;
  }
  if ( CurrentUserKey )
    NtClose(CurrentUserKey);
  return v2;
}
