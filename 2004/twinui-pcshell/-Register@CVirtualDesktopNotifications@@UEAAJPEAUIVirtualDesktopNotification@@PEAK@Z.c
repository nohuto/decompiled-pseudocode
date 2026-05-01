/*
 * XREFs of ?Register@CVirtualDesktopNotifications@@UEAAJPEAUIVirtualDesktopNotification@@PEAK@Z @ 0x180433770
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopNotifications::Register(
        CVirtualDesktopNotifications *this,
        struct IVirtualDesktopNotification *a2,
        unsigned int *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 7) + 24LL))(*((_QWORD *)this + 7), &SRWLock);
  v6 = (*(__int64 (__fastcall **)(CVirtualDesktopNotifications *, struct IVirtualDesktopNotification *, unsigned int *))(*(_QWORD *)this + 40LL))(
         this,
         a2,
         a3);
  v7 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v6);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v7;
}
