/*
 * XREFs of ?UpdateScreenEdges@CoverWindowAcc@@UEAAXXZ @ 0x1803F8B00
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CoverWindowAcc::UpdateScreenEdges(HWND *this)
{
  HMONITOR v2; // rax
  HWND v3; // rcx
  HWND v4; // rcx
  HWND v5; // rcx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-40h] BYREF
  LONG left; // [rsp+48h] [rbp-18h] BYREF
  LONG top; // [rsp+4Ch] [rbp-14h]
  LONG right; // [rsp+50h] [rbp-10h]
  LONG bottom; // [rsp+54h] [rbp-Ch]

  v2 = MonitorFromWindow(this[9], 0);
  if ( v2 )
  {
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( GetMonitorInfoW(v2, &mi) )
    {
      v3 = this[3];
      top = mi.rcMonitor.top;
      left = mi.rcMonitor.left;
      right = mi.rcMonitor.left + 1;
      bottom = mi.rcMonitor.bottom;
      (*(void (__fastcall **)(HWND, LONG *))(*(_QWORD *)v3 + 40LL))(v3, &left);
      v4 = this[4];
      left = mi.rcMonitor.left;
      right = mi.rcMonitor.right;
      bottom = mi.rcMonitor.top + 1;
      top = mi.rcMonitor.top;
      (*(void (__fastcall **)(HWND, LONG *))(*(_QWORD *)v4 + 40LL))(v4, &left);
      v5 = this[5];
      right = mi.rcMonitor.right;
      left = mi.rcMonitor.right - 1;
      top = mi.rcMonitor.top;
      bottom = mi.rcMonitor.bottom;
      (*(void (__fastcall **)(HWND, LONG *))(*(_QWORD *)v5 + 40LL))(v5, &left);
    }
  }
}
