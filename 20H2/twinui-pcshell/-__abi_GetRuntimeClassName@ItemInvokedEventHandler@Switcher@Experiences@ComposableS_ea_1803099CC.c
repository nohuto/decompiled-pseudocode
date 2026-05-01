/*
 * XREFs of ?__abi_GetRuntimeClassName@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1803099CC
 * Callers:
 *     ?__abi_GetRuntimeClassName@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800FADC0 (-__abi_GetRuntimeClassName@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsI.c)
 *     ?__abi_GetRuntimeClassName@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800FADD0 (-__abi_GetRuntimeClassName@ItemInvokedEventHandler@Switcher@Experiences@ComposableS_ea_1800FADD0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.ItemInvokedEventHandler",
           0x4Cu,
           a2);
}
