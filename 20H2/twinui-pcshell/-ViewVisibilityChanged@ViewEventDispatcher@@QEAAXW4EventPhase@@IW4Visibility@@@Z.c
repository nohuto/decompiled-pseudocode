/*
 * XREFs of ?ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z @ 0x1802AA3E0
 * Callers:
 *     ?OnRequestBeginPresentView@ViewManagerBridge@@UEAAJI_N@Z @ 0x1802C0640 (-OnRequestBeginPresentView@ViewManagerBridge@@UEAAJI_N@Z.c)
 *     ?OnRequestEndPresentView@ViewManagerBridge@@UEAAJI_NW4Direction@Navigation@@W4AnimationType@3@W4AnimationFlags@3@@Z @ 0x1802C07E0 (-OnRequestEndPresentView@ViewManagerBridge@@UEAAJI_NW4Direction@Navigation@@W4AnimationType@3@W4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1802AD408 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::ViewVisibilityChanged(
        RTL_SRWLOCK *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  RTL_SRWLOCK *v8; // rsi
  struct IViewWrapperInternal *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = 0LL;
  v8 = a1 + 35;
  AcquireSRWLockShared(a1 + 35);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  ViewEventDispatcher::_ViewFromViewInstanceId((ViewEventDispatcher *)a1, a3, &v10);
  if ( v8 )
    ReleaseSRWLockShared(v8);
  if ( v10 )
    (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD, _QWORD))(*(_QWORD *)v10 + 816LL))(v10, a2, a4);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
}
