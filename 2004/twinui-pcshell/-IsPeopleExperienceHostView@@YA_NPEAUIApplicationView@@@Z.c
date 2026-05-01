/*
 * XREFs of ?IsPeopleExperienceHostView@@YA_NPEAUIApplicationView@@@Z @ 0x18039C850
 * Callers:
 *     ?GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x18039C6B8 (-GetViewLayoutBehaviorFlags@@YAJPEAUIApplicationView@@PEAW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 *     ?ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1803F5E50 (-ControlGainedForActivation@TabletModePositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_.c)
 *     ?InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803F9370 (-InitializePosition@TabletModePositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180030578 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_PeopleBar@@@details@wil@@QEAAX_NW4Reporti.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007C9C8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall IsPeopleExperienceHostView(struct IApplicationView *a1)
{
  char v2; // di
  __int64 v3; // rax
  LPCWCH lpString1; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  v2 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PeopleBar>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_PeopleBar>::GetImpl'::`2'::impl,
    1u);
  lpString1 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
  v3 = *(_QWORD *)a1;
  v6 = -1LL;
  v7 = -1LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, LPCWCH *))(v3 + 136))(a1, &lpString1) < 0
    || CompareStringOrdinal(lpString1, -1, L"Microsoft.Windows.PeopleExperienceHost_cw5n1h2txyewy!App", -1, 1) != 2
    && CompareStringOrdinal(lpString1, -1, L"PeopleExperienceHostVS_ccv6fwk6gx0xp!App", -1, 1) != 2 )
  {
    v2 = 0;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&lpString1);
  return v2;
}
