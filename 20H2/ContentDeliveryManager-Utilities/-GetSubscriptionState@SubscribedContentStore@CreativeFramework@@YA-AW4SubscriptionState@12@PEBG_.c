/*
 * XREFs of ?GetSubscriptionState@SubscribedContentStore@CreativeFramework@@YA?AW4SubscriptionState@12@PEBG_N@Z @ 0x18004332C
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180043DBC (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000CC90 (-ReportUsageToService@details@wil@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGG.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800160E8 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@Z @ 0x18002B8FC (-GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x180047AC8 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TargetedContentAPI@@@det.c)
 */

// Hidden C++ exception states: #wind=5
_BOOL8 __fastcall CreativeFramework::SubscribedContentStore::GetSubscriptionState(__int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *v2; // rcx
  unsigned int v3; // r8d
  const unsigned __int16 *v4; // r8
  int FileTimeSetting; // eax
  unsigned __int64 v6; // rbx
  BOOL v7; // ebx
  struct _FILETIME v9; // [rsp+48h] [rbp-9h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp-1h]
  bool v11[8]; // [rsp+58h] [rbp+7h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+60h] [rbp+Fh] BYREF
  LPVOID pv[3]; // [rsp+68h] [rbp+17h] BYREF
  int v14; // [rsp+80h] [rbp+2Fh]
  LPVOID v15; // [rsp+88h] [rbp+37h]
  __int64 v16; // [rsp+90h] [rbp+3Fh]
  __int64 v17; // [rsp+98h] [rbp+47h]
  _BYTE v18[8]; // [rsp+A0h] [rbp+4Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v16 = -2LL;
  v14 = 0;
  v15 = 0LL;
  memset(pv, 0, sizeof(pv));
  v1 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)pv,
         L"%s\\%s",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
         a1);
  v2 = retaddr;
  if ( v1 < 0 )
  {
LABEL_9:
    wil::details::in1diag3::Throw_Hr(
      v2,
      (void *)0x36,
      (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStoreShared.h",
      (const char *)(unsigned int)v1);
    JUMPOUT(0x1800434D2LL);
  }
  v15 = pv[0];
  v17 = 0LL;
  v3 = `wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl & 2) == 0 )
  {
    v10 = *(_QWORD *)wil::details::FeatureImpl<__WilFeatureTraits_Feature_TargetedContentAPI>::GetCachedFeatureEnabledState(
                       &`wil::Feature<__WilFeatureTraits_Feature_TargetedContentAPI>::GetImpl'::`2'::impl,
                       v18);
    v3 = v10;
  }
  v9.dwLowDateTime = 0;
  LOBYTE(v9.dwHighDateTime) = 3;
  wil::details::ReportUsageToService(
    (signed __int32 *)&unk_180199168,
    0x7EA375u,
    (v3 >> 8) & 1,
    (v3 >> 9) & 1,
    (const struct FEATURE_LOGGED_TRAITS *)&v9,
    1,
    3);
  LOBYTE(v4) = 1;
  FileTimeSetting = CreativeFramework::ContentDeliveryManagerSettings::GetFileTimeSetting(
                      (const WCHAR *)pv[0],
                      L"LastAccessed",
                      v4,
                      v11);
  if ( FileTimeSetting < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStore.h",
      (const char *)(unsigned int)FileTimeSetting);
    goto LABEL_9;
  }
  v6 = *(unsigned int *)v11 + ((unsigned __int64)*(unsigned int *)&v11[4] << 32) + 2592000000000LL;
  v10 = v6;
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v7 = (unsigned int)v6 + ((unsigned __int64)HIDWORD(v10) << 32) > SystemTimeAsFileTime.dwLowDateTime
                                                                 + (HIDWORD(*(unsigned __int64 *)&SystemTimeAsFileTime) << 32);
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return v7;
}
