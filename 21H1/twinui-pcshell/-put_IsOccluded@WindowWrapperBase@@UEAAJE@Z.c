/*
 * XREFs of ?put_IsOccluded@WindowWrapperBase@@UEAAJE@Z @ 0x18006B040
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d964be56f5c6f09b29aae486e6ea51e1___ @ 0x1802BB7D4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_d964be56f5c6f09b29aae486e6ea51e1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::put_IsOccluded(WindowWrapperBase *this, char a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  int v7[2]; // [rsp+20h] [rbp-18h] BYREF
  char *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 200LL))(*((_QWORD *)this + 35), &SRWLock);
  if ( (v11 != 0) != *((_BYTE *)this + 177) )
  {
    *(_QWORD *)v7 = (char *)this - 8;
    v8 = &v11;
    CurrentThreadId = GetCurrentThreadId();
    v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_d964be56f5c6f09b29aae486e6ea51e1___(
           v5,
           CurrentThreadId,
           v7);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4DB,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6,
        v7[0]);
    *((_BYTE *)this + 177) = v11 != 0;
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
