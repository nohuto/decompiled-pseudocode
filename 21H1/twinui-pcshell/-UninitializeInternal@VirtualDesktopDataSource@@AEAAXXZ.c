/*
 * XREFs of ?UninitializeInternal@VirtualDesktopDataSource@@AEAAXXZ @ 0x1803547F8
 * Callers:
 *     wil::details::ScopeExitFn__lambda_2459da577323dd94bc9459a794b2d076___::_ScopeExitFn__lambda_2459da577323dd94bc9459a794b2d076___ @ 0x180353138 (wil--details--ScopeExitFn__lambda_2459da577323dd94bc9459a794b2d076___--_ScopeExitFn__lambda_2459.c)
 *     ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180353E10 (-Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 *     ?Uninitialize@VirtualDesktopDataSource@@UEAAXXZ @ 0x1803547B0 (-Uninitialize@VirtualDesktopDataSource@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x18011D420 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@V?$ComPtr@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@23@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1803526CC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBV-$ComPtr@UIVirtualDesktop@@@WRL@Micros.c)
 */

void __fastcall VirtualDesktopDataSource::UninitializeInternal(VirtualDesktopDataSource *this)
{
  __int64 v2; // rcx
  void *v3; // rdi
  unsigned __int64 v4; // rcx

  SmartCookie::Unregister((VirtualDesktopDataSource *)((char *)this + 128));
  std::_List_node<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<Microsoft::WRL::ComPtr<IVirtualDesktop> const,Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop>>,void *>>>(
    v2,
    *((_QWORD ***)this + 34));
  **((_QWORD **)this + 34) = *((_QWORD *)this + 34);
  *(_QWORD *)(*((_QWORD *)this + 34) + 8LL) = *((_QWORD *)this + 34);
  *((_QWORD *)this + 35) = 0LL;
  v3 = (void *)*((_QWORD *)this + 36);
  v4 = (unsigned __int64)(*((_QWORD *)this + 37) - (_QWORD)v3 + 7LL) >> 3;
  if ( (unsigned __int64)v3 > *((_QWORD *)this + 37) )
    v4 = 0LL;
  if ( v4 )
    memset64(v3, *((_QWORD *)this + 34), v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 15);
}
