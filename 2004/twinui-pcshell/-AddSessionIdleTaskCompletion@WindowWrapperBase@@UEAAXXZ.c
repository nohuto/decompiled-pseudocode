/*
 * XREFs of ?AddSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ @ 0x1802DEB90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::AddSessionIdleTaskCompletion(WindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 216LL))(*((_QWORD *)this + 34));
  *((_DWORD *)this + 43) |= 1u;
  WindowWrapperBase::ReconcileSessionIdleTaskCompletion((WindowWrapperBase *)((char *)this - 16));
}
