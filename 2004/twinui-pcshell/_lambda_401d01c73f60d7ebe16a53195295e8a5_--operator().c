/*
 * XREFs of _lambda_401d01c73f60d7ebe16a53195295e8a5_::operator() @ 0x180078AA8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_401d01c73f60d7ebe16a53195295e8a5___::Run @ 0x180078A80 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_401d01c73f60d7ebe16a53195295e8a5___--.c)
 * Callees:
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180078C80 (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_401d01c73f60d7ebe16a53195295e8a5_::operator()(__int64 a1)
{
  int *v2; // rdx
  int v3; // eax
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  float v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]

  v2 = **(int ***)a1;
  v7[0] = (float)*v2;
  v7[1] = (float)v2[1];
  v7[2] = (float)(v2[2] - *v2);
  v3 = v2[3] - v2[1];
  v7[3] = (float)v3;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 288LL);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 200LL))(v4);
    WindowWrapperBase::SetDesiredPosition(*(_QWORD *)(a1 + 8), v7, 3LL);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xE1,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
