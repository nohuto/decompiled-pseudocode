/*
 * XREFs of ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1801D01E0
 * Callers:
 *     ?NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z @ 0x180098844 (-NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z.c)
 *     ?UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ @ 0x18009AA1C (-UpdateFocusOnDismiss@CBaseTrayFlyoutExperienceManager@@AEAAJXZ.c)
 *     ?NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1801D0B60 (-NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z.c)
 *     ?_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ @ 0x18037A2E8 (-_EnsureDesktopZOrder@CMultitaskingViewFrame@@AEAAXXZ.c)
 *     ?NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z @ 0x1803C12C8 (-NotifyTrayOfVisibility@VoiceAssistantPositioner@@AEAAX_N@Z.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJXZ @ 0x180420838 (-Initialize@VirtualDesktopGestureWindow@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

HWND __fastcall TaskbarHelpers::GetTrayWindowForMonitor(TaskbarHelpers *this, HMONITOR a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  v3[1] = this;
  v3[0] = &v4;
  EnumWindows(
    (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_54c83054385b952be3ab173b3a76abf0_>,
    (LPARAM)v3);
  return (HWND)v4;
}
