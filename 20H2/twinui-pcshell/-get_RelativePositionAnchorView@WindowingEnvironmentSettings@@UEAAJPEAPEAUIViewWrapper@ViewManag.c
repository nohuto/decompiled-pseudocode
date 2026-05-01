/*
 * XREFs of ?get_RelativePositionAnchorView@WindowingEnvironmentSettings@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802BA270
 * Callers:
 *     <none>
 * Callees:
 *     ??$copy_to@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180267F70 (--$copy_to@UIShellTab@Tabs@ComposableShell@Internal@Windows@@@-$com_ptr_t@UIShellTab@Tabs@Compos.c)
 */

__int64 __fastcall WindowingEnvironmentSettings::get_RelativePositionAnchorView(
        WindowingEnvironmentSettings *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **a2)
{
  *a2 = 0LL;
  if ( !*((_BYTE *)this + 92) )
    return 2147943568LL;
  wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>::copy_to<Windows::Internal::ComposableShell::Tabs::IShellTab>(
    (__int64 *)this + 13,
    a2);
  return 0LL;
}
