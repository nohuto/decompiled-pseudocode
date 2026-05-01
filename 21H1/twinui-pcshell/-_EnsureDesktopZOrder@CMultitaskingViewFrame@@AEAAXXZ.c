/*
 * XREFs of ?_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ @ 0x18037A2E8
 * Callers:
 *     ?CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z @ 0x180378470 (-CreateFrame@CMultitaskingViewFrame@@UEAAJAEBUCRect@Geometry@@W4MultitaskingViewZOrder@@@Z.c)
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x18037ABE0 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1801D01E0 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 */

void __fastcall CMultitaskingViewFrame::_EnsureDesktopZOrder(HWND *this)
{
  TaskbarHelpers *v2; // rax
  HMONITOR v3; // rdx
  HWND TrayWindowForMonitor; // rax
  int v5; // [rsp+50h] [rbp+8h] BYREF

  if ( (unsigned int)GetWindowBand(this[5], &v5) && v5 == 1 && (GetWindowLongW(this[5], -20) & 8) != 0 )
  {
    v2 = (TaskbarHelpers *)MonitorFromWindow(this[5], 2u);
    TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(v2, v3);
    SetWindowPos(this[5], TrayWindowForMonitor, 0, 0, 0, 0, 0x13u);
  }
}
