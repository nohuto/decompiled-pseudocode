/*
 * XREFs of ?SetState@WindowingEnvironmentConfig@@UEAAJW4ConfigStateMask@@@Z @ 0x1802C6440
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5a7d4befb2b433e9160200ce3b80eee0___ @ 0x1802C4000 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_5a7d4befb2b433e9160200ce3b80eee0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::SetState(__int64 a1, int a2)
{
  const char *v3; // r9
  DWORD CurrentThreadId; // eax
  unsigned int v5; // ecx
  int v6; // eax
  __int64 result; // rax
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  try
  {
    if ( !*(_QWORD *)(a1 + 32) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        45LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x8000FFFFLL);
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 48) + 48LL))(*(_QWORD *)(a1 + 48), &SRWLock);
    if ( v11 != *(_DWORD *)(a1 + 60) )
    {
      *(_QWORD *)v8 = a1 - 32;
      *(_QWORD *)&v8[2] = &v11;
      CurrentThreadId = GetCurrentThreadId();
      v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5a7d4befb2b433e9160200ce3b80eee0___(
             v5,
             CurrentThreadId,
             (__int128 *)v8);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          82LL,
          (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v6);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x57,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v3);
  }
  return result;
}
