/*
 * XREFs of ?get_AreExperienceViewAndCursorOnTheSameMonitor@CVirtualTouchpadExperienceManager@@UEAAJPEAE@Z @ 0x1801C2DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180020098 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::get_AreExperienceViewAndCursorOnTheSameMonitor(
        CVirtualTouchpadExperienceManager *this,
        bool *a2)
{
  ExperienceManagerUtils *v4; // rcx
  HWND v6; // rax
  const char *v7; // r9
  __int64 v8; // rdx
  HMONITOR v9; // rbx
  HMONITOR v10; // rax
  POINT pt; // [rsp+20h] [rbp-58h]
  POINT v12; // [rsp+28h] [rbp-50h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = (ExperienceManagerUtils *)*((_QWORD *)this + 11);
  if ( !v4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  v6 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
               v4,
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  if ( !GetWindowPlacement(v6, &wndpl) )
  {
    v8 = 657LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v7);
  }
  pt = *(POINT *)&wndpl.rcNormalPosition.left;
  if ( !(*((unsigned int (__fastcall **)(POINT *))this + 99))(&v12) )
  {
    v8 = 661LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v7);
  }
  v9 = MonitorFromPoint(pt, 2u);
  if ( v9 == (HMONITOR)-1LL )
  {
    v8 = 664LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v7);
  }
  v10 = MonitorFromPoint(v12, 2u);
  if ( v10 == (HMONITOR)-1LL )
  {
    v8 = 667LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v7);
  }
  *a2 = v10 == v9;
  return 0LL;
}
