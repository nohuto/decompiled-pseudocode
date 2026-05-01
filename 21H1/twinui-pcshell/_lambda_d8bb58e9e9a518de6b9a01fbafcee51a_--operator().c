/*
 * XREFs of _lambda_d8bb58e9e9a518de6b9a01fbafcee51a_::operator() @ 0x18007D0A8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0f216ebe62fdea2b17000fe9bc0891d7___::Run @ 0x18007D020 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0f216ebe62fdea2b17000fe9bc0891d7___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_d8bb58e9e9a518de6b9a01fbafcee51a_::operator()(_QWORD *a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*a1 + 120LL) + 80LL))(
         *(_QWORD *)(*a1 + 120LL),
         *a1 + 152LL);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x62A,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v2);
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 224LL))(*a1);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
}
