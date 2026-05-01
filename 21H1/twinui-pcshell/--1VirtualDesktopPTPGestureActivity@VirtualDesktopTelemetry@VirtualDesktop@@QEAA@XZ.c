/*
 * XREFs of ??1VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x18041ED9C
 * Callers:
 *     ??4VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV012@@Z @ 0x18041EDC8 (--4VirtualDesktopPTPGestureActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAAEAV012@$$QEAV01.c)
 *     ??_GVirtualDesktopGestureHandler@@UEAAPEAXI@Z @ 0x18041F380 (--_GVirtualDesktopGestureHandler@@UEAAPEAXI@Z.c)
 *     ?StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180421530 (-StartSwipe@VirtualDesktopGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 *     _VirtualDesktopGestureHandler::StartSwipe_::_1_::dtor$0 @ 0x18042178D (_VirtualDesktopGestureHandler--StartSwipe_--_1_--dtor$0.c)
 *     _VirtualDesktopGestureHandler::StartSwipe_::_1_::dtor$2 @ 0x1804217A5 (_VirtualDesktopGestureHandler--StartSwipe_--_1_--dtor$2.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180186310 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::~VirtualDesktopPTPGestureActivity(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity *this)
{
  *(_QWORD *)this = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPTPGestureActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
