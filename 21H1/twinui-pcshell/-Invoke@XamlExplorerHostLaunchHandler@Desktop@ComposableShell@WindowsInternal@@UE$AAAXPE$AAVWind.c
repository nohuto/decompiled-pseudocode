/*
 * XREFs of ?Invoke@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAXPE$AAVWindow@Xaml@UI@Windows@@PEAUHWND__@@@Z @ 0x1802CC520
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Desktop_XamlExplorerHostLaunchHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@2345@UE$AAAJPE$AAVWindow@Xaml@UI@Windows@@PEAUHWND__@@@Z @ 0x1802CD0F0 (-__abi_WindowsInternal_ComposableShell_Desktop_XamlExplorerHostLaunchHandler___abi_IDelegate____.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::Invoke(__int64 a1)
{
  if ( *(void ***)a1 == &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::`vftable'{for `__abi_IUnknown's `WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_IDelegate'} )
    return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 312) + 8LL))(*(_QWORD *)(a1 + 312));
  else
    return WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_IDelegate::Invoke();
}
