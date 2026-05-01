/*
 * XREFs of ?Unregister@CVirtualDesktopNotifications@@UEAAJK@Z @ 0x1804331A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopNotifications::Unregister(CVirtualDesktopNotifications *this, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 7) + 24LL))(*((_QWORD *)this + 7), &SRWLock);
  v4 = (*(__int64 (__fastcall **)(CVirtualDesktopNotifications *, _QWORD))(*(_QWORD *)this + 48LL))(this, a2);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v4);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return v5;
}
