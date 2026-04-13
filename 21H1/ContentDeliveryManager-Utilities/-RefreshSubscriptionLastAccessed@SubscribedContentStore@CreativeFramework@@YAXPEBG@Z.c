/*
 * XREFs of ?RefreshSubscriptionLastAccessed@SubscribedContentStore@CreativeFramework@@YAXPEBG@Z @ 0x180040F8C
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180041BAC (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x180015BF8 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z @ 0x1800297FC (-SetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0U_FILETIME@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::SubscribedContentStore::RefreshSubscriptionLastAccessed(
        CreativeFramework::SubscribedContentStore *this,
        const unsigned __int16 *a2)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  WCHAR *v4; // rbx
  struct _FILETIME v5; // r9
  int v6; // eax
  LPVOID pv[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+60h] [rbp+18h] BYREF

  memset(pv, 0, 24);
  v2 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
         (__int64)pv,
         L"%s\\%s",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
         this,
         -2LL);
  v3 = retaddr;
  if ( v2 < 0 )
  {
LABEL_7:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x36,
      (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStoreShared.h",
      (const char *)(unsigned int)v2);
    JUMPOUT(0x18004104FLL);
  }
  v4 = (WCHAR *)pv[0];
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v6 = CreativeFramework::ContentDeliveryManagerSettings::SetFileTimeSetting(
         v4,
         L"LastAccessed",
         *(const unsigned __int16 **)&SystemTimeAsFileTime,
         v5);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x93,
      (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStore.h",
      (const char *)(unsigned int)v6);
    goto LABEL_7;
  }
  if ( v4 )
    CoTaskMemFree(v4);
}
