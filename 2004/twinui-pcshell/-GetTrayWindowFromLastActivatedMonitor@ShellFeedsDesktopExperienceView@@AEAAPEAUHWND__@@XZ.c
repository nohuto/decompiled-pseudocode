/*
 * XREFs of ?GetTrayWindowFromLastActivatedMonitor@ShellFeedsDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x1800A502C
 * Callers:
 *     ?NotifyTrayOfFlyoutVisibility@ShellFeedsDesktopExperienceView@@AEAAJ_N@Z @ 0x1800A5A58 (-NotifyTrayOfFlyoutVisibility@ShellFeedsDesktopExperienceView@@AEAAJ_N@Z.c)
 *     ?SetClickFlyoutShowing@ShellFeedsDesktopExperienceView@@UEAAX_N@Z @ 0x1800A73B0 (-SetClickFlyoutShowing@ShellFeedsDesktopExperienceView@@UEAAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1801F3D38 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 */

HWND __fastcall ShellFeedsDesktopExperienceView::GetTrayWindowFromLastActivatedMonitor(
        ShellFeedsDesktopExperienceView *this)
{
  float v1; // xmm0_4
  float v2; // xmm1_4
  __int64 v3; // rbx
  LONG v4; // eax
  float v5; // xmm0_4
  LONG v6; // eax
  float v7; // xmm1_4
  TaskbarHelpers *v8; // rax
  HMONITOR v9; // rdx
  RECT rc; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((float *)this + 34);
  v2 = *((float *)this + 35);
  v3 = 0LL;
  v4 = (int)v1;
  v5 = v1 + *((float *)this + 36);
  rc.left = v4;
  v6 = (int)v2;
  v7 = v2 + *((float *)this + 37);
  rc.top = v6;
  rc.right = (int)v5;
  rc.bottom = (int)v7;
  v8 = (TaskbarHelpers *)MonitorFromRect(&rc, 0);
  if ( v8 )
    return TaskbarHelpers::GetTrayWindowForMonitor(v8, v9);
  return (HWND)v3;
}
