/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIViewManagerBridge@@UIMessageProxyListener@@UIMessageListListener@@UIMessageMapListener@@UIShellViewManagerListener@Server@Navigation@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180283FD0
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIViewManagerBridge@@UIMessageProxyListener@@UIMessageListListener@@UIMessageMapListener@@UIShellViewManagerListener@Server@Navigation@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800D1C60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIViewManagerBrid.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIViewManagerBridge@@UIMessageProxyListener@@UIMessageListListener@@UIMessageMapListener@@UIShellViewManagerListener@Server@Navigation@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800D1C70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVi_ea_1800D1C70.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIViewManagerBridge@@UIMessageProxyListener@@UIMessageListListener@@UIMessageMapListener@@UIShellViewManagerListener@Server@Navigation@@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800D1C80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVi_ea_1800D1C80.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIViewManagerBridge@@UIMessageProxyListener@@UIMessageListListener@@UIMessageMapListener@@UIShellViewManagerListener@Server@Navigation@@VFtmBase@23@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800D1C90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVi_ea_1800D1C90.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIViewManagerBridge@@UIMessageProxyListener@@UIMessageListListener@@UIMessageMapListener@@UIShellViewManagerListener@Server@Navigation@@VFtmBase@23@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x1800D1CA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVi_ea_1800D1CA0.c)
 *     ?Attach@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@QEAAXPEAVViewManagerBridge@@@Z @ 0x1802806B8 (-Attach@-$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@QEAAXPEAVViewManagerBridge@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ @ 0x180282770 (-InternalRelease@-$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180091950 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IViewManagerBridge,IMessageProxyListener,IMessageListListener,IMessageMapListener,Navigation::Server::IShellViewManagerListener,Microsoft::WRL::FtmBase>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 76), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 312LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
