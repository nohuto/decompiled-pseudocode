/*
 * XREFs of _RtlpGetUserOrMachineUILanguage4NLS@12 @ 0x4B36A9A0
 * Callers:
 *     _RtlLcidToLocaleName@16 @ 0x4B2D5A10 (_RtlLcidToLocaleName@16.c)
 *     _RtlpMatchUILanguage@4 @ 0x4B36349D (_RtlpMatchUILanguage@4.c)
 * Callees:
 *     _LdrpQueryValueKey@24 @ 0x4B2AD60A (_LdrpQueryValueKey@24.c)
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

NTSTATUS __stdcall RtlpGetUserOrMachineUILanguage4NLS(int a1, void *a2, ULONG *a3)
{
  NTSTATUS v3; // esi
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  ULONG v7; // edi
  HANDLE KeyHandle; // [esp+10h] [ebp-30h] BYREF
  HANDLE Handle; // [esp+14h] [ebp-2Ch] BYREF
  ULONG v11; // [esp+18h] [ebp-28h] BYREF
  int v12; // [esp+1Ch] [ebp-24h] BYREF
  _UNICODE_STRING DestinationString; // [esp+20h] [ebp-20h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+28h] [ebp-18h] BYREF

  v12 = 7;
  Handle = 0;
  KeyHandle = 0;
  v11 = 0;
  v3 = OpenGlobalizationUserSettingsKey(0x2000000u, &Handle);
  if ( v3 < 0 )
    goto LABEL_18;
  if ( a1 == 1 )
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop");
    ObjectAttributes.Length = 24;
    ObjectAttributes.RootDirectory = Handle;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 24;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v3 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
      v3 = LdrpQueryValueKey(KeyHandle, &DestinationString, &v12, 0, &v11, v5);
      if ( v3 >= 0 )
        goto LABEL_10;
    }
    if ( v3 == -2147483643 )
      goto LABEL_10;
    NtClose(KeyHandle);
    KeyHandle = 0;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
    KeyHandle = 0;
    ObjectAttributes.Length = 24;
    ObjectAttributes.RootDirectory = 0;
  }
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v3 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v3 < 0 )
    goto LABEL_18;
  RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
  v3 = LdrpQueryValueKey(KeyHandle, &DestinationString, &v12, 0, &v11, v6);
LABEL_10:
  if ( v3 != -1073741772 && v11 )
  {
    if ( v3 == -2147483643 )
    {
      v7 = (v11 + 1) >> 1;
      if ( !a2 )
      {
        v3 = 0;
        *a3 = v7;
        goto LABEL_18;
      }
      if ( *a3 < v7 )
      {
        v3 = -1073741789;
LABEL_17:
        *a3 = v7;
        goto LABEL_18;
      }
      v3 = LdrpQueryValueKey(KeyHandle, &DestinationString, &v12, a2, &v11, v4);
      if ( v3 >= 0 )
      {
        if ( v12 == 7 )
          goto LABEL_17;
        v3 = -1073741772;
      }
    }
    else
    {
      v3 = -1073741772;
    }
  }
LABEL_18:
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v3;
}
