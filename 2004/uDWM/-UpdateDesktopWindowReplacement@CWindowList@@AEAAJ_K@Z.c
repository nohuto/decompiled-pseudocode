/*
 * XREFs of ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x18002BFA4
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D264 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001DE40 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800299D0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x1800515A8 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800039DC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18001B3A4 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180029B88 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x18002C03C (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 */

__int64 __fastcall CWindowList::UpdateDesktopWindowReplacement(CWindowList *this, unsigned __int64 a2)
{
  bool v2; // bl
  unsigned int v4; // edi
  HWND ShellWindowForDesktop; // rax
  int SyncedWindowDataByHwnd; // eax
  struct CWindowData *v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  v4 = 0;
  v9 = 0LL;
  ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(this, a2);
  if ( !ShellWindowForDesktop )
    goto LABEL_2;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, ShellWindowForDesktop, &v9);
  v4 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x19CAu);
    return v4;
  }
  if ( !v9 || (*((_BYTE *)v9 + 608) & 1) == 0 || (*((_BYTE *)v9 + 609) & 0x20) == 0 )
LABEL_2:
    v2 = 1;
  CDesktopManager::ShowDesktopWindowReplacement(CDesktopManager::s_pDesktopManagerInstance, v2, a2);
  return v4;
}
