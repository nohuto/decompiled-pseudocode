/*
 * XREFs of ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x1803312BC
 * Callers:
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18032C224 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ @ 0x18032DA50 (-OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18032DC90 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x180330360 (-s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 * Callees:
 *     PerSessionState::_DoesSessionKeyExist @ 0x180331450 (PerSessionState--_DoesSessionKeyExist.c)
 *     ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x1803314DC (-_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ.c)
 */

char __fastcall PerSessionState::HasLoginCompleted(PerSessionState *this)
{
  char result; // al

  result = byte_1805CF311;
  if ( !byte_1805CF311 )
  {
    result = PerSessionState::_HasDesktopSwitchCompleted(this)
          && !(unsigned __int8)PerSessionState::_DoesSessionKeyExist(L"FSIAInProgress");
    byte_1805CF311 = result;
  }
  return result;
}
