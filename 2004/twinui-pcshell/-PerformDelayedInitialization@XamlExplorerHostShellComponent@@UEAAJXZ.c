/*
 * XREFs of ?PerformDelayedInitialization@XamlExplorerHostShellComponent@@UEAAJXZ @ 0x1802EAF30
 * Callers:
 *     <none>
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180140B30 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UIAppStateChangeNotification@6789@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180247BA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180247BA0.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_426bb45a896c97a0e7f03d36232edfea___ @ 0x1802E884C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_426bb45a896c97a0e7f03d36232edfea___.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802EB298 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@details@wil@@QEAAX_N.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlAltTabWin32@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802EB3B4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlAltTabWin32@@@details@wil@@QEAAX_NW4R.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlExplorerHostShellComponent::PerformDelayedInitialization(
        XamlExplorerHostShellComponent *this,
        __int64 a2)
{
  volatile int *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  char *v6; // r10
  __int64 v7; // rbx
  int v8; // r11d
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  char *v14; // [rsp+20h] [rbp-18h] BYREF
  __int64 v15; // [rsp+28h] [rbp-10h]
  char *v16; // [rsp+48h] [rbp+10h]

  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_TaskViewWarmLaunch>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_TaskViewWarmLaunch>::GetImpl'::`2'::impl,
    a2);
  v6 = (char *)this - 48;
  v7 = (__int64)v6;
  v16 = v6;
  v8 = 0x7FFFFFFF;
  if ( v6 )
  {
    v9 = *((_QWORD *)v6 + 22);
    while ( 1 )
    {
      v4 = (unsigned __int64)v9 >> 63;
      if ( v9 < 0 )
        break;
      if ( (_DWORD)v9 != 0x7FFFFFFF )
      {
        v4 = v9 + 1;
        v10 = v9;
        v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v6 + 22, v9 + 1, v9);
        if ( v10 != v9 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v9 + 16), v3);
LABEL_8:
    v7 = (__int64)v16;
  }
  v14 = v6;
  v15 = v7;
  if ( v7 )
  {
    v11 = *(_QWORD *)(v7 + 176);
    while ( 1 )
    {
      v4 = (unsigned __int64)v11 >> 63;
      if ( v11 < 0 )
        break;
      if ( (_DWORD)v11 != v8 )
      {
        v4 = v11 + 1;
        v12 = v11;
        v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 176), v11 + 1, v11);
        if ( v12 != v11 )
          continue;
      }
      goto LABEL_16;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v11 + 16), v3);
LABEL_16:
    v7 = (__int64)v16;
  }
  Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_426bb45a896c97a0e7f03d36232edfea___(
    v4,
    (__int64)v3,
    v5,
    &v14);
  if ( v15 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::Release(v15);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlAltTabWin32>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XamlAltTabWin32>::GetImpl'::`2'::impl,
    0LL);
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::FamilySafety::AppLimits::IFamilyAppUsageManager,Windows::Internal::FamilySafety::AppLimits::IAppStateChangeNotification,Microsoft::WRL::FtmBase>::Release(v7);
  return 0LL;
}
