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
  const unsigned __int16 *v11; // eax
  unsigned int v12; // ecx
  bool v13; // zf
  char *v14; // edx
  int v15; // edi
  const unsigned __int16 *v16; // eax
  const unsigned __int16 *v17; // ecx
  const unsigned __int16 *v18; // edx
  const unsigned __int16 *v19; // edx
  const unsigned __int16 *v20; // eax
  unsigned int v21; // ecx
  const unsigned __int16 *v23; // [esp+10h] [ebp-530h] BYREF
  unsigned __int16 *v24; // [esp+14h] [ebp-52Ch] BYREF
  char v25; // [esp+1Bh] [ebp-525h]
  HANDLE Handle; // [esp+1Ch] [ebp-524h] BYREF
  int v27; // [esp+20h] [ebp-520h] BYREF
  int v28; // [esp+24h] [ebp-51Ch] BYREF
  UNICODE_STRING v29; // [esp+28h] [ebp-518h] BYREF
  _WORD *v30; // [esp+30h] [ebp-510h] BYREF
  PCWSTR v31; // [esp+34h] [ebp-50Ch]
  int v32; // [esp+38h] [ebp-508h] BYREF
  HANDLE v33; // [esp+3Ch] [ebp-504h] BYREF
  int v34; // [esp+40h] [ebp-500h] BYREF
  HANDLE v35; // [esp+44h] [ebp-4FCh]
  UNICODE_STRING *v36; // [esp+48h] [ebp-4F8h]
  int v37; // [esp+4Ch] [ebp-4F4h]
  int v38; // [esp+50h] [ebp-4F0h]
  int v39; // [esp+54h] [ebp-4ECh]
  int v40; // [esp+58h] [ebp-4E8h]
  UNICODE_STRING v41; // [esp+5Ch] [ebp-4E4h] BYREF
  char v42[4]; // [esp+64h] [ebp-4DCh] BYREF
  __int16 *v43; // [esp+68h] [ebp-4D8h]
  int v44; // [esp+6Ch] [ebp-4D4h]
  UNICODE_STRING DestinationString; // [esp+70h] [ebp-4D0h] BYREF
  unsigned __int16 v46[88]; // [esp+78h] [ebp-4C8h] BYREF
  _WORD v47[88]; // [esp+128h] [ebp-418h] BYREF
  unsigned __int16 v48[260]; // [esp+1D8h] [ebp-368h] BYREF
  _WORD v49[174]; // [esp+3E0h] [ebp-160h] BYREF

  v2 = SourceString;
  v31 = SourceString;
  Handle = 0;
  v33 = 0;
  v25 = 0;
  LOBYTE(v40) = 0;
  if ( !SourceString )
    return -1073741811;
  if ( (a1 & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    InstalledLanguageIndexByName = RtlUnicodeStringToLcid(&DestinationString.Length, &v32);
    if ( InstalledLanguageIndexByName < 0 )
      return InstalledLanguageIndexByName;
    v41.MaximumLength = 172;
    v41.Buffer = v46;
    if ( !RtlLCIDToCultureName(v32, &v41.Length) )
      return -1073741811;
    v2 = v46;
    v31 = v46;
  }
  else
  {
    if ( (a1 & 8) == 0 )
      return -1073741811;
    RtlInitUnicodeString(&v41, SourceString);
    if ( !RtlCultureNameToLCID(&v41.Length, &v32) )
      return -1073741811;
  }
  InstalledLanguageIndexByName = RtlpCreateProcessRegistryInfo(&v28);
  if ( InstalledLanguageIndexByName < 0 )
    return InstalledLanguageIndexByName;
  v4 = v28;
  if ( !v28 )
    return -1073741823;
  LOWORD(v24) = -1;
  if ( !v2 )
  {
    InstalledLanguageIndexByName = -1073741811;
    goto LABEL_18;
  }
  InstalledLanguageIndexByName = RtlpMuiRegGetInstalledLanguageIndexByName(v28, v2, 0, &v24);
  if ( InstalledLanguageIndexByName < 0 )
  {
    v4 = v28;
LABEL_18:
    v6 = v44;
    v5 = v43;
    goto LABEL_19;
  }
  v5 = (__int16 *)(*(_DWORD *)(*(_DWORD *)(v28 + 20) + 12) + 28 * (__int16)v24);
  if ( *v5 < 0 )
    return -1073741275;
  v4 = v28;
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
    v25 = 1;
    if ( !v5 )
    {
      InstalledLanguageIndexByName = -1073741811;
LABEL_62:
      if ( InstalledLanguageIndexByName < 0 )
        return InstalledLanguageIndexByName;
      goto LABEL_63;
    }
    v23 = v48;
    v27 = 258;
    InstalledLanguageIndexByName = RtlpGetDefaultLanguageBaseOrParent(v4, v5, &v30, v48, 0x102u, &v23, &v27);
    if ( InstalledLanguageIndexByName < 0 )
      return InstalledLanguageIndexByName;
    if ( !v27 )
      return -1073741789;
    v16 = v23 + 1;
    v21 = v27 - 1;
    v13 = (*(_BYTE *)v5 & 4) == 0;
    v18 = (const unsigned __int16 *)(v27 - 1);
    ++v23;
    --v27;
    if ( !v13 || !v30 || (*(_BYTE *)v30 & 2) == 0 )
    {
LABEL_50:
      if ( !v18 )
        return -1073741789;
      InstalledLanguageIndexByName = 0;
      *v16 = 0;
      goto LABEL_62;
    }
    RtlpGetDefaultLanguageBaseOrParent(v28, v30, 0, v16, v21, &v23, &v27);
    v19 = (const unsigned __int16 *)v27;
    if ( !v27 )
      return -1073741789;
    v20 = v23;
LABEL_49:
    v16 = v20 + 1;
    v18 = (const unsigned __int16 *)((char *)v19 - 1);
    goto LABEL_50;
  }
  if ( v8 != 2 )
    return -1073741811;
  v40 = 1;
  memset(v47, 0, 0xACu);
  RtlStringCchCopyW(v47, 85, (int)v31);
  v31 = v46;
  memset(v46, 0, 0xACu);
  InstalledLanguageIndexByName = RtlpGetDefaultLanguageBaseOrParent(v28, v5, &v27, v46, 0x55u, 0, 0);
  if ( InstalledLanguageIndexByName < 0 )
    return InstalledLanguageIndexByName;
  v9 = (_WORD *)v27;
  if ( !v27 )
    return -1073741637;
  if ( v5 )
  {
    InstalledLanguageIndexByName = RtlStringCchCopyExW(v49, 172, v47, &v23, (int *)&v24, v27);
    if ( InstalledLanguageIndexByName >= 0 )
    {
      v10 = (int)v24;
      if ( !v24 )
        return -1073741789;
      v24 = (unsigned __int16 *)((char *)v24 - 1);
      ++v23;
      InstalledLanguageIndexByName = RtlpGetDefaultLanguageBaseOrParent(v28, v5, &v30, v23, v10 - 1, &v23, &v24);
      if ( InstalledLanguageIndexByName >= 0 )
      {
        if ( !v24 )
          return -1073741789;
        v11 = v23 + 1;
        v12 = (unsigned int)v24 - 1;
        v13 = (*(_BYTE *)v5 & 4) == 0;
        v14 = (char *)v24 - 1;
        ++v23;
        v24 = (unsigned __int16 *)((char *)v24 - 1);
        if ( v13 && v30 && (*(_BYTE *)v30 & 2) != 0 )
        {
          RtlpGetDefaultLanguageBaseOrParent(v28, v30, 0, v11, v12, &v23, &v24);
          if ( !v24 )
            return -1073741789;
          v11 = v23 + 1;
          v14 = (char *)v24 - 1;
        }
        if ( !v14 )
          return -1073741789;
        InstalledLanguageIndexByName = 0;
        *v11 = 0;
      }
    }
    v9 = (_WORD *)v27;
  }
  else
  {
    InstalledLanguageIndexByName = -1073741811;
  }
  if ( InstalledLanguageIndexByName < 0 )
    return InstalledLanguageIndexByName;
  if ( (*(_BYTE *)v9 & 2) != 0 )
  {
    v15 = v28;
    v25 = v40;
    v24 = v48;
    v23 = (const unsigned __int16 *)258;
    InstalledLanguageIndexByName = RtlpGetDefaultLanguageBaseOrParent(v28, v9, &v30, v48, 0x102u, &v24, &v23);
    if ( InstalledLanguageIndexByName < 0 )
      return InstalledLanguageIndexByName;
    if ( !v23 )
      return -1073741789;
    v16 = v24 + 1;
    v17 = (const unsigned __int16 *)((char *)v23 - 1);
    ++v24;
    v23 = v17;
    v18 = v17;
    if ( (*(_BYTE *)v27 & 4) != 0 || !v30 || (*(_BYTE *)v30 & 2) == 0 )
      goto LABEL_50;
    RtlpGetDefaultLanguageBaseOrParent(v15, v30, 0, v16, (unsigned int)v17, &v24, &v23);
    v19 = v23;
    if ( !v23 )
      return -1073741789;
    v20 = v24;
    goto LABEL_49;
  }
LABEL_63:
  RtlInitUnicodeString(&v41, v31);
  if ( !RtlCultureNameToLCID(&v41.Length, &v32) )
    return -1073741811;
  InstalledLanguageIndexByName = ZwFlushInstallUILanguage((unsigned __int16)v32, 0);
  if ( InstalledLanguageIndexByName >= 0 )
  {
    if ( v25 )
    {
      RtlpSetPreferredUILanguages(8, v48, v42);
    }
    else
    {
      RtlInitUnicodeString(&v29, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v34 = 24;
      v36 = &v29;
      v35 = 0;
      v37 = 64;
      v38 = 0;
      v39 = 0;
      if ( ZwOpenKey((int)&Handle, 983103, (int)&v34) >= 0 )
      {
        RtlInitUnicodeString(&v29, L"InstallLanguageFallback");
        NtDeleteValueKey((int)Handle, (int)&v29);
        NtClose(Handle);
      }
    }
    if ( (_BYTE)v40 )
    {
      RtlpSetPreferredUILanguages(8, v47, v42);
      RtlpSetPreferredUILanguages(8, v49, v42);
    }
    else
    {
      RtlInitUnicodeString(&v29, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
      Handle = 0;
      v36 = &v29;
      v34 = 24;
      v35 = 0;
      v37 = 64;
      v38 = 0;
      v39 = 0;
      if ( ZwOpenKey((int)&Handle, 983103, (int)&v34) >= 0 )
      {
        RtlInitUnicodeString(&v29, L"PreferredUILanguages");
        NtDeleteValueKey((int)Handle, (int)&v29);
        NtClose(Handle);
        RtlInitUnicodeString(
          &v29,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings\\LanguageConfiguration");
        Handle = 0;
        v36 = &v29;
        v34 = 24;
        v35 = 0;
        v37 = 64;
        v38 = 0;
        v39 = 0;
        if ( ZwOpenKey((int)&Handle, 983103, (int)&v34) >= 0 )
        {
          ZwDeleteKey((int)Handle);
          NtClose(Handle);
        }
        if ( OpenGlobalizationUserSettingsKey((void *)0x2000000, (int)&Handle) >= 0 )
        {
          RtlInitUnicodeString(&v29, L"Control Panel\\Desktop\\MuiCached");
          v35 = Handle;
          v36 = &v29;
          v34 = 24;
          v37 = 64;
          v38 = 0;
          v39 = 0;
          if ( ZwOpenKey((int)&v33, 983103, (int)&v34) >= 0 )
          {
            RtlInitUnicodeString(&v29, L"MachinePreferredUILanguages");
            NtDeleteValueKey((int)v33, (int)&v29);
            RtlInitUnicodeString(&v29, L"MachineLanguageConfiguration");
            NtDeleteValueKey((int)v33, (int)&v29);
            NtClose(v33);
          }
          NtClose(Handle);
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
