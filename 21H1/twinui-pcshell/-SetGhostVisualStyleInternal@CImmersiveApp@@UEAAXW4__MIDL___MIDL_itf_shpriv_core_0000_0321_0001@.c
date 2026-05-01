/*
 * XREFs of ?SetGhostVisualStyleInternal@CImmersiveApp@@UEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0321_0001@@@Z @ 0x18015DA40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800301F0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::SetGhostVisualStyleInternal(__int64 a1, int a2)
{
  if ( a2 != *(_DWORD *)(a1 + 392) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
      1u,
      3u);
    if ( *(_DWORD *)(a1 + 396) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 336) + 48LL))(
        *(_QWORD *)(a1 + 336),
        2 - (unsigned int)(a2 != 0));
    *(_DWORD *)(a1 + 392) = a2;
  }
}
