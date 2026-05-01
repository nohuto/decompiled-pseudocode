/*
 * XREFs of ?GetRuntimeClassName@TabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180289B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs::GetRuntimeClassName(
        Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.ComposableShell.Tabs.TabViewProvidedEventArgs", 0x3Eu, a2);
}
