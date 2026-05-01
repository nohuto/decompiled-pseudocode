/*
 * XREFs of ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x18030F70C
 * Callers:
 *     ?HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ @ 0x18030A684 (-HandleInitialHShellEvent@XamlLauncher@@AEAAXXZ.c)
 *     ?OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ @ 0x18030BEB0 (-OnFirstSignAnimationFinished@XamlLauncher@@UEAAJXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18030C0F0 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18030E7B0 (-s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z.c)
 * Callees:
 *     PerSessionState::_DoesSessionKeyExist @ 0x18030F8A0 (PerSessionState--_DoesSessionKeyExist.c)
 *     ?_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ @ 0x18030F92C (-_HasDesktopSwitchCompleted@PerSessionState@@YA_NXZ.c)
 */

char __fastcall PerSessionState::HasLoginCompleted(PerSessionState *this)
{
  char result; // al

  result = byte_1805A1EC0;
  if ( !byte_1805A1EC0 )
  {
    result = PerSessionState::_HasDesktopSwitchCompleted(this)
          && !(unsigned __int8)PerSessionState::_DoesSessionKeyExist(L"FSIAInProgress");
    byte_1805A1EC0 = result;
  }
  return result;
}
