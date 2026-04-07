/*
 * XREFs of ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x180085FAC
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x18003F96C (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18004A1D0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x180085CB8 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x180089360 (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::EnableLivePreviewInputHooks(char a1, char a2, const unsigned __int16 *a3)
{
  HWND v5; // rcx
  unsigned int v6; // edi
  HWND v7; // rcx

  if ( !a1 )
  {
    CIconicBitmapRegistry::OnLivePreviewDismissed(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance
                                                  + 37));
    v5 = (HWND)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 84);
    if ( v5 )
      RemovePropW(v5, aLivepreviewwin);
  }
  v6 = CDesktopManager::EnableInputHooksHelper(a1, a2, a3, (HWND *)CDesktopManager::s_pDesktopManagerInstance + 84);
  if ( a1 )
  {
    v7 = (HWND)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 84);
    if ( v7 )
      SetPropW(v7, aLivepreviewwin, HANDLE_FLAG_INHERIT);
  }
  return v6;
}
