/*
 * XREFs of ?_HandleForegroundWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@@Z @ 0x1802AC0B8
 * Callers:
 *     ?HandleFrameWindowChange@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@@Z @ 0x1802A4144 (-HandleFrameWindowChange@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z @ 0x1802A49C0 (-OnShellHookMessage@ViewEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180015480 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_ViewFromFrameOrWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@PEAPEAUIViewWrapperInternal@@@Z @ 0x1802ADAE8 (-_ViewFromFrameOrWindow@ViewEventDispatcher@@AEAAJPEAUHWND__@@PEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_HandleForegroundWindow(
        struct IViewWrapperInternal **this,
        struct IViewWrapperInternal *a2)
{
  struct IViewWrapperInternal *v4; // r8
  struct IViewWrapperInternal *v5; // rcx
  struct IViewWrapperInternal *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( (unsigned int)IsShellManagedWindow(a2) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
    ViewEventDispatcher::_ViewFromFrameOrWindow((ViewEventDispatcher *)this, (HWND)a2, &v7);
  }
  v4 = this[38];
  v5 = v7;
  if ( v4 != v7 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(*(_QWORD *)v4 + 872LL))(this[38], 0LL);
      v5 = v7;
    }
    if ( v5 )
      (*(void (__fastcall **)(struct IViewWrapperInternal *, __int64))(*(_QWORD *)v5 + 872LL))(v5, 1LL);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 38, (__int64 *)&v7);
  this[37] = a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return 0LL;
}
