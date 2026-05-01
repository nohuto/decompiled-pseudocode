/*
 * XREFs of _lambda_dfc07bd0e0e493ac674bd395c585ee89_::operator() @ 0x1802DE06C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_dfc07bd0e0e493ac674bd395c585ee89___::Run @ 0x1802DF330 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_dfc07bd0e0e493ac674bd395c585ee89___--.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_dfc07bd0e0e493ac674bd395c585ee89_::operator()(unsigned int **a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+30h] [rbp+8h]

  v2 = *((_QWORD *)*a1 + 36);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)*a1 + 168LL))(*a1, *a1[1]);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2D3,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
