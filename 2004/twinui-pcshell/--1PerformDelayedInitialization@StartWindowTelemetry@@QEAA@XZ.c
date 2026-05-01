/*
 * XREFs of ??1PerformDelayedInitialization@StartWindowTelemetry@@QEAA@XZ @ 0x18032B758
 * Callers:
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18032DC90 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 *     _XamlLauncher::PerformDelayedInitialization_::_1_::dtor$0 @ 0x18032DF61 (_XamlLauncher--PerformDelayedInitialization_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18001C644 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 */

void __fastcall StartWindowTelemetry::PerformDelayedInitialization::~PerformDelayedInitialization(
        StartWindowTelemetry::PerformDelayedInitialization *this)
{
  *(_QWORD *)this = &StartWindowTelemetry::PerformDelayedInitialization::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(this);
  wil::ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LauncherTelemetryLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)this);
}
