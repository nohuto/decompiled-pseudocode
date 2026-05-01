/*
 * XREFs of ??1TMChangeHandler@ShellPositionerTelemetry@@QEAA@XZ @ 0x1803D3A08
 * Callers:
 *     _ShellPositionerManager::TabletModeChanged_::_1_::dtor$0 @ 0x1803D6B40 (_ShellPositionerManager--TabletModeChanged_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801AA200 (-Destroy@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 */

void __fastcall ShellPositionerTelemetry::TMChangeHandler::~TMChangeHandler(
        ShellPositionerTelemetry::TMChangeHandler *this)
{
  *(_QWORD *)this = &ShellPositionerTelemetry::TMChangeHandler::`vftable';
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
