/*
 * XREFs of _RtlpSetInstallLanguage@8 @ 0x4B354A70
 * Callers:
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 * Callees:
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwDeleteKey@4 @ 0x4B2F36B0 (_ZwDeleteKey@4.c)
 *     _NtDeleteValueKey@8 @ 0x4B2F36E0 (_NtDeleteValueKey@8.c)
 *     _ZwFlushInstallUILanguage@8 @ 0x4B2F37F0 (_ZwFlushInstallUILanguage@8.c)
 *     _ZwIsUILanguageComitted@0 @ 0x4B2F39B0 (_ZwIsUILanguageComitted@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlStringCchCopyExW@24 @ 0x4B330DC4 (_RtlStringCchCopyExW@24.c)
 *     _RtlStringCchCopyW@12 @ 0x4B3475EA (_RtlStringCchCopyW@12.c)
 *     _RtlUnicodeStringToLcid@8 @ 0x4B352FCF (_RtlUnicodeStringToLcid@8.c)
 *     _RtlpGetDefaultLanguageBaseOrParent@28 @ 0x4B354076 (_RtlpGetDefaultLanguageBaseOrParent@28.c)
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 */

int __stdcall RtlpSetInstallLanguage(char a1, PCWSTR SourceString)
{
  const WCHAR *v2; // ebx
  int InstalledLanguageIndexByName; // esi
  int v4; // ecx
  __int16 *v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  _WORD *v9; // ecx
  int v10; // ecx
  wchar_t *v11; // eax
  unsigned int v12; // ecx
  bool v13; // zf
  char *v14; // edx
  int v15; // edi
  wchar_t *v16; // eax
  wchar_t *v17; // ecx
  wchar_t *v18; // edx
  wchar_t *v19; // edx
  wchar_t *v20; // eax
  unsigned int v21; // ecx
  size_t v23; // [esp-4h] [ebp-544h]
  size_t v24; // [esp-4h] [ebp-544h]
  wchar_t *v25; // [esp+10h] [ebp-530h] BYREF
  wchar_t *v26; // [esp+14h] [ebp-52Ch] BYREF
  char v27; // [esp+1Bh] [ebp-525h]
  HANDLE KeyHandle; // [esp+1Ch] [ebp-524h] BYREF
  int v29; // [esp+20h] [ebp-520h] BYREF
  int v30; // [esp+24h] [ebp-51Ch] BYREF
  _UNICODE_STRING ValueName; // [esp+28h] [ebp-518h] BYREF
  _WORD *v32; // [esp+30h] [ebp-510h] BYREF
  PCWSTR v33; // [esp+34h] [ebp-50Ch]
  LCID Lcid; // [esp+38h] [ebp-508h] BYREF
  HANDLE Handle; // [esp+3Ch] [ebp-504h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+40h] [ebp-500h] BYREF
  int v37; // [esp+58h] [ebp-4E8h]
  _UNICODE_STRING String; // [esp+5Ch] [ebp-4E4h] BYREF
  char v39[4]; // [esp+64h] [ebp-4DCh] BYREF
  __int16 *v40; // [esp+68h] [ebp-4D8h]
  int v41; // [esp+6Ch] [ebp-4D4h]
  _UNICODE_STRING DestinationString; // [esp+70h] [ebp-4D0h] BYREF
  wchar_t v43[88]; // [esp+78h] [ebp-4C8h] BYREF
  _WORD v44[88]; // [esp+128h] [ebp-418h] BYREF
  wchar_t v45[260]; // [esp+1D8h] [ebp-368h] BYREF
  _WORD v46[174]; // [esp+3E0h] [ebp-160h] BYREF

  v2 = SourceString;
  v33 = SourceString;
  KeyHandle = 0;
  Handle = 0;
  v27 = 0;
  LOBYTE(v37) = 0;
  if ( !SourceString )
    return -1073741811;
  if ( (a1 & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    InstalledLanguageIndexByName = RtlUnicodeStringToLcid(&DestinationString, &Lcid);
    if ( InstalledLanguageIndexByName < 0 )
      return InstalledLanguageIndexByName;
    String.MaximumLength = 172;
    String.Buffer = v43;
    if ( !RtlLCIDToCultureName(Lcid, &String) )
      return -1073741811;
    v2 = (const WCHAR *)v43;
    v33 = (PCWSTR)v43;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return -1073741811;
    RtlInitUnicodeString(&String, SourceString);
    if ( !RtlCultureNameToLCID(&String, &Lcid) )
      return -1073741811;
  }
  InstalledLanguageIndexByName = RtlpCreateProcessRegistryInfo(&v30);
  if ( InstalledLanguageIndexByName < 0 )
    return InstalledLanguageIndexByName;
  v4 = v30;
  if ( !v30 )
    return -1073741823;
  LOWORD(v26) = -1;
  if ( !v2 )
  {
    InstalledLanguageIndexByName = -1073741811;
    goto LABEL_18;
  }
  InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(v30, v2, 0, &v26);
  if ( InstalledLanguageIndexByName < 0 )
  {
    v4 = v30;
LABEL_18:
    v6 = v41;
    v5 = v40;
    goto LABEL_19;
  }
  v5 = (__int16 *)(*(_DWORD *)(*(_DWORD *)(v30 + 20) + 12) + 28 * (__int16)v26);
  if ( *v5 < 0 )
    return -1073741275;
  v4 = v30;
  v6 = *v5 & 7;
  InstalledLanguageIndexByName = 0;
LABEL_19:
  if ( InstalledLanguageIndexByName < 0 )
    return InstalledLanguageIndexByName;
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_63;
  v8 = v7 - 1;
  if ( !v8 )
  {
    v27 = 1;
    if ( !v5 )
    {
      InstalledLanguageIndexByName = -1073741811;
LABEL_62:
      if ( InstalledLanguageIndexByName < 0 )
        return InstalledLanguageIndexByName;
      goto LABEL_63;
    }
    v25 = v45;
    v29 = 258;
    InstalledLanguageIndexByName = RtlpGetDefaultLanguageBaseOrParent(v4, v5, &v32, v45, 0x102u, &v25, &v29);
    if ( InstalledLanguageIndexByName < 0 )
      return InstalledLanguageIndexByName;
    if ( !v29 )
      return -1073741789;
    v16 = v25 + 1;
    v21 = v29 - 1;
    v13 = (*(_BYTE *)v5 & 4) == 0;
    v18 = (wchar_t *)(v29 - 1);
    ++v25;
    --v29;
    if ( !v13 || !v32 || (*(_BYTE *)v32 & 2) == 0 )
    {
LABEL_50:
      if ( !v18 )
        return -1073741789;
      InstalledLanguageIndexByName = 0;
      *v16 = 0;
      goto LABEL_62;
    }
    RtlpGetDefaultLanguageBaseOrParent(v30, v32, 0, v16, v21, &v25, &v29);
    v19 = (wchar_t *)v29;
    if ( !v29 )
      return -1073741789;
    v20 = v25;
LABEL_49:
    v16 = v20 + 1;
    v18 = (wchar_t *)((char *)v19 - 1);
    goto LABEL_50;
  }
  if ( v8 != 2 )
    return -1073741811;
  LODWORD(v23) = 172;
  v37 = 1;
  memset(v44, 0, v23);
  RtlStringCchCopyW(v44, 85, (int)v33);
  LODWORD(v24) = 172;
  v33 = (PCWSTR)v43;
  memset(v43, 0, v24);
  InstalledLanguageIndexByName = RtlpGetDefaultLanguageBaseOrParent(v30, v5, &v29, v43, 0x55u, 0, 0);
  if ( InstalledLanguageIndexByName < 0 )
    return InstalledLanguageIndexByName;
  v9 = (_WORD *)v29;
  if ( !v29 )
    return -1073741637;
  if ( v5 )
  {
    InstalledLanguageIndexByName = RtlStringCchCopyExW(v46, 172, v44, &v25, (int *)&v26, v29);
    if ( InstalledLanguageIndexByName >= 0 )
    {
      v10 = (int)v26;
      if ( !v26 )
        return -1073741789;
      v26 = (wchar_t *)((char *)v26 - 1);
      ++v25;
      InstalledLanguageIndexByName = RtlpGetDefaultLanguageBaseOrParent(v30, v5, &v32, v25, v10 - 1, &v25, &v26);
      if ( InstalledLanguageIndexByName >= 0 )
      {
        if ( !v26 )
          return -1073741789;
        v11 = v25 + 1;
        v12 = (unsigned int)v26 - 1;
        v13 = (*(_BYTE *)v5 & 4) == 0;
        v14 = (char *)v26 - 1;
        ++v25;
        v26 = (wchar_t *)((char *)v26 - 1);
        if ( v13 && v32 && (*(_BYTE *)v32 & 2) != 0 )
        {
          RtlpGetDefaultLanguageBaseOrParent(v30, v32, 0, v11, v12, &v25, &v26);
          if ( !v26 )
            return -1073741789;
          v11 = v25 + 1;
          v14 = (char *)v26 - 1;
        }
        if ( !v14 )
          return -1073741789;
        InstalledLanguageIndexByName = 0;
        *v11 = 0;
      }
    }
    v9 = (_WORD *)v29;
  }
  else
  {
    InstalledLanguageIndexByName = -1073741811;
  }
  if ( InstalledLanguageIndexByName < 0 )
    return InstalledLanguageIndexByName;
  if ( (*(_BYTE *)v9 & 2) != 0 )
  {
    v15 = v30;
    v27 = v37;
    v26 = v45;
    v25 = (wchar_t *)258;
    InstalledLanguageIndexByName = RtlpGetDefaultLanguageBaseOrParent(v30, v9, &v32, v45, 0x102u, &v26, &v25);
    if ( InstalledLanguageIndexByName < 0 )
      return InstalledLanguageIndexByName;
    if ( !v25 )
      return -1073741789;
    v16 = v26 + 1;
    v17 = (wchar_t *)((char *)v25 - 1);
    ++v26;
    v25 = v17;
    v18 = v17;
    if ( (*(_BYTE *)v29 & 4) != 0 || !v32 || (*(_BYTE *)v32 & 2) == 0 )
      goto LABEL_50;
    RtlpGetDefaultLanguageBaseOrParent(v15, v32, 0, v16, (unsigned int)v17, &v26, &v25);
    v19 = v25;
    if ( !v25 )
      return -1073741789;
    v20 = v26;
    goto LABEL_49;
  }
LABEL_63:
  RtlInitUnicodeString(&String, v33);
  if ( !RtlCultureNameToLCID(&String, &Lcid) )
    return -1073741811;
  InstalledLanguageIndexByName = ZwFlushInstallUILanguage(Lcid, 0);
  if ( InstalledLanguageIndexByName >= 0 )
  {
    if ( v27 )
    {
      RtlpSetPreferredUILanguages(8, v45, v39);
    }
    else
    {
      RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      ObjectAttributes.Length = 24;
      ObjectAttributes.ObjectName = &ValueName;
      ObjectAttributes.RootDirectory = 0;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"InstallLanguageFallback");
        NtDeleteValueKey(KeyHandle, &ValueName);
        NtClose(KeyHandle);
      }
    }
    if ( (_BYTE)v37 )
    {
      RtlpSetPreferredUILanguages(8, v44, v39);
      RtlpSetPreferredUILanguages(8, v46, v39);
    }
    else
    {
      RtlInitUnicodeString(&ValueName, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      KeyHandle = 0;
      ObjectAttributes.ObjectName = &ValueName;
      ObjectAttributes.Length = 24;
      ObjectAttributes.RootDirectory = 0;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"PreferredUILanguages");
        NtDeleteValueKey(KeyHandle, &ValueName);
        NtClose(KeyHandle);
        RtlInitUnicodeString(
          &ValueName,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
        KeyHandle = 0;
        ObjectAttributes.ObjectName = &ValueName;
        ObjectAttributes.Length = 24;
        ObjectAttributes.RootDirectory = 0;
        ObjectAttributes.Attributes = 64;
        ObjectAttributes.SecurityDescriptor = 0;
        ObjectAttributes.SecurityQualityOfService = 0;
        if ( ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
        {
          ZwDeleteKey(KeyHandle);
          NtClose(KeyHandle);
        }
        if ( OpenGlobalizationUserSettingsKey(0x2000000u, &KeyHandle) >= 0 )
        {
          RtlInitUnicodeString(&ValueName, L"Control Panel\\Desktop\\MuiCached");
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.ObjectName = &ValueName;
          ObjectAttributes.Length = 24;
          ObjectAttributes.Attributes = 64;
          ObjectAttributes.SecurityDescriptor = 0;
          ObjectAttributes.SecurityQualityOfService = 0;
          if ( ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes) >= 0 )
          {
            RtlInitUnicodeString(&ValueName, L"MachinePreferredUILanguages");
            NtDeleteValueKey(Handle, &ValueName);
            RtlInitUnicodeString(&ValueName, L"MachineLanguageConfiguration");
            NtDeleteValueKey(Handle, &ValueName);
            NtClose(Handle);
          }
          NtClose(KeyHandle);
        }
      }
    }
  }
  else if ( ZwIsUILanguageComitted() )
  {
    return -1073741790;
  }
  return InstalledLanguageIndexByName;
}
