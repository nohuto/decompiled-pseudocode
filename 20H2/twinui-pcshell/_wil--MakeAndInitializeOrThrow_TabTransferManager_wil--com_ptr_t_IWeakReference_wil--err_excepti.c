/*
 * XREFs of _wil::MakeAndInitializeOrThrow_TabTransferManager_wil::com_ptr_t_IWeakReference_wil::err_exception_policy__Windows::Internal::ComposableShell::Tabs::ITabDataModel___&_Windows::Internal::ComposableShell::Tabs::ITabController___&_Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker___&_IUnknown___&_IPrivilegedForegroundOperations___&__::_1_::dtor$0 @ 0x18028C991
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136D20 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall wil::MakeAndInitializeOrThrow_TabTransferManager_wil::com_ptr_t_IWeakReference_wil::err_exception_policy__Windows::Internal::ComposableShell::Tabs::ITabDataModel_____Windows::Internal::ComposableShell::Tabs::ITabController_____Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker_____IUnknown_____IPrivilegedForegroundOperations______::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 64) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>(*(__int64 **)(a2 + 96));
  }
}
