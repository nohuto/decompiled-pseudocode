/*
 * XREFs of ?IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180055A3C
 * Callers:
 *     ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180055710 (-_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicW.c)
 *     ?GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z @ 0x1800559B0 (-GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180055AC4 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall CApplicationManagerUtility::IsValidAndVisibleWindow(CApplicationManagerUtility *hWnd, HWND a2)
{
  char v3; // bl

  if ( hWnd == CApplicationManagerUtility::g_pIAMGlobals[12].Ptr )
    return 1;
  v3 = 0;
  if ( CApplicationManagerUtility::IsValidWindow(hWnd, a2) )
  {
    if ( IsWindowVisible((HWND)hWnd) )
      return 1;
  }
  return v3;
}
