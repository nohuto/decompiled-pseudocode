/*
 * XREFs of ?RemoveSessionIdleTaskCompletion@WindowWrapperBase@@UEAAXXZ @ 0x1802BDA10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall WindowWrapperBase::RemoveSessionIdleTaskCompletion(WindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 216LL))(*((_QWORD *)this + 34));
  *((_DWORD *)this + 43) &= ~1u;
  WindowWrapperBase::ReconcileSessionIdleTaskCompletion((WindowWrapperBase *)((char *)this - 16));
}
