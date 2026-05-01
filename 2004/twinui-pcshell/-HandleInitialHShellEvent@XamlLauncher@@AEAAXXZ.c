/*
 * XREFs of ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18032C224
 * Callers:
 *     ?OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z @ 0x18004F9A0 (-OnShellHookMessage@XamlLauncher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800447C8 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800508C4 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180050EC0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ?PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z @ 0x180061048 (-PublishLauncherVisibilityState@XamlLauncher@@AEBAX_N@Z.c)
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x1803312BC (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     ?IsLauncherVisible@PerSessionState@@YA_N_N@Z @ 0x180331360 (-IsLauncherVisible@PerSessionState@@YA_N_N@Z.c)
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
