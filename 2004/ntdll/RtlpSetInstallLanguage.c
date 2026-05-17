/*
 * XREFs of RtlpSetInstallLanguage @ 0x1800F0820
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x1800F0ED0 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18006F3B4 (OpenGlobalizationUserSettingsKey.c)
 *     RtlStringCchCopyW @ 0x18007E708 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtOpenKey @ 0x18009D050 (NtOpenKey.c)
 *     NtDeleteKey @ 0x18009E860 (NtDeleteKey.c)
 *     ZwDeleteValueKey @ 0x18009E8C0 (ZwDeleteValueKey.c)
 *     NtFlushInstallUILanguage @ 0x18009EAE0 (NtFlushInstallUILanguage.c)
 *     NtIsUILanguageComitted @ 0x18009EE60 (NtIsUILanguageComitted.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     RtlUnicodeStringToLcid @ 0x1800EF378 (RtlUnicodeStringToLcid.c)
 *     RtlpGetCompleteLanguageFallback @ 0x1800F026C (RtlpGetCompleteLanguageFallback.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x1800F03C0 (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpGetInstalledLanguageType @ 0x1800F05B0 (RtlpGetInstalledLanguageType.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0ED0 (RtlpSetPreferredUILanguages.c)
 */

__int64 __fastcall RtlpSetInstallLanguage(char a1, const WCHAR *a2)
{
  char v2; // r15
  char v3; // r12
  WCHAR *v4; // rdi
  int ProcessRegistryInfo; // ebx
  __int16 *v6; // rsi
  __int16 *v7; // r14
  __int16 *v8; // rdx
  __int64 v9; // rdx
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v12; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v13; // [rsp+50h] [rbp-B0h] BYREF
  char v14[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int16 *v15; // [rsp+68h] [rbp-98h] BYREF
  HANDLE v16; // [rsp+70h] [rbp-90h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  __int16 *v18; // [rsp+88h] [rbp-78h] BYREF
  int v19; // [rsp+90h] [rbp-70h]
  HANDLE v20; // [rsp+98h] [rbp-68h]
  UNICODE_STRING *v21; // [rsp+A0h] [rbp-60h]
  int v22; // [rsp+A8h] [rbp-58h]
  __int128 v23; // [rsp+B0h] [rbp-50h]
  WCHAR SourceString[88]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v25[88]; // [rsp+170h] [rbp+70h] BYREF
  _WORD v26[176]; // [rsp+220h] [rbp+120h] BYREF
  _WORD v27[264]; // [rsp+380h] [rbp+280h] BYREF

  Handle = 0LL;
  v2 = 0;
  v16 = 0LL;
  v3 = 0;
  v4 = (WCHAR *)a2;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( (a1 & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    ProcessRegistryInfo = RtlUnicodeStringToLcid(&DestinationString.Length, (int *)&v12);
    if ( ProcessRegistryInfo < 0 )
      return (unsigned int)ProcessRegistryInfo;
    DestinationString.Buffer = SourceString;
    DestinationString.MaximumLength = 172;
    if ( !RtlLCIDToCultureName(v12, (__int64)&DestinationString) )
      return (unsigned int)-1073741811;
    v4 = SourceString;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return (unsigned int)-1073741811;
    RtlInitUnicodeString(&DestinationString, a2);
    if ( !RtlCultureNameToLCID(&DestinationString.Length, &v12) )
      return (unsigned int)-1073741811;
  }
  ProcessRegistryInfo = RtlpCreateProcessRegistryInfo((__int64 *)&v15);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  v6 = v15;
  if ( !v15 )
    return (unsigned int)-1073741823;
  ProcessRegistryInfo = RtlpGetInstalledLanguageType((__int64)v15, v4, (int *)&v18, &v15);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  if ( (_DWORD)v18 == 1 )
    goto LABEL_23;
  if ( (_DWORD)v18 == 2 )
  {
    v8 = v15;
    v2 = 1;
LABEL_22:
    ProcessRegistryInfo = RtlpGetCompleteLanguageFallback((__int64)v6, v8, 0LL, v27, 0x102u);
    if ( ProcessRegistryInfo < 0 )
      return (unsigned int)ProcessRegistryInfo;
    goto LABEL_23;
  }
  if ( (_DWORD)v18 != 4 )
    return (unsigned int)-1073741811;
  v3 = 1;
  memset(v25, 0, 0xACuLL);
  RtlStringCchCopyW(v25, 85LL, (__int64)v4);
  v4 = SourceString;
  memset(SourceString, 0, 0xACuLL);
  ProcessRegistryInfo = RtlpGetDefaultLanguageBaseOrParent(
                          (__int64)v6,
                          (__int64)v15,
                          &v18,
                          (__int64)SourceString,
                          0x55u,
                          0LL,
                          0LL);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  v7 = v18;
  if ( !v18 )
    return (unsigned int)-1073741637;
  ProcessRegistryInfo = RtlpGetCompleteLanguageFallback((__int64)v6, v15, v25, v26, 0xACu);
  if ( ProcessRegistryInfo < 0 )
    return (unsigned int)ProcessRegistryInfo;
  if ( (*(_BYTE *)v7 & 2) != 0 )
  {
    v2 = 1;
    v8 = v7;
    goto LABEL_22;
  }
LABEL_23:
  RtlInitUnicodeString(&DestinationString, v4);
  if ( !RtlCultureNameToLCID(&DestinationString.Length, &v12) )
    return (unsigned int)-1073741811;
  ProcessRegistryInfo = NtFlushInstallUILanguage();
  if ( ProcessRegistryInfo >= 0 )
  {
    if ( v2 )
    {
      RtlpSetPreferredUILanguages(1032LL, v27, v14);
    }
    else
    {
      RtlInitUnicodeString(&v13, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v20 = 0LL;
      v21 = &v13;
      v19 = 48;
      v22 = 64;
      v23 = 0LL;
      if ( (int)NtOpenKey() >= 0 )
      {
        RtlInitUnicodeString(&v13, L"InstallLanguageFallback");
        ZwDeleteValueKey();
        NtClose(Handle);
      }
    }
    if ( v3 )
    {
      RtlpSetPreferredUILanguages(32776LL, v25, v14);
      RtlpSetPreferredUILanguages(36872LL, v26, v14);
    }
    else
    {
      RtlInitUnicodeString(&v13, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      Handle = 0LL;
      v20 = 0LL;
      v21 = &v13;
      v19 = 48;
      v22 = 64;
      v23 = 0LL;
      if ( (int)NtOpenKey() >= 0 )
      {
        RtlInitUnicodeString(&v13, L"PreferredUILanguages");
        ZwDeleteValueKey();
        NtClose(Handle);
        RtlInitUnicodeString(
          &v13,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
        Handle = 0LL;
        v20 = 0LL;
        v21 = &v13;
        v19 = 48;
        v22 = 64;
        v23 = 0LL;
        if ( (int)NtOpenKey() >= 0 )
        {
          NtDeleteKey();
          NtClose(Handle);
        }
        if ( (int)OpenGlobalizationUserSettingsKey(0x2000000u, v9, (__int64)&Handle) >= 0 )
        {
          RtlInitUnicodeString(&v13, L"Control Panel\\Desktop\\MuiCached");
          v20 = Handle;
          v19 = 48;
          v21 = &v13;
          v22 = 64;
          v23 = 0LL;
          if ( (int)NtOpenKey() >= 0 )
          {
            RtlInitUnicodeString(&v13, L"MachinePreferredUILanguages");
            ZwDeleteValueKey();
            RtlInitUnicodeString(&v13, L"MachineLanguageConfiguration");
            ZwDeleteValueKey();
            NtClose(v16);
          }
          NtClose(Handle);
        }
      }
    }
  }
  else if ( (unsigned int)NtIsUILanguageComitted() )
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)ProcessRegistryInfo;
}
