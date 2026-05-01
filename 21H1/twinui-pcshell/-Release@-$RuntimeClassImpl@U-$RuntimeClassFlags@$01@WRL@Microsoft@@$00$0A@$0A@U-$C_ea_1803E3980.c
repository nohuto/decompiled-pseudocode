/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIVirtualDesktopTabletModePolicy@@UIVirtualDesktopTabletModePolicyService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803E3980
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopWindowMoveManager@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800D98E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopW.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIScreenManager@@UIAppViewCloseOverrideBehavior@@UITabletModePositionerManagerNotification@@UIApplicationViewChangeListener@@UIScreenManagerTestHook@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800D98F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIScreenManager@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIScreenManager@@UIAppViewCloseOverrideBehavior@@UITabletModePositionerManagerNotification@@UIApplicationViewChangeListener@@UIScreenManagerTestHook@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800D9900 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISc_ea_1800D9900.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIScreenManager@@UIAppViewCloseOverrideBehavior@@UITabletModePositionerManagerNotification@@UIApplicationViewChangeListener@@UIScreenManagerTestHook@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800D9910 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISc_ea_1800D9910.c)
 *     ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1803E3650 (-InternalRelease@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180091950 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IVirtualDesktopTabletModePolicy,IVirtualDesktopTabletModePolicyService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r10

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 44), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 48LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
