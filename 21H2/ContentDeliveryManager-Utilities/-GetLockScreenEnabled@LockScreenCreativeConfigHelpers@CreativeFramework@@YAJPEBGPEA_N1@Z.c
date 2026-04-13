/*
 * XREFs of ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x18002DF70
 * Callers:
 *     ?IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z @ 0x180032770 (-IsLockScreenEnabled@ContentManagementService@ContentManagement@@UEAAJPEAE0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CE30 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180016558 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x18002C408 (-GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z.c)
 *     ?IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ @ 0x18002DC7C (-IsAnyMicrosoftDomainAccount@Policy@CreativeFramework@@YA_NXZ.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x18002DD78 (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180039AFC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowsSpotlightV3@@@det.c)
 */

__int64 __fastcall CreativeFramework::LockScreenCreativeConfigHelpers::GetLockScreenEnabled(
        CreativeFramework::LockScreenCreativeConfigHelpers *this,
        unsigned __int16 *a2,
        bool *a3,
        bool *a4)
{
  int SettingValue; // eax
  unsigned int v7; // r8d
  int v8; // esi
  unsigned __int16 **v9; // rdx
  CreativeFramework::Policy *v10; // rcx
  int CurrentUserSidString; // eax
  void *v12; // rbx
  signed int v13; // edi
  bool v14; // al
  int v15; // eax
  LSTATUS v16; // eax
  signed int v17; // ecx
  int v18; // eax
  HKEY v19; // r13
  DWORD LastError; // edi
  void *v21; // r13
  LSTATUS v22; // eax
  __int64 v23; // rdx
  LSTATUS ValueW; // eax
  LSTATUS v25; // eax
  unsigned int *pvData; // [rsp+28h] [rbp-51h]
  HKEY hKey; // [rsp+40h] [rbp-39h] BYREF
  int v29; // [rsp+48h] [rbp-31h] BYREF
  char v30; // [rsp+4Ch] [rbp-2Dh]
  DWORD pcbData; // [rsp+50h] [rbp-29h] BYREF
  DWORD v32; // [rsp+54h] [rbp-25h] BYREF
  LPVOID v33; // [rsp+58h] [rbp-21h] BYREF
  LPCWSTR lpSubKey[3]; // [rsp+60h] [rbp-19h] BYREF
  LPVOID pv[3]; // [rsp+78h] [rbp-1h] BYREF
  _BYTE v36[64]; // [rsp+90h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  CreativeFramework::LockScreenCreativeConfigHelpers *pdwValue; // [rsp+E0h] [rbp+67h] BYREF
  int v39; // [rsp+E8h] [rbp+6Fh] BYREF
  int v40; // [rsp+F0h] [rbp+77h] BYREF
  int v41; // [rsp+F8h] [rbp+7Fh] BYREF

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
                   &v41,
                   pvData);
  if ( SettingValue >= 0 )
  {
    if ( v41 )
    {
      v14 = v41 == 1;
      if ( a2 )
        *(_BYTE *)a2 = v14;
      if ( a3 )
        *a3 = v14;
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
  v7 = `wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetImpl'::`2'::impl & 4) == 0 )
  {
    pdwValue = *(CreativeFramework::LockScreenCreativeConfigHelpers **)wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetCachedFeatureEnabledState(
                                                                         &`wil::Feature<__WilFeatureTraits_Feature_WindowsSpotlightV3>::GetImpl'::`2'::impl,
                                                                         v36);
    v7 = (unsigned int)pdwValue;
  }
  v8 = 1;
  v29 = 4;
  v30 = 3;
  wil::details::ReportUsageToService(
    (volatile signed __int32 *)&unk_18019D118,
    0xA836A7u,
    (v7 >> 10) & 1,
    (v7 >> 11) & 1,
    (__int64)&v29,
    1u,
    3);
  LODWORD(pdwValue) = 0;
  SLGetWindowsInformationDWORD(L"ContentDeliveryManager-License-ContentDeliveryAllowed", (DWORD *)&pdwValue);
  if ( !(_DWORD)pdwValue && !CreativeFramework::Policy::IsAnyMicrosoftDomainAccount(v10) )
    return 0LL;
  v33 = 0LL;
  CurrentUserSidString = CreativeFramework::LockScreenCreativeConfigHelpers::GetCurrentUserSidString(
                           (CreativeFramework::LockScreenCreativeConfigHelpers *)&v33,
                           v9);
  v12 = v33;
  v13 = CurrentUserSidString;
  if ( CurrentUserSidString >= 0 )
  {
    memset(lpSubKey, 0, sizeof(lpSubKey));
    v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
            (__int64)lpSubKey,
            L"%s\\%s",
            v33,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager");
    v13 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12D,
        (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
        (const char *)(unsigned int)v15);
LABEL_49:
      if ( lpSubKey[0] )
        CoTaskMemFree((LPVOID)lpSubKey[0]);
      goto LABEL_51;
    }
    hKey = 0LL;
    v16 = RegOpenKeyExW(HKEY_USERS, lpSubKey[0], 0, 9u, &hKey);
    v17 = (unsigned __int16)v16 | 0x80070000;
    if ( v16 <= 0 )
      v17 = v16;
    if ( v17 < 0 )
    {
      memset(pv, 0, sizeof(pv));
      v8 = 0;
      v18 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
              (__int64)pv,
              L"%s\\%s",
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
              v12);
      v13 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x13C,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)(unsigned int)v18);
        if ( pv[0] )
          CoTaskMemFree(pv[0]);
        goto LABEL_47;
      }
      v19 = hKey;
      if ( hKey )
      {
        LastError = GetLastError();
        RegCloseKey(v19);
        SetLastError(LastError);
      }
      v21 = pv[0];
      hKey = 0LL;
      v22 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, (LPCWSTR)pv[0], 0, 9u, &hKey);
      v13 = (unsigned __int16)v22 | 0x80070000;
      if ( v22 <= 0 )
        v13 = v22;
      if ( v21 )
        CoTaskMemFree(v21);
      if ( v13 < 0 )
      {
        v23 = 319LL;
LABEL_46:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v23,
          (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
          (const char *)(unsigned int)v13);
LABEL_47:
        if ( hKey )
          RegCloseKey(hKey);
        goto LABEL_49;
      }
    }
    pcbData = 4;
    ValueW = RegGetValueW(hKey, 0LL, L"RotatingLockScreenEnabled", 0x10u, 0LL, &v40, &pcbData);
    v13 = (unsigned __int16)ValueW | 0x80070000;
    if ( ValueW <= 0 )
      v13 = ValueW;
    if ( v13 == -2147024894 )
    {
      v40 = v8;
    }
    else if ( v13 < 0 )
    {
      v23 = 331LL;
      goto LABEL_46;
    }
    v32 = 4;
    v25 = RegGetValueW(hKey, 0LL, L"RotatingLockScreenOverlayEnabled", 0x10u, 0LL, &v39, &v32);
    v13 = (unsigned __int16)v25 | 0x80070000;
    if ( v25 <= 0 )
      v13 = v25;
    if ( v13 == -2147024894 )
    {
      v39 = v8;
    }
    else
    {
      if ( v13 < 0 )
      {
        v23 = 344LL;
        goto LABEL_46;
      }
      v8 = v39;
    }
    if ( a2 )
      *(_BYTE *)a2 = v40 != 0;
    if ( a3 )
      *a3 = v8 != 0;
    if ( hKey )
      RegCloseKey(hKey);
    if ( lpSubKey[0] )
      CoTaskMemFree((LPVOID)lpSubKey[0]);
    if ( v12 )
      CoTaskMemFree(v12);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x129,
    (__int64)"onecoreuap\\internal\\shell\\inc\\LockScreenCreativeConfigHelpers.h",
    (const char *)(unsigned int)CurrentUserSidString);
LABEL_51:
  if ( v12 )
    CoTaskMemFree(v12);
  return (unsigned int)v13;
}
