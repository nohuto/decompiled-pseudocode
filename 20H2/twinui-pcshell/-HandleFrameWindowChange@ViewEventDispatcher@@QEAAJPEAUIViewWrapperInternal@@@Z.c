/*
 * XREFs of ?HandleFrameWindowChange@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@@Z @ 0x1802A3854
 * Callers:
 *     ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0002_0001@@@Z @ 0x1802D0AD0 (-SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1802AB7C8 (-_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z.c)
 */

__int64 __fastcall ViewEventDispatcher::HandleFrameWindowChange(RTL_SRWLOCK *this, struct IViewWrapperInternal *a2)
{
  RTL_SRWLOCK *v4; // rdi
  HWND Ptr; // rbp

  v4 = this + 35;
  AcquireSRWLockExclusive(this + 35);
  Ptr = (HWND)this[37].Ptr;
  if ( Ptr == (HWND)(*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)a2 + 776LL))(a2) )
    ViewEventDispatcher::_HandleForegroundWindow((ViewEventDispatcher *)this, Ptr);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
