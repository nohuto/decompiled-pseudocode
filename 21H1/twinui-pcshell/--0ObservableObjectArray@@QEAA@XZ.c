/*
 * XREFs of ??0ObservableObjectArray@@QEAA@XZ @ 0x18036FAB8
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VObservableObjectArray@@UIApplicationViewChangeListener@@UISwitchItemCollection@@@WRL@Microsoft@@QEAA@XZ @ 0x18036F9F4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VObservableObjectArray@@UIApplicationV.c)
 *     ??0VirtualDesktopItemCollection@@QEAA@XZ @ 0x180371588 (--0VirtualDesktopItemCollection@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@UIObservableObjectArrayChanged@@UIObservableObjectArrayChangedBeginEnd@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$ChainInterfaces@UISwitchItemFilteredCollection@@UIObservableObjectArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@QEAA@XZ @ 0x180372748 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VObservableObjectArray@@UIObservableOb.c)
 * Callees:
 *     ??0?$Selector@U?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@U?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00U?$ImplementsMarker@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewIconLoader@@VFtmBase@23@@WRL@Microsoft@@@Details@23@UIWeakReferenceSource@@@234@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180049B44 (--0-$Selector@U-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSour.c)
 *     ??0CGITRegistrationList@@QEAA@XZ @ 0x1804538E0 (--0CGITRegistrationList@@QEAA@XZ.c)
 */

ObservableObjectArray *__fastcall ObservableObjectArray::ObservableObjectArray(ObservableObjectArray *this)
{
  Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoader,Microsoft::WRL::FtmBase>>,IWeakReferenceSource>>::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationViewIconLoader,Microsoft::WRL::FtmBase>>,IWeakReferenceSource>>(this);
  *(_QWORD *)this = &ObservableObjectArray::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  CGITRegistrationList::CGITRegistrationList((ObservableObjectArray *)((char *)this + 48));
  CGITRegistrationList::CGITRegistrationList((ObservableObjectArray *)((char *)this + 96));
  return this;
}
