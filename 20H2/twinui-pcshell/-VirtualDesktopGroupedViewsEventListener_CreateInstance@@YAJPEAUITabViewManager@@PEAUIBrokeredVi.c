/*
 * XREFs of ?VirtualDesktopGroupedViewsEventListener_CreateInstance@@YAJPEAUITabViewManager@@PEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@PEAUIInspectable@@PEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopPinnedAppsPrivate@@PEAUIVirtualDesktopGroupedViewsPolicy@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18044BB54
 * Callers:
 *     ?SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x1804306C0 (-SubscribeToServices@CVirtualDesktopComponent@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18044A688 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@@Deta.c)
 *     ??$MakeAndInitialize@VVirtualDesktopGroupedViewsEventListener@@V1@AEAPEAUITabViewManager@@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIInspectable@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopGroupedViewsEventListener@@AEAPEAUITabViewManager@@AEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIInspectable@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopPinnedAppsPrivate@@AEAPEAUIVirtualDesktopGroupedViewsPolicy@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x18044A84C (--$MakeAndInitialize@VVirtualDesktopGroupedViewsEventListener@@V1@AEAPEAUITabViewManager@@AEAPEA.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopGroupedViewsEventListener@@@WRL@Microsoft@@IEAAKXZ @ 0x18044B1E0 (-InternalRelease@-$ComPtr@VVirtualDesktopGroupedViewsEventListener@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGroupedViewsEventListener_CreateInstance(
        struct ITabViewManager *a1,
        struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter *a2,
        struct IInspectable *a3,
        struct IVirtualDesktopManagerPrivate *a4,
        struct IVirtualDesktopPinnedAppsPrivate *a5,
        struct IVirtualDesktopGroupedViewsPolicy *a6,
        struct IVirtualDesktopLock *a7,
        const struct _GUID *a8,
        void **a9)
{
  void **v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct ITabViewManager *v15; // [rsp+60h] [rbp+20h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter *v16; // [rsp+68h] [rbp+28h] BYREF
  struct IInspectable *v17; // [rsp+70h] [rbp+30h] BYREF
  struct IVirtualDesktopManagerPrivate *v18; // [rsp+78h] [rbp+38h] BYREF

  v18 = a4;
  v17 = a3;
  v16 = a2;
  v15 = a1;
  v9 = a9;
  *a9 = 0LL;
  a9 = 0LL;
  Microsoft::WRL::ComPtr<VirtualDesktopGroupedViewsEventListener>::InternalRelease((__int64 *)&a9);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopGroupedViewsEventListener,VirtualDesktopGroupedViewsEventListener,ITabViewManager * &,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter * &,IInspectable * &,IVirtualDesktopManagerPrivate * &,IVirtualDesktopPinnedAppsPrivate * &,IVirtualDesktopGroupedViewsPolicy * &,IVirtualDesktopLock * &>(
          (volatile signed __int64 **)&a9,
          &v15,
          &v16,
          &v17,
          &v18,
          &a5,
          &a6,
          &a7);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 136LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgroupedviewseventlistener.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_6;
  }
  v10 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>>(
          (__int64)a9,
          &GUID_00000000_0000_0000_c000_000000000046,
          v9);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 137LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<VirtualDesktopGroupedViewsEventListener>::InternalRelease((__int64 *)&a9);
  return v11;
}
