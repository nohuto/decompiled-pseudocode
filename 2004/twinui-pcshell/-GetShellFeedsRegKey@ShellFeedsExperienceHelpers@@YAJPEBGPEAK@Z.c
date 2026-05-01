/*
 * XREFs of ?GetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBGPEAK@Z @ 0x1800E1CF8
 * Callers:
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800E0614 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHandling_32617668@@@details@wil@@QEAA_NXZ @ 0x1800EDAE4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpecte.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180140014 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801415F0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHKEY__@@@Z @ 0x180142248 (-reset@-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$inte.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsExperienceHelpers::GetShellFeedsRegKey(
        ShellFeedsExperienceHelpers *this,
        BYTE *a2,
        unsigned int *a3)
{
  __int64 v4; // r8
  LSTATUS v5; // eax
  unsigned int v6; // ebx
  bool v7; // cc
  unsigned int v8; // eax
  __int64 v9; // rdx
  unsigned int phkResult; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD cbData; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+44h] [rbp+Ch]
  HKEY hKey; // [rsp+48h] [rbp+10h] BYREF

  v14 = HIDWORD(this);
  *(_DWORD *)a2 = 0;
  hKey = 0LL;
  cbData = 4;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHandling_32617668>::__private_IsEnabled(
                           &`wil::Feature<__WilFeatureTraits_Feature_Servicing_IsFeedsAvailableExpectedErrorHandling_32617668>::GetImpl'::`2'::impl,
                           a2,
                           a3) )
  {
    wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
      &hKey,
      0LL,
      v4);
    v8 = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Feeds", 0, 0x20019u, &hKey);
    if ( v8 )
    {
      v9 = 163LL;
    }
    else
    {
      v8 = RegQueryValueExW(hKey, L"CTACheck", 0LL, 0LL, a2, &cbData);
      if ( !v8 )
      {
LABEL_11:
        v6 = 0;
        goto LABEL_12;
      }
      v9 = 172LL;
    }
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v9,
           (unsigned int)"internal\\shellcommonshell\\inc\\ShellFeeds\\ShellFeedsExperienceHelpers.h",
           (const char *)v8,
           phkResult);
    goto LABEL_12;
  }
  wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>::reset(
    &hKey,
    0LL,
    v4);
  v5 = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Feeds", 0, 0x20019u, &hKey);
  v6 = v5;
  v7 = v5 <= 0;
  if ( !v5 )
  {
    v5 = RegQueryValueExW(hKey, L"CTACheck", 0LL, 0LL, a2, &cbData);
    v6 = v5;
    v7 = v5 <= 0;
    if ( !v5 )
      goto LABEL_11;
  }
  if ( !v7 )
    v6 = (unsigned __int16)v5 | 0x80070000;
LABEL_12:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
  return v6;
}
