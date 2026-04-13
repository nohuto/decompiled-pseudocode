/*
 * XREFs of ?SetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAXPEAUHSTRING__@@PEB_W0@Z @ 0x1800A34F8
 * Callers:
 *     ?SetBoundedLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0@Z @ 0x1800A3608 (-SetBoundedLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@.c)
 *     ?SetChosenLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0@Z @ 0x1800A3638 (-SetChosenLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAAJPEB_WZZ @ 0x1800160E8 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@QEAA.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00@Z @ 0x1800A1F88 (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00@Z.c)
 *     ?GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z @ 0x1800A310C (-GetAdUnitIdFromSubscriptionId@TargetedContent@CreativeFramework@@YAPEB_WPEB_W_N@Z.c)
 *     ?ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ @ 0x1800A32EC (-ShouldUseInternal@Policy@CreativeFramework@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::Settings::SetLayoutType(
        CreativeFramework::Policy *string,
        const WCHAR *lpValueName,
        HSTRING a3,
        HSTRING a4)
{
  char ShouldUseInternal; // di
  const WCHAR *StringRawBuffer; // rax
  const wchar_t *v9; // rdx
  LPCWCH AdUnitIdFromSubscriptionId; // rax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  WCHAR *v13; // rbx
  WCHAR *v14; // rax
  const wchar_t *v15; // r9
  int v16; // eax
  LPVOID pv[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  ShouldUseInternal = CreativeFramework::Policy::ShouldUseInternal(string);
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)string, 0LL);
  LOBYTE(v9) = ShouldUseInternal;
  AdUnitIdFromSubscriptionId = CreativeFramework::TargetedContent::GetAdUnitIdFromSubscriptionId(StringRawBuffer, v9);
  memset(pv, 0, 24);
  v11 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<wchar_t>>::InitializeFormat(
          (__int64)pv,
          L"%s\\%s",
          L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\Subscriptions",
          AdUnitIdFromSubscriptionId,
          -2LL);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_7:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x36,
      (__int64)"onecoreuap\\internal\\shell\\inc\\SubscribedContentStoreShared.h",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x1800A3601LL);
  }
  v13 = (WCHAR *)pv[0];
  v14 = (WCHAR *)WindowsGetStringRawBuffer(a3, 0LL);
  v16 = CreativeFramework::ContentDeliveryManagerSettings::SetStringSetting(v13, lpValueName, v14, v15);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x35,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_7;
  }
  if ( v13 )
    CoTaskMemFree(v13);
}
