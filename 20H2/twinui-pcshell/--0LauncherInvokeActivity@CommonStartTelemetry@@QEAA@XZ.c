/*
 * XREFs of ??0LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180083B84
 * Callers:
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180046B20 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ??0XamlLauncherState@@QEAA@XZ @ 0x18032AC00 (--0XamlLauncherState@@QEAA@XZ.c)
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180333760 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180043F7C (--0-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto_ea_180043F7C.c)
 */

CommonStartTelemetry::LauncherInvokeActivity *__fastcall CommonStartTelemetry::LauncherInvokeActivity::LauncherInvokeActivity(
        CommonStartTelemetry::LauncherInvokeActivity *this)
{
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    this,
    (__int64)"LauncherInvokeActivity");
  *(_QWORD *)this = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
  return this;
}
