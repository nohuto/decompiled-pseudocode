/*
 * XREFs of ??1VirtualDesktopDestroyedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180439934
 * Callers:
 *     ?RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x18043B130 (-RemoveDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     _CVirtualDesktopManager::RemoveDesktopInternal_::_1_::dtor$0 @ 0x18043B4DC (_CVirtualDesktopManager--RemoveDesktopInternal_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801AA200 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::~VirtualDesktopDestroyedActivity(
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity *this)
{
  *(_QWORD *)this = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopDestroyedActivity::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
