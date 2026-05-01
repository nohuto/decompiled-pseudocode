/*
 * XREFs of ?SetPresenterSettings@WindowingEnvironmentConfig@@UEAAJW4PresenterTypeMask@@@Z @ 0x1802E75E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f0b1b99dcc903d2d785b069c594158c6___ @ 0x1802E5630 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f0b1b99dcc903d2d785b069c594158c6.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::SetPresenterSettings(__int64 a1, int a2)
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
        91LL,
        (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x8000FFFFLL);
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 48) + 48LL))(*(_QWORD *)(a1 + 48), &SRWLock);
    if ( v11 != *(_DWORD *)(a1 + 64) )
    {
      *(_QWORD *)v8 = a1 - 32;
      *(_QWORD *)&v8[2] = &v11;
      CurrentThreadId = GetCurrentThreadId();
      v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f0b1b99dcc903d2d785b069c594158c6___(
             v5,
             CurrentThreadId,
             (__int128 *)v8);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          145LL,
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
                           (void *)0x96,
                           (__int64)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v3);
  }
  return result;
}
