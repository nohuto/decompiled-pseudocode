/*
 * XREFs of _lambda_a51999ec5485a2ae2fac9775a15bfb06_::operator() @ 0x1800BAA98
 * Callers:
 *     wil::details::ScopeExitFn__lambda_a51999ec5485a2ae2fac9775a15bfb06___::_ScopeExitFn__lambda_a51999ec5485a2ae2fac9775a15bfb06___ @ 0x1800BAA78 (wil--details--ScopeExitFn__lambda_a51999ec5485a2ae2fac9775a15bfb06___--_ScopeExitFn__lambda_a519.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_a51999ec5485a2ae2fac9775a15bfb06_::operator()(_QWORD **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a1)[14] + 40LL))((*a1)[14], *a1[1], *a1[2]);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C6,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
