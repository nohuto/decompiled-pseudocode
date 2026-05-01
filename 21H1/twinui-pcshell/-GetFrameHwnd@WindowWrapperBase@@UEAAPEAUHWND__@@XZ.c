/*
 * XREFs of ?GetFrameHwnd@WindowWrapperBase@@UEAAPEAUHWND__@@XZ @ 0x180070E60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

HWND __fastcall WindowWrapperBase::GetFrameHwnd(WindowWrapperBase *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 224LL))(*((_QWORD *)this + 34));
  return (HWND)*((_QWORD *)this + 16);
}
