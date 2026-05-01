/*
 * XREFs of ?s_LauncherDesktopSwitchEventProc@XamlLauncher@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18030E7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasLoginCompleted@PerSessionState@@YA_NXZ @ 0x18030F70C (-HasLoginCompleted@PerSessionState@@YA_NXZ.c)
 *     ?IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ @ 0x18030F74C (-IsCurrentThreadOnInputDesktop@PerSessionState@@YA_NXZ.c)
 */

void __fastcall XamlLauncher::s_LauncherDesktopSwitchEventProc(
        PerSessionState *hWinEventHook,
        DWORD event,
        HWND hwnd,
        LONG idObject)
{
  PerSessionState *v5; // rcx
  HANDLE EventW; // rax

  if ( event == 32
    && PerSessionState::IsCurrentThreadOnInputDesktop(hWinEventHook)
    && PerSessionState::HasLoginCompleted(v5)
    && XamlLauncher::s_pLauncher )
  {
    if ( !CLauncherLoginEvent::s_hEvent )
    {
      EventW = CreateEventW(0LL, 1, 1, L"ShellLauncherLoginEvent");
      CLauncherLoginEvent::s_hEvent = EventW;
      if ( EventW )
        SetEvent(EventW);
    }
    UnhookWinEvent((HWINEVENTHOOK)hWinEventHook);
  }
}
