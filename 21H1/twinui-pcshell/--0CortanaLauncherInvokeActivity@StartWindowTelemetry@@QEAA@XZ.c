/*
 * XREFs of ??0CortanaLauncherInvokeActivity@StartWindowTelemetry@@QEAA@XZ @ 0x180309808
 * Callers:
 *     ??0XamlLauncherState@@QEAA@XZ @ 0x1803099D0 (--0XamlLauncherState@@QEAA@XZ.c)
 *     ?BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18031203C (-BeginCortanaTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800173F4 (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_1800173F4.c)
 */

StartWindowTelemetry::CortanaLauncherInvokeActivity *__fastcall StartWindowTelemetry::CortanaLauncherInvokeActivity::CortanaLauncherInvokeActivity(
        StartWindowTelemetry::CortanaLauncherInvokeActivity *this)
{
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"CortanaLauncherInvokeActivity");
  *(_QWORD *)this = &StartWindowTelemetry::CortanaLauncherInvokeActivity::`vftable';
  return this;
}
