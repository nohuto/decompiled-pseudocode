/*
 * XREFs of ?Cloak@MonitorFrame@@QEAAJ_N@Z @ 0x1802DE498
 * Callers:
 *     ??R_lambda_5e3471c756f87189046196c55c94088a_@@QEBAXXZ @ 0x1802DBB70 (--R_lambda_5e3471c756f87189046196c55c94088a_@@QEBAXXZ.c)
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator() @ 0x1802DC320 (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MonitorFrame::Cloak(MonitorFrame *this, char a2)
{
  __int64 v2; // rcx
  HWND v3; // rax
  HRESULT v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int pvAttribute; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(pvAttribute) = a2;
  v2 = *((_QWORD *)this + 6);
  pvAttribute = 0;
  v3 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL))(v2);
  v4 = DwmSetWindowAttribute(v3, 0xDu, &pvAttribute, 4u);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1D,
    (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\MonitorFrame.h",
    (const char *)(unsigned int)v4);
  return v5;
}
