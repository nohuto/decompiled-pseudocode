/*
 * XREFs of ?__abi_GetRuntimeClassName@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x1803099E8
 * Callers:
 *     ?__abi_GetRuntimeClassName@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800FADE0 (-__abi_GetRuntimeClassName@LightDismissEventHandler@Switcher@Experiences@ComposableShell@Windows.c)
 *     ?__abi_GetRuntimeClassName@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1800FADF0 (-__abi_GetRuntimeClassName@LightDismissEventHandler@Switcher@Experiences@Composable_ea_1800FADF0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.LightDismissEventHandler",
           0x4Du,
           a2);
}
