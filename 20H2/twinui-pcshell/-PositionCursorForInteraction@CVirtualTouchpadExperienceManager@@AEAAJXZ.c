/*
 * XREFs of ?PositionCursorForInteraction@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801E47B8
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1801E5350 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180139AC4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

signed int __fastcall CVirtualTouchpadExperienceManager::PositionCursorForInteraction(
        CVirtualTouchpadExperienceManager *this)
{
  POINT v2; // rcx
  const char *v3; // r9
  __int64 v4; // rdx
  HMONITOR v6; // rcx
  __int64 v7; // rdx
  wil::details *v8; // rcx
  __int64 v9; // r8
  const char *v10; // r9
  LPARAM dwData[2]; // [rsp+20h] [rbp-40h] BYREF
  struct tagMONITORINFO mi; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v2 = (POINT)*((_QWORD *)this + 40);
  *(_OWORD *)dwData = 0LL;
  dwData[0] = (LPARAM)MonitorFromPoint(v2, 2u);
  if ( dwData[0] == -1 )
  {
    v4 = 497LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v4,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v3);
  }
  EnumDisplayMonitors(
    0LL,
    0LL,
    (MONITORENUMPROC)lambda_f1e785658634c390da977b3f3dacc9c6_::_lambda_invoker_cdecl_,
    (LPARAM)dwData);
  v6 = (HMONITOR)dwData[1];
  mi.cbSize = 40;
  mi.rcMonitor = 0LL;
  if ( !dwData[1] )
    v6 = (HMONITOR)dwData[0];
  dwData[1] = (LPARAM)v6;
  memset(&mi.rcWork, 0, 20);
  if ( !GetMonitorInfoW(v6, &mi) )
  {
    v4 = 521LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v4,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v3);
  }
  if ( (*((unsigned int (__fastcall **)(_QWORD, _QWORD))this + 97))(
         (unsigned int)(mi.rcMonitor.left + (mi.rcMonitor.right - mi.rcMonitor.left) / 2),
         (unsigned int)(mi.rcMonitor.top + (mi.rcMonitor.bottom - mi.rcMonitor.top) / 2)) )
  {
    return 0;
  }
  else
  {
    return wil::details::GetLastErrorFailHr(v8, v7, v9, v10);
  }
}
