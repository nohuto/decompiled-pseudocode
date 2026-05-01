/*
 * XREFs of ?CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIApplicationViewSwitcher@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIImmersiveSettingsCache@@PEAUITabletModeViewManager@@PEAUIShellTargetingContractManager@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUIInspectable@@PEAUIInspectable@@PEAUIImmersiveMonitorManager@@PEAUIXamlExplorerHost@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x180387F94
 * Callers:
 *     ?s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z @ 0x18037FC20 (-s_CreateMTVManager@CMultitaskingViewServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003CC50 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCMultitaskingViewManager@@V1@UMultitaskingViewManagerInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewManager@@$$QEAUMultitaskingViewManagerInitializeArgs@3@@Z @ 0x180387AA4 (--$MakeAndInitialize@VCMultitaskingViewManager@@V1@UMultitaskingViewManagerInitializeArgs@1@@Det.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18038817C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIMultitaskingViewManag.c)
 *     ?InternalRelease@?$ComPtr@VCMultitaskingViewManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18038873C (-InternalRelease@-$ComPtr@VCMultitaskingViewManager@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CMultitaskingViewManager_CreateInstance(
        struct IMultitaskingViewServiceProvider *a1,
        struct IApplicationViewCollection *a2,
        struct IApplicationViewVisibilityDebouncedNotificationService *a3,
        struct IApplicationViewSwitcher *a4,
        struct IVirtualDesktopManagerInternal *a5,
        struct IVirtualDesktopPinnedApps *a6,
        struct ITabletModeController *a7,
        struct IVirtualDesktopNotificationService *a8,
        struct IImmersiveAppCrusher *a9,
        struct IMultitaskingViewVisibilityServiceInternal *a10,
        struct IMultitaskingViewGestureState *a11,
        struct IImmersiveSettingsCache *a12,
        struct ITabletModeViewManager *a13,
        struct IShellTargetingContractManager *a14,
        struct ISnapServiceProvider *a15,
        struct IApplicationViewIconLoader *a16,
        struct IInspectable *a17,
        struct IInspectable *a18,
        struct IImmersiveMonitorManager *a19,
        struct IXamlExplorerHost *a20,
        struct Windows::Internal::ComposableShell::Tabs::ITabDataModel *a21,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a22,
        struct ITabViewManager *a23,
        const struct _GUID *a24,
        void **a25)
{
  void **v25; // rdi
  int v26; // eax
  int CanCastTo; // ebx
  unsigned __int64 v28; // r9
  __int64 v29; // rdx
  _DWORD *v30; // rcx
  _DWORD *v31; // r9
  __int64 v32; // rdx
  void **v33; // rcx
  int v35[2]; // [rsp+20h] [rbp-B9h] BYREF
  struct IApplicationViewCollection *v36; // [rsp+28h] [rbp-B1h]
  struct IApplicationViewVisibilityDebouncedNotificationService *v37; // [rsp+30h] [rbp-A9h]
  struct IApplicationViewSwitcher *v38; // [rsp+38h] [rbp-A1h]
  struct IVirtualDesktopManagerInternal *v39; // [rsp+40h] [rbp-99h]
  struct IVirtualDesktopPinnedApps *v40; // [rsp+48h] [rbp-91h]
  struct ITabletModeController *v41; // [rsp+50h] [rbp-89h]
  struct IVirtualDesktopNotificationService *v42; // [rsp+58h] [rbp-81h]
  struct IImmersiveAppCrusher *v43; // [rsp+60h] [rbp-79h]
  struct IMultitaskingViewVisibilityServiceInternal *v44; // [rsp+68h] [rbp-71h]
  struct IMultitaskingViewGestureState *v45; // [rsp+70h] [rbp-69h]
  struct IImmersiveSettingsCache *v46; // [rsp+78h] [rbp-61h]
  struct ITabletModeViewManager *v47; // [rsp+80h] [rbp-59h]
  struct IShellTargetingContractManager *v48; // [rsp+88h] [rbp-51h]
  struct ISnapServiceProvider *v49; // [rsp+90h] [rbp-49h]
  struct IApplicationViewIconLoader *v50; // [rsp+98h] [rbp-41h]
  struct IImmersiveMonitorManager *v51; // [rsp+A0h] [rbp-39h]
  struct IXamlExplorerHost *v52; // [rsp+A8h] [rbp-31h]
  struct IInspectable *v53; // [rsp+B0h] [rbp-29h]
  struct IInspectable *v54; // [rsp+B8h] [rbp-21h]
  struct Windows::Internal::ComposableShell::Tabs::ITabDataModel *v55; // [rsp+C0h] [rbp-19h]
  struct Windows::Internal::ComposableShell::Tabs::ITabController *v56; // [rsp+C8h] [rbp-11h]
  struct ITabViewManager *v57; // [rsp+D0h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+Fh]

  v25 = a25;
  a25 = 0LL;
  v39 = a5;
  *v25 = 0LL;
  v40 = a6;
  v41 = a7;
  v42 = a8;
  v43 = a9;
  v44 = a10;
  v45 = a11;
  v46 = a12;
  v47 = a13;
  v48 = a14;
  v49 = a15;
  v50 = a16;
  v51 = a19;
  v52 = a20;
  v53 = a17;
  v54 = a18;
  v55 = a21;
  v56 = a22;
  *(_QWORD *)v35 = a1;
  v57 = a23;
  v36 = a2;
  v37 = a3;
  v38 = a4;
  Microsoft::WRL::ComPtr<CMultitaskingViewManager>::InternalRelease(&a25);
  v26 = Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewManager,CMultitaskingViewManager,CMultitaskingViewManager::MultitaskingViewManagerInitializeArgs>(
          (CMultitaskingViewManager **)&a25,
          (const struct CMultitaskingViewManager::MultitaskingViewManagerInitializeArgs *)v35);
  CanCastTo = v26;
  if ( v26 < 0 )
  {
    v28 = (unsigned int)v26;
    v29 = 713LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
      (const char *)v28);
    goto LABEL_12;
  }
  *v25 = 0LL;
  if ( InlineIsEqualGUID(&GUID_537b455d_1240_433b_82af_10929138b8be, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v33 = a25;
    *v25 = a25;
    (*((void (__fastcall **)(void **))*v33 + 1))(v33);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v30, v31) )
    {
      CanCastTo = 0;
      *v25 = a25;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>::CanCastTo(
                    a25 + 1,
                    v32,
                    v25);
      if ( CanCastTo < 0 )
        goto LABEL_9;
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v25 + 8LL))(*v25);
  }
LABEL_9:
  if ( CanCastTo < 0 )
  {
    v28 = (unsigned int)CanCastTo;
    v29 = 714LL;
    goto LABEL_11;
  }
LABEL_12:
  Microsoft::WRL::ComPtr<CMultitaskingViewManager>::InternalRelease(&a25);
  return (unsigned int)CanCastTo;
}
