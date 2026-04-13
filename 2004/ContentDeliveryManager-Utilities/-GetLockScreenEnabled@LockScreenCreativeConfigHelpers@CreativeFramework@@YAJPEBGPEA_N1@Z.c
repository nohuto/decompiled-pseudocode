/*
 * XREFs of ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x18002D7B0
 * Callers:
 *     ?IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z @ 0x180031F80 (-IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x18000D9FC (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180016348 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33202726@@@details@wil@@QEAA_NXZ @ 0x18001788C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_3320272.c)
 *     ?GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x18002BC48 (-GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z.c)
 *     ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ @ 0x18002D4BC (-IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x18002D5B8 (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800394A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@details@wil@@QEAAX_N.c)
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
  DWORD v9; // esi
  unsigned __int16 **v10; // rdx
  CreativeFramework::Policy *v11; // rcx
  DWORD v12; // eax
  bool v13; // al
  int CurrentUserSidString; // eax
  void *v15; // rbx
  signed int v16; // edi
  int v17; // eax
  LSTATUS v18; // eax
  signed int v19; // ecx
  int v20; // eax
  HKEY v21; // r13
  DWORD LastError; // edi
  void *v23; // r13
  LSTATUS v24; // eax
  __int64 v25; // rdx
  LSTATUS ValueW; // eax
  LSTATUS v27; // eax
  unsigned int *pvData; // [rsp+28h] [rbp-58h]
  HKEY hKey; // [rsp+40h] [rbp-40h] BYREF
  LPVOID v31; // [rsp+48h] [rbp-38h] BYREF
  LPCWSTR lpSubKey[3]; // [rsp+50h] [rbp-30h] BYREF
  LPVOID pv[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  CreativeFramework::LockScreenCreativeConfigHelpers *pdwValue; // [rsp+C0h] [rbp+40h] BYREF
  DWORD v36; // [rsp+C8h] [rbp+48h] BYREF
  DWORD pcbData; // [rsp+D0h] [rbp+50h] BYREF
  DWORD v38; // [rsp+D8h] [rbp+58h] BYREF

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
      v13 = (_DWORD)pdwValue == 1;
      if ( a2 )
        *(_BYTE *)a2 = v13;
      if ( a3 )
        *a3 = v13;
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
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33202726>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33202726>::GetImpl'::`2'::impl) )
  {
    LODWORD(pdwValue) = 0;
    SLGetWindowsInformationDWORD(L"ContentDeliveryManager-License-ContentDeliveryAllowed", (DWORD *)&pdwValue);
    v12 = (unsigned int)pdwValue;
  }
  else
  {
    if ( !IsActiveSessionCountLimited() )
      goto LABEL_18;
    v36 = 0;
    SLGetWindowsInformationDWORD(L"ContentDeliveryManager-License-ContentDeliveryAllowed", &v36);
    v12 = v36;
  }
  if ( !v12 && !CreativeFramework::Policy::IsAnyMicrosoftDomainAccount(v11) )
    return 0LL;
LABEL_18:
  v31 = 0LL;
  CurrentUserSidString = CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
                           (CreativeFramework::LockScreenCreativeConfigHelpers *)&v31,
                           v10);
  v15 = v31;
  v16 = CurrentUserSidString;
  if ( CurrentUserSidString >= 0 )
  {
    memset(lpSubKey, 0, sizeof(lpSubKey));
    v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)lpSubKey,
            L"%s\\%s",
            v31,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager");
    v16 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12D,
        (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
        (const char *)(unsigned int)v17);
LABEL_51:
      if ( lpSubKey[0] )
        CoTaskMemFree((LPVOID)lpSubKey[0]);
      goto LABEL_53;
    }
    hKey = 0LL;
    v18 = RegOpenKeyExW(HKEY_USERS, lpSubKey[0], 0, 9u, &hKey);
    v19 = (unsigned __int16)v18 | 0x80070000;
    if ( v18 <= 0 )
      v19 = v18;
    if ( v19 < 0 )
    {
      memset(pv, 0, sizeof(pv));
      v9 = 0;
      v20 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
              (__int64)pv,
              L"%s\\%s",
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
              v15);
      v16 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13C,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)(unsigned int)v20);
        if ( pv[0] )
          CoTaskMemFree(pv[0]);
        goto LABEL_49;
      }
      v21 = hKey;
      if ( hKey )
      {
        LastError = GetLastError();
        RegCloseKey(v21);
        SetLastError(LastError);
      }
      v23 = pv[0];
      hKey = 0LL;
      v24 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, (LPCWSTR)pv[0], 0, 9u, &hKey);
      v16 = (unsigned __int16)v24 | 0x80070000;
      if ( v24 <= 0 )
        v16 = v24;
      if ( v23 )
        CoTaskMemFree(v23);
      if ( v16 < 0 )
      {
        v25 = 319LL;
LABEL_48:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)(unsigned int)v16);
LABEL_49:
        if ( hKey )
          RegCloseKey(hKey);
        goto LABEL_51;
      }
    }
    pcbData = 4;
    ValueW = RegGetValueW(hKey, 0LL, L"RotatingLockScreenEnabled", 0x10u, 0LL, &v36, &pcbData);
    v16 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v16 = ValueW;
    if ( v16 == -2147024894 )
    {
      v36 = v9;
    }
    else if ( v16 < 0 )
    {
      v25 = 331LL;
      goto LABEL_48;
    }
    v38 = 4;
    v27 = RegGetValueW(hKey, 0LL, L"RotatingLockScreenOverlayEnabled", 0x10u, 0LL, &pdwValue, &v38);
    v16 = (unsigned __int16)v27 | 0x80070000;
    if ( v27 <= 0 )
      v16 = v27;
    if ( v16 == -2147024894 )
    {
      LODWORD(pdwValue) = v9;
    }
    else
    {
      if ( v16 < 0 )
      {
        v25 = 344LL;
        goto LABEL_48;
      }
      v9 = (unsigned int)pdwValue;
    }
    if ( a2 )
      *(_BYTE *)a2 = v36 != 0;
    if ( a3 )
      *a3 = v9 != 0;
    if ( hKey )
      RegCloseKey(hKey);
    if ( lpSubKey[0] )
      CoTaskMemFree((LPVOID)lpSubKey[0]);
    if ( v15 )
      CoTaskMemFree(v15);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x129,
    (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
    (const char *)(unsigned int)CurrentUserSidString);
LABEL_53:
  if ( v15 )
    CoTaskMemFree(v15);
  return (unsigned int)v16;
}
