/*
 * XREFs of ?GetPrimaryMonitorRect@TabTipAdapterPolicy@KeyboardHosting@@CAJAEAUtagRECT@@@Z @ 0x180367D2C
 * Callers:
 *     ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x18036899C (-IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetPrimaryMonitorRect(struct tagRECT *a1)
{
  HMONITOR v2; // rax
  __int64 result; // rax
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a1 = 0LL;
  v2 = MonitorFromWindow(0LL, 1u);
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( GetMonitorInfoW(v2, &mi) )
  {
    result = 0LL;
    *a1 = mi.rcMonitor;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x300,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)0x800705B5LL);
    return 2147943861LL;
  }
  return result;
}
