/*
 * XREFs of ?CSnapAssistViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManager@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x18039C7AC
 * Callers:
 *     ?RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewManagerInternal@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIImmersiveAppCrusher@@PEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabViewManager@@@Z @ 0x18038E1BC (-RuntimeClassInitialize@CSnapAssistViewHost@@QEAAJPEAUIMultitaskingData@@PEAUIMultitaskingViewMa.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCSnapAssistViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCSnapAssistViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManager@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabController@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabViewManager@@@Z @ 0x18039C468 (--$MakeAndInitialize@VCSnapAssistViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAU.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCMultitaskingViewControllerBase@@@Details@23@UISnapAssistViewController@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18039C8A4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_18039C8A4.c)
 *     ?InternalRelease@?$ComPtr@VCSnapAssistViewController@@@WRL@Microsoft@@IEAAKXZ @ 0x18039C91C (-InternalRelease@-$ComPtr@VCSnapAssistViewController@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CSnapAssistViewController_CreateInstance(
        struct IWeakReference *a1,
        struct IMultitaskingViewManager *a2,
        struct IImmersiveAppCrusher *a3,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a4,
        struct ITabViewManager *a5,
        const struct _GUID *a6,
        void **a7)
{
  void **v7; // rdi
  int v8; // eax
  int CanCastTo; // ebx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  void **v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IWeakReference *v16; // [rsp+50h] [rbp+20h] BYREF
  struct IMultitaskingViewManager *v17; // [rsp+58h] [rbp+28h] BYREF
  struct IImmersiveAppCrusher *v18; // [rsp+60h] [rbp+30h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::ITabController *v19; // [rsp+68h] [rbp+38h] BYREF

  v19 = a4;
  v18 = a3;
  v17 = a2;
  v16 = a1;
  v7 = a7;
  a7 = 0LL;
  *v7 = 0LL;
  Microsoft::WRL::ComPtr<CSnapAssistViewController>::InternalRelease(&a7);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<CSnapAssistViewController,CSnapAssistViewController,WeakReference::IWeakReference * &,IMultitaskingViewManager * &,IImmersiveAppCrusher * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITabViewManager * &>(
         (CSnapAssistViewController **)&a7,
         &v16,
         &v17,
         &v18,
         &v19,
         &a5);
  CanCastTo = v8;
  if ( v8 < 0 )
  {
    v10 = (unsigned int)v8;
    v11 = 132LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\snapassistviewcontroller.cpp",
      (const char *)v10);
    goto LABEL_10;
  }
  *v7 = 0LL;
  if ( InlineIsEqualGUID(&GUID_66ac636f_a9ef_413d_b08e_f926afaa37f9, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v13 = a7;
    *v7 = a7;
    (*((void (__fastcall **)(void **))*v13 + 1))(v13);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewControllerBase>,ISnapAssistViewController>::CanCastTo(
                  a7,
                  v12,
                  v7);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v7 + 8LL))(*v7);
  }
  if ( CanCastTo < 0 )
  {
    v10 = (unsigned int)CanCastTo;
    v11 = 133LL;
    goto LABEL_9;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<CSnapAssistViewController>::InternalRelease(&a7);
  return (unsigned int)CanCastTo;
}
