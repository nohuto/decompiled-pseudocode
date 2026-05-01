/*
 * XREFs of ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18032B8B4
 * Callers:
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x18005BE20 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18003B8F8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180053268 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x18005D760 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800600C0 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x18033085C (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     ?IsLauncherVisible@PerSessionState@@YA_N_N@Z @ 0x180330900 (-IsLauncherVisible@PerSessionState@@YA_N_N@Z.c)
 */

void __fastcall XamlLauncher::HandleInitialHShellEvent(XamlLauncher *this, enum _TABLETMODESTATE *a2)
{
  PerSessionState *v3; // rcx
  bool v4; // bl
  bool v5; // dl
  PerSessionState *v6; // rcx
  bool IsLauncherVisible; // bl

  v4 = !TabletModeHelpers::IsTabletMode(this, a2) || IsPPIEdition();
  if ( PerSessionState::HasLoginCompleted(v3) )
  {
    LOBYTE(v6) = !v4;
    IsLauncherVisible = PerSessionState::IsLauncherVisible(v6, v5);
    if ( !IsLauncherVisible )
      return;
    XamlLauncher::PublishLauncherVisibilityState(this, 0);
LABEL_10:
    if ( !IsLauncherVisible )
      return;
    goto LABEL_11;
  }
  if ( v4 )
  {
    IsLauncherVisible = 0;
    goto LABEL_10;
  }
LABEL_11:
  XamlLauncher::ShowStartView((__int64)this + 24, 1u, 4u);
}
