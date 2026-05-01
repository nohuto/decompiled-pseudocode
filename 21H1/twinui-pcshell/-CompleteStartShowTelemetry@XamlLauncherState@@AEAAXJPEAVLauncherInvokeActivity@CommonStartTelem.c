/*
 * XREFs of ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18004EFCC
 * Callers:
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x180082A40 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180087760 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x180312610 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180313C90 (-OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience.c)
 *     ?OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ @ 0x1803141F8 (-OnSessionBecameIdle@XamlLauncherState@@QEAAJXZ.c)
 *     ?OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x180314400 (-OnStartDestroyed@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x18031469C (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 *     ?OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@H@Z @ 0x180314820 (-OnStartLaunchResult@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Intern.c)
 *     ?TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ @ 0x1803158D8 (-TryToCompleteStartShowWithoutCortana@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z @ 0x18004F058 (-LauncherOpened@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXIIW4Mode@LauncherTelemetry@@@Z.c)
 *     ?CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z @ 0x180052060 (-CancelStartTelemetryTimeout@XamlLauncherState@@AEAAX_N@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008CE60 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1FocusHoldingTank@@QEAA@XZ @ 0x180316400 (--1FocusHoldingTank@@QEAA@XZ.c)
 */

void __fastcall XamlLauncherState::CompleteStartShowTelemetry(
        XamlLauncherState *this,
        int a2,
        struct CommonStartTelemetry::LauncherInvokeActivity *a3)
{
  FocusHoldingTank *v3; // rdi

  v3 = (FocusHoldingTank *)*((_QWORD *)this + 126);
  *((_QWORD *)this + 126) = 0LL;
  if ( v3 )
  {
    FocusHoldingTank::~FocusHoldingTank(v3);
    operator delete(v3, (const struct std::nothrow_t *)0x18);
  }
  XamlLauncherState::CancelStartTelemetryTimeout(this, a2 < 0);
  CommonStartTelemetry::LauncherInvokeActivity::LauncherOpened(
    a3,
    *((unsigned int *)this + 72),
    *((unsigned int *)this + 73),
    0LL);
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = 0;
  wil::ActivityBase<LauncherTelemetryLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    a3,
    (unsigned int)a2);
}
