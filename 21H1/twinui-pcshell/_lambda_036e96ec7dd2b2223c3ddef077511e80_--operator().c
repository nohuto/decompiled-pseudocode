/*
 * XREFs of _lambda_036e96ec7dd2b2223c3ddef077511e80_::operator() @ 0x18016543C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_036e96ec7dd2b2223c3ddef077511e80___::Run @ 0x180166430 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_036e96ec7dd2b2223c3ddef077511e80___--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_036e96ec7dd2b2223c3ddef077511e80_::operator()(__int64 a1)
{
  int v2; // ebx
  int v3; // eax
  RTL_SRWLOCK *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 16) + 60LL) = *(_DWORD *)(a1 + 24);
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 120LL) + 160LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 120LL),
           *(unsigned int *)(a1 + 24));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x6CA,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
        (const char *)(unsigned int)v3);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 8) + 212LL);
  ReleaseSRWLockExclusive(v4);
}
