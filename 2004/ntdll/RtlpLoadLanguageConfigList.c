/*
 * XREFs of RtlpLoadLanguageConfigList @ 0x18003F47C
 * Callers:
 *     InitializeTEBUserLangList @ 0x180038670 (InitializeTEBUserLangList.c)
 *     RtlpInitializeUserList @ 0x18003F0AC (RtlpInitializeUserList.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x18006F0B0 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18006F3B4 (OpenGlobalizationUserSettingsKey.c)
 *     RtlpMuiRegFreeStringPool @ 0x18006F810 (RtlpMuiRegFreeStringPool.c)
 *     RtlpMuiRegCreateLanguageConfigList @ 0x18007DF44 (RtlpMuiRegCreateLanguageConfigList.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtOpenKey @ 0x18009D050 (NtOpenKey.c)
 *     RtlpHasMachineUILock @ 0x180103930 (RtlpHasMachineUILock.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1801039C8 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpPopulateLanguageConfigList @ 0x180105A88 (RtlpPopulateLanguageConfigList.c)
 */

__int64 __fastcall RtlpLoadLanguageConfigList(int a1, __int64 *a2, __int64 a3)
{
  void *v6; // r12
  HANDLE v7; // rdi
  int v8; // eax
  NTSTATUS v9; // eax
  int PolicyLanguageSpec; // ebx
  __int64 LanguageConfigList; // rax
  NTSTATUS v13; // eax
  void *v14; // rcx
  HANDLE KeyHandle; // [rsp+28h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+30h] [rbp-50h]
  HANDLE v17; // [rsp+38h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  KeyHandle = 0LL;
  v17 = 0LL;
  Handle = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 && a3 )
  {
    v6 = (void *)*a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(KeyHandle);
      if ( PolicyLanguageSpec >= 0 )
      {
LABEL_12:
        v7 = Handle;
        goto LABEL_13;
      }
      if ( a1 == 8 )
        RtlpHasMachineUILock(KeyHandle);
      NtClose(KeyHandle);
      KeyHandle = 0LL;
    }
    v8 = OpenGlobalizationUserSettingsKey(0x2000000u);
    v7 = Handle;
    if ( v8 < 0 )
      v7 = 0LL;
    Handle = v7;
    if ( a1 != 8 )
    {
      if ( a1 == 4 )
      {
        if ( v7 )
        {
          RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
          KeyHandle = 0LL;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = v7;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v13 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        }
        else
        {
          v13 = -1073741772;
        }
        if ( v13 < 0 )
        {
          RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
          KeyHandle = 0LL;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v9 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
          PolicyLanguageSpec = v9;
          if ( v9 < 0 )
          {
LABEL_10:
            if ( v9 == -1073741772 )
              PolicyLanguageSpec = 0;
            goto LABEL_12;
          }
        }
      }
LABEL_36:
      PolicyLanguageSpec = RtlpPopulateLanguageConfigList(KeyHandle, a2, a3);
      goto LABEL_12;
    }
    if ( v7 )
    {
      RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
      ObjectAttributes.RootDirectory = v7;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.Length = 48;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenKey(&v17, 0x20019u, &ObjectAttributes) >= 0 )
      {
        PolicyLanguageSpec = RtlpLoadPolicyLanguageSpec(v17);
        if ( PolicyLanguageSpec >= 0 )
          goto LABEL_12;
      }
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfiguration");
      ObjectAttributes.RootDirectory = Handle;
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      PolicyLanguageSpec = v9;
      if ( v9 < 0 )
        goto LABEL_10;
      goto LABEL_36;
    }
    PolicyLanguageSpec = 0;
  }
  else
  {
    PolicyLanguageSpec = -1073741811;
  }
LABEL_13:
  if ( KeyHandle )
  {
    NtClose(KeyHandle);
    v7 = Handle;
  }
  if ( v17 )
  {
    NtClose(v17);
    v7 = Handle;
  }
  if ( v7 )
    NtClose(v7);
  if ( PolicyLanguageSpec >= 0 )
  {
    if ( *a2 )
      return (unsigned int)PolicyLanguageSpec;
    LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1LL);
    *a2 = LanguageConfigList;
    if ( LanguageConfigList )
      return (unsigned int)PolicyLanguageSpec;
    PolicyLanguageSpec = -1073741801;
LABEL_43:
    *a2 = (__int64)v6;
    return (unsigned int)PolicyLanguageSpec;
  }
  if ( a2 )
  {
    v14 = (void *)*a2;
    if ( (void *)*a2 != v6 )
    {
      if ( v14 )
        RtlpMuiRegFreeStringPool(v14);
      goto LABEL_43;
    }
  }
  return (unsigned int)PolicyLanguageSpec;
}
