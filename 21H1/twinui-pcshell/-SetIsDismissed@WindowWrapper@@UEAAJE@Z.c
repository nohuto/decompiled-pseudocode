/*
 * XREFs of ?SetIsDismissed@WindowWrapper@@UEAAJE@Z @ 0x180073C70
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_85ec94269f77dd59f833da89e7605c9f___ @ 0x180073D1C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_85ec94269f77dd59f833da89e7605c9f.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapper::SetIsDismissed(WindowWrapper *this, char a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v10; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+18h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this - 39) + 200LL))(*((_QWORD *)this - 39), &SRWLock);
  if ( a2 != *((_BYTE *)this + 40) )
  {
    *((_BYTE *)this + 40) = a2;
    if ( *((_QWORD *)this - 38) )
    {
      if ( a2 )
      {
        v10 = (char *)this - 608;
        CurrentThreadId = GetCurrentThreadId();
        v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_85ec94269f77dd59f833da89e7605c9f___(
               v5,
               CurrentThreadId,
               &v10);
        if ( v6 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x4B,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
            (const char *)(unsigned int)v6,
            v8);
          __debugbreak();
          JUMPOUT(0x18010B206LL);
        }
      }
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
