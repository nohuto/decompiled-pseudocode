/*
 * XREFs of __IsMachineLanguageListInMutableLocation@0 @ 0x4B2ADAEB
 * Callers:
 *     __RtlpMuiRegLoadInstalled@16 @ 0x4B2AC2C1 (__RtlpMuiRegLoadInstalled@16.c)
 * Callees:
 *     _LdrpQueryValueKey@24 @ 0x4B2AD60A (_LdrpQueryValueKey@24.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

bool __stdcall _IsMachineLanguageListInMutableLocation()
{
  bool v0; // bl
  int v2; // ecx
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-38h] BYREF
  _UNICODE_STRING v4; // [esp+20h] [ebp-20h] BYREF
  _UNICODE_STRING DestinationString; // [esp+28h] [ebp-18h] BYREF
  int v6; // [esp+30h] [ebp-10h] BYREF
  ULONG v7; // [esp+34h] [ebp-Ch] BYREF
  int v8; // [esp+38h] [ebp-8h] BYREF
  HANDLE KeyHandle; // [esp+3Ch] [ebp-4h] BYREF

  v0 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\OSDATA\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  KeyHandle = 0;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 24;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&v4, L"MachineLanguageListMigrationState");
    v6 = 4;
    v7 = 4;
    v8 = 0;
    if ( LdrpQueryValueKey(KeyHandle, &v4, &v6, &v8, &v7, v2) >= 0 )
      v0 = v8 == 1;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v0;
}
