/*
 * XREFs of ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UIVoiceAssistantPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIInputHostLayoutChanges@@UIAppSwitcherNotification@@UIApplicationViewChangeListener@@UIWindowManagementShowMoveSizeEvents@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18013C484
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableObjectArray@@UIObservableObjectArrayChanged@@UIObservableObjectArrayChangedBeginEnd@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@U?$ChainInterfaces@UISwitchItemFilteredCollection@@UIObservableObjectArray@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013BDD0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableObjectA.c)
 *     ??$MakeAndInitialize@VSwitchItemFilteredCollection@@V1@AEAPEAUIObservableObjectArray@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemFilteredCollection@@AEAPEAUIObservableObjectArray@@@Z @ 0x180372588 (--$MakeAndInitialize@VSwitchItemFilteredCollection@@V1@AEAPEAUIObservableObjectArray@@@Details@W.c)
 *     ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___::Run @ 0x180373510 (ObservablePropertyCallback__lambda_f388ba99653cfb86d5d2a92c071f58bb___--Run.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::ChainInterfaces<IVoiceAssistantPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IInputHostLayoutChanges,IAppSwitcherNotification,IApplicationViewChangeListener,IWindowManagementShowMoveSizeEvents,IPrivilegedOperationsConsumer>::InternalAddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 180), a2);
}
