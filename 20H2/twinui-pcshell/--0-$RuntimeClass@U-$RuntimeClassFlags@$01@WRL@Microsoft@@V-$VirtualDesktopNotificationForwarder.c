/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@@WRL@Microsoft@@QEAA@XZ @ 0x1804329FC
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualDesktopNotificationsDerived@@V1@AEAKAEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopNotificationsDerived@@AEAKAEAPEAUIVirtualDesktopLock@@@Z @ 0x18043209C (--$MakeAndInitialize@VCVirtualDesktopNotificationsDerived@@V1@AEAKAEAPEAUIVirtualDesktopLock@@@D.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180030DD4 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$ChainInterfaces@UIVirtualDesktopNotificationServicePrivate@@UIVirtualDesktopNotificationService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@QEAA@XZ @ 0x1804329D0 (--0-$ChainInterfaces@UIVirtualDesktopNotificationServicePrivate@@UIVirtualDesktopNotificationSer.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>(
        __int64 a1)
{
  Microsoft::WRL::ChainInterfaces<IVirtualDesktopNotificationServicePrivate,IVirtualDesktopNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::ChainInterfaces<IVirtualDesktopNotificationServicePrivate,IVirtualDesktopNotificationService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>((IApplicationViewChangeListener *)a1);
  *(_QWORD *)(a1 + 8) = &Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(a1 + 16));
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 96) = 1;
  *(_QWORD *)a1 = &VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::`vftable';
  *(_QWORD *)(a1 + 8) = &VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IVirtualDesktopNotification2,IVirtualDesktopNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *(_QWORD *)(a1 + 16) = &CopyToViewValueSetBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>::`vftable';
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IVirtualDesktopNotification2,IVirtualDesktopNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *(_QWORD *)(a1 + 16) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_DWORD *)(a1 + 116) = 1;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
