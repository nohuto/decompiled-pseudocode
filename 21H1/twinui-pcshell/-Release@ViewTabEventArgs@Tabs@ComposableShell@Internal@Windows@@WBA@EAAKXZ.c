/*
 * XREFs of ?Release@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@WBA@EAAKXZ @ 0x1800D0F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs::Release(__int64 a1)
{
  return Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs::Release((Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs *)(a1 - 16));
}
