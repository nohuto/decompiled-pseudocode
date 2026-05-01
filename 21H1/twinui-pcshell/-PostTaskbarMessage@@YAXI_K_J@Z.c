/*
 * XREFs of ?PostTaskbarMessage@@YAXI_K_J@Z @ 0x180082C58
 * Callers:
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x180082C34 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PostTaskbarMessage(UINT a1, WPARAM a2, LPARAM a3)
{
  HWND WindowW; // rax

  WindowW = (HWND)qword_18059FCA0;
  if ( !qword_18059FCA0 )
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    qword_18059FCA0 = (__int64)WindowW;
  }
  PostMessageW(WindowW, a1, a2, a3);
}
