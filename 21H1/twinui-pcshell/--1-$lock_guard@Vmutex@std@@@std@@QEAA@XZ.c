/*
 * XREFs of ??1?$lock_guard@Vmutex@std@@@std@@QEAA@XZ @ 0x1802CE674
 * Callers:
 *     __lambda_d1cc878f49256a12ed651bb70f914db7_::operator()_::_1_::dtor$2 @ 0x1802CED13 (__lambda_d1cc878f49256a12ed651bb70f914db7_--operator()_--_1_--dtor$2.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_1_::dtor$1 @ 0x1802CF267 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_1_--dtor$1.c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::[Windows::UI::Xaml::IApplicationOverrides]::OnLaunched_::_1_::dtor$12 @ 0x1802CFF26 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--[Windows--UI--Xaml_ea_1802CFF26.c)
 *     _Concurrency::details::_Task_impl_unsigned_char_::_CancelAndRunContinuations_::_1_::dtor$0 @ 0x180304DBD (_Concurrency--details--_Task_impl_unsigned_char_--_CancelAndRunContinuations_--_1_--dtor$0.c)
 *     _Concurrency::details::_Task_impl_bool_::_CancelAndRunContinuations_::_1_::dtor$0 @ 0x180304F9D (_Concurrency--details--_Task_impl_bool_--_CancelAndRunContinuations_--_1_--dtor$0.c)
 *     _Concurrency::details::_CancellationTokenState::_DeregisterCallback_::_1_::dtor$0 @ 0x180305D38 (_Concurrency--details--_CancellationTokenState--_DeregisterCallback_--_1_--dtor$0.c)
 *     _Concurrency::details::_CancellationTokenState::_RegisterCallback_::_1_::dtor$0 @ 0x180306356 (_Concurrency--details--_CancellationTokenState--_RegisterCallback_--_1_--dtor$0.c)
 *     _Concurrency::details::_Task_impl_bool_::_SetUnwrappedAsyncOp_::_1_::dtor$1 @ 0x180306CD2 (_Concurrency--details--_Task_impl_bool_--_SetUnwrappedAsyncOp_--_1_--dtor$1.c)
 *     ?invoke@?$_PPLTaskHandle@EU?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@U_ContinuationTaskHandleBase@details@3@@details@Concurrency@@UEBAXXZ @ 0x1803073F0 (-invoke@-$_PPLTaskHandle@EU-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency.c)
 * Callees:
 *     <none>
 */

void __fastcall std::lock_guard<std::mutex>::~lock_guard<std::mutex>(_Mtx_t *a1)
{
  int v1; // eax

  v1 = _Mtx_unlock(*a1);
  if ( v1 )
    std::_Throw_C_error(v1);
}
