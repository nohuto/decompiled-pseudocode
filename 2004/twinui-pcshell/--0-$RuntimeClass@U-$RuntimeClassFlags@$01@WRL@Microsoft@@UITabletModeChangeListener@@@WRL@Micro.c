/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UITabletModeChangeListener@@@WRL@Microsoft@@QEAA@XZ @ 0x18038DC8C
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopTabletModeNotificationListener@@V1@AEAPEAUIVirtualDesktopTabletModePolicy@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopTabletModeNotificationListener@@AEAPEAUIVirtualDesktopTabletModePolicy@@AEAPEAUIServiceProvider@@@Z @ 0x18043EE64 (--$MakeAndInitialize@VVirtualDesktopTabletModeNotificationListener@@V1@AEAPEAUIVirtualDesktopTab.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArrayChanged@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18037D960 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArray.c)
 */

IApplicationViewChangeListener *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeChangeListener>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeChangeListener>(
        IApplicationViewChangeListener *a1)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>(a1);
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModeChangeListener>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
