/*
 * XREFs of ??_GShellButtonListEntry@GameControllerRawInputProvider@@QEAAPEAXI@Z @ 0x180040AEC
 * Callers:
 *     ??1?$NtList@UShellButtonListEntry@GameControllerRawInputProvider@@@@QEAA@XZ @ 0x1800409F8 (--1-$NtList@UShellButtonListEntry@GameControllerRawInputProvider@@@@QEAA@XZ.c)
 *     ??1?$unique_ptr@UShellButtonListEntry@GameControllerRawInputProvider@@U?$default_delete@UShellButtonListEntry@GameControllerRawInputProvider@@@std@@@std@@QEAA@XZ @ 0x180040A44 (--1-$unique_ptr@UShellButtonListEntry@GameControllerRawInputProvider@@U-$default_delete@UShellBu.c)
 *     ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x180088B10 (-OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002831C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

GameControllerRawInputProvider::ShellButtonListEntry *__fastcall GameControllerRawInputProvider::ShellButtonListEntry::`scalar deleting destructor'(
        GameControllerRawInputProvider::ShellButtonListEntry *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)this + 2);
  operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
