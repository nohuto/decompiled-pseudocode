/*
 * XREFs of ?OnLauncherHide@XamlLauncher@@UEAAXXZ @ 0x180060650
 * Callers:
 *     <none>
 * Callees:
 *     ?LinkUIATrees@XamlLauncher@@AEAAX_N@Z @ 0x1800602E0 (-LinkUIATrees@XamlLauncher@@AEAAX_N@Z.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x1800606C8 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 */

void __fastcall XamlLauncher::OnLauncherHide(XamlLauncher *this)
{
  XamlLauncher::LinkUIATrees((XamlLauncher *)((char *)this - 72), 0);
  XamlLauncher::PublishLauncherVisibilityState((XamlLauncher *)((char *)this - 72), 0);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 56LL))(*((_QWORD *)this + 8));
}
