/*
 * XREFs of ?put_FrameStyle@WindowWrapperBase@@UEAAJI@Z @ 0x1802BFD90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::put_FrameStyle(WindowWrapperBase *this, int a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 200LL))(*((_QWORD *)this + 35), &SRWLock);
  *((_DWORD *)this + 118) = a2;
  *((_BYTE *)this + 476) = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
