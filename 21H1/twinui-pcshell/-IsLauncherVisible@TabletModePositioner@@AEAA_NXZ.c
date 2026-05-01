/*
 * XREFs of ?IsLauncherVisible@TabletModePositioner@@AEAA_NXZ @ 0x1803D81CC
 * Callers:
 *     ?SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUtagRECT@@PEA_N@Z @ 0x1803DE070 (-SwitchToAppHelper@TabletModePositioner@@AEAAJPEAUIApplicationView@@W4SWITCH_TO_APP_FLAGS@@PEAUt.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x1803A4498 (-IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@P.c)
 */

char __fastcall TabletModePositioner::IsLauncherVisible(TabletModePositioner *this, __int64 a2, __int64 a3, bool *a4)
{
  IUnknown *v4; // rcx
  int IsLauncherVisibleOnMonitor; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = (IUnknown *)*((_QWORD *)this + 2);
  v8 = 0;
  IsLauncherVisibleOnMonitor = ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(
                                 v4,
                                 0LL,
                                 (struct IImmersiveLauncher *)&v8,
                                 a4);
  if ( IsLauncherVisibleOnMonitor < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBA9,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)IsLauncherVisibleOnMonitor);
  return v8;
}
