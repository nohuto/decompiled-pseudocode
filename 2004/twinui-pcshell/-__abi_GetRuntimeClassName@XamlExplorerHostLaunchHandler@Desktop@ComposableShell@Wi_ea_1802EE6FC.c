/*
 * XREFs of ?__abi_GetRuntimeClassName@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1802EE6FC
 * Callers:
 *     ?__abi_GetRuntimeClassName@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800F7E50 (-__abi_GetRuntimeClassName@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal.c)
 *     ?__abi_GetRuntimeClassName@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800F7E60 (-__abi_GetRuntimeClassName@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@Wi_ea_1800F7E60.c)
 *     ?__abi_GetRuntimeClassName@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WCA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800F7E70 (-__abi_GetRuntimeClassName@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@Wi_ea_1800F7E70.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Desktop.XamlExplorerHostLaunchHandler",
           0x45u,
           a2);
}
