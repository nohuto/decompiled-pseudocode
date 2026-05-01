/*
 * XREFs of _lambda_33d56a62405731145c09712eedc53a5b_::operator() @ 0x18004D6C8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_33d56a62405731145c09712eedc53a5b___::Run @ 0x18004D6A0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_33d56a62405731145c09712eedc53a5b___--.c)
 * Callees:
 *     ??$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18004DDD4 (--$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_33d56a62405731145c09712eedc53a5b_::operator()(_DWORD **a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  int v4; // edx
  _QWORD *v5; // rdx
  __int64 v6; // rbx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp+10h]

  v2 = *((_QWORD *)*a1 + 36);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    v4 = *a1[1];
    if ( v4 != (*a1)[68] )
    {
      (*a1)[68] = v4;
      v5 = *a1;
      v6 = (__int64)(*a1 + 68);
      v9 = (*(__int64 (__fastcall **)(_QWORD *))(v5[2] + 288LL))(v5 + 2);
      ViewManagerInteropTraceLogging::CommitActivationTimeoutPolicy<unsigned int,enum Windows::Internal::Shell::ViewManagerInterop::ActivationTimeoutPolicy &>(
        &v9,
        v6);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x97F,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
