/*
 * XREFs of ??1LauncherInvokeActivity@CommonStartTelemetry@@QEAA@XZ @ 0x180055DF4
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180050EC0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 *     ??4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800556D8 (--4LauncherInvokeActivity@CommonStartTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180055BF0 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x1800831E0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180087E50 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     _XamlLauncherState::ShowStartView_::_1_::dtor$3 @ 0x180102CBF (_XamlLauncherState--ShowStartView_--_1_--dtor$3.c)
 *     _XamlLauncherState::OnStartShown_::_1_::dtor$2 @ 0x180104840 (_XamlLauncherState--OnStartShown_--_1_--dtor$2.c)
 *     ??1XamlLauncherState@@UEAA@XZ @ 0x1803338A0 (--1XamlLauncherState@@UEAA@XZ.c)
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x1803341C0 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     _XamlLauncherState::HideStartAndCortana_::_1_::dtor$1 @ 0x1803343A1 (_XamlLauncherState--HideStartAndCortana_--_1_--dtor$1.c)
 *     ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180335840 (-OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience.c)
 *     _XamlLauncherState::OnCortanaFailedToGetForeground_::_1_::dtor$2 @ 0x180335A33 (_XamlLauncherState--OnCortanaFailedToGetForeground_--_1_--dtor$2.c)
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x180335DA8 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 *     _XamlLauncherState::OnSessionBecameIdle_::_1_::dtor$1 @ 0x180335F89 (_XamlLauncherState--OnSessionBecameIdle_--_1_--dtor$1.c)
 *     ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180335FB0 (-OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x18033624C (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 *     _XamlLauncherState::OnStartFailedToGetForegroundImpl_::_1_::dtor$1 @ 0x1803363B2 (_XamlLauncherState--OnStartFailedToGetForegroundImpl_--_1_--dtor$1.c)
 *     ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x1803363D0 (-OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Intern.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x180337488 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 *     _XamlLauncherState::TryToCompleteStartShowWithoutCortana_::_1_::dtor$0 @ 0x18033756D (_XamlLauncherState--TryToCompleteStartShowWithoutCortana_--_1_--dtor$0.c)
 * Callees:
 *     ?Destroy@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180055EA4 (-Destroy@-$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

void __fastcall CommonStartTelemetry::LauncherInvokeActivity::~LauncherInvokeActivity(
        CommonStartTelemetry::LauncherInvokeActivity *this)
{
  *(_QWORD *)this = &CommonStartTelemetry::LauncherInvokeActivity::`vftable';
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy();
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(this);
}
