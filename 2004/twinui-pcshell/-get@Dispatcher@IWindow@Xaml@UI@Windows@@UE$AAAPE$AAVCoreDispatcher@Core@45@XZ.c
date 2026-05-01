/*
 * XREFs of ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x18030E72C
 * Callers:
 *     ?BeginInvokeAnimation@MonitorFrame@@QEAAXXZ @ 0x1802FF734 (-BeginInvokeAnimation@MonitorFrame@@QEAAXXZ.c)
 *     ?DestroyInternal@MonitorFrame@@AEAAXXZ @ 0x180301184 (-DestroyInternal@MonitorFrame@@AEAAXXZ.c)
 *     ?DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z @ 0x180301328 (-DismissAnimated@MonitorFrame@@QEAAXPE$AAUIMonitorFrameDismissAnimationCallback@@@Z.c)
 *     ?MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z @ 0x180311DB0 (-MoveVirtualCursor@XamlAltTabViewHost@@UEAAJPEAUtagPOINT@@@Z.c)
 *     ?Navigate@XamlAltTabViewHost@@UEAAJI@Z @ 0x180311FF0 (-Navigate@XamlAltTabViewHost@@UEAAJI@Z.c)
 *     ?SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ @ 0x1803139E0 (-SwitchToSelectedItemAndDismiss@XamlAltTabViewHost@@UEAAJXZ.c)
 *     ?IsUIThread@@YA_NXZ @ 0x1803207B4 (-IsUIThread@@YA_NXZ.c)
 *     ?UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ @ 0x1803212D8 (-UnregisterForEvents@XamlAltTabViewController@@QE$AAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802EC420 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802EC5DC (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall Windows::UI::Xaml::IWindow::Dispatcher::get(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 88LL))(a1, &v4);
  if ( v1 < 0 )
  {
    __abi_WinRTraiseException(v1);
    __debugbreak();
  }
  v2 = __abi_winrt_ptr_ctor(v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v2;
}
