/*
 * XREFs of ?GetWindowCharacteristicsPartial@TelemetryHelpers@@YAXPEAUHWND__@@AEAUWindowCharacteristics@1@@Z @ 0x18027028C
 * Callers:
 *     ?OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180253298 (-OnUnmetTabRequirementsChanged@TabViewManager@@AEAAXPEAUHWND__@@W4DWM_TAB_WINDOW_REQUIREMENTS@@@.c)
 *     ?GetWindowCharacteristicsWithProcessName@TelemetryHelpers@@YAXPEAUHWND__@@AEAUWindowCharacteristics@1@@Z @ 0x180270364 (-GetWindowCharacteristicsWithProcessName@TelemetryHelpers@@YAXPEAUHWND__@@AEAUWindowCharacterist.c)
 * Callees:
 *     <none>
 */

void __fastcall TelemetryHelpers::GetWindowCharacteristicsPartial(
        HWND hwnd,
        HWND a2,
        struct TelemetryHelpers::WindowCharacteristics *a3)
{
  HMONITOR v5; // rax
  __int64 WindowDpiAwarenessContext; // rax
  int v7; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)a2 = GetWindowLongPtrW(hwnd, -16);
  *((_QWORD *)a2 + 1) = GetWindowLongPtrW(hwnd, -20);
  *((_DWORD *)a2 + 4) = GetDpiForSystem();
  v5 = MonitorFromWindow(hwnd, 2u);
  if ( v5 )
  {
    v7 = 0;
    GetDpiForMonitor(v5, 0LL, a2 + 5, &v7);
  }
  WindowDpiAwarenessContext = GetWindowDpiAwarenessContext(hwnd);
  *((_QWORD *)a2 + 3) = WindowDpiAwarenessContext;
  if ( WindowDpiAwarenessContext )
    *((_DWORD *)a2 + 8) = GetAwarenessFromDpiAwarenessContext(WindowDpiAwarenessContext);
  GetClassNameW(hwnd, (LPWSTR)a2 + 18, 257);
}
