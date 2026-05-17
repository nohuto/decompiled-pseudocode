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
  __int64 v6; // r12
  HANDLE v7; // rdi
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  __int64 LanguageConfigList; // rax
  int v14; // eax
  char v15[8]; // [rsp+20h] [rbp-60h] BYREF
  HANDLE v16; // [rsp+28h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  HANDLE v18; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v20; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v21; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v23; // [rsp+68h] [rbp-18h]
  __int128 v24; // [rsp+70h] [rbp-10h]
  char v25; // [rsp+C8h] [rbp+48h] BYREF
  char v26; // [rsp+D8h] [rbp+58h] BYREF

  v16 = 0LL;
  v18 = 0LL;
  Handle = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( a2 && a3 )
  {
    v6 = *a2;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Policies\\Microsoft\\MUI\\Settings");
    v20 = 48;
    p_DestinationString = &DestinationString;
    v21 = 0LL;
    v23 = 64;
    v24 = 0LL;
    if ( (int)NtOpenKey(&v16, 131097LL, &v20) >= 0 )
    {
      v11 = RtlpLoadPolicyLanguageSpec(v16, a3, &v26, v15);
      if ( v11 >= 0 )
      {
LABEL_12:
        v7 = Handle;
        goto LABEL_13;
      }
      if ( a1 == 8 )
      {
        v25 = 0;
        if ( !(unsigned int)RtlpHasMachineUILock(v16, &v25) && v25 == 1 )
          a1 = 4;
      }
      NtClose(v16);
      v16 = 0LL;
    }
    v9 = OpenGlobalizationUserSettingsKey(0x2000000LL, v8, &Handle);
    v7 = Handle;
    if ( v9 < 0 )
      v7 = 0LL;
    Handle = v7;
    if ( a1 != 8 )
    {
      if ( a1 == 4 )
      {
        if ( v7 )
        {
          RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached\\MachineLanguageConfiguration");
          v16 = 0LL;
          p_DestinationString = &DestinationString;
          v20 = 48;
          v21 = v7;
          v23 = 64;
          v24 = 0LL;
          v14 = NtOpenKey(&v16, 131097LL, &v20);
        }
        else
        {
          v14 = -1073741772;
        }
        if ( v14 < 0 )
        {
          RtlInitUnicodeString(
            &DestinationString,
            L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
          v16 = 0LL;
          p_DestinationString = &DestinationString;
          v20 = 48;
          v21 = 0LL;
          v23 = 64;
          v24 = 0LL;
          v10 = NtOpenKey(&v16, 131097LL, &v20);
          v11 = v10;
          if ( v10 < 0 )
          {
LABEL_10:
            if ( v10 == -1073741772 )
              v11 = 0;
            goto LABEL_12;
          }
        }
      }
LABEL_38:
      v11 = RtlpPopulateLanguageConfigList(v16, a2, a3);
      goto LABEL_12;
    }
    if ( v7 )
    {
      RtlInitUnicodeString(&DestinationString, L"Software\\Policies\\Microsoft\\Control Panel\\Desktop");
      v21 = v7;
      p_DestinationString = &DestinationString;
      v23 = 64;
      v20 = 48;
      v24 = 0LL;
      if ( (int)NtOpenKey(&v18, 131097LL, &v20) >= 0 )
      {
        v11 = RtlpLoadPolicyLanguageSpec(v18, a3, &v26, v15);
        if ( v11 >= 0 )
          goto LABEL_12;
      }
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\LanguageConfiguration");
      v21 = Handle;
      v16 = 0LL;
      p_DestinationString = &DestinationString;
      v20 = 48;
      v23 = 64;
      v24 = 0LL;
      v10 = NtOpenKey(&v16, 131097LL, &v20);
      v11 = v10;
      if ( v10 < 0 )
        goto LABEL_10;
      goto LABEL_38;
    }
    v11 = 0;
  }
  else
  {
    v11 = -1073741811;
  }
LABEL_13:
  if ( v16 )
  {
    NtClose(v16);
    v7 = Handle;
  }
  if ( v18 )
  {
    NtClose(v18);
    v7 = Handle;
  }
  if ( v7 )
    NtClose(v7);
  if ( v11 >= 0 )
  {
    if ( *a2 )
      return (unsigned int)v11;
    LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(1LL);
    *a2 = LanguageConfigList;
    if ( LanguageConfigList )
      return (unsigned int)v11;
    v11 = -1073741801;
LABEL_45:
    *a2 = v6;
    return (unsigned int)v11;
  }
  if ( a2 && *a2 != v6 )
  {
    if ( *a2 )
      RtlpMuiRegFreeStringPool();
    goto LABEL_45;
  }
  return (unsigned int)v11;
}
