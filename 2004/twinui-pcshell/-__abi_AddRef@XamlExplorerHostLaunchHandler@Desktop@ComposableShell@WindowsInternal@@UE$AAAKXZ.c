/*
 * XREFs of ?__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@UE$AAAKXZ @ 0x1802EE5C0
 * Callers:
 *     ?__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@W7E$AAAKXZ @ 0x1800F7D80 (-__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@W7E$AAAKXZ.c)
 *     ?__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAKXZ @ 0x1800F7D90 (-__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBA@E$AAAKX.c)
 *     ?__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBI@E$AAAKXZ @ 0x1800F7DA0 (-__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WBI@E$AAAKX.c)
 *     ?__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WCA@E$AAAKXZ @ 0x1800F7DB0 (-__abi_AddRef@XamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@WCA@E$AAAKX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler::__abi_AddRef(__int64 a1)
{
  return __abi_FTMWeakRefData::Increment(a1 + 40);
}
