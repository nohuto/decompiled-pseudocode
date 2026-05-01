/*
 * XREFs of ??1ActivateHoldingTankWindow@StartWindowTelemetry@@QEAA@XZ @ 0x1803374F8
 * Callers:
 *     _FocusHoldingTank::s_WndProc_::_1_::dtor$0 @ 0x180338755 (_FocusHoldingTank--s_WndProc_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180011F3C (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall StartWindowTelemetry::ActivateHoldingTankWindow::~ActivateHoldingTankWindow(
        StartWindowTelemetry::ActivateHoldingTankWindow *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::ActivateHoldingTankWindow::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)this);
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
