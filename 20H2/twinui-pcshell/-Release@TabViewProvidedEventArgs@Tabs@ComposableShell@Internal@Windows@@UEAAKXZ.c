/*
 * XREFs of ?Release@TabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@UEAAKXZ @ 0x180276000
 * Callers:
 *     ?Release@TabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@W7EAAKXZ @ 0x1800F71F0 (-Release@TabViewProvidedEventArgs@Tabs@ComposableShell@Internal@Windows@@W7EAAKXZ.c)
 *     ?Release@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@WBA@EAAKXZ @ 0x1800F7200 (-Release@ViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::ComposableShell::Tabs::IViewTabEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
