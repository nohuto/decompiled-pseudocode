/*
 * XREFs of ?Destroy@TabShellHotKeyHandler@@UEAAXXZ @ 0x1802923D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabShellHotKeyHandler::Destroy(TabShellHotKeyHandler *this)
{
  if ( *((_DWORD *)this + 18) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
    *((_DWORD *)this + 18) = 0;
  }
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 5);
}
