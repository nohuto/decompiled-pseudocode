/*
 * XREFs of _RtlpLoadLanguageConfigList@12 @ 0x4B2ACFED
 * Callers:
 *     _RtlpMuiRegLoadRegistryInfo@8 @ 0x4B2ACDB0 (_RtlpMuiRegLoadRegistryInfo@8.c)
 *     _InitializeTEBUserLangList@8 @ 0x4B2D3E35 (_InitializeTEBUserLangList@8.c)
 *     _RtlpInitializeUserList@4 @ 0x4B2D6661 (_RtlpInitializeUserList@4.c)
 * Callees:
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 *     _RtlpPopulateLanguageConfigList@12 @ 0x4B2AD962 (_RtlpPopulateLanguageConfigList@12.c)
 *     _RtlpMuiRegCreateLanguageConfigList@4 @ 0x4B2ADA68 (_RtlpMuiRegCreateLanguageConfigList@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _RtlpHasMachineUILock@8 @ 0x4B36ABB1 (_RtlpHasMachineUILock@8.c)
 *     _RtlpLoadPolicyLanguageSpec@16 @ 0x4B36AC26 (_RtlpLoadPolicyLanguageSpec@16.c)
 */

int __fastcall RtlpLoadLanguageConfigList(int a1, PVOID *a2, int a3)
{
  NTSTATUS v5; // eax
  int v6; // esi
  bool v7; // zf
  int LanguageConfigList; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  PVOID v12; // ebx
  HANDLE KeyHandle; // [esp+Ch] [ebp-9Ch] BYREF
  char v14; // [esp+13h] [ebp-95h] BYREF
  HANDLE Handle; // [esp+14h] [ebp-94h] BYREF
  char v16; // [esp+1Bh] [ebp-8Dh] BYREF
  HANDLE v17; // [esp+1Ch] [ebp-8Ch] BYREF
  _UNICODE_STRING DestinationString; // [esp+20h] [ebp-88h] BYREF
  _BYTE v19[4]; // [esp+28h] [ebp-80h] BYREF
  PVOID v20; // [esp+2Ch] [ebp-7Ch]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+30h] [ebp-78h] BYREF
  _OBJECT_ATTRIBUTES v22; // [esp+48h] [ebp-60h] BYREF
  _OBJECT_ATTRIBUTES v23; // [esp+60h] [ebp-48h] BYREF
  _OBJECT_ATTRIBUTES v24; // [esp+78h] [ebp-30h] BYREF
  _OBJECT_ATTRIBUTES v25; // [esp+90h] [ebp-18h] BYREF

  v20 = 0;
  KeyHandle = 0;
  v17 = 0;
  Handle = 0;
  if ( a2 && a3 )
  {
    v20 = *a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      v6 = RtlpLoadPolicyLanguageSpec(&v16, v19);
      if ( v6 >= 0 )
        goto LABEL_13;
      if ( a1 == 8 )
      {
        v14 = 0;
        if ( !RtlpHasMachineUILock(KeyHandle, &v14) && v14 == 1 )
          a1 = 4;
      }
      NtClose(KeyHandle);
      KeyHandle = 0;
    }
    if ( OpenGlobalizationUserSettingsKey(0x2000000u, &Handle) < 0 )
      Handle = 0;
    if ( a1 != 8 )
    {
      if ( a1 == 4 )
      {
        if ( Handle )
        {
          RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
          KeyHandle = 0;
          v24.SecurityDescriptor = 0;
          v24.SecurityQualityOfService = 0;
          v24.RootDirectory = Handle;
          v24.ObjectName = &DestinationString;
          v24.Length = 24;
          v24.Attributes = 64;
          v10 = ZwOpenKey(&KeyHandle, 0x20019u, &v24);
        }
        else
        {
          v10 = -1073741772;
        }
        if ( v10 < 0 )
        {
          RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
          KeyHandle = 0;
          v25.RootDirectory = 0;
          v25.SecurityDescriptor = 0;
          v25.SecurityQualityOfService = 0;
          v25.ObjectName = &DestinationString;
          v25.Length = 24;
          v25.Attributes = 64;
          v11 = ZwOpenKey(&KeyHandle, 0x20019u, &v25);
          v6 = v11;
          if ( v11 < 0 )
          {
            v7 = v11 == -1073741772;
LABEL_11:
            if ( !v7 )
              goto LABEL_13;
            goto LABEL_12;
          }
        }
      }
      goto LABEL_28;
    }
    if ( !Handle )
    {
LABEL_12:
      v6 = 0;
      goto LABEL_13;
    }
    RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
    v22.SecurityDescriptor = 0;
    v22.SecurityQualityOfService = 0;
    v22.RootDirectory = Handle;
    v22.ObjectName = &DestinationString;
    v22.Length = 24;
    v22.Attributes = 64;
    if ( ZwOpenKey(&v17, 0x20019u, &v22) < 0 || (v6 = RtlpLoadPolicyLanguageSpec(&v16, v19), v6 < 0) )
    {
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfiguration");
      KeyHandle = 0;
      v23.SecurityDescriptor = 0;
      v23.SecurityQualityOfService = 0;
      v23.RootDirectory = Handle;
      v23.ObjectName = &DestinationString;
      v23.Length = 24;
      v23.Attributes = 64;
      v5 = ZwOpenKey(&KeyHandle, 0x20019u, &v23);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = v5 == -1073741772;
        goto LABEL_11;
      }
LABEL_28:
      v6 = RtlpPopulateLanguageConfigList(KeyHandle, a3);
    }
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_13:
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( v17 )
    NtClose(v17);
  if ( Handle )
    NtClose(Handle);
  if ( v6 >= 0 )
  {
    if ( *a2 )
      return v6;
    LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1);
    *a2 = (PVOID)LanguageConfigList;
    if ( LanguageConfigList )
      return v6;
    v12 = v20;
    v6 = -1073741801;
LABEL_45:
    *a2 = v12;
    return v6;
  }
  if ( a2 )
  {
    v12 = v20;
    if ( *a2 != v20 )
    {
      if ( *a2 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *a2);
      goto LABEL_45;
    }
  }
  return v6;
}
