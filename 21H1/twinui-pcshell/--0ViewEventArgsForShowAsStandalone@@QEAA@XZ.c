/*
 * XREFs of ??0ViewEventArgsForShowAsStandalone@@QEAA@XZ @ 0x18007CC84
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@PEAUIWindowingEnvironmentSettings@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@$$QEAPEAUIWindowingEnvironmentSettings@4567@@Z @ 0x18007C9C8 (--$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapperInternal@@PEAU7@AEAW4ViewSizePreference@ViewManagement@UI@6@AEAW489UI@6@AEA_KAEAPEAUIAsyncCallback@@PEAUIPropertySet@Collections@Foundation@6@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapperInternal@@1AEAW4ViewSizePreference@ViewManagement@UI@7@2AEA_KAEAPEAUIAsyncCallback@@$$QEAPEAUIPropertySet@Collections@Foundation@7@@Z @ 0x18027CC64 (--$MakeAndInitialize@VViewEventArgsForShowAsStandalone@@UIViewEventArgs@ViewManager_ea_18027CC64.c)
 * Callees:
 *     ??0ViewEventArgsBase@@QEAA@XZ @ 0x18007CD54 (--0ViewEventArgsBase@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

ViewEventArgsForShowAsStandalone *__fastcall ViewEventArgsForShowAsStandalone::ViewEventArgsForShowAsStandalone(
        ViewEventArgsForShowAsStandalone *this)
{
  ViewEventArgsBase::ViewEventArgsBase(this);
  *((_QWORD *)this + 12) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
  *((_QWORD *)this + 1) = &ViewEventArgsForShowAsStandalone::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = &ViewEventArgsForShowAsStandalone::`vftable';
  *((_QWORD *)this + 9) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone'};
  *((_QWORD *)this + 10) = &Microsoft::WRL::RuntimeClass<ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &ViewEventArgsForShowAsStandalone::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs'};
  *((_QWORD *)this + 1) = &ViewEventArgsForShowAsStandalone::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 8) = &ViewEventArgsForShowAsStandalone::`vftable';
  *((_QWORD *)this + 9) = &ViewEventArgsForShowAsStandalone::`vftable'{for `Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone'};
  *((_QWORD *)this + 10) = &ViewEventArgsForShowAsStandalone::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnironmentSettingsArgsForImplicitEvent>'};
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  return this;
}
