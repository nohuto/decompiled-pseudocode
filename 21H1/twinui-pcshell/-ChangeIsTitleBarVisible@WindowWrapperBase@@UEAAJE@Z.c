/*
 * XREFs of ?ChangeIsTitleBarVisible@WindowWrapperBase@@UEAAJE@Z @ 0x1802BD170
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::ChangeIsTitleBarVisible(WindowWrapperBase *this, char a2)
{
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 200LL))(*((_QWORD *)this + 35), &SRWLock);
  *((_BYTE *)this + 478) = a2 != 0;
  *((_BYTE *)this + 477) = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
