/*
 * XREFs of ?GetRuntimeClassName@TabDroppedEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18028A3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs::GetRuntimeClassName(
        Windows::Internal::ComposableShell::Tabs::TabDroppedEventArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.ComposableShell.Tabs.TabDroppedEventArgs", 0x39u, a2);
}
