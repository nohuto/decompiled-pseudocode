/*
 * XREFs of ?CreateThumbnailFactoryForDesktopBackground@IDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@UE$AAAPE$AAVDesktopBackgroundThumbnailFactory@23456@VRect@Foundation@6@@Z @ 0x1802DF41C
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802DE740 (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1802F3620 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1802CA880 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802CAA3C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice::CreateThumbnailFactoryForDesktopBackground(
        __int64 *a1,
        __int128 *a2)
{
  __int64 v2; // rax
  int v3; // eax
  __int64 v4; // rbx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v2 = *a1;
  v6 = *a2;
  v3 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64 *))(v2 + 56))(a1, &v6, &v7);
  if ( v3 < 0 )
  {
    __abi_WinRTraiseException(v3);
    __debugbreak();
  }
  v4 = __abi_winrt_ptr_ctor(v7);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v4;
}
