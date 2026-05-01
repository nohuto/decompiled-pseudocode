/*
 * XREFs of _lambda_a59ec4bf685348192e83918abe4353ce_::operator() @ 0x18007FBC8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a59ec4bf685348192e83918abe4353ce___::Run @ 0x18007FBA0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_a59ec4bf685348192e83918abe4353ce___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_a59ec4bf685348192e83918abe4353ce_::operator()(_QWORD **a1)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)**a1 + 144LL))(**a1, *a1[1]);
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC1B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v1,
      v3);
    JUMPOUT(0x180132BA2LL);
  }
  return 0LL;
}
