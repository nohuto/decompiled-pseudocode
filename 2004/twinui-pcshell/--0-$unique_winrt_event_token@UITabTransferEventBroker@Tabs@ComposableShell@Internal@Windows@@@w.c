/*
 * XREFs of ??0?$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@wil@@QEAA@UEventRegistrationToken@@PEAUITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJ0@Z@Z @ 0x18028D82C
 * Callers:
 *     ??$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@PEAVTabDroppedEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YAJPEAUITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@P823456@EAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@PEAVTabDroppedEventArgs@2345@@Foundation@6@PEAUEventRegistrationToken@@@ZP823456@EAAJU9@@Z1PEAV?$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@1@@Z @ 0x18028D75C (--$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITabTransferEventBroker@Tabs@Compo.c)
 *     ??$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@P834567@EAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@7@PEAUEventRegistrationToken@@@ZP834567@EAAJUEventRegistrationToken@@@ZPEAU897@@details@wil@@YAJPEAUITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@P823456@EAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UShellTabId@2345@@Foundation@6@PEAUEventRegistrationToken@@@ZP823456@EAAJU9@@Z1PEAV?$unique_winrt_event_token@UITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@1@@Z @ 0x18028D7C0 (--$make_unique_winrt_event_token@Uerr_returncode_policy@wil@@UITabTransferEventBrok_ea_18028D7C0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$com_weak_query_failfast@AEAPEAUITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAPEAUITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180285838 (--$com_weak_query_failfast@AEAPEAUITabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@.c)
 */

_QWORD *__fastcall wil::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>::unique_winrt_event_token<Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker>(
        _QWORD *a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        __int64 a4)
{
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  *a1 = a2;
  a1[1] = 0LL;
  a1[2] = a4;
  v5 = wil::com_weak_query_failfast<Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker * &>(&v9, &v10);
  v6 = *v5;
  *v5 = 0LL;
  v7 = a1[1];
  a1[1] = v6;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v9);
  return a1;
}
