/*
 * XREFs of ?__abi_GetRuntimeClassName@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x18030A2A0
 * Callers:
 *     ?__abi_GetRuntimeClassName@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800F97E0 (-__abi_GetRuntimeClassName@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@.c)
 *     ?__abi_GetRuntimeClassName@ItemContextMenuRequestedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800F97F0 (-__abi_GetRuntimeClassName@ItemContextMenuRequestedHandler@Switcher@Experiences@Com_ea_1800F97F0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuRequestedHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.ItemContextMenuRequestedHandler",
           0x54u,
           a2);
}
