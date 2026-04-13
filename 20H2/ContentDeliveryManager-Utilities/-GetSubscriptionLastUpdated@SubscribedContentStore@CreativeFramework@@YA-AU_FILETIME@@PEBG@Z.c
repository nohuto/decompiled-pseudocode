/*
 * XREFs of ?GetSubscriptionLastUpdated@SubscribedContentStore@CreativeFramework@@YA?AU_FILETIME@@PEBG@Z @ 0x180043268
 * Callers:
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180044AA0 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18004599C (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800160E8 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@Z @ 0x18002B8FC (-GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@.c)
 */

// Hidden C++ exception states: #wind=2
struct _FILETIME __fastcall CreativeFramework::SubscribedContentStore::GetSubscriptionLastUpdated(
        CreativeFramework::SubscribedContentStore *this,
        const unsigned __int16 *a2)
{
  int v2; // eax
  const unsigned __int16 *v3; // r8
  wil::details::in1diag3 *v4; // rcx
  void *v5; // rbx
  int FileTimeSetting; // eax
  LPVOID pv[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF

  memset(pv, 0, 24);
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)pv,
         L"%s\\%s",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
         this,
         -2LL);
  v4 = retaddr;
  if ( v2 < 0 )
  {
LABEL_7:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x36,
      (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStoreShared.h",
      (const char *)(unsigned int)v2);
    JUMPOUT(0x180043322LL);
  }
  v5 = pv[0];
  LOBYTE(v3) = 1;
  FileTimeSetting = CreativeFramework::ContentDeliveryManagerSettings::GetFileTimeSetting(
                      (const WCHAR *)pv[0],
                      L"LastUpdated",
                      v3,
                      &v10);
  if ( FileTimeSetting < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStore.h",
      (const char *)(unsigned int)FileTimeSetting);
    goto LABEL_7;
  }
  if ( v5 )
    CoTaskMemFree(v5);
  return (struct _FILETIME)v10;
}
