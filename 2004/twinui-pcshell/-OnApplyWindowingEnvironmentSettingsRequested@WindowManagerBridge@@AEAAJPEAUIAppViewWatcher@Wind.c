/*
 * XREFs of ?OnApplyWindowingEnvironmentSettingsRequested@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs@3456@@Z @ 0x1802D7F80
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18002CB98 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@details@wi.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2587636dce7d0c81cc0089f71eb7a061___ @ 0x1802D559C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_2587636dce7d0c81cc0089f71eb7a061.c)
 */

__int64 __fastcall WindowManagerBridge::OnApplyWindowingEnvironmentSettingsRequested(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs *a3)
{
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewApplyWindowingEnvironmentSettingsRequestedEventArgs *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetImpl'::`2'::impl,
    1u);
  *(_QWORD *)&v7 = this;
  *((_QWORD *)&v7 + 1) = &v8;
  CurrentThreadId = GetCurrentThreadId();
  return Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_2587636dce7d0c81cc0089f71eb7a061___(
           v5,
           CurrentThreadId,
           &v7);
}
