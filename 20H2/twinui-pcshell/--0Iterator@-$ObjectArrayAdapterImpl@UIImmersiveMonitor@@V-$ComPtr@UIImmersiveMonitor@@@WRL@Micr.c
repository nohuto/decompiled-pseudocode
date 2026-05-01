/*
 * XREFs of ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802E86A8
 * Callers:
 *     ?InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x1802EA064 (-InitializeWindows@XamlExplorerHostShellComponent@@AEAAJXZ.c)
 *     ?CreateFrames@XamlAllUpViewHost@@AEAAJXZ @ 0x180300280 (-CreateFrames@XamlAllUpViewHost@@AEAAJXZ.c)
 *     ?GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA?AV?$list@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIImmersiveMonitor@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAUIImmersiveMonitorManager@@@Z @ 0x1803DB480 (-GetSortedConnectedMonitors@UwpPrimaryAppProxy@@AEAA-AV-$list@V-$com_ptr_t@UIImmersiveMonitor@@U.c)
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJXZ @ 0x1804436F4 (-Initialize@VirtualDesktopGestureContext@@QEAAJXZ.c)
 * Callees:
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1802E9A80 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
        __int64 a1,
        __int64 a2,
        int a3)
{
  *(_DWORD *)a1 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject();
  return a1;
}
