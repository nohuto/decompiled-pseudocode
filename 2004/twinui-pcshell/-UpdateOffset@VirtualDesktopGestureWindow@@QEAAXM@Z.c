/*
 * XREFs of ?UpdateOffset@VirtualDesktopGestureWindow@@QEAAXM@Z @ 0x180445B48
 * Callers:
 *     ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x1804458FC (-UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VirtualDesktopGestureWindow::UpdateOffset(VirtualDesktopGestureWindow *this, float a2)
{
  __int64 *v2; // r11
  __int64 v3; // rax
  __int64 (__fastcall *v4)(__int64 *, _DWORD *, _QWORD, _QWORD); // r10
  int v5; // eax
  _DWORD v6[4]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (__int64 *)*((_QWORD *)this + 20);
  v3 = *v2;
  v6[1] = 0;
  v6[3] = 1;
  v4 = *(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD, _QWORD))(v3 + 24);
  v6[0] = (int)(float)((float)(*((_DWORD *)this + 44) - *((_DWORD *)this + 42)) * a2);
  v6[2] = v6[0] + 1;
  v5 = v4(v2, v6, 0LL, 0LL);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x117,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v5);
}
