/*
 * XREFs of ?BeginWinRtActivation@WindowWrapperBase@@UEAAXXZ @ 0x180081360
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::BeginWinRtActivation(WindowWrapperBase *this)
{
  RTL_SRWLOCK *v2; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 200LL))(*((_QWORD *)this + 34), &SRWLock);
  v2 = SRWLock;
  *((_BYTE *)this + 564) = 1;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
