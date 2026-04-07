/*
 * XREFs of ?SetCommitHandle@CWindowList@@QEAAJPEAX@Z @ 0x180099778
 * Callers:
 *     ?CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ @ 0x18002C7B4 (-CreateMonitorRenderTargetsLegacy@CDesktopManager@@AEAAJXZ.c)
 *     ?SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z @ 0x1800B07B0 (-SetCompSyncHandle@CTabSwitch@@UEAAXPEAX@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180029550 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007F0F4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CWindowList::SetCommitHandle(void **this, void *a2)
{
  HANDLE *v2; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v5; // rax
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = this + 73;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    this + 73,
    0LL);
  CurrentProcess = GetCurrentProcess();
  v5 = GetCurrentProcess();
  if ( DuplicateHandle(v5, a2, CurrentProcess, v2, 0, 0, 2u) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x7BE,
             (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
             v6);
}
