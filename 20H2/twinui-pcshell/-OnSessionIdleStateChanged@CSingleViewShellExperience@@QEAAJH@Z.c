/*
 * XREFs of ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x180474834
 * Callers:
 *     SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce___::OnIdleStateChanged @ 0x180476B60 (SessionIdleCallback__lambda_ac7f06c1f321a489bd31a220fb60b5ce___--OnIdleStateChanged.c)
 *     ?RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ @ 0x180476C5C (-RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$SessionIdleState@AEA_N@SingleViewExperienceTelemetry@@SAXAEA_N@Z @ 0x180472AC4 (--$SessionIdleState@AEA_N@SingleViewExperienceTelemetry@@SAXAEA_N@Z.c)
 *     ?DisableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180473E88 (-DisableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@Vie.c)
 *     ?EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x180473F00 (-EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@View.c)
 */

__int64 __fastcall CSingleViewShellExperience::OnSessionIdleStateChanged(CSingleViewShellExperience *this, int a2)
{
  _BYTE *v2; // rdi
  __int64 v5; // r8
  int v6; // eax
  ExperienceManagerUtils *v7; // rdx
  ShellExperienceHelpers::NavigationLevelOverrideHelper *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)this + 53;
  *((_BYTE *)this + 53) = a2 != 0;
  SingleViewExperienceTelemetry::SessionIdleState<bool &>((char *)this + 53);
  if ( *((_QWORD *)this + 3) )
  {
    LOBYTE(v5) = *v2;
    v6 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *, __int64))(**((_QWORD **)this + 11) + 96LL))(
           *((_QWORD *)this + 11),
           this,
           v5);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v6);
    v7 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
    if ( v7 )
    {
      v8 = (CSingleViewShellExperience *)((char *)this + 72);
      if ( a2 )
        ShellExperienceHelpers::NavigationLevelOverrideHelper::EnableOverride(v8, v7);
      else
        ShellExperienceHelpers::NavigationLevelOverrideHelper::DisableOverride(v8, v7);
    }
  }
  return 0LL;
}
