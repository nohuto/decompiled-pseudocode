/*
 * XREFs of ?GetAdjacentDesktop@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z @ 0x180439990
 * Callers:
 *     ?GetAdjacentDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z @ 0x180100320 (-GetAdjacentDesktop@CVirtualDesktopManager@@WBA@EAAJPEAUIVirtualDesktop@@IPEAPEAU2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopManager::GetAdjacentDesktop(
        CVirtualDesktopManager *this,
        struct IVirtualDesktop *a2,
        unsigned int a3,
        struct IVirtualDesktop **a4)
{
  unsigned int v8; // ebx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 18) + 24LL))(*((_QWORD *)this + 18), &SRWLock);
  v8 = (*(__int64 (__fastcall **)(_QWORD, struct IVirtualDesktop *, _QWORD, GUID *, struct IVirtualDesktop **))(**((_QWORD **)this + 10) + 72LL))(
         *((_QWORD *)this + 10),
         a2,
         a3,
         &GUID_ff72ffdd_be7e_43fc_9c03_ad81681e88e4,
         a4);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v8;
}
