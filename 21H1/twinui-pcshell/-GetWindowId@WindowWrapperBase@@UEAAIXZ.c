/*
 * XREFs of ?GetWindowId@WindowWrapperBase@@UEAAIXZ @ 0x1800624A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::GetWindowId(WindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 224LL))(*((_QWORD *)this + 34));
  return *((unsigned int *)this + 72);
}
