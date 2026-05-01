/*
 * XREFs of ?ViewTransitionedFromHolographic@CVirtualDesktopHolographicViewTransitionNotification@@UEAAJPEAUIApplicationView@@@Z @ 0x180429120
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000F6F0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopHolographicViewTransitionNotification::ViewTransitionedFromHolographic(
        CVirtualDesktopHolographicViewTransitionNotification *this,
        struct IApplicationView *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 7) + 32LL))(*((_QWORD *)this + 7), &v8);
  v4 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *))(**((_QWORD **)this + 6) + 320LL))(
         *((_QWORD *)this + 6),
         a2);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopholographicviewtransitionnotification.cpp",
      (const char *)(unsigned int)v4);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v8);
  return v5;
}
