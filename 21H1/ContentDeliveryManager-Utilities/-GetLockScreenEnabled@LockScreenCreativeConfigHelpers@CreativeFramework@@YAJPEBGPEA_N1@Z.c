/*
 * XREFs of ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x18002B180
 * Callers:
 *     ?IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z @ 0x18002F920 (-IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180015BF8 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x180029618 (-GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z.c)
 *     ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ @ 0x18002AE8C (-IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x18002AF88 (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180036E48 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@details@wil@@QEAAX_N.c)
 */

__int64 __fastcall CreativeFramework::LockScreenCreativeConfigHelpers::GetLockScreenEnabled(
        CreativeFramework::LockScreenCreativeConfigHelpers *this,
        unsigned __int16 *a2,
        bool *a3,
        bool *a4)
{
  int SettingValue; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // esi
  unsigned __int16 **v10; // rdx
  CreativeFramework::Policy *v11; // rcx
  int CurrentUserSidString; // eax
  void *v13; // rbx
  signed int v14; // edi
  bool v15; // al
  int v16; // eax
  LSTATUS v17; // eax
  signed int v18; // ecx
  int v19; // eax
  HKEY v20; // r13
  DWORD LastError; // edi
  void *v22; // r13
  LSTATUS v23; // eax
  __int64 v24; // rdx
  LSTATUS ValueW; // eax
  LSTATUS v26; // eax
  unsigned int *pvData; // [rsp+28h] [rbp-58h]
  HKEY hKey; // [rsp+40h] [rbp-40h] BYREF
  LPVOID v30; // [rsp+48h] [rbp-38h] BYREF
  LPCWSTR lpSubKey[3]; // [rsp+50h] [rbp-30h] BYREF
  LPVOID pv[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  CreativeFramework::LockScreenCreativeConfigHelpers *pdwValue; // [rsp+C0h] [rbp+40h] BYREF
  int v35; // [rsp+C8h] [rbp+48h] BYREF
  DWORD pcbData; // [rsp+D0h] [rbp+50h] BYREF
  DWORD v37; // [rsp+D8h] [rbp+58h] BYREF

  pdwValue = this;
  if ( a2 )
    *(_BYTE *)a2 = 0;
  if ( a3 )
    *a3 = 0;
  SettingValue = CreativeFramework::ContentDeliveryManagerSettings::GetSettingValue(
                   (CreativeFramework::ContentDeliveryManagerSettings *)0xFFFFFFFF80000002LL,
                   (const WCHAR *)&CreativeFramework::ContentDeliveryManagerDebugSettings::c_regKeyDebugSettings,
                   L"ContentDeliveryAllowedOverride",
                   (const unsigned __int16 *)a4,
                   &pdwValue,
                   pvData);
  if ( SettingValue >= 0 )
  {
    if ( (_DWORD)pdwValue )
    {
      v15 = (_DWORD)pdwValue == 1;
      if ( a2 )
        *(_BYTE *)a2 = v15;
      if ( a3 )
        *a3 = v15;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B1,
      (__int64)"onecoreuap\\internal\\shell\\inc\\ContentDeliveryManagerSettings.h",
      (const char *)(unsigned int)SettingValue);
  }
  v9 = 1;
  LOBYTE(v7) = 1;
  LOBYTE(v8) = 3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowsSpotlightV3>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetImpl'::`2'::impl,
    v7,
    v8);
  LODWORD(pdwValue) = 0;
  SLGetWindowsInformationDWORD(L"ContentDeliveryManager-License-ContentDeliveryAllowed", (DWORD *)&pdwValue);
  if ( !(_DWORD)pdwValue && !CreativeFramework::Policy::IsAnyMicrosoftDomainAccount(v11) )
    return 0LL;
  v30 = 0LL;
  CurrentUserSidString = CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
                           (CreativeFramework::LockScreenCreativeConfigHelpers *)&v30,
                           v10);
  v13 = v30;
  v14 = CurrentUserSidString;
  if ( CurrentUserSidString >= 0 )
  {
    memset(lpSubKey, 0, sizeof(lpSubKey));
    v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)lpSubKey,
            L"%s\\%s",
            v30,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager");
    v14 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12D,
        (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
        (const char *)(unsigned int)v16);
LABEL_47:
      if ( lpSubKey[0] )
        CoTaskMemFree((LPVOID)lpSubKey[0]);
      goto LABEL_49;
    }
    hKey = 0LL;
    v17 = RegOpenKeyExW(HKEY_USERS, lpSubKey[0], 0, 9u, &hKey);
    v18 = (unsigned __int16)v17 | 0x80070000;
    if ( v17 <= 0 )
      v18 = v17;
    if ( v18 < 0 )
    {
      memset(pv, 0, sizeof(pv));
      v9 = 0;
      v19 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
              (__int64)pv,
              L"%s\\%s",
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
              v13);
      v14 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13C,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)(unsigned int)v19);
        if ( pv[0] )
          CoTaskMemFree(pv[0]);
        goto LABEL_45;
      }
      v20 = hKey;
      if ( hKey )
      {
        LastError = GetLastError();
        RegCloseKey(v20);
        SetLastError(LastError);
      }
      v22 = pv[0];
      hKey = 0LL;
      v23 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, (LPCWSTR)pv[0], 0, 9u, &hKey);
      v14 = (unsigned __int16)v23 | 0x80070000;
      if ( v23 <= 0 )
        v14 = v23;
      if ( v22 )
        CoTaskMemFree(v22);
      if ( v14 < 0 )
      {
        v24 = 319LL;
LABEL_44:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)(unsigned int)v14);
LABEL_45:
        if ( hKey )
          RegCloseKey(hKey);
        goto LABEL_47;
      }
    }
    pcbData = 4;
    ValueW = RegGetValueW(hKey, 0LL, L"RotatingLockScreenEnabled", 0x10u, 0LL, &v35, &pcbData);
    v14 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v14 = ValueW;
    if ( v14 == -2147024894 )
    {
      v35 = v9;
    }
    else if ( v14 < 0 )
    {
      v24 = 331LL;
      goto LABEL_44;
    }
    v37 = 4;
    v26 = RegGetValueW(hKey, 0LL, L"RotatingLockScreenOverlayEnabled", 0x10u, 0LL, &pdwValue, &v37);
    v14 = (unsigned __int16)v26 | 0x80070000;
    if ( v26 <= 0 )
      v14 = v26;
    if ( v14 == -2147024894 )
    {
      LODWORD(pdwValue) = v9;
    }
    else
    {
      if ( v14 < 0 )
      {
        v24 = 344LL;
        goto LABEL_44;
      }
      v9 = (int)pdwValue;
    }
    if ( a2 )
      *(_BYTE *)a2 = v35 != 0;
    if ( a3 )
      *a3 = v9 != 0;
    if ( hKey )
      RegCloseKey(hKey);
    if ( lpSubKey[0] )
      CoTaskMemFree((LPVOID)lpSubKey[0]);
    if ( v13 )
      CoTaskMemFree(v13);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x129,
    (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
    (const char *)(unsigned int)CurrentUserSidString);
LABEL_49:
  if ( v13 )
    CoTaskMemFree(v13);
  return (unsigned int)v14;
}
