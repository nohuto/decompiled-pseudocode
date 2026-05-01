/*
 * XREFs of _lambda_e510b34b5f630f9aeb424769ab376110_::operator() @ 0x1802BCE70
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e510b34b5f630f9aeb424769ab376110___::Run @ 0x1802BE0B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_e510b34b5f630f9aeb424769ab376110___--.c)
 * Callees:
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1800784F0 (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_e510b34b5f630f9aeb424769ab376110_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]

  v2 = *(_QWORD *)(*a1 + 288);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    v5[0] = 0LL;
    v5[1] = *(_QWORD *)a1[1];
    WindowWrapperBase::SetDesiredPosition(*a1, (__int64)v5, 2, 0LL);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x190,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
