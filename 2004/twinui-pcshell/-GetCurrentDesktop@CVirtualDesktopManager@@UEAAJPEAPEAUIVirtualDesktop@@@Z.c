/*
 * XREFs of ?GetCurrentDesktop@CVirtualDesktopManager@@UEAAJPEAPEAUIVirtualDesktop@@@Z @ 0x18007C0B0
 * Callers:
 *     ?GetCurrentDesktop@CVirtualDesktopManager@@WBA@EAAJPEAPEAUIVirtualDesktop@@@Z @ 0x1800FED80 (-GetCurrentDesktop@CVirtualDesktopManager@@WBA@EAAJPEAPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualDesktopManager::GetCurrentDesktop(CVirtualDesktopManager *this, struct IVirtualDesktop **a2)
{
  struct IVirtualDesktop *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 18) + 24LL))(*((_QWORD *)this + 18), &SRWLock);
  v4 = (struct IVirtualDesktop *)*((_QWORD *)this + 19);
  if ( v4 )
  {
    (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v4 + 8LL))(v4);
    v4 = (struct IVirtualDesktop *)*((_QWORD *)this + 19);
  }
  *a2 = v4;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
