/*
 * XREFs of ?IsWindowStateStale@TabViewManager@@AEAA_NPEAUHWND__@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x18027158C
 * Callers:
 *     ?OnShellTrackedWindowPosChanged@TabViewManager@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x180273290 (-OnShellTrackedWindowPosChanged@TabViewManager@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagREC.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180192674 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 */

bool __fastcall TabViewManager::IsWindowStateStale(__int64 a1, HWND a2, struct _GUID *a3, int a4)
{
  char v6; // di
  int v7; // r9d
  BOOL v8; // eax
  struct _GUID v11; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-28h] BYREF

  v6 = 1;
  if ( a4 )
  {
    v7 = a4 - 1;
    if ( !v7 )
    {
      v8 = IsZoomed(a2);
      return !v8;
    }
    if ( v7 == 1 )
    {
      v8 = IsIconic(a2);
      return !v8;
    }
  }
  else if ( !IsZoomed(a2) && !IsIconic(a2) )
  {
    Rect = 0LL;
    GetWindowRect(a2, &Rect);
    v11 = *a3;
    return !Platform::Guid::Equals((Platform::Guid *)&Rect, &v11);
  }
  return v6;
}
