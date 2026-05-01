/*
 * XREFs of ?Activate@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJXZ @ 0x18022B440
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116F18 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::Activate(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  HWND Ptr; // rbx
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = this + 27;
  AcquireSRWLockShared(this + 27);
  Ptr = (HWND)this[65].Ptr;
  if ( v1 )
    ReleaseSRWLockShared(v1);
  if ( SetForegroundWindow(Ptr) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1BA,
             (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
             v4);
}
