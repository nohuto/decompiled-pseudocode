/*
 * XREFs of ?IsWindowStateStale@TabletModePositioner@@AEAA_NPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1803D8414
 * Callers:
 *     ?ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z @ 0x1803DA2A0 (-ShellTrackedWindowPosChanged@TabletModePositioner@@UEAAXPEAUIApplicationView@@HUtagRECT@@K@Z.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180038D30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x18016EB04 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 */

bool __fastcall TabletModePositioner::IsWindowStateStale(
        __int64 a1,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct _GUID *a3,
        int a4)
{
  char v6; // si
  HWND WindowForView; // rax
  HWND v8; // rdi
  int v9; // ebx
  BOOL v10; // eax
  struct _GUID v13; // [rsp+20h] [rbp-48h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-38h] BYREF

  v6 = 1;
  WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(a2, (struct IApplicationView *)a2);
  v8 = WindowForView;
  if ( a4 )
  {
    v9 = a4 - 1;
    if ( !v9 )
    {
      v10 = IsZoomed(WindowForView);
      return !v10;
    }
    if ( v9 == 1 )
    {
      v10 = IsIconic(WindowForView);
      return !v10;
    }
  }
  else if ( !IsZoomed(WindowForView) && !IsIconic(v8) )
  {
    Rect = 0LL;
    GetWindowRect(v8, &Rect);
    v13 = *a3;
    return !Platform::Guid::Equals((Platform::Guid *)&Rect, &v13);
  }
  return v6;
}
