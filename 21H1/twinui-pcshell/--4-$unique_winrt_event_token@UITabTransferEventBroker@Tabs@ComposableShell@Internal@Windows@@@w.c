/*
 * XREFs of ??4?$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18026BF08
 * Callers:
 *     ??$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@PEAVTabDroppedEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YAJPEAUITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@P823456@EAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@PEAVTabDroppedEventArgs@2345@@Foundation@6@PEAUEventRegistrationToken@@@ZP823456@EAAJU9@@Z1PEAV?$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@1@@Z @ 0x18026BACC (--$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITabTransferEventBroker@Tabs@Compo.c)
 *     ??$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YAJPEAUITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@P823456@EAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@6@PEAUEventRegistrationToken@@@ZP823456@EAAJU9@@Z1PEAV?$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@1@@Z @ 0x18026BB30 (--$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITabTransferEventBrok_ea_18026BB30.c)
 * Callees:
 *     ??$swap_wil@V?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@@wistd@@YAXAEAV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@0@Z @ 0x180263E64 (--$swap_wil@V-$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@wil@@@wistd@@YAXAEAV-$com_p.c)
 *     ?reset@?$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAAXXZ @ 0x180270060 (-reset@-$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows.c)
 */

__int64 *__fastcall wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>::operator=(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  if ( a1 != a2 )
  {
    wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>::reset(a1);
    v4 = *a1;
    *a1 = *a2;
    *a2 = v4;
    wistd::swap_wil<wil::com_ptr_t<IWeakReference,wil::err_failfast_policy>>(a1 + 1, a2 + 1);
    v5 = a1[2];
    a1[2] = a2[2];
    a2[2] = v5;
  }
  return a1;
}
