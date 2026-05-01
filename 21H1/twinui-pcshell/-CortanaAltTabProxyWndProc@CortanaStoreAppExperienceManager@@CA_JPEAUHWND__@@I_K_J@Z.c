/*
 * XREFs of ?CortanaAltTabProxyWndProc@CortanaStoreAppExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1801CF390
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z @ 0x1801D1444 (-SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z.c)
 */

LRESULT __fastcall CortanaStoreAppExperienceManager::CortanaAltTabProxyWndProc(
        HWND hWnd,
        UINT a2,
        WPARAM a3,
        LONG_PTR *a4)
{
  int v8; // eax
  HWND WindowLongPtrW; // rax
  HWND LastActivePopup; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == 129 )
  {
    SetWindowLongPtrW(hWnd, 0, *a4);
    v8 = CortanaStoreAppExperienceManager::SetDefaultIconForProxyWindowThumbnail(hWnd);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4E3,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
  }
  else if ( a2 == 6 )
  {
    if ( a3 )
      PostMessageW(hWnd, 0x401u, 0LL, 0LL);
  }
  else if ( a2 == 1025 && GetForegroundWindow() == hWnd )
  {
    WindowLongPtrW = (HWND)GetWindowLongPtrW(hWnd, 0);
    LastActivePopup = GetLastActivePopup(WindowLongPtrW);
    SetForegroundWindow(LastActivePopup);
  }
  return DefWindowProcW(hWnd, a2, a3, (LPARAM)a4);
}
