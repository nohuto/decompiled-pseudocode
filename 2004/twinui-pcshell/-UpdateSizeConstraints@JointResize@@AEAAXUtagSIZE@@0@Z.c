/*
 * XREFs of ?UpdateSizeConstraints@JointResize@@AEAAXUtagSIZE@@0@Z @ 0x18041F0B4
 * Callers:
 *     ?OnSizeConstraintsQueried@JointResize@@UEAAXPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180089960 (-OnSizeConstraintsQueried@JointResize@@UEAAXPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 *     _lambda_f8a4012ea914e544f53ba03328832034_::operator() @ 0x18041CE30 (_lambda_f8a4012ea914e544f53ba03328832034_--operator().c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039250 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall JointResize::UpdateSizeConstraints(JointResize *this, struct tagSIZE a2, struct tagSIZE a3)
{
  struct tagSIZE v4; // rbx
  __int64 v6; // rcx
  int v7; // eax
  struct IApplicationView *v8; // rdx
  HWND WindowForView; // rax
  struct tagSIZE v10; // [rsp+30h] [rbp-30h]
  __int128 v11; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v4 = a2;
  v10 = a2;
  if ( *((_QWORD *)this + 29) )
  {
    v6 = *((_QWORD *)this + 25);
    v11 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 128LL))(v6, &v11);
    if ( v7 >= 0 )
    {
      WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(
                              *((__int64 (__fastcall ****)(ApplicationViewHelpers *, GUID *, __int64 *))this + 25),
                              v8);
      if ( WindowForView )
      {
        Rect = 0LL;
        if ( GetWindowRect(WindowForView, &Rect) )
        {
          v10.cx += Rect.left + DWORD2(v11) - Rect.right - v11;
          v4 = v10;
        }
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2E2,
        (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
        (const char *)(unsigned int)v7);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, struct tagSIZE, struct tagSIZE))(**((_QWORD **)this + 19) + 88LL))(
      *((_QWORD *)this + 19),
      *((_QWORD *)this + 29),
      v4,
      a3);
  }
}
