/*
 * XREFs of ?CPPIAllUpViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18037CF90
 * Callers:
 *     ?RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUITabletModeViewManager@@@Z @ 0x18036EA8C (-RuntimeClassInitialize@CPPIAllUpViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMana.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIFrameInteractionEvents@@UISwitchItemController@@UIDismissAnimationController@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803759AC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIFrameInteractionEvent.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ @ 0x180375A1C (-InternalRelease@-$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCPPIAllUpViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabletModeViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabletModeViewManager@@@Z @ 0x18037CE4C (--$MakeAndInitialize@VCPPIAllUpViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIM.c)
 */

__int64 __fastcall CPPIAllUpViewController_CreateInstance(
        struct IWeakReference *a1,
        struct IMultitaskingViewManagerInternal *a2,
        struct IApplicationViewSwitcher *a3,
        struct IImmersiveAppCrusher *a4,
        struct ITabletModeViewManager *a5,
        const struct _GUID *a6,
        void **a7)
{
  void **v7; // rdi
  int v8; // eax
  int CanCastTo; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  _DWORD *v13; // r9
  _DWORD *v14; // rdx
  void **v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IWeakReference *v18; // [rsp+50h] [rbp+20h] BYREF
  struct IMultitaskingViewManagerInternal *v19; // [rsp+58h] [rbp+28h] BYREF
  struct IApplicationViewSwitcher *v20; // [rsp+60h] [rbp+30h] BYREF
  struct IImmersiveAppCrusher *v21; // [rsp+68h] [rbp+38h] BYREF

  v21 = a4;
  v20 = a3;
  v19 = a2;
  v18 = a1;
  v7 = a7;
  a7 = 0LL;
  *v7 = 0LL;
  Microsoft::WRL::ComPtr<CAltTabViewController>::InternalRelease((__int64 *)&a7);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CPPIAllUpViewController,CPPIAllUpViewController,WeakReference::IWeakReference * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,ITabletModeViewManager * &>(
         (CPPIAllUpViewController **)&a7,
         &v18,
         &v19,
         &v20,
         &v21,
         &a5);
  CanCastTo = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 63LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\ppiallupviewcontroller.cpp",
      (const char *)v10);
    goto LABEL_14;
  }
  *v7 = 0LL;
  if ( InlineIsEqualGUID(&GUID_66ac636f_a9ef_413d_b08e_f926afaa37f9, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v15 = a7;
    *v7 = a7;
    (*((void (__fastcall **)(void **))*v15 + 1))(v15);
    CanCastTo = 0;
    goto LABEL_14;
  }
  if ( InlineIsEqualGUID(v12, v13) )
  {
    CanCastTo = 0;
    *v7 = a7;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>::CanCastTo(
                  (__int64)(a7 + 1),
                  v14);
    if ( CanCastTo == -2147467262 )
      CanCastTo = -2147467262;
  }
  if ( CanCastTo < 0 )
  {
    v10 = (unsigned int)CanCastTo;
    v11 = 64LL;
    goto LABEL_13;
  }
  (*(void (__fastcall **)(void *))(*(_QWORD *)*v7 + 8LL))(*v7);
LABEL_14:
  Microsoft::WRL::ComPtr<CAltTabViewController>::InternalRelease((__int64 *)&a7);
  return (unsigned int)CanCastTo;
}
