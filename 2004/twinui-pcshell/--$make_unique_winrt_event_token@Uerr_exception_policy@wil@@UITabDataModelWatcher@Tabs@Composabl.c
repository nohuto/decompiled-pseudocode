/*
 * XREFs of ??$make_unique_winrt_event_token@Uerr_exception_policy@wil@@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabHostedAppChangedEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YA?AV?$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@1@PEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVTabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@PEAVTabDataModelTabHostedAppChangedEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@Z1@Z @ 0x18033ADAC
 * Callers:
 *     ?RegisterTabWatcher@AppViewDataSourceAdapter@@AEAAXXZ @ 0x18033FD3C (-RegisterTabWatcher@AppViewDataSourceAdapter@@AEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BKI@AA @ 0x1800FBACC (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BKI@AA.c)
 *     ??0?$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAA@UEventRegistrationToken@@PEAUITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJ0@Z@Z @ 0x18033B108 (--0-$unique_winrt_event_token@UITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@@wil@.c)
 */

__int64 __fastcall wil::details::make_unique_winrt_event_token<wil::err_exception_policy,Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher,long (Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::*)(Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs *> *,EventRegistrationToken *),long (Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::*)(EventRegistrationToken),Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher *,Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs *> *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{168,{flat}}(a2);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher>(
    a1,
    a4,
    a2,
     Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{176,{flat}});
  return a1;
}
