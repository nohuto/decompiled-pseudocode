/*
 * XREFs of ?get_ClientWindowReadyForPresentation@WindowWrapperBase@@UEAAJPEAE@Z @ 0x1800757D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::get_ClientWindowReadyForPresentation(WindowWrapperBase *this, bool *a2)
{
  bool v4; // al
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 31) + 208LL))(*((_QWORD *)this + 31), &SRWLock);
  v4 = *((_QWORD *)this + 41) && !*((_DWORD *)this + 84);
  *a2 = v4;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
