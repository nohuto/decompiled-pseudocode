/*
 * XREFs of ?_Log_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180196A8C
 * Callers:
 *     ?IsDeviceDomainJoined@@YA_NXZ @ 0x1800971BC (-IsDeviceDomainJoined@@YA_NXZ.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x18036955C (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z @ 0x180369BDC (-SaveGlobalPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@@Z.c)
 *     ?RuntimeClassInitialize@VirtualDesktopRegistryHelpers@@QEAAJXZ @ 0x180434D84 (-RuntimeClassInitialize@VirtualDesktopRegistryHelpers@@QEAAJXZ.c)
 *     ?TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x180470C6C (-TryGetStagedPackagePathByFullNameAlloc@Common@ShellMRTHelper@@YA-AV-$unique_any_t@V-$unique_sto.c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x180141420 (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Win32((__int64)this, a2, a3, (__int64)a4, v4, retaddr, 2, (int)a4);
}
